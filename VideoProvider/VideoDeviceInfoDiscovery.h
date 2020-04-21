#pragma once
#include "resource.h"
#include "VideoProvider_i.h"

using namespace ATL;

class ATL_NO_VTABLE CVideoDeviceInfoDiscovery :
	public CComObjectRootEx<CComMultiThreadModel>,
	public CComCoClass<CVideoDeviceInfoDiscovery, &CLSID_VideoDeviceInfoDiscovery>,
	public IDispatchImpl<IVideoDeviceInfoDiscovery, &IID_IVideoDeviceInfoDiscovery, &LIBID_VideoProviderLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CVideoDeviceInfoDiscovery()
	{
	}

	DECLARE_REGISTRY_RESOURCEID(IDR_VIDEODEVICEINFODISCOVERY)


	BEGIN_COM_MAP(CVideoDeviceInfoDiscovery)
		COM_INTERFACE_ENTRY(IVideoDeviceInfoDiscovery)
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

	STDMETHOD    (SearchDevices)    (IVideoDeviceInfoList** out_result);

};

OBJECT_ENTRY_AUTO(__uuidof(VideoDeviceInfoDiscovery), CVideoDeviceInfoDiscovery)
