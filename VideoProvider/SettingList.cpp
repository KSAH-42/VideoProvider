#include "stdafx.h"
#include "SettingList.h"


STDMETHODIMP CSettingList::get_Count(LONG* pVal)
{
	if ( NULL == pVal )
	{
		return E_POINTER;
	}

	CCritSecLock lock( m_cs );

	*pVal = (LONG) m_collection.size();

	return S_OK;
}


STDMETHODIMP CSettingList::get_IsEmpty(VARIANT_BOOL* pVal)
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


STDMETHODIMP CSettingList::get_IsFull(VARIANT_BOOL* pVal)
{
	if ( NULL == pVal )
	{
		return E_POINTER;
	}

	CCritSecLock lock( m_cs );

	if ( SETTING_LIST_MAX_SIZE <= (LONG) m_collection.size() )
	{
		*pVal = VARIANT_TRUE;
	}
	else
	{
		*pVal = VARIANT_FALSE;
	}

	return S_OK;
}


STDMETHODIMP CSettingList::Any(VARIANT_BOOL* out_result)
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


STDMETHODIMP CSettingList::Contains(ISetting* setting, VARIANT_BOOL* out_result)
{
	if ( NULL == out_result )
	{
		return E_POINTER;
	}

	*out_result = VARIANT_FALSE;

	if ( NULL == setting )
	{
		return S_FALSE;
	}

	CComPtr<ISetting> spSetting( setting );

	if ( NULL == spSetting.p )
	{
		return S_FALSE;
	}

	CCritSecLock lock( m_cs );

	for ( auto it = m_collection.begin() ; it != m_collection.end() ; ++ it )
	{
		if ( it->second.p == spSetting.p )
		{
			*out_result = VARIANT_TRUE;

			break;
		}
	}

	return S_OK;
}


STDMETHODIMP CSettingList::Exists(BSTR uniqueID, VARIANT_BOOL* out_result)
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


STDMETHODIMP CSettingList::Add(ISetting* setting, VARIANT_BOOL* out_result)
{
	if ( NULL == out_result )
	{
		return E_POINTER;
	}

	*out_result = VARIANT_FALSE;

	if ( NULL == setting )
	{
		return S_OK;
	}

	CComPtr<ISetting> spSetting( setting );

	if ( NULL == spSetting.p )
	{
		return S_OK;
	}

	VARIANT_BOOL boolResult = VARIANT_FALSE;

	if ( S_OK != spSetting->Validate( &boolResult ) || VARIANT_FALSE == boolResult )
	{
		return S_OK;
	}

	CComBSTR id;

	if ( S_OK != spSetting->get_UniqueID( &id ) )
	{
		return S_OK;
	}

	if ( NULL == id.m_str || 0 >= id.Length() )
	{
		return S_OK;
	}
		
	CCritSecLock lock( m_cs );

	if ( m_collection.find( id ) != m_collection.end() )
	{
		return S_OK;
	}

	if ( SETTING_LIST_MAX_SIZE <= (LONG) m_collection.size() )
	{
		return S_OK;
	}

	m_collection[ id ] = spSetting;

	Fire_OnAdded( id );

	*out_result = VARIANT_TRUE;

	return S_OK;
}


STDMETHODIMP CSettingList::FindByID(BSTR uniqueID, ISetting** out_result)
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


STDMETHODIMP CSettingList::FindAt(LONG index, ISetting** out_result)
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


STDMETHODIMP CSettingList::GetByID(BSTR uniqueID, ISetting** out_result)
{
	if ( NULL == out_result )
	{
		return E_POINTER;
	}

	(void) m_nullSetting.CopyTo( out_result );
	
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


STDMETHODIMP CSettingList::GetAt(LONG index, ISetting** out_result)
{
	if ( NULL == out_result )
	{
		return E_POINTER;
	}

	(void) m_nullSetting.CopyTo( out_result );
	
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


STDMETHODIMP CSettingList::Remove(ISetting* setting, VARIANT_BOOL* out_result)
{
	if ( NULL == out_result )
	{
		return E_POINTER;
	}

	if ( NULL == setting )
	{
		return S_OK;
	}

	CComPtr<ISetting> spSetting( setting );

	if ( NULL == spSetting.p )
	{
		return S_OK;
	}

	*out_result = VARIANT_FALSE;
	
	CCritSecLock lock( m_cs );

	auto itElement = m_collection.end();

	for ( auto it = m_collection.begin() ; it != m_collection.end() ; ++ it )
	{
		if ( spSetting.p == it->second.p )
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


STDMETHODIMP CSettingList::RemoveByID(BSTR uniqueID, VARIANT_BOOL* out_result)
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


STDMETHODIMP CSettingList::RemoveAt(LONG index, VARIANT_BOOL* out_result)
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


STDMETHODIMP CSettingList::Clear(void)
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


