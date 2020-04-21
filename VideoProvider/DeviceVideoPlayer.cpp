#include "stdafx.h"
#include "DeviceVideoPlayer.h"


STDMETHODIMP CDeviceVideoPlayer::get_DeviceName(BSTR* pVal)
{
	return m_configuration->get_DeviceName( pVal );
}


STDMETHODIMP CDeviceVideoPlayer::put_DeviceName(BSTR newVal)
{
	return m_configuration->put_DeviceName( newVal );
}


STDMETHODIMP CDeviceVideoPlayer::get_Window(OLE_HANDLE* pVal)
{
	return m_configuration->get_Window( pVal );
}


STDMETHODIMP CDeviceVideoPlayer::put_Window(OLE_HANDLE newVal)
{
	return m_configuration->put_Window( newVal );
}


STDMETHODIMP CDeviceVideoPlayer::IsPlaying( VARIANT_BOOL* out_result )
{
	return m_graph->IsRunning( out_result );
}


STDMETHODIMP CDeviceVideoPlayer::Play( VARIANT_BOOL* out_result )
{
	if ( NULL == out_result )
	{
		return E_POINTER;
	}

	*out_result = VARIANT_FALSE;

	VARIANT_BOOL boolResult = VARIANT_FALSE;
	
	HRESULT hr = m_graph->IsRunning( &boolResult );

	if ( FAILED( hr ) || VARIANT_TRUE == boolResult )
	{
		return S_FALSE;
	}

	CVideoGraphScope scope( m_graph );

	hr = m_graph->SelectDevice( &boolResult );

	if ( FAILED( hr ) || VARIANT_FALSE == boolResult )
	{
		return S_FALSE;
	}
	
	hr = m_graph->Create( &boolResult );

	if ( FAILED( hr ) || VARIANT_FALSE == boolResult )
	{
		return S_FALSE;
	}
	
	hr = m_graph->AddDeviceFilter( &boolResult );

	if ( FAILED( hr ) || VARIANT_FALSE == boolResult )
	{
		return S_FALSE;
	}
	
	hr = m_graph->RenderDevicePreviewStream( &boolResult );

	if ( FAILED( hr ) || VARIANT_FALSE == boolResult )
	{
		return S_FALSE;
	}
	
	OLE_HANDLE window = NULL;

	hr = m_configuration->get_Window( &window );
	
	if ( SUCCEEDED( hr ) && NULL != window )
	{
		hr = m_graph->SetupWindow( &boolResult );

		if ( FAILED( hr ) || VARIANT_FALSE == boolResult )
		{
			return S_FALSE;
		}
	}
	
	hr = m_graph->Run( &boolResult );

	if ( FAILED( hr ) || VARIANT_FALSE == boolResult )
	{
		return S_FALSE;
	}

	scope.Detach();
	
	*out_result = VARIANT_TRUE;

	return S_OK;
}


STDMETHODIMP CDeviceVideoPlayer::Stop()
{
	(void) m_graph->Shutdown();
	(void) m_graph->CloseWindow();
	(void) m_graph->Destroy();
	
	return S_OK;
}


STDMETHODIMP CDeviceVideoPlayer::Refresh()
{
	(void) m_graph->Resize();

	return S_OK;
}