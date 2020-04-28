#pragma once
#include "resource.h"
#include "VideoProvider_i.h"

using namespace ATL;


class ATL_NO_VTABLE CConfigurationService :
	public CComObjectRootEx<CComMultiThreadModel>,
	public CComCoClass<CConfigurationService, &CLSID_ConfigurationService>,
	public IDispatchImpl<IConfigurationService, &IID_IConfigurationService, &LIBID_VideoProviderLib, /*wMajor =*/ 1, /*wMinor =*/ 0>,
	public IDispatchImpl<IService, &IID_IService, &LIBID_VideoProviderLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{

private:

	CComPtr<ISettingList>             m_settings;

public:

	CConfigurationService()
	{
	}

	DECLARE_REGISTRY_RESOURCEID(IDR_CONFIGURATIONSERVICE)

	BEGIN_COM_MAP(CConfigurationService)
		COM_INTERFACE_ENTRY(IConfigurationService)
		COM_INTERFACE_ENTRY2(IDispatch,IService)
		COM_INTERFACE_ENTRY(IService)
	END_COM_MAP()

	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		return S_OK;
	}

	void FinalRelease()
	{
	}

public:

	STDMETHOD     (get_Type)                  (SERVICE_TYPES* pVal);

	STDMETHOD     (LoadConfiguration)         (VARIANT_BOOL* out_result);
	
	STDMETHOD     (LoadConfigurationFromFile) (BSTR fileName, VARIANT_BOOL* out_result);
	
	STDMETHOD     (SaveConfiguration)         (VARIANT_BOOL* out_result);
	
	STDMETHOD     (SaveConfigurationFromFile) (BSTR fileName, VARIANT_BOOL* out_result);
	
	STDMETHOD     (ResetConfiguration)        (void);

	STDMETHOD     (ClearAllSettings)          (void);

	STDMETHOD     (ReadSetting)               (BSTR uniqueID, BSTR* out_result);
	
	STDMETHOD     (ReadSettingAsBool)         (BSTR uniqueID, VARIANT_BOOL* out_result);
	
	STDMETHOD     (ReadSettingAsLong)         (BSTR uniqueID, LONG* out_result);
	
	STDMETHOD     (WriteSetting)              (BSTR setting, BSTR value, VARIANT_BOOL* out_result);
	
	STDMETHOD     (WriteSettingAsBool)        (BSTR uniqueID, VARIANT_BOOL value, VARIANT_BOOL* out_result);
	
	STDMETHOD     (WriteSettingAsLong)        (BSTR uniqueID, LONG value, VARIANT_BOOL* out_result);
	
};

OBJECT_ENTRY_AUTO(__uuidof(ConfigurationService), CConfigurationService)
