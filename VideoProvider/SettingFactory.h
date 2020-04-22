#pragma once
#include "resource.h"
#include "VideoProvider_i.h"

using namespace ATL;

class ATL_NO_VTABLE CSettingFactory :
	public CComObjectRootEx<CComMultiThreadModel>,
	public CComCoClass<CSettingFactory, &CLSID_SettingFactory>,
	public IDispatchImpl<ISettingFactory, &IID_ISettingFactory, &LIBID_VideoProviderLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
	CRITICAL_SECTION m_cs;

public:
	CSettingFactory()
	{
	}

	DECLARE_REGISTRY_RESOURCEID(IDR_SETTINGFACTORY)


	BEGIN_COM_MAP(CSettingFactory)
		COM_INTERFACE_ENTRY(ISettingFactory)
		COM_INTERFACE_ENTRY(IDispatch)
	END_COM_MAP()

	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		::InitializeCriticalSection( &m_cs );

		return S_OK;
	}

	void FinalRelease()
	{
		::DeleteCriticalSection( &m_cs );
	}

public:

	STDMETHOD    (CreateSetting)     (BSTR uniqueID, ISetting** out_result);

};

OBJECT_ENTRY_AUTO(__uuidof(SettingFactory), CSettingFactory)
