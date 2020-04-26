#pragma once
#include "resource.h"
#include "VideoProvider_i.h"

using namespace ATL;

class ATL_NO_VTABLE CNullService :
	public CComObjectRootEx<CComMultiThreadModel>,
	public CComCoClass<CNullService, &CLSID_NullService>,
	public IDispatchImpl<INullService, &IID_INullService, &LIBID_VideoProviderLib, /*wMajor =*/ 1, /*wMinor =*/ 0>,
	public IDispatchImpl<IService, &__uuidof(IService)>
{

public:

	CNullService()
	{
	}

	DECLARE_REGISTRY_RESOURCEID(IDR_NULLSERVICE)

	BEGIN_COM_MAP(CNullService)
		COM_INTERFACE_ENTRY(INullService)
		COM_INTERFACE_ENTRY2(IDispatch, IService)
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

	STDMETHOD    (get_Type)     ( SERVICE_TYPES* pVal );

};

OBJECT_ENTRY_AUTO(__uuidof(NullService), CNullService)
