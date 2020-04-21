#pragma once
#include "resource.h"
#include "VideoProvider_i.h"
#include "SampleGrabber.h"

#define WM_GRAPH_NOTIFY 0x00008001

using namespace ATL;

class ATL_NO_VTABLE CVideoGraph :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CVideoGraph, &CLSID_VideoGraph>,
	public IDispatchImpl<IVideoGraph, &IID_IVideoGraph, &LIBID_VideoProviderLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
private:

	CRITICAL_SECTION                    m_cs;

	CComPtr<IVideoGraphConfiguration>   m_configuration;
	CComPtr<IVideoDeviceInfoAdapter>    m_adapter;
	CComPtr<IMediaMonikerStore>         m_monikerStore;

	CComPtr<IGraphBuilder>			    m_mainGraph;
	CComPtr<IMediaControl>              m_mediaControl;
	CComPtr<IMediaEventEx>              m_mediaEvents;
	CComPtr<IVideoWindow>               m_videoWindow;
	CComPtr<ISampleGrabber>			    m_sampleGrabber;
	CComPtr<ICaptureGraphBuilder2>      m_deviceGraph;
	CComPtr<IBaseFilter>                m_deviceFilter;
	CComPtr<IBaseFilter>			    m_sourceFilter;	
	
	VARIANT_BOOL     				    m_isRunning;

	CLSID                               m_pinCategory;
	OLE_HANDLE                          m_currentWindow;


public:
	
	CVideoGraph()
		: m_pinCategory   ( CLSID_NULL )
		, m_currentWindow ( NULL       )
	{
	}

	DECLARE_REGISTRY_RESOURCEID(IDR_VIDEOGRAPH)

	BEGIN_COM_MAP(CVideoGraph)
		COM_INTERFACE_ENTRY(IVideoGraph)
		COM_INTERFACE_ENTRY(IDispatch)
	END_COM_MAP()

	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		::InitializeCriticalSection( &m_cs );

		(void) m_configuration.CoCreateInstance( CLSID_VideoGraphConfiguration );
		(void) m_adapter      .CoCreateInstance( CLSID_VideoDeviceInfoAdapter  );
		(void) m_monikerStore .CoCreateInstance( CLSID_MediaMonikerStore       );

		return S_OK;
	}

	void FinalRelease()
	{
		VARIANT_BOOL boolResult = VARIANT_FALSE;

		if ( S_OK == IsRunning( &boolResult ) && VARIANT_TRUE == boolResult )
		{
			(void) this->Shutdown();
		}

		::DeleteCriticalSection( &m_cs );
	}

public:

	STDMETHOD    (get_Configuration)            (IVideoGraphConfiguration** pVal);
	
	STDMETHOD    (Create)                       (VARIANT_BOOL* out_result);
	
	STDMETHOD    (Destroy)                      (void);
	
	STDMETHOD    (SelectDevice)                 (VARIANT_BOOL* out_result);
	
	STDMETHOD    (SelectDeviceFormat)           (VARIANT_BOOL* out_result);
	
	STDMETHOD    (AddDeviceFilter)              (VARIANT_BOOL* out_result);
	
	STDMETHOD    (AddFileSourceFilter)          (VARIANT_BOOL* out_result);
	
	STDMETHOD    (AddGrabberFilter)             (VARIANT_BOOL* out_result);

	STDMETHOD    (RenderDeviceStream)           (BSTR pinCategoryId , VARIANT_BOOL* out_result);
	
	STDMETHOD    (RenderDeviceCaptureStream)    (VARIANT_BOOL* out_result);
	
	STDMETHOD    (RenderDevicePreviewStream)    (VARIANT_BOOL* out_result);
	
	STDMETHOD    (RenderFileStream)             (VARIANT_BOOL* out_result);
	
	STDMETHOD    (SetupWindow)                  (VARIANT_BOOL* out_result);
	
	STDMETHOD    (CloseWindow)                  ();
	
	STDMETHOD    (IsRunning)                    (VARIANT_BOOL* out_result);
	
	STDMETHOD    (Run)                          (VARIANT_BOOL* out_result);
	
	STDMETHOD    (Shutdown)                     (void);
	
	STDMETHOD    (PumpsEvents)                  (void);
	
	STDMETHOD    (Resize)                       (void);

};

OBJECT_ENTRY_AUTO(__uuidof(VideoGraph), CVideoGraph)
