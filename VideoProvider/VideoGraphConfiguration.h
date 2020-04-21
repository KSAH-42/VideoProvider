#pragma once
#include "resource.h"
#include "VideoProvider_i.h"

using namespace ATL;

class ATL_NO_VTABLE CVideoGraphConfiguration :
	public CComObjectRootEx<CComMultiThreadModel>,
	public CComCoClass<CVideoGraphConfiguration, &CLSID_VideoGraphConfiguration>,
	public IDispatchImpl<IVideoGraphConfiguration, &IID_IVideoGraphConfiguration, &LIBID_VideoProviderLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
	CRITICAL_SECTION            m_cs;
	
	OLE_HANDLE                  m_window;
	VARIANT_BOOL                m_useGrabber;
	CComBSTR                    m_formatID;
	CComBSTR                    m_deviceName;
	CComBSTR                    m_fileSource;

public:
	CVideoGraphConfiguration()
		: m_window     ( NULL )
		, m_useGrabber ( VARIANT_FALSE )
	    , m_formatID   ( L""  )
		, m_deviceName ( L""  )
		, m_fileSource ( L""  )
	{
	}

	DECLARE_REGISTRY_RESOURCEID(IDR_VIDEOGRAPHCONFIGURATION)

	BEGIN_COM_MAP(CVideoGraphConfiguration)
		COM_INTERFACE_ENTRY(IVideoGraphConfiguration)
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

	STDMETHOD     (get_Window)       (OLE_HANDLE* pVal);
	
	STDMETHOD     (put_Window)       (OLE_HANDLE newVal);
	
	STDMETHOD     (get_UseGrabber)   (VARIANT_BOOL* pVal);
	
	STDMETHOD     (put_UseGrabber)   (VARIANT_BOOL newVal);
	
	STDMETHOD     (get_FormatID)     (BSTR* pVal);
	
	STDMETHOD     (put_FormatID)     (BSTR newVal);
	
	STDMETHOD     (get_DeviceName)   (BSTR* pVal);
	
	STDMETHOD     (put_DeviceName)   (BSTR newVal);
	
	STDMETHOD     (get_FileSource)   (BSTR* pVal);
	
	STDMETHOD     (put_FileSource)   (BSTR newVal);
	
	STDMETHOD     (Reset)            (void);

};

OBJECT_ENTRY_AUTO(__uuidof(VideoGraphConfiguration), CVideoGraphConfiguration)
