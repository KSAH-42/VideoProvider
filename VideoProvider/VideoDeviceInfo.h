#pragma once
#include "resource.h"
#include "VideoProvider_i.h"

using namespace ATL;

class ATL_NO_VTABLE CVideoDeviceInfo :
	public CComObjectRootEx<CComMultiThreadModel>,
	public CComCoClass<CVideoDeviceInfo, &CLSID_VideoDeviceInfo>,
	public IDispatchImpl<IVideoDeviceInfo, &IID_IVideoDeviceInfo, &LIBID_VideoProviderLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
private:

	CRITICAL_SECTION        m_cs;

	CComBSTR               m_name;
	CComBSTR               m_description;
	CComBSTR               m_path;

public:
	CVideoDeviceInfo()
		: m_name         ( L"" )
		, m_description  ( L"" )
		, m_path         ( L"" )
	{
	}

	DECLARE_REGISTRY_RESOURCEID(IDR_VIDEODEVICEINFO)

	BEGIN_COM_MAP(CVideoDeviceInfo)
		COM_INTERFACE_ENTRY(IVideoDeviceInfo)
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
		::DeleteCriticalSection( &m_cs );
	}

public:

	STDMETHOD    (get_Name)          (BSTR* pVal);
	
	STDMETHOD    (put_Name)          (BSTR newVal);
	
	STDMETHOD    (get_Description)   (BSTR* pVal);
	
	STDMETHOD    (put_Description)   (BSTR newVal);
	
	STDMETHOD    (get_Path)          (BSTR* pVal);
	
	STDMETHOD    (put_Path)          (BSTR newVal);
	
	STDMETHOD    (Validate)          (VARIANT_BOOL* out_result);

};

OBJECT_ENTRY_AUTO(__uuidof(VideoDeviceInfo), CVideoDeviceInfo)
