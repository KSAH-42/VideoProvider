#include "stdafx.h"
#include "VideoGraph.h"


STDMETHODIMP CVideoGraph::get_Configuration(IVideoGraphConfiguration** pVal)
{
	if ( NULL == pVal )
	{
		return E_POINTER;
	}

	*pVal = NULL;

	if ( NULL == m_configuration.p )
	{
		return E_POINTER;
	}

	return m_configuration.CopyTo( pVal );
}


STDMETHODIMP CVideoGraph::Create(VARIANT_BOOL* out_result)
{
	if ( NULL == out_result )
	{
		return E_POINTER;
	}

	*out_result = VARIANT_FALSE;

	CCritSecLock lock( m_cs );
	
	if ( NULL != m_mainGraph.p )
	{
		return S_FALSE;
	}

	CComPtr<IGraphBuilder> graph;

	HRESULT hr = graph.CoCreateInstance( CLSID_FilterGraph );

	if ( S_OK != hr || NULL == graph.p )
	{
		return S_FALSE;
	}

	CComPtr<IMediaControl> mediaControl;

	hr = graph.QueryInterface( &mediaControl.p );

	if ( S_OK != hr || NULL == mediaControl.p )
	{
		return S_FALSE;
	}

	CComPtr<IMediaEventEx> mediaEvents;

	hr = graph.QueryInterface( &mediaEvents.p );

	if ( S_OK != hr || NULL == mediaEvents.p )
	{
		return S_FALSE;
	}
	
	m_mainGraph    = graph;
	m_mediaControl = mediaControl;
	m_mediaEvents  = mediaEvents;
	
	*out_result    = VARIANT_TRUE;

	return S_OK;
}


STDMETHODIMP CVideoGraph::Destroy(void)
{
	CCritSecLock lock( m_cs );

	m_isRunning = VARIANT_FALSE;

	if ( NULL != m_mediaEvents.p )
	{
		m_mediaEvents->SetNotifyWindow( NULL , NULL , 0 );

		m_mediaEvents.Release();
		m_mediaEvents.p = NULL;
	}

	if ( NULL != m_mediaControl.p )
	{
		m_mediaControl.Release();
		m_mediaControl.p = NULL;
	}

	if ( NULL != m_videoWindow.p )
	{
		m_videoWindow.Release();
		m_videoWindow.p = NULL;
	}

	if (NULL != m_videoRenderFilter.p)
	{
		m_videoRenderFilter.Release();
		m_videoRenderFilter.p = NULL;
	}

	if ( NULL != m_sampleGrabber.p )
	{
		m_sampleGrabber.Release();
		m_sampleGrabber.p = NULL;
	}

	if ( NULL != m_sourceFilter.p )
	{
		m_sourceFilter.Release();
		m_sourceFilter.p = NULL;
	}

	if ( NULL != m_deviceFilter.p )
	{
		m_deviceFilter.Release();
		m_deviceFilter.p = NULL;
	}

	if ( NULL != m_deviceGraph.p )
	{
		m_deviceGraph.Release();
		m_deviceGraph.p = NULL;
	}

	if ( NULL != m_mainGraph.p )
	{
		m_mainGraph.Release();
		m_mainGraph.p = NULL;
	}

	m_currentWindow = NULL;
	m_pinCategory   = CLSID_NULL;

	return S_OK;
}


STDMETHODIMP CVideoGraph::SelectDevice(VARIANT_BOOL* out_result)
{
	if ( NULL == out_result )
	{
		return E_POINTER;
	}

	*out_result = VARIANT_FALSE;

	CCritSecLock lock( m_cs );

	if ( NULL == m_adapter.p )
	{
		return E_ABORT;
	}

	if ( NULL == m_monikerStore.p )
	{
		return E_ABORT;
	}

	CComBSTR deviceName;

	HRESULT hr = m_configuration->get_DeviceName( &deviceName );

	if ( S_OK != hr )
	{
		return S_FALSE;
	}

	if ( NULL == deviceName.m_str || 0 >= deviceName.Length() )
	{
		return S_FALSE;
	}

	CComPtr<IMoniker> moniker;

	hr = m_monikerStore->FindByName( deviceName , &moniker.p );

	if ( S_OK != hr || NULL == moniker.p )
	{
		return S_FALSE;
	}

	CComPtr<IBaseFilter> deviceFilter;

	hr = moniker->BindToObject( NULL , NULL , IID_IBaseFilter, (void**) &deviceFilter.p );

	if ( S_OK != hr || NULL == deviceFilter.p )
	{
		return S_FALSE;
	}
	
	m_deviceFilter = deviceFilter;

	*out_result = VARIANT_TRUE;

	return S_OK;
}

#pragma warning ( disable : 4100 )

