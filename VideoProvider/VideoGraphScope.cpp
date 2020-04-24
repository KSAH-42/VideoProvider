#include "StdAfx.h"
#include "VideoGraphScope.h"


CVideoGraphScope::CVideoGraphScope( CComPtr<IVideoGraph> graph )
	: m_graph( graph )
{
}


CVideoGraphScope::~CVideoGraphScope(void)
{
	if ( NULL != m_graph.p )
	{
		m_graph->Destroy();

		m_graph.Release();
		m_graph.p = NULL;
	}
}


bool CVideoGraphScope::IsAttached()
{
	if ( NULL == m_graph.p )
	{
		return false;
	}

	return true;
}


void CVideoGraphScope::Attach( CComPtr<IVideoGraph> graph )
{
	if ( NULL != m_graph.p )
	{
		m_graph.Release();
		m_graph.p = NULL;
	}

	m_graph = graph;
}

void CVideoGraphScope::Detach()
{
	if ( NULL != m_graph.p )
	{
		m_graph.Release();
		m_graph.p = NULL;
	}
}