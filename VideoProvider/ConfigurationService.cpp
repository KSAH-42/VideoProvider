#include "stdafx.h"
#include "ConfigurationService.h"


STDMETHODIMP CConfigurationService::get_Type(SERVICE_TYPES* pVal)
{
	if ( NULL == pVal )
	{
		return E_POINTER;
	}

	*pVal = SERVICE_CONFIGURATION;

	return S_OK;
}


STDMETHODIMP CConfigurationService::LoadConfiguration(VARIANT_BOOL* out_result)
{
	return E_NOTIMPL;
}


STDMETHODIMP CConfigurationService::LoadConfigurationFromFile(BSTR fileName, VARIANT_BOOL* out_result)
{
	return E_NOTIMPL;
}


STDMETHODIMP CConfigurationService::SaveConfiguration(VARIANT_BOOL* out_result)
{
	return E_NOTIMPL;
}


STDMETHODIMP CConfigurationService::SaveConfigurationFromFile(BSTR fileName, VARIANT_BOOL* out_result)
{
	return E_NOTIMPL;
}


STDMETHODIMP CConfigurationService::ResetConfiguration(void)
{
	return E_NOTIMPL;
}


STDMETHODIMP CConfigurationService::ClearAllSettings(void)
{
	return E_NOTIMPL;
}


STDMETHODIMP CConfigurationService::ReadSetting(BSTR uniqueID, BSTR* out_result)
{
	return E_NOTIMPL;
}


STDMETHODIMP CConfigurationService::ReadSettingAsBool(BSTR uniqueID, VARIANT_BOOL* out_result)
{
	return E_NOTIMPL;
}


STDMETHODIMP CConfigurationService::ReadSettingAsLong(BSTR uniqueID, LONG* out_result)
{
	return E_NOTIMPL;
}


STDMETHODIMP CConfigurationService::WriteSetting(BSTR uniqueID, BSTR value, VARIANT_BOOL* out_result)
{
	return E_NOTIMPL;
}


STDMETHODIMP CConfigurationService::WriteSettingAsBool(BSTR uniqueID, VARIANT_BOOL value, VARIANT_BOOL* out_result)
{
	return E_NOTIMPL;
}


STDMETHODIMP CConfigurationService::WriteSettingAsLong(BSTR uniqueID, LONG value, VARIANT_BOOL* out_result)
{
	return E_NOTIMPL;
}