STDMETHODIMP CVideoGraph::SelectDeviceFormat(VARIANT_BOOL* out_result)
{
	return E_NOTIMPL;
}	

#pragma warning ( suppress : 4100 )


STDMETHODIMP CVideoGraph::AddDeviceFilter(VARIANT_BOOL* out_result)
{
	if ( NULL == out_result )
	{
		return E_POINTER;
	}

	*out_result = VARIANT_FALSE;

	CCritSecLock lock( m_cs );

	if ( NULL == m_mainGraph.p )
	{
		return S_FALSE;
	}

	if ( NULL == m_deviceFilter.p )
	{
		return S_FALSE;
	}

	if ( NULL != m_deviceGraph.p )
	{
		return S_FALSE;
	}
	
	CComPtr<ICaptureGraphBuilder2> deviceGraph;

	HRESULT hr = deviceGraph.CoCreateInstance( CLSID_CaptureGraphBuilder2 );

	if ( FAILED( hr ) || NULL == deviceGraph.p )
	{
		return S_FALSE;
	}

	hr = deviceGraph->SetFiltergraph( m_mainGraph );

	if ( FAILED( hr ) )
	{
		return S_FALSE;
	}
	
	hr = m_mainGraph->AddFilter( m_deviceFilter , L"Device capture" );
	
	if ( FAILED( hr ) )
	{
		return S_FALSE;
	}

	m_deviceGraph = deviceGraph;
		
	*out_result = VARIANT_TRUE;

	return S_OK;
}


STDMETHODIMP CVideoGraph::AddFileSourceFilter(VARIANT_BOOL* out_result)
{
	if ( NULL == out_result )
	{
		return E_POINTER;
	}

	*out_result = VARIANT_FALSE;

	CCritSecLock lock( m_cs );

	if ( NULL == m_mainGraph.p )
	{
		return S_FALSE;
	}

	if ( NULL == m_configuration.p )
	{
		return S_FALSE;
	}

	if (NULL != m_sourceFilter.p)
	{
		return S_FALSE;
	}

	CComBSTR fileSource;

	HRESULT hr = m_configuration->get_FileSource( &fileSource );

	if ( NULL == fileSource.m_str || 0 >= fileSource.Length() )
	{
		return S_FALSE;
	}

	CComPtr<IBaseFilter> filter;

	hr = m_mainGraph->AddSourceFilter( fileSource , L"Source Filter" , &filter.p );

	if ( FAILED( hr ) || NULL == filter.p )
	{
		return S_FALSE;
	}

	m_sourceFilter = filter;

	*out_result = VARIANT_TRUE;

	return S_OK;
}


STDMETHODIMP CVideoGraph::AddGrabberFilter(VARIANT_BOOL* out_result)
{
	if ( NULL == out_result )
	{
		return E_POINTER;
	}

	*out_result = VARIANT_FALSE;

	CCritSecLock lock( m_cs );

	if ( NULL == m_mainGraph.p )
	{
		return S_FALSE;
	}

	if (NULL != m_sampleGrabber.p)
	{
		return S_FALSE;
	}

	CComPtr<IBaseFilter> sampleGrabberFilter;

	HRESULT hr = sampleGrabberFilter.CoCreateInstance( CLSID_SampleGrabber );

	if ( FAILED( hr ) || NULL == sampleGrabberFilter.p )
	{
		return S_FALSE;
	}

	CComPtr<ISampleGrabber> sampleGrabber;

	hr = sampleGrabberFilter.QueryInterface( &sampleGrabber.p );

	if ( FAILED( hr ) || NULL == sampleGrabber.p )
	{
		return S_FALSE;
	}

	hr = m_mainGraph->AddFilter( sampleGrabberFilter , CComBSTR( L"Sample grabber" ) );

	if ( FAILED( hr ) )
	{
		return S_FALSE;
	}

	m_sampleGrabber = sampleGrabberFilter;

	*out_result = VARIANT_TRUE;

	return S_OK;
}


STDMETHODIMP CVideoGraph::AddVideoRenderFilter(VARIANT_BOOL* out_result)
{
	if (NULL == out_result)
	{
		return E_POINTER;
	}

	*out_result = VARIANT_FALSE;

	CCritSecLock lock(m_cs);

	if ( NULL == m_mainGraph.p )
	{
		return S_FALSE;
	}

	if ( NULL != m_videoRenderFilter.p)
	{
		return S_FALSE;
	}

	CComPtr<IBaseFilter> spVideoRender;

	HRESULT hr = spVideoRender.CoCreateInstance(CLSID_VideoMixingRenderer);

	if (S_OK != hr || NULL == spVideoRender.p)
	{
		return S_FALSE;
	}

	hr = m_mainGraph->AddFilter(spVideoRender, CComBSTR(L"Video render"));

	if ( S_OK != hr )
	{
		return S_FALSE;
	}

	m_videoRenderFilter = spVideoRender;

	*out_result = VARIANT_TRUE;

	return S_OK;
}


