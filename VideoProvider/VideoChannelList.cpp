#include "stdafx.h"
#include "VideoChannelList.h"


STDMETHODIMP CVideoChannelList::get_Count(LONG* pVal)
{
	if ( NULL == pVal )
	{
		return E_POINTER;
	}

	CCritSecLock lock( m_cs );

	*pVal = (LONG) m_collection.size();

	return S_OK;
}


STDMETHODIMP CVideoChannelList::get_IsEmpty(VARIANT_BOOL* pVal)
{
	if ( NULL == pVal )
	{
		return E_POINTER;
	}

	CCritSecLock lock( m_cs );

	if ( m_collection.empty() )
	{
		*pVal = VARIANT_TRUE;
	}
	else
	{
		*pVal = VARIANT_FALSE;
	}

	return S_OK;
}


STDMETHODIMP CVideoChannelList::get_IsFull(VARIANT_BOOL* pVal)
{
	if ( NULL == pVal )
	{
		return E_POINTER;
	}

	CCritSecLock lock( m_cs );

	if ( VIDEO_CHANNEL_LIST_MAX_SIZE <= (LONG) m_collection.size() )
	{
		*pVal = VARIANT_TRUE;
	}
	else
	{
		*pVal = VARIANT_FALSE;
	}

	return S_OK;
}


STDMETHODIMP CVideoChannelList::Any(VARIANT_BOOL* out_result)
{
	if ( NULL == out_result )
	{
		return E_POINTER;
	}

	CCritSecLock lock( m_cs );

	if ( ! m_collection.empty() )
	{
		*out_result = VARIANT_TRUE;
	}
	else
	{
		*out_result = VARIANT_FALSE;
	}

	return S_OK;
}


STDMETHODIMP CVideoChannelList::Contains(IVideoChannel* channel, VARIANT_BOOL* out_result)
{
	if ( NULL == out_result )
	{
		return E_POINTER;
	}

	*out_result = VARIANT_FALSE;

	if ( NULL == channel )
	{
		return S_FALSE;
	}

	CComPtr<IVideoChannel> spVideoChannel( channel );

	if ( NULL == spVideoChannel.p )
	{
		return S_FALSE;
	}

	CCritSecLock lock( m_cs );

	for ( auto it = m_collection.begin() ; it != m_collection.end() ; ++ it )
	{
		if ( it->second.p == spVideoChannel.p )
		{
			*out_result = VARIANT_TRUE;

			break;
		}
	}

	return S_OK;
}


STDMETHODIMP CVideoChannelList::Exists(BSTR uniqueID, VARIANT_BOOL* out_result)
{
	if ( NULL == out_result )
	{
		return E_POINTER;
	}

	*out_result = VARIANT_FALSE;

	CComBSTR id( ( NULL != uniqueID ) ? uniqueID : L"" );

	CCritSecLock lock( m_cs );

	if ( m_collection.find( id ) == m_collection.end() )
	{
		return S_OK;
	}

	*out_result = VARIANT_TRUE;

	return S_OK;
}


STDMETHODIMP CVideoChannelList::Add(IVideoChannel* channel, VARIANT_BOOL* out_result)
{
	if ( NULL == out_result )
	{
		return E_POINTER;
	}

	*out_result = VARIANT_FALSE;

	if ( NULL == channel )
	{
		return S_OK;
	}

	CComPtr<IVideoChannel> spVideoChannel( channel );

	if ( NULL == spVideoChannel.p )
	{
		return S_OK;
	}

	VIDEO_CHANNEL_TYPES type = VIDEO_CHANNEL_UNKWNOWN;

	HRESULT hr = spVideoChannel->get_Type( &type );

	if ( FAILED( hr ) || VIDEO_CHANNEL_UNKWNOWN == type )
	{
		return S_OK;
	}

	CComBSTR id;

	hr = spVideoChannel->get_UniqueID( &id );

	if ( FAILED( hr ) || NULL == id.m_str || 0 >= id.Length() )
	{
		return S_OK;
	}

	CCritSecLock lock( m_cs );

	if ( m_collection.find( id ) != m_collection.end() )
	{
		return S_OK;
	}

	if ( VIDEO_CHANNEL_LIST_MAX_SIZE <= (LONG) m_collection.size() )
	{
		return S_OK;
	}

	m_collection[ id ] = spVideoChannel;

	Fire_OnAdded( id );

	*out_result = VARIANT_TRUE;

	return S_OK;
}


STDMETHODIMP CVideoChannelList::FindByID(BSTR uniqueID, IVideoChannel** out_result)
{
	if ( NULL == out_result )
	{
		return E_POINTER;
	}

	*out_result = NULL;

	CCritSecLock lock( m_cs );

	auto itElement = m_collection.find( CComBSTR( ( NULL != uniqueID ) ? uniqueID : L"" ) );

	if ( itElement == m_collection.end() )
	{
		return S_OK;
	}
	
	if ( NULL == itElement->second.p )
	{
		return S_OK;
	}

	return itElement->second.CopyTo( out_result );
}


