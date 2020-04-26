#include "stdafx.h"
#include "ServiceList.h"


STDMETHODIMP CServiceList::get_Count(LONG* pVal)
{
	if ( NULL == pVal )
	{
		return E_POINTER;
	}

	CCritSecLock lock( m_cs );

	*pVal = (LONG) m_collection.size();

	return S_OK;
}


STDMETHODIMP CServiceList::get_IsEmpty(VARIANT_BOOL* pVal)
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


STDMETHODIMP CServiceList::Any(VARIANT_BOOL* out_result)
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


STDMETHODIMP CServiceList::Contains(IService* Service, VARIANT_BOOL* out_result)
{
	if ( NULL == out_result )
	{
		return E_POINTER;
	}

	*out_result = VARIANT_FALSE;

	if ( NULL == Service )
	{
		return S_FALSE;
	}

	CComPtr<IService> spService( Service );

	if ( NULL == spService.p )
	{
		return S_FALSE;
	}

	CCritSecLock lock( m_cs );

	for ( auto it = m_collection.begin() ; it != m_collection.end() ; ++ it )
	{
		if ( it->second.p == spService.p )
		{
			*out_result = VARIANT_TRUE;

			break;
		}
	}

	return S_OK;
}


STDMETHODIMP CServiceList::Exists(SERVICE_TYPES type, VARIANT_BOOL* out_result)
{
	if ( NULL == out_result )
	{
		return E_POINTER;
	}

	*out_result = VARIANT_FALSE;

	CCritSecLock lock( m_cs );

	if ( m_collection.find( type ) == m_collection.end() )
	{
		return S_OK;
	}

	*out_result = VARIANT_TRUE;

	return S_OK;
}


STDMETHODIMP CServiceList::Add(IService* Service, VARIANT_BOOL* out_result)
{
	if ( NULL == out_result )
	{
		return E_POINTER;
	}

	*out_result = VARIANT_FALSE;

	if ( NULL == Service )
	{
		return S_OK;
	}

	CComPtr<IService> spService( Service );

	if ( NULL == spService.p )
	{
		return S_OK;
	}

	SERVICE_TYPES type = SERVICE_UNKNOWN;

	if ( S_OK != spService->get_Type( &type ) || SERVICE_UNKNOWN == type )
	{
		return S_OK;
	}

	CCritSecLock lock( m_cs );

	if ( m_collection.find( type ) != m_collection.end() )
	{
		return S_OK;
	}

	m_collection[ type ] = spService;

	Fire_OnAdded( type );

	*out_result = VARIANT_TRUE;

	return S_OK;
}


STDMETHODIMP CServiceList::FindByType(SERVICE_TYPES type, IService** out_result)
{
	if ( NULL == out_result )
	{
		return E_POINTER;
	}

	*out_result = NULL;

	CCritSecLock lock( m_cs );

	const auto itElement = m_collection.find( type );

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


STDMETHODIMP CServiceList::FindAt(LONG index, IService** out_result)
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


STDMETHODIMP CServiceList::GetByType(SERVICE_TYPES type, IService** out_result)
{
	if ( NULL == out_result )
	{
		return E_POINTER;
	}
	
	m_nullService.CopyTo( out_result );
	
	CCritSecLock lock( m_cs );

	const auto itElement = m_collection.find( type );

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


STDMETHODIMP CServiceList::GetAt(LONG index, IService** out_result)
{
	if ( NULL == out_result )
	{
		return E_POINTER;
	}
	
	m_nullService.CopyTo( out_result );
	
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


STDMETHODIMP CServiceList::Remove(IService* Service, VARIANT_BOOL* out_result)
{
	if ( NULL == out_result )
	{
		return E_POINTER;
	}

	if ( NULL == Service )
	{
		return S_OK;
	}

	CComPtr<IService> spService( Service );

	if ( NULL == spService.p )
	{
		return S_OK;
	}

	*out_result = VARIANT_FALSE;
	
	CCritSecLock lock( m_cs );

	auto itElement = m_collection.end();

	for ( auto it = m_collection.begin() ; it != m_collection.end() ; ++ it )
	{
		if ( spService.p == it->second.p )
		{
			itElement = it;
			
			break;
		}
	}

	if ( itElement == m_collection.end() )
	{
		return S_OK;
	}

	SERVICE_TYPES type = itElement->first;

	m_collection.erase( itElement );

	Fire_OnRemoved( type );

	*out_result = VARIANT_TRUE;

	return S_OK;
}


STDMETHODIMP CServiceList::RemoveByType(SERVICE_TYPES type, VARIANT_BOOL* out_result)
{
	if ( NULL == out_result )
	{
		return E_POINTER;
	}

	*out_result = VARIANT_FALSE;
	
	CCritSecLock lock( m_cs );

	const auto itElement = m_collection.find( type );

	if ( itElement == m_collection.end() )
	{
		return S_OK;
	}

	m_collection.erase( itElement );

	Fire_OnRemoved( type );

	*out_result = VARIANT_TRUE;

	return S_OK;
}


STDMETHODIMP CServiceList::RemoveAt(LONG index, VARIANT_BOOL* out_result)
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

	SERVICE_TYPES type = itElement->first;

	m_collection.erase( itElement );

	Fire_OnRemoved( type );

	*out_result = VARIANT_TRUE;

	return S_OK;
}


STDMETHODIMP CServiceList::Clear(void)
{
	CCritSecLock lock( m_cs );

	auto itElement = m_collection.begin();

	while ( itElement != m_collection.end() )
	{
		SERVICE_TYPES type = itElement->first;

		m_collection.erase( itElement );

		itElement = m_collection.begin();

		Fire_OnRemoved( type );
	}
	
	return S_OK;
}