STDMETHODIMP CVideoGraph::RenderDeviceStream( BSTR pinCategoryId , VARIANT_BOOL* out_result)
{
	m_pinCategory = CLSID_NULL;

	if ( NULL == out_result )
	{
		return E_POINTER;
	}

	*out_result = VARIANT_FALSE;

	if ( NULL == pinCategoryId || 0 >= ::SysStringLen( pinCategoryId ) )
	{
		return S_OK;
	}

	m_pinCategory = CDataConverter::ConvertToCLSID( CString( (LPCTSTR) pinCategoryId ) );

	if ( CLSID_NULL == m_pinCategory )
	{
		return S_OK;
	}

	CCritSecLock lock( m_cs );

	if ( NULL == m_deviceGraph.p )
	{
		return S_FALSE;
	}

	if ( NULL == m_deviceFilter.p )
	{
		return S_FALSE;
	}

	HRESULT hr = m_deviceGraph->RenderStream( &m_pinCategory , &MEDIATYPE_Video , m_deviceFilter , NULL , NULL );

	if ( FAILED( hr ) )
	{
		return S_FALSE;
	}

	*out_result = VARIANT_TRUE;

	return S_OK;
}


STDMETHODIMP CVideoGraph::RenderDeviceCaptureStream(VARIANT_BOOL* out_result)
{
	return RenderDeviceStream( CDataConverter::ConvertToString( PIN_CATEGORY_CAPTURE ) , out_result );
}


STDMETHODIMP CVideoGraph::RenderDevicePreviewStream(VARIANT_BOOL* out_result)
{
	return RenderDeviceStream( CDataConverter::ConvertToString( PIN_CATEGORY_PREVIEW ) , out_result );
}


STDMETHODIMP CVideoGraph::RenderFileStream(VARIANT_BOOL* out_result)
{
	if ( NULL == out_result )
	{
		return E_POINTER;
	}

	*out_result = VARIANT_FALSE;

	CCritSecLock lock( m_cs );

	if ( NULL == m_mainGraph.p )
	{
		return S_OK;
	}

	if ( NULL == m_configuration.p )
	{
		return E_ABORT;
	}

	CComBSTR file;

	HRESULT hr = m_configuration->get_FileSource( &file );

	if ( FAILED( hr ) || NULL == file.m_str || 0 >= file.Length() )
	{
		return S_FALSE;
	}
	
	hr = m_mainGraph->RenderFile( file , NULL );

	if ( FAILED( hr ) )
	{
		return S_FALSE;
	}

	*out_result = VARIANT_TRUE;

	return S_OK;
}


STDMETHODIMP CVideoGraph::SetupWindow(VARIANT_BOOL* out_result)
{
	m_currentWindow = NULL;

	if ( NULL == out_result )
	{
		return E_POINTER;
	}

	*out_result = VARIANT_FALSE;

	CCritSecLock lock( m_cs );

	if (   NULL == m_mainGraph.p 
		|| NULL == m_configuration.p
		|| NULL == m_mediaEvents.p
		)
	{
		return E_NOT_VALID_STATE;
	}

	if ( NULL != m_videoWindow.p )
	{
		return E_NOT_VALID_STATE;
	}

	OLE_HANDLE handle = NULL;

	HRESULT hr = m_configuration->get_Window( &handle );

	if ( NULL == handle )
	{
		return S_FALSE;
	}

	CComPtr<IVideoWindow> videoWindow;

	hr = m_mainGraph.QueryInterface( &videoWindow.p );

	if ( FAILED( hr ) || NULL == videoWindow.p )
	{
		return S_FALSE;
	}

	hr = videoWindow->put_Owner( handle );

	if ( FAILED( hr ) )
	{
		return S_FALSE;
	}
	
	hr = videoWindow->put_WindowStyle( WS_CHILD | WS_CLIPSIBLINGS | WS_CLIPCHILDREN );

	if ( FAILED( hr ) )
	{
		return S_FALSE;
	}
	
	RECT rectangle = { 0 };

	::GetClientRect( (HWND) handle , &rectangle );

	hr = videoWindow->SetWindowPosition( 0 , 0 , rectangle.right , rectangle.bottom );
	
	if ( FAILED( hr ) )
	{
		return S_FALSE;
	}

	hr = videoWindow->put_Visible( OATRUE );

	if ( FAILED( hr ) )
	{
		return S_FALSE;
	}

	m_mediaEvents->SetNotifyWindow( handle , WM_GRAPH_NOTIFY , NULL );

	m_videoWindow   = videoWindow;
	m_currentWindow = handle;

	*out_result = VARIANT_TRUE;

	return S_OK;
}


