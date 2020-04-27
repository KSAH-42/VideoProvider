#include "stdafx.h"
#include "Setting.h"


STDMETHODIMP CSetting::Initialize(VARIANT data)
{
	if ( ! (( VT_BSTR == data.vt ) && ( NULL != data.bstrVal )) )
	{
		return E_INVALIDARG;
	}

	CCritSecLock lock( m_cs );

	if ( 0 < m_uniqueID.Length() )
	{
		return E_ABORT;
	}

	m_uniqueID = data.bstrVal;

	return S_OK;
}


STDMETHODIMP CSetting::get_UniqueID(BSTR* pVal)
{
	if ( NULL == pVal )
	{
		return E_POINTER;
	}

	CCritSecLock lock( m_cs );

	if ( NULL == m_uniqueID.m_str )
	{
		m_uniqueID = CComBSTR( L"" );
	}

	return m_uniqueID.CopyTo( pVal );
}


STDMETHODIMP CSetting::get_IsDirty(VARIANT_BOOL* pVal)
{
	if ( NULL == pVal )
	{
		return E_POINTER;
	}

	CCritSecLock lock( m_cs );

	*pVal = m_isDirty;

	return S_OK;
}


STDMETHODIMP CSetting::put_IsDirty(VARIANT_BOOL newVal)
{
	CCritSecLock lock( m_cs );

	m_isDirty = newVal;

	return S_OK;
}


STDMETHODIMP CSetting::get_Value(BSTR* pVal)
{
	if ( NULL == pVal )
	{
		return E_POINTER;
	}

	CCritSecLock lock( m_cs );

	if ( NULL == m_value.m_str )
	{
		m_value = CComBSTR( L"" );
	}

	return m_value.CopyTo( pVal );
}


STDMETHODIMP CSetting::put_Value(BSTR newVal)
{
	CCritSecLock lock( m_cs );

	const CComBSTR value( ( NULL != newVal ) ? newVal : L"" );

	if ( value != m_value )
	{
		m_value = value;

		m_isDirty = VARIANT_TRUE;
	}

	return S_OK;
}


STDMETHODIMP CSetting::Validate(VARIANT_BOOL* out_result)
{
	if ( NULL == out_result )
	{
		return E_POINTER;
	}

	*out_result = VARIANT_FALSE;

	CCritSecLock lock( m_cs );

	if ( NULL == m_uniqueID.m_str || 0 >= m_uniqueID.Length() )
	{
		return S_OK;
	}

	*out_result = VARIANT_TRUE;

	return S_OK;
}


STDMETHODIMP CSetting::Reset(void)
{
	CCritSecLock lock( m_cs );

	m_value    = CComBSTR( L"" );
	m_isDirty  = VARIANT_FALSE;

	return S_OK;
}
