#pragma once
#include "resource.h"
#include "VideoProvider_i.h"

using namespace ATL;

class ATL_NO_VTABLE CNullVideoChannel :
	public CComObjectRootEx<CComMultiThreadModel>,
	public CComCoClass<CNullVideoChannel, &CLSID_NullVideoChannel>,
	public IDispatchImpl<INullVideoChannel, &IID_INullVideoChannel, &LIBID_VideoProviderLib, /*wMajor =*/ 1, /*wMinor =*/ 0>,
	public IDispatchImpl<IVideoChannel, &IID_IVideoChannel, &LIBID_VideoProviderLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{

private:

	CComPtr<IFrameBuffer>          m_buffer;

public:
	CNullVideoChannel()
	{
	}

	DECLARE_REGISTRY_RESOURCEID(IDR_NULLVIDEOCHANNEL)

	BEGIN_COM_MAP(CNullVideoChannel)
		COM_INTERFACE_ENTRY(INullVideoChannel)
		COM_INTERFACE_ENTRY2(IDispatch,IVideoChannel)
		COM_INTERFACE_ENTRY(IVideoChannel)
	END_COM_MAP()

	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		HRESULT hr = m_buffer.CoCreateInstance( CLSID_FrameBuffer );

		if ( S_OK != hr || NULL == m_buffer.p )
		{
			return E_FAIL;
		}

		return S_OK;
	}

	void FinalRelease()
	{
	}

public:


	STDMETHOD     (get_Type)           (VIDEO_CHANNEL_TYPES* pVal);

	STDMETHOD     (get_UniqueID)       (BSTR* pVal);

	STDMETHOD     (get_Buffer)         (IFrameBuffer** pVal);

	STDMETHOD     (IsStarted)          (VARIANT_BOOL* out_result);
	
	STDMETHOD     (Start)              (VARIANT_BOOL* out_result);
	
	STDMETHOD     (Stop)               (void);

};

OBJECT_ENTRY_AUTO(__uuidof(NullVideoChannel), CNullVideoChannel)
