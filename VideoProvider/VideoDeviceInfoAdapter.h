#pragma once
#include "resource.h"
#include "VideoProvider_i.h"

using namespace ATL;

class ATL_NO_VTABLE CVideoDeviceInfoAdapter :
	public CComObjectRootEx<CComMultiThreadModel>,
	public CComCoClass<CVideoDeviceInfoAdapter, &CLSID_VideoDeviceInfoAdapter>,
	public IDispatchImpl<IVideoDeviceInfoAdapter, &IID_IVideoDeviceInfoAdapter, &LIBID_VideoProviderLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CVideoDeviceInfoAdapter()
	{
	}

	DECLARE_REGISTRY_RESOURCEID(IDR_VIDEODEVICEINFOADAPTER)

	BEGIN_COM_MAP(CVideoDeviceInfoAdapter)
		COM_INTERFACE_ENTRY(IVideoDeviceInfoAdapter)
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

	STDMETHOD    (Adapt)    (IMoniker* moniker, IVideoDeviceInfo** out_result);

};

OBJECT_ENTRY_AUTO(__uuidof(VideoDeviceInfoAdapter), CVideoDeviceInfoAdapter)
