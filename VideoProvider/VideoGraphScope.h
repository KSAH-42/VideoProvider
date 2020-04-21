#pragma once
#ifndef _VIDEO_GRAPH_SCOPE__H
#define _VIDEO_GRAPH_SCOPE__H
#include "VideoProvider_i.h"

class CVideoGraphScope sealed
{
private:
	CComPtr<IVideoGraph> m_graph;

public:
	CVideoGraphScope( CComPtr<IVideoGraph> graph );
	~CVideoGraphScope(void);

private:
	CVideoGraphScope();
	CVideoGraphScope( const CVideoGraphScope& );

	CVideoGraphScope& operator = ( const CVideoGraphScope& );

public:

	bool IsAttached();

	void Attach( CComPtr<IVideoGraph> graph );

	void Detach();

};

#endif // _VIDEO_GRAPH_SCOPE__H