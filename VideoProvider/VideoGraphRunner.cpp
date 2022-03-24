#include "stdafx.h"
#include "VideoGraphRunner.h"


STDMETHODIMP CVideoGraphRunner::IsStarted(VARIANT_BOOL* out_result)
{
	if ( NULL == out_result )
	{
		return E_POINTER;
	} 

	*out_result = VARIANT_FALSE;

	if ( NULL == m_thread.p )
	{
		return S_OK;
	}

	return m_thread->IsStarted( out_result );
}


STDMETHODIMP CVideoGraphRunner::Start(IVideoGraph* graph, VARIANT_BOOL* out_result)
{
	if ( NULL == out_result )
	{
		return E_POINTER;
	}

	*out_result = VARIANT_FALSE;

	if ( NULL == graph )
	{
		return S_FALSE;
	}

	CComPtr<IVideoGraph> spGraph( graph );

	if ( NULL == spGraph.p )
	{
		return S_FALSE;
	}

	if ( NULL == m_thread.p )
	{
		return S_FALSE;
	}

	VARIANT_BOOL boolResult = VARIANT_FALSE;

	HRESULT hr = m_thread->IsStarted( &boolResult );

	if ( S_OK != hr || VARIANT_TRUE == boolResult )
	{
		return S_FALSE;
	}

	m_graph = spGraph;

	hr = m_thread->Start( (void*) &CVideoGraphRunner::Processing , (void*) this , &boolResult );

	if ( S_OK != hr || VARIANT_FALSE == boolResult )
	{
		m_graph.Release();
		m_graph.p = NULL;

		return S_FALSE;
	}

	*out_result = VARIANT_TRUE;

	return S_OK;
}


STDMETHODIMP CVideoGraphRunner::Stop(void)
{
	if ( NULL != m_thread.p )
	{
		m_thread->Stop();
	}

	if ( NULL != m_graph.p )
	{
		m_graph.Release();
		m_graph.p = NULL;
	}

	return S_OK;
}


DWORD WINAPI CVideoGraphRunner::Processing(LPVOID lpArgs )
{
	if ( NULL == lpArgs )
	{
		return 0;
	}

	CVideoGraphRunner* pInstance = reinterpret_cast<CVideoGraphRunner*>( lpArgs );

	CComPtr<IBackgroundThread> thread = pInstance->m_thread;

	if ( NULL == thread.p )
	{
		return 0;
	}

	CCoInitializer coInit;

	CComPtr<IVideoGraph> graph = pInstance->m_graph;

	if ( NULL == graph.p )
	{
		return 0;
	}

	VARIANT_BOOL boolResult = VARIANT_FALSE;
	
	graph->Run( &boolResult );

	try
	{
		VARIANT_BOOL boolCantinue = VARIANT_FALSE;

		while ( S_OK == thread->CanContinue( 100 , &boolCantinue ) && VARIANT_TRUE == boolCantinue )
		{
			thread->PumpEvents();

			graph->PumpsEvents();
		}

		thread->PumpEvents();
	}
	catch( ... )
	{
	}

	graph->Shutdown();

	return 0;
}