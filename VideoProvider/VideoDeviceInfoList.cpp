#include "stdafx.h"
#include "VideoDeviceInfoList.h"


STDMETHODIMP CVideoDeviceInfoList::get_Count(LONG* pVal)
{
	if ( NULL == pVal )
	{
		return E_POINTER;
	}

	CCritSecLock lock( m_cs );

	*pVal = (LONG) m_collection.size();

	return S_OK;
}


STDMETHODIMP CVideoDeviceInfoList::get_IsEmpty(VARIANT_BOOL* pVal)
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


STDMETHODIMP CVideoDeviceInfoList::get_IsFull(VARIANT_BOOL* pVal)
{
	if ( NULL == pVal )
	{
		return E_POINTER;
	}

	CCritSecLock lock( m_cs );

	if ( VIDEO_DEVICE_INFO_LIST_MAX_SIZE <= m_collection.size() )
	{
		*pVal = VARIANT_TRUE;
	}
	else
	{
		*pVal = VARIANT_FALSE;
	}

	return S_OK;
}


STDMETHODIMP CVideoDeviceInfoList::Any(VARIANT_BOOL* out_result)
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


STDMETHODIMP CVideoDeviceInfoList::Contains(IVideoDeviceInfo* deviceInfo, VARIANT_BOOL* out_result)
{
	if ( NULL == out_result )
	{
		return E_POINTER;
	}

	*out_result = VARIANT_FALSE;

	if ( NULL == deviceInfo )
	{
		return S_FALSE;
	}

	CComPtr<IVideoDeviceInfo> spDeviceInfo( deviceInfo );

	if ( NULL == spDeviceInfo.p )
	{
		return S_FALSE;
	}

	CCritSecLock lock( m_cs );

	for ( auto it = m_collection.begin() ; it != m_collection.end() ; ++ it )
	{
		if ( spDeviceInfo.p == it._Ptr->p )
		{
			*out_result = VARIANT_TRUE;

			break;
		}
	}

	return S_OK;
}


STDMETHODIMP CVideoDeviceInfoList::Add(IVideoDeviceInfo* deviceInfo, VARIANT_BOOL* out_result)
{
	if ( NULL == out_result )
	{
		return E_POINTER;
	}

	*out_result = VARIANT_FALSE;

	if ( NULL == deviceInfo )
	{
		return S_FALSE;
	}

	CComPtr<IVideoDeviceInfo> spDeviceInfo( deviceInfo );

	if ( NULL == spDeviceInfo.p )
	{
		return S_FALSE;
	}

	CCritSecLock lock( m_cs );
	
	if ( VIDEO_DEVICE_INFO_LIST_MAX_SIZE <= (LONG) m_collection.size() )
	{
		return S_OK;
	}

	m_collection.push_back( spDeviceInfo );

	*out_result = VARIANT_TRUE;

	return S_OK;
}


STDMETHODIMP CVideoDeviceInfoList::FindAt(LONG index, IVideoDeviceInfo** out_result)
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

	if ( NULL == itElement._Ptr->p )
	{
		return S_OK;
	}

	return itElement._Ptr->CopyTo( out_result );
}


STDMETHODIMP CVideoDeviceInfoList::RemoveAt(LONG index, VARIANT_BOOL* out_result)
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

	if ( itElement == m_collection.end() )
	{
		return S_OK;
	}

	std::advance( itElement , index );

	if ( itElement == m_collection.end() )
	{
		return S_OK;
	}

	m_collection.erase( itElement );

	*out_result = VARIANT_TRUE;

	return S_OK;
}


STDMETHODIMP CVideoDeviceInfoList::Remove(IVideoDeviceInfo* deviceInfo, VARIANT_BOOL* out_result)
{
	if ( NULL == out_result )
	{
		return E_POINTER;
	}

	*out_result = VARIANT_FALSE;

	if ( NULL == deviceInfo )
	{
		return S_FALSE;
	}

	CComPtr<IVideoDeviceInfo> spDeviceInfo( deviceInfo );

	if ( NULL == spDeviceInfo.p )
	{
		return S_FALSE;
	}

	CCritSecLock lock( m_cs );

	auto itElement = m_collection.end();

	for ( auto it = m_collection.begin() ; it != m_collection.end() ; ++ it )
	{
		if ( spDeviceInfo.p == itElement._Ptr->p )
		{
			itElement = it;

			break;
		}
	}

	if ( itElement == m_collection.end() )
	{
		return S_OK;
	}

	m_collection.erase( itElement );

	*out_result = VARIANT_TRUE;

	return S_OK;
}


STDMETHODIMP CVideoDeviceInfoList::Clear(void)
{
	CCritSecLock lock( m_cs );

	m_collection.clear();

	return S_OK;
}
