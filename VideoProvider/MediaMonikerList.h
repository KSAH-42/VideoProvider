#pragma once
#include "resource.h"
#include "VideoProvider_i.h"
#include <vector>

#define MEDIA_MONIKER_LIST_MAX_SIZE   100

using namespace ATL;

class ATL_NO_VTABLE CMediaMonikerList :
	public CComObjectRootEx<CComMultiThreadModel>,
	public CComCoClass<CMediaMonikerList, &CLSID_MediaMonikerList>,
	public IDispatchImpl<IMediaMonikerList, &IID_IMediaMonikerList, &LIBID_VideoProviderLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
private:

	CRITICAL_SECTION                   m_cs;

	std::vector<CComPtr<IMoniker>>     m_collection;

public:
	CMediaMonikerList()
	{
		ATLASSERT( 0 < MEDIA_MONIKER_LIST_MAX_SIZE && MEDIA_MONIKER_LIST_MAX_SIZE < INFINITE );
	}

	DECLARE_REGISTRY_RESOURCEID(IDR_MEDIAMONIKERLIST)

	BEGIN_COM_MAP(CMediaMonikerList)
		COM_INTERFACE_ENTRY(IMediaMonikerList)
		COM_INTERFACE_ENTRY(IDispatch)
	END_COM_MAP()

	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		::InitializeCriticalSection( &m_cs );

		return S_OK;
	}

	void FinalRelease()
	{
		(void) this->Clear();

		::DeleteCriticalSection( &m_cs );
	}

public:

	STDMETHOD     (get_Count)       (LONG* pVal);
	
	STDMETHOD     (get_IsEmpty)     (VARIANT_BOOL* pVal);
	
	STDMETHOD     (get_IsFull)      (VARIANT_BOOL* pVal);
	
	STDMETHOD     (Any)             (VARIANT_BOOL* out_result);
	
	STDMETHOD     (Contains)        (IMoniker* moniker, VARIANT_BOOL* out_result);
	
	STDMETHOD     (Add)             (IMoniker* moniker, VARIANT_BOOL* out_result);
	
	STDMETHOD     (FindAt)          (LONG index, IMoniker** out_result);
	
	STDMETHOD     (RemoveAt)        (LONG index, VARIANT_BOOL* out_result);
	
	STDMETHOD     (Remove)          (IMoniker* moniker, VARIANT_BOOL* out_result);
	
	STDMETHOD     (Clear)           (void);

};

OBJECT_ENTRY_AUTO(__uuidof(MediaMonikerList), CMediaMonikerList)
