#pragma once
#include "resource.h"
#include "VideoProvider_i.h"
#include "_IServiceListEvents_CP.h"
#include <map>

using namespace ATL;

class ATL_NO_VTABLE CServiceList :
	public CComObjectRootEx<CComMultiThreadModel>,
	public CComCoClass<CServiceList, &CLSID_ServiceList>,
	public IConnectionPointContainerImpl<CServiceList>,
	public CProxy_IServiceListEvents<CServiceList>,
	public IDispatchImpl<IServiceList, &IID_IServiceList, &LIBID_VideoProviderLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{

private:

	CRITICAL_SECTION                             m_cs;
	
	std::map<SERVICE_TYPES,CComPtr<IService>>    m_collection;

	CComPtr<IService>                            m_nullService;

public:

	CServiceList()
	{
	}

	DECLARE_REGISTRY_RESOURCEID(IDR_SERVICELIST)

	BEGIN_COM_MAP(CServiceList)
		COM_INTERFACE_ENTRY(IServiceList)
		COM_INTERFACE_ENTRY(IDispatch)
		COM_INTERFACE_ENTRY(IConnectionPointContainer)
	END_COM_MAP()

	BEGIN_CONNECTION_POINT_MAP(CServiceList)
		CONNECTION_POINT_ENTRY(__uuidof(_IServiceListEvents))
	END_CONNECTION_POINT_MAP()

	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		::InitializeCriticalSection( &m_cs );

		(void) m_nullService.CoCreateInstance( CLSID_NullService );

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
	
	STDMETHOD     (Any)              (VARIANT_BOOL* out_result);
	
	STDMETHOD     (Contains)         (IService* setting, VARIANT_BOOL* out_result);
	
	STDMETHOD     (Exists)           (SERVICE_TYPES type, VARIANT_BOOL* out_result);
	
	STDMETHOD     (Add)              (IService* setting, VARIANT_BOOL* out_result);
	
	STDMETHOD     (FindByType)       (SERVICE_TYPES type, IService** out_result);
	
	STDMETHOD     (FindAt)           (LONG index, IService** out_result);
	
	STDMETHOD     (GetByType)        (SERVICE_TYPES type, IService** out_result);
	
	STDMETHOD     (GetAt)            (LONG index, IService** out_result);
	
	STDMETHOD     (Remove)           (IService* setting, VARIANT_BOOL* out_result);
	
	STDMETHOD     (RemoveByType)     (SERVICE_TYPES type, VARIANT_BOOL* out_result);
	
	STDMETHOD     (RemoveAt)         (LONG index, VARIANT_BOOL* out_result);
	
	STDMETHOD     (Clear)            (void);

};

OBJECT_ENTRY_AUTO(__uuidof(ServiceList), CServiceList)
