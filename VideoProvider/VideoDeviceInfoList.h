#pragma once
#include "resource.h"
#include "VideoProvider_i.h"
#include <vector>

#define VIDEO_DEVICE_INFO_LIST_MAX_SIZE   1000

using namespace ATL;

class ATL_NO_VTABLE CVideoDeviceInfoList :
	public CComObjectRootEx<CComMultiThreadModel>,
	public CComCoClass<CVideoDeviceInfoList, &CLSID_VideoDeviceInfoList>,
	public IDispatchImpl<IVideoDeviceInfoList, &IID_IVideoDeviceInfoList, &LIBID_VideoProviderLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
private:

	CRITICAL_SECTION                         m_cs;

	std::vector<CComPtr<IVideoDeviceInfo>>   m_collection;

public:

	CVideoDeviceInfoList()
	{
		ATLASSERT( 0 < VIDEO_DEVICE_INFO_LIST_MAX_SIZE && VIDEO_DEVICE_INFO_LIST_MAX_SIZE < INFINITE );
	}

	DECLARE_REGISTRY_RESOURCEID(IDR_VIDEODEVICEINFOLIST)


	BEGIN_COM_MAP(CVideoDeviceInfoList)
		COM_INTERFACE_ENTRY(IVideoDeviceInfoList)
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
	
	STDMETHOD     (Contains)        (IVideoDeviceInfo* deviceInfo, VARIANT_BOOL* out_result);
	
	STDMETHOD     (Add)             (IVideoDeviceInfo* deviceInfo, VARIANT_BOOL* out_result);
	
	STDMETHOD     (FindAt)          (LONG index, IVideoDeviceInfo** out_result);
	
	STDMETHOD     (RemoveAt)        (LONG index, VARIANT_BOOL* out_result);
	
	STDMETHOD     (Remove)          (IVideoDeviceInfo* deviceInfo, VARIANT_BOOL* out_result);
	
	STDMETHOD     (Clear)           (void);

};

OBJECT_ENTRY_AUTO(__uuidof(VideoDeviceInfoList), CVideoDeviceInfoList)
