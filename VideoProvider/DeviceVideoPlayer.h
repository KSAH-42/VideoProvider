#pragma once
#include "resource.h" 
#include "VideoProvider_i.h"
#include "VideoGraphScope.h"
#include "VideoGraph.h"

using namespace ATL;

class ATL_NO_VTABLE CDeviceVideoPlayer :
	public CComObjectRootEx<CComMultiThreadModel>,
	public CComCoClass<CDeviceVideoPlayer, &CLSID_DeviceVideoPlayer>,
	public IDispatchImpl<IDeviceVideoPlayer, &IID_IDeviceVideoPlayer, &LIBID_VideoProviderLib, /*wMajor =*/ 1, /*wMinor =*/ 0>,
	public IDispatchImpl<IVideoPlayer, &IID_IVideoPlayer, &LIBID_VideoProviderLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
private:
	CComPtr<IVideoGraph>                m_graph;
	CComPtr<IVideoGraphConfiguration>   m_configuration;
	
public:
	CDeviceVideoPlayer()
	{
	}

	DECLARE_REGISTRY_RESOURCEID(IDR_DEVICEVIDEOPLAYER)

	BEGIN_COM_MAP(CDeviceVideoPlayer)
		COM_INTERFACE_ENTRY(IDeviceVideoPlayer)
		COM_INTERFACE_ENTRY2(IDispatch,IVideoPlayer)
		COM_INTERFACE_ENTRY(IVideoPlayer)		
	END_COM_MAP()

	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		HRESULT hr = m_graph.CoCreateInstance( CLSID_VideoGraph );

		if ( S_OK != hr || NULL == m_graph.p )
		{
			return E_FAIL;
		}

		hr = m_graph->get_Configuration( &m_configuration.p );

		if ( S_OK != hr || NULL == m_configuration.p )
		{
			return E_FAIL;
		}
		
		return S_OK;
	}

	void FinalRelease()
	{
		VARIANT_BOOL boolResult = VARIANT_FALSE;

		if ( S_OK == this->IsPlaying( &boolResult ) && VARIANT_TRUE == boolResult )
		{
			(void) this->Stop();
		}
	}

public:

	STDMETHOD     (get_DeviceName)     (BSTR* pVal);
	
	STDMETHOD     (put_DeviceName)     (BSTR newVal);
	
	STDMETHOD     (get_Window)         (OLE_HANDLE* pVal);
	
	STDMETHOD     (put_Window)         (OLE_HANDLE newVal);

	STDMETHOD     (IsPlaying)          (VARIANT_BOOL* out_result);
	
	STDMETHOD     (Play)               (VARIANT_BOOL* out_result);
	
	STDMETHOD     (Stop)               (void);
	
	STDMETHOD     (Refresh)            (void);

};

OBJECT_ENTRY_AUTO(__uuidof(DeviceVideoPlayer), CDeviceVideoPlayer)
