#pragma once
#include "resource.h"
#include "VideoProvider_i.h"

using namespace ATL;

class ATL_NO_VTABLE CFrameBuffer :
	public CComObjectRootEx<CComMultiThreadModel>,
	public CComCoClass<CFrameBuffer, &CLSID_FrameBuffer>,
	public IDispatchImpl<IFrameBuffer, &IID_IFrameBuffer, &LIBID_VideoProviderLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CFrameBuffer()
	{
	}

	DECLARE_REGISTRY_RESOURCEID(IDR_FRAMEBUFFER)

	BEGIN_COM_MAP(CFrameBuffer)
		COM_INTERFACE_ENTRY(IFrameBuffer)
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
	
	STDMETHOD    (get_Limit)        (LONG* pVal);
	
	STDMETHOD    (put_Limit)        (LONG newVal);
	
	STDMETHOD    (get_Size)         (LONG* pVal);
	
	STDMETHOD    (get_IsEmpty)      (VARIANT_BOOL* pVal);
	
	STDMETHOD    (Read)             (IFrame** out_result);
	
	STDMETHOD    (Write)            (IFrame* frame, VARIANT_BOOL* out_result);
	
	STDMETHOD    (Clear)            (void);
	
	STDMETHOD    (Synchronize)      (ULONG timeout, ULONG cancelationHandle, VARIANT_BOOL* out_result);

};

OBJECT_ENTRY_AUTO(__uuidof(FrameBuffer), CFrameBuffer)
