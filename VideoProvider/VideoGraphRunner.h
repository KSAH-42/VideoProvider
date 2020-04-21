#pragma once
#include "resource.h"
#include "VideoProvider_i.h"

using namespace ATL;

class ATL_NO_VTABLE CVideoGraphRunner :
	public CComObjectRootEx<CComMultiThreadModel>,
	public CComCoClass<CVideoGraphRunner, &CLSID_VideoGraphRunner>,
	public IDispatchImpl<IVideoGraphRunner, &IID_IVideoGraphRunner, &LIBID_VideoProviderLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{

private:
	CComPtr<IVideoGraph>          m_graph;
	CComPtr<IBackgroundThread>    m_thread;

public:

	CVideoGraphRunner()
	{
	}

	DECLARE_REGISTRY_RESOURCEID(IDR_VIDEOGRAPHRUNNER)

	BEGIN_COM_MAP(CVideoGraphRunner)
		COM_INTERFACE_ENTRY(IVideoGraphRunner)
		COM_INTERFACE_ENTRY(IDispatch)
	END_COM_MAP()

	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		(void) m_thread.CoCreateInstance( CLSID_BackgroundThread );

		return S_OK;
	}

	void FinalRelease()
	{
		(void) this->Stop();
	}

public:

	STDMETHOD            (IsStarted)     (VARIANT_BOOL* out_result);
	
	STDMETHOD            (Start)         (IVideoGraph* graph, VARIANT_BOOL* out_result);

	STDMETHOD            (Stop)          (void);

private:
	
	static DWORD WINAPI  Processing      ( LPVOID lpArgs );

};

OBJECT_ENTRY_AUTO(__uuidof(VideoGraphRunner), CVideoGraphRunner)
