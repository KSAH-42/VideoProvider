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
	// TODO: Add your implementation code here

	return S_OK;
}


STDMETHODIMP CConfigurationService::LoadConfigurationFromFile(BSTR fileName, VARIANT_BOOL* out_result)
{
	// TODO: Add your implementation code here

	return S_OK;
}


STDMETHODIMP CConfigurationService::SaveConfiguration(VARIANT_BOOL* out_result)
{
	// TODO: Add your implementation code here

	return S_OK;
}


STDMETHODIMP CConfigurationService::SaveConfigurationFromFile(BSTR fileName, VARIANT_BOOL* out_result)
{
	// TODO: Add your implementation code here

	return S_OK;
}


STDMETHODIMP CConfigurationService::ResetConfiguration(void)
{
	// TODO: Add your implementation code here

	return S_OK;
}


STDMETHODIMP CConfigurationService::ClearAsSettings(void)
{
	// TODO: Add your implementation code here

	return S_OK;
}


STDMETHODIMP CConfigurationService::ReadSetting(BSTR uniqueID, BSTR* out_result)
{
	// TODO: Add your implementation code here

	return S_OK;
}


STDMETHODIMP CConfigurationService::ReadSettingAsBool(BSTR uniqueID, VARIANT_BOOL* out_result)
{
	// TODO: Add your implementation code here

	return S_OK;
}


STDMETHODIMP CConfigurationService::ReadSettingAsLong(BSTR uniqueID, LONG* out_result)
{
	// TODO: Add your implementation code here

	return S_OK;
}


STDMETHODIMP CConfigurationService::WriteSetting(BSTR setting, BSTR value, VARIANT_BOOL* out_result)
{
	// TODO: Add your implementation code here

	return S_OK;
}


STDMETHODIMP CConfigurationService::WriteSettingAsBool(BSTR uniqueID, VARIANT_BOOL value, VARIANT_BOOL* out_result)
{
	// TODO: Add your implementation code here

	return S_OK;
}


STDMETHODIMP CConfigurationService::WriteSettingAsLong(BSTR uniqueID, LONG value, VARIANT_BOOL* out_result)
{
	// TODO: Add your implementation code here

	return S_OK;
}
