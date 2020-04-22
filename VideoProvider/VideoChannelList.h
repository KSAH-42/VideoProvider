#pragma once
#include "resource.h"
#include "VideoProvider_i.h"
#include "_IVideoChannelListEvents_CP.h"

using namespace ATL;

class ATL_NO_VTABLE CVideoChannelList :
	public CComObjectRootEx<CComMultiThreadModel>,
	public CComCoClass<CVideoChannelList, &CLSID_VideoChannelList>,
	public IConnectionPointContainerImpl<CVideoChannelList>,
	public CProxy_IVideoChannelListEvents<CVideoChannelList>,
	public IDispatchImpl<IVideoChannelList, &IID_IVideoChannelList, &LIBID_VideoProviderLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CVideoChannelList()
	{
	}

	DECLARE_REGISTRY_RESOURCEID(IDR_VIDEOCHANNELLIST)

	BEGIN_COM_MAP(CVideoChannelList)
		COM_INTERFACE_ENTRY(IVideoChannelList)
		COM_INTERFACE_ENTRY(IDispatch)
		COM_INTERFACE_ENTRY(IConnectionPointContainer)
	END_COM_MAP()

	BEGIN_CONNECTION_POINT_MAP(CVideoChannelList)
		CONNECTION_POINT_ENTRY(__uuidof(_IVideoChannelListEvents))
	END_CONNECTION_POINT_MAP()

	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		return S_OK;
	}

	void FinalRelease()
	{
	}

public:



};

OBJECT_ENTRY_AUTO(__uuidof(VideoChannelList), CVideoChannelList)
