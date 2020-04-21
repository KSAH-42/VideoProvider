#include "stdafx.h"
#include "VideoDeviceInfo.h"


STDMETHODIMP CVideoDeviceInfo::get_Name(BSTR* pVal)
{
	if ( NULL == pVal )
	{
		return E_POINTER;
	}

	CCritSecLock lock( m_cs );

	if ( NULL == m_name.m_str )
	{
		m_name = CComBSTR( L"" );
	}

	return m_name.CopyTo( pVal );
}


STDMETHODIMP CVideoDeviceInfo::put_Name(BSTR newVal)
{
	CCritSecLock lock( m_cs );
	
	m_name = CComBSTR( ( NULL != newVal ) ? newVal : L"" );

	return S_OK;
}


STDMETHODIMP CVideoDeviceInfo::get_Description(BSTR* pVal)
{
	if ( NULL == pVal )
	{
		return E_POINTER;
	}

	CCritSecLock lock( m_cs );

	if ( NULL == m_description.m_str )
	{
		m_description = CComBSTR( L"" );
	}

	return m_description.CopyTo( pVal );
}


STDMETHODIMP CVideoDeviceInfo::put_Description(BSTR newVal)
{
	CCritSecLock lock( m_cs );

	m_description = CComBSTR( ( NULL != newVal ) ? newVal : L"" );

	return S_OK;
}


STDMETHODIMP CVideoDeviceInfo::get_Path(BSTR* pVal)
{
	if ( NULL == pVal )
	{
		return E_POINTER;
	}

	CCritSecLock lock( m_cs );

	if ( NULL == m_path.m_str )
	{
		m_path = CComBSTR( L"" );
	}

	return m_path.CopyTo( pVal );
}


STDMETHODIMP CVideoDeviceInfo::put_Path(BSTR newVal)
{
	CCritSecLock lock( m_cs );

	m_path = CComBSTR( ( NULL != newVal ) ? newVal : L"" );

	return S_OK;
}


STDMETHODIMP CVideoDeviceInfo::Validate(VARIANT_BOOL* out_result)
{
	if ( NULL == out_result )
	{
		return E_POINTER;
	}

	*out_result = VARIANT_FALSE;

	CCritSecLock lock( m_cs );

	if ( NULL == m_name.m_str || 0 >= m_name.Length() )
	{
		return E_POINTER;
	}

	if ( NULL == m_path.m_str || 0 >= m_path.Length() )
	{
		return E_POINTER;
	}

	*out_result = VARIANT_TRUE;

	return S_OK;
}
