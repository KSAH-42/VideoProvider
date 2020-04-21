#include "stdafx.h"
#include "VideoGraphConfiguration.h"


STDMETHODIMP CVideoGraphConfiguration::get_Window(OLE_HANDLE* pVal)
{
	if ( NULL == pVal )
	{
		return E_POINTER;
	}

	CCritSecLock lock( m_cs );

	*pVal = m_window;

	return S_OK;
}


STDMETHODIMP CVideoGraphConfiguration::put_Window(OLE_HANDLE newVal)
{
	CCritSecLock lock( m_cs );

	m_window = newVal;

	return S_OK;
}


STDMETHODIMP CVideoGraphConfiguration::get_UseGrabber(VARIANT_BOOL* pVal)
{
	if ( NULL == pVal )
	{
		return E_POINTER;
	}

	CCritSecLock lock( m_cs );

	*pVal = m_useGrabber;

	return S_OK;
}


STDMETHODIMP CVideoGraphConfiguration::put_UseGrabber(VARIANT_BOOL newVal)
{
	CCritSecLock lock( m_cs );

	m_useGrabber = newVal;

	return S_OK;
}


STDMETHODIMP CVideoGraphConfiguration::get_FormatID(BSTR* pVal)
{
	if ( NULL == pVal )
	{
		return E_POINTER;
	}

	CCritSecLock lock( m_cs );

	if ( NULL == m_formatID.m_str )
	{
		m_formatID = CComBSTR( L"" );
	}

	return m_formatID.CopyTo( pVal );
}


STDMETHODIMP CVideoGraphConfiguration::put_FormatID(BSTR newVal)
{
	CCritSecLock lock( m_cs );

	m_formatID = CComBSTR( ( NULL != newVal ) ? newVal : L"" );

	return S_OK;
}


STDMETHODIMP CVideoGraphConfiguration::get_DeviceName(BSTR* pVal)
{
	if ( NULL == pVal )
	{
		return E_POINTER;
	}

	CCritSecLock lock( m_cs );

	if ( NULL == m_deviceName.m_str )
	{
		m_deviceName = CComBSTR( L"" );
	}

	return m_deviceName.CopyTo( pVal );
}


STDMETHODIMP CVideoGraphConfiguration::put_DeviceName(BSTR newVal)
{
	CCritSecLock lock( m_cs );

	m_deviceName = CComBSTR( ( NULL != newVal ) ? newVal : L"" );

	return S_OK;
}


STDMETHODIMP CVideoGraphConfiguration::get_FileSource(BSTR* pVal)
{
	if ( NULL == pVal )
	{
		return E_POINTER;
	}

	CCritSecLock lock( m_cs );

	if ( NULL == m_fileSource.m_str )
	{
		m_fileSource = CComBSTR( L"" );
	}

	return m_fileSource.CopyTo( pVal );
}


STDMETHODIMP CVideoGraphConfiguration::put_FileSource(BSTR newVal)
{
	CCritSecLock lock( m_cs );

	m_fileSource = CComBSTR( ( NULL != newVal ) ? newVal : L"" );

	return S_OK;
}


STDMETHODIMP CVideoGraphConfiguration::Reset(void)
{
	CCritSecLock lock( m_cs );

	m_window      = NULL;
	m_useGrabber  = VARIANT_FALSE;
	m_formatID    = CComBSTR( L"" );
	m_deviceName  = CComBSTR( L"" );
	m_fileSource  = CComBSTR( L"" );

	return S_OK;
}
