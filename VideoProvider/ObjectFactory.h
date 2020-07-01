#pragma once
#include "resource.h"
#include "VideoProvider_i.h"

using namespace ATL;

class ATL_NO_VTABLE CObjectFactory :
	public CComObjectRootEx<CComMultiThreadModel>,
	public CComCoClass<CObjectFactory, &CLSID_ObjectFactory>,
	public IDispatchImpl<IObjectFactory, &IID_IObjectFactory, &LIBID_VideoProviderLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
	CRITICAL_SECTION m_cs;

public:
	CObjectFactory()
	{
	}

	DECLARE_REGISTRY_RESOURCEID(IDR_OBJECTFACTORY)

	BEGIN_COM_MAP(CObjectFactory)
		COM_INTERFACE_ENTRY(IObjectFactory)
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

	STDMETHOD    (CreateObject)         (GUID classID, IDispatch** out_result);

	STDMETHOD    (CreateObjectByID)     (GUID classID, BSTR uniqueID , IDispatch** out_result);

};

OBJECT_ENTRY_AUTO(__uuidof(ObjectFactory), CObjectFactory)
