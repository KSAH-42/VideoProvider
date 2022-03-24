#include "stdafx.h"
#include "SettingFactory.h"


STDMETHODIMP CSettingFactory::CreateSetting(BSTR uniqueID, ISetting** out_result)
{
	if ( NULL == out_result )
	{
		return E_POINTER;
	}

	*out_result = NULL;

	if ( NULL == uniqueID || 0 >= ::SysStringLen( uniqueID ) )
	{
		return E_INVALIDARG;
	}

	CCritSecLock lock( m_cs );

	CComPtr<ISetting> setting;

	HRESULT hr = setting.CoCreateInstance( CLSID_Setting );

	if ( S_OK != hr || NULL == setting.p )
	{
		return E_OUTOFMEMORY;
	}

	CComPtr<IInitializer> initializer;

	hr = setting.QueryInterface( &initializer.p );

	if ( S_OK != hr || NULL == setting.p )
	{
		return E_NOINTERFACE;
	}

	hr = initializer->Initialize( CComVariant( (LPCTSTR) uniqueID ) );

	if ( S_OK != hr )
	{
		return E_ABORT;
	}

	return setting.CopyTo( out_result );
}
