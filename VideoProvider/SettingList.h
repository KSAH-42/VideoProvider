#pragma once
#include "resource.h"
#include "VideoProvider_i.h"
#include "_ISettingListEvents_CP.h"
#include <map>

#define SETTING_LIST_MAX_SIZE  1000

using namespace ATL;

class ATL_NO_VTABLE CSettingList :
	public CComObjectRootEx<CComMultiThreadModel>,
	public CComCoClass<CSettingList, &CLSID_SettingList>,
	public IConnectionPointContainerImpl<CSettingList>,
	public CProxy_ISettingListEvents<CSettingList>,
	public IDispatchImpl<ISettingList, &IID_ISettingList, &LIBID_VideoProviderLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{

private:

	CRITICAL_SECTION                     m_cs;
	
	std::map<CComBSTR,CComPtr<ISetting>> m_collection;

	CComPtr<ISetting>                    m_nullSetting;

public:

	CSettingList()
	{
		ATLASSERT( 0 < SETTING_LIST_MAX_SIZE && SETTING_LIST_MAX_SIZE < INFINITE );
	}

	DECLARE_REGISTRY_RESOURCEID(IDR_SETTINGLIST)

	BEGIN_COM_MAP(CSettingList)
		COM_INTERFACE_ENTRY(ISettingList)
		COM_INTERFACE_ENTRY(IDispatch)
		COM_INTERFACE_ENTRY(IConnectionPointContainer)
	END_COM_MAP()

	BEGIN_CONNECTION_POINT_MAP(CSettingList)
		CONNECTION_POINT_ENTRY(__uuidof(_ISettingListEvents))
	END_CONNECTION_POINT_MAP()

	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		::InitializeCriticalSection( &m_cs );

		(void) m_nullSetting.CoCreateInstance( CLSID_Setting );

		return S_OK;
	}

	void FinalRelease()
	{
		(void) Clear();

		::DeleteCriticalSection( &m_cs );
	}

public:
		
	STDMETHOD     (get_Count)        (LONG* pVal);
	
	STDMETHOD     (get_IsEmpty)      (VARIANT_BOOL* pVal);
	
	STDMETHOD     (get_IsFull)       (VARIANT_BOOL* pVal);

	STDMETHOD     (Any)              (VARIANT_BOOL* out_result);
	
	STDMETHOD     (Contains)         (ISetting* setting, VARIANT_BOOL* out_result);
	
	STDMETHOD     (Exists)           (BSTR uniqueID, VARIANT_BOOL* out_result);
	
	STDMETHOD     (Add)              (ISetting* setting, VARIANT_BOOL* out_result);
	
	STDMETHOD     (FindByID)         (BSTR uniqueID, ISetting** out_result);
	
	STDMETHOD     (FindAt)           (LONG index, ISetting** out_result);
	
	STDMETHOD     (GetByID)          (BSTR uniqueID, ISetting** out_result);
	
	STDMETHOD     (GetAt)            (LONG index, ISetting** out_result);
	
	STDMETHOD     (Remove)           (ISetting* setting, VARIANT_BOOL* out_result);
	
	STDMETHOD     (RemoveByID)       (BSTR uniqueID, VARIANT_BOOL* out_result);
	
	STDMETHOD     (RemoveAt)         (LONG index, VARIANT_BOOL* out_result);
	
	STDMETHOD     (Clear)            (void);

};

OBJECT_ENTRY_AUTO(__uuidof(SettingList), CSettingList)
