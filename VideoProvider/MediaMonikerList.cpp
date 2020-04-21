#include "stdafx.h"
#include "MediaMonikerList.h"


STDMETHODIMP CMediaMonikerList::get_Count(LONG* pVal)
{
	if ( NULL == pVal )
	{
		return E_POINTER;
	}

	CCritSecLock lock( m_cs );

	*pVal = (LONG) m_collection.size();

	return S_OK;
}


STDMETHODIMP CMediaMonikerList::get_IsEmpty(VARIANT_BOOL* pVal)
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


STDMETHODIMP CMediaMonikerList::get_IsFull(VARIANT_BOOL* pVal)
{
	if ( NULL == pVal )
	{
		return E_POINTER;
	}

	CCritSecLock lock( m_cs );

	if ( MEDIA_MONIKER_LIST_MAX_SIZE <= m_collection.size() )
	{
		*pVal = VARIANT_TRUE;
	}
	else
	{
		*pVal = VARIANT_FALSE;
	}

	return S_OK;
}


STDMETHODIMP CMediaMonikerList::Any(VARIANT_BOOL* out_result)
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


STDMETHODIMP CMediaMonikerList::Contains(IMoniker* moniker, VARIANT_BOOL* out_result)
{
	if ( NULL == out_result )
	{
		return E_POINTER;
	}

	*out_result = VARIANT_FALSE;

	if ( NULL == moniker )
	{
		return S_FALSE;
	}

	CComPtr<IMoniker> spMoniker( moniker );

	if ( NULL == spMoniker.p )
	{
		return S_FALSE;
	}

	CCritSecLock lock( m_cs );
	
	for ( auto it = m_collection.begin() ; it != m_collection.end() ; ++ it )
	{
		if ( spMoniker.p == it._Ptr->p )
		{
			*out_result = VARIANT_TRUE;

			break;
		}
	}

	return S_OK;
}


STDMETHODIMP CMediaMonikerList::Add(IMoniker* moniker, VARIANT_BOOL* out_result)
{
	if ( NULL == out_result )
	{
		return E_POINTER;
	}

	*out_result = VARIANT_FALSE;

	if ( NULL == moniker )
	{
		return S_OK;
	}

	CComPtr<IMoniker> spMoniker( moniker );

	if ( NULL == spMoniker.p )
	{
		return S_OK;
	}

	CCritSecLock lock( m_cs );

	if ( MEDIA_MONIKER_LIST_MAX_SIZE <= (LONG) m_collection.size() )
	{
		return S_OK;
	}

	m_collection.push_back( spMoniker );

	*out_result = VARIANT_TRUE;

	return S_OK;
}


STDMETHODIMP CMediaMonikerList::FindAt(LONG index, IMoniker** out_result)
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


STDMETHODIMP CMediaMonikerList::RemoveAt(LONG index, VARIANT_BOOL* out_result)
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


STDMETHODIMP CMediaMonikerList::Remove(IMoniker* moniker, VARIANT_BOOL* out_result)
{
	if ( NULL == out_result )
	{
		return E_POINTER;
	}

	*out_result = VARIANT_FALSE;

	if ( NULL == moniker )
	{
		return S_FALSE;
	}

	CComPtr<IMoniker> spMoniker( moniker );

	if ( NULL == spMoniker.p )
	{
		return S_FALSE;
	}

	CCritSecLock lock( m_cs );

	auto itElement = m_collection.end();

	for ( auto it = m_collection.begin() ; it != m_collection.end() ; ++ it )
	{
		if ( spMoniker.p == itElement._Ptr->p )
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


STDMETHODIMP CMediaMonikerList::Clear(void)
{
	CCritSecLock lock( m_cs );

	m_collection.clear();

	return S_OK;
}