STDMETHODIMP CVideoChannelList::FindAt(LONG index, IVideoChannel** out_result)
{
	if ( NULL == out_result )
	{
		return E_POINTER;
	}

	*out_result = NULL;

	CCritSecLock lock( m_cs );

	if ( ! (( 0 <= index ) && ( index < (LONG) m_collection.size() )) )
	{
		return S_OK;
	}

	auto itElement = m_collection.begin();

	if ( itElement == m_collection.end() )
	{
		return S_OK;
	}
	
	std::advance( itElement , index );

	if ( itElement == m_collection.end() )
	{
		return S_OK;
	}

	if ( NULL == itElement->second.p )
	{
		return S_OK;
	}

	return itElement->second.CopyTo( out_result );
}


STDMETHODIMP CVideoChannelList::GetByID(BSTR uniqueID, IVideoChannel** out_result)
{
	if ( NULL == out_result )
	{
		return E_POINTER;
	}

	(void) m_nullChannel.CopyTo( out_result );
	
	CCritSecLock lock( m_cs );

	auto itElement = m_collection.find( CComBSTR( ( NULL != uniqueID ) ? uniqueID : L"" ) );

	if ( itElement == m_collection.end() )
	{
		return S_OK;
	}
	
	if ( NULL == itElement->second.p )
	{
		return S_OK;
	}

	return itElement->second.CopyTo( out_result );
}


STDMETHODIMP CVideoChannelList::GetAt(LONG index, IVideoChannel** out_result)
{
	if ( NULL == out_result )
	{
		return E_POINTER;
	}

	(void) m_nullChannel.CopyTo( out_result );
	
	CCritSecLock lock( m_cs );

	if ( ! (( 0 <= index ) && ( index < (LONG) m_collection.size() )) )
	{
		return S_OK;
	}

	auto itElement = m_collection.begin();

	if ( itElement == m_collection.end() )
	{
		return S_OK;
	}
	
	std::advance( itElement , index );

	if ( itElement == m_collection.end() )
	{
		return S_OK;
	}

	if ( NULL == itElement->second.p )
	{
		return S_OK;
	}

	return itElement->second.CopyTo( out_result );
}


STDMETHODIMP CVideoChannelList::Remove(IVideoChannel* channel, VARIANT_BOOL* out_result)
{
	if ( NULL == out_result )
	{
		return E_POINTER;
	}

	if ( NULL == channel )
	{
		return S_OK;
	}

	CComPtr<IVideoChannel> spVideoChannel( channel );

	if ( NULL == spVideoChannel.p )
	{
		return S_OK;
	}

	*out_result = VARIANT_FALSE;
	
	CCritSecLock lock( m_cs );

	auto itElement = m_collection.end();

	for ( auto it = m_collection.begin() ; it != m_collection.end() ; ++ it )
	{
		if ( spVideoChannel.p == it->second.p )
		{
			itElement = it;
			
			break;
		}
	}

	if ( itElement == m_collection.end() )
	{
		return S_OK;
	}

	CComBSTR id = itElement->first;

	m_collection.erase( itElement );

	Fire_OnRemoved( id );

	*out_result = VARIANT_TRUE;

	return S_OK;
}


STDMETHODIMP CVideoChannelList::RemoveByID(BSTR uniqueID, VARIANT_BOOL* out_result)
{
	if ( NULL == out_result )
	{
		return E_POINTER;
	}

	*out_result = VARIANT_FALSE;
	
	CComBSTR id( ( NULL != uniqueID ) ? uniqueID : L"" );

	CCritSecLock lock( m_cs );

	auto itElement = m_collection.find( id );

	if ( itElement == m_collection.end() )
	{
		return S_OK;
	}

	m_collection.erase( itElement );

	Fire_OnRemoved( id );

	*out_result = VARIANT_TRUE;

	return S_OK;
}


STDMETHODIMP CVideoChannelList::RemoveAt(LONG index, VARIANT_BOOL* out_result)
{
	if ( NULL == out_result )
	{
		return E_POINTER;
	}

	*out_result = VARIANT_FALSE;
	
	CCritSecLock lock( m_cs );

	if ( ! (( 0 <= index ) && ( index < (LONG) m_collection.size() )) )
	{
		return S_OK;
	}

	auto itElement = m_collection.begin();

	std::advance( itElement , index );

	if ( itElement == m_collection.end() )
	{
		return S_OK;
	}

	CComBSTR id = itElement->first;

	m_collection.erase( itElement );

	Fire_OnRemoved( id );

	*out_result = VARIANT_TRUE;

	return S_OK;
}


STDMETHODIMP CVideoChannelList::Clear(void)
{
	CCritSecLock lock( m_cs );

	auto itElement = m_collection.begin();

	while ( itElement != m_collection.end() )
	{
		CComBSTR id = itElement->first;

		m_collection.erase( itElement );

		itElement = m_collection.begin();

		Fire_OnRemoved( id );
	}
	
	return S_OK;
}