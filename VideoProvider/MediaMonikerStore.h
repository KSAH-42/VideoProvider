#pragma once
#include "resource.h"
#include "VideoProvider_i.h"

using namespace ATL;

class ATL_NO_VTABLE CMediaMonikerStore :
	public CComObjectRootEx<CComMultiThreadModel>,
	public CComCoClass<CMediaMonikerStore, &CLSID_MediaMonikerStore>,
	public IDispatchImpl<IMediaMonikerStore, &IID_IMediaMonikerStore, &LIBID_VideoProviderLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CMediaMonikerStore()
	{
	}

	DECLARE_REGISTRY_RESOURCEID(IDR_MEDIAMONIKERSTORE)

	BEGIN_COM_MAP(CMediaMonikerStore)
		COM_INTERFACE_ENTRY(IMediaMonikerStore)
		COM_INTERFACE_ENTRY(IDispatch)
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

	STDMETHOD   (FindAll)          (IMediaMonikerList** out_result);

	STDMETHOD   (FindByName)       (BSTR deviceName, IMoniker** out_result);

};

OBJECT_ENTRY_AUTO(__uuidof(MediaMonikerStore), CMediaMonikerStore)