STDMETHODIMP CVideoGraph::CloseWindow()
{
	CCritSecLock lock( m_cs );

	if ( NULL != m_videoWindow.p )
	{
		m_videoWindow->put_Visible( OAFALSE );
		m_videoWindow->put_AutoShow( OAFALSE );
		m_videoWindow->put_Owner( NULL );
		
		m_videoWindow.Release();
		m_videoWindow.p = NULL;
	}

	m_currentWindow = NULL;

	return S_OK;
}


STDMETHODIMP CVideoGraph::SetKeepRatioMode( VARIANT_BOOL keepRatioStatus , VARIANT_BOOL* out_result)
{
	if (NULL == out_result)
	{
		return E_POINTER;
	}

	*out_result = VARIANT_FALSE;

	CCritSecLock lock(m_cs);

	if ( NULL == m_videoRenderFilter.p )
	{
		return S_FALSE;
	}


	CComPtr<IVMRAspectRatioControl> spVMRControl;

	HRESULT hr = m_videoRenderFilter.QueryInterface(&spVMRControl);

	if (S_OK != hr || NULL == spVMRControl.p)
	{
		return S_FALSE;
	}

	hr = spVMRControl->SetAspectRatioMode( VARIANT_TRUE == keepRatioStatus ? VMR_ARMODE_LETTER_BOX : VMR_ARMODE_NONE );

	if ( S_OK != hr )
	{
		return S_FALSE;
	}

	*out_result = VARIANT_TRUE;

	return S_OK;
}


STDMETHODIMP CVideoGraph::IsRunning(VARIANT_BOOL* out_result)
{
	if ( NULL == out_result )
	{
		return E_POINTER;
	}

	CCritSecLock lock( m_cs );

	*out_result = m_isRunning;

	return S_OK;
}


STDMETHODIMP CVideoGraph::Run(VARIANT_BOOL* out_result)
{
	if ( NULL == out_result )
	{
		return E_POINTER;
	}

	*out_result = VARIANT_FALSE;

	CCritSecLock lock( m_cs );

	if ( VARIANT_TRUE == m_isRunning )
	{
		return S_FALSE;
	}

	if ( NULL == m_mediaControl.p )
	{
		return S_FALSE;
	}

	HRESULT hr = m_mediaControl->Run();

	if ( FAILED( hr ) )
	{
		return S_FALSE;
	}

	m_isRunning = VARIANT_TRUE;

	*out_result = m_isRunning;

	return S_OK;
}


STDMETHODIMP CVideoGraph::Shutdown()
{
	CCritSecLock lock( m_cs );

	if ( VARIANT_TRUE != m_isRunning )
	{
		return S_OK;
	}
	
	HRESULT hr = E_FAIL;

	if ( NULL != m_deviceFilter.p )
	{
		hr = m_deviceFilter->Stop();
	}

	if ( NULL != m_sourceFilter.p )
	{
		hr = m_sourceFilter->Stop();
	}
	
	if (NULL != m_videoRenderFilter.p)
	{
		hr = m_videoRenderFilter->Stop();
	}

	if ( NULL != m_mediaControl.p )
	{
		m_mediaControl->Stop();
	}

	m_isRunning = VARIANT_FALSE;

	return S_OK;
}


STDMETHODIMP CVideoGraph::PumpsEvents(void)
{
	CCritSecLock lock( m_cs );
	
	if ( NULL == m_mediaEvents.p )
	{
		return S_FALSE;
	}

	// After many tests this loop ends due to a bad hresult produce by some DSF methods
	// Something better can be used here like using a Win32 WaitForXYZ will probably better 
	// And introducing new methods for stopping the collect of events could be usefull
	
	while ( true )
	{
		LONG eventCode  = 0;
		LONG parameter1 = 0;
		LONG parameter2 = 0;

		HRESULT hr = m_mediaEvents->GetEvent( &eventCode , &parameter1 , &parameter2 , 0 );

		if ( FAILED( hr ) )
		{
			break;	
		}

		hr = m_mediaEvents->FreeEventParams( eventCode , parameter1 , parameter2 );

		if ( FAILED( hr ) )
		{
			break;
		}
	}
	
	return S_OK;
}


STDMETHODIMP CVideoGraph::Resize(void)
{
	CCritSecLock lock( m_cs );

	if ( NULL == m_currentWindow )
	{
		return S_FALSE;
	}

	if ( NULL == m_videoWindow.p )
	{
		return S_FALSE;
	}

	RECT rectangle = { 0 };

	GetClientRect( (HWND) m_currentWindow , &rectangle );

	m_videoWindow->SetWindowPosition( 0 , 0 , rectangle.right , rectangle.bottom );
	
	return S_OK;
}
