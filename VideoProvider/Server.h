#pragma once
#include "resource.h"
#include "VideoProvider_i.h"
#include "_IServerEvents_CP.h"

using namespace ATL;

class ATL_NO_VTABLE CServer :
	public CComObjectRootEx<CComMultiThreadModel>,
	public CComCoClass<CServer, &CLSID_Server>,
	public IConnectionPointContainerImpl<CServer>,
	public CProxy_IServerEvents<CServer>,
	public IDispatchImpl<IServer, &IID_IServer, &LIBID_VideoProviderLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{

private:

	CComPtr<IBackgroundThread>      m_thread;

	CComPtr<ISettingList>           m_settings;
	CComPtr<IVideoChannelList>      m_channels;
	CComPtr<IServiceList>           m_services;

public:

	CServer()
	{
	}

	DECLARE_REGISTRY_RESOURCEID(IDR_SERVER)

	BEGIN_COM_MAP(CServer)
		COM_INTERFACE_ENTRY(IServer)
		COM_INTERFACE_ENTRY(IDispatch)
		COM_INTERFACE_ENTRY(IConnectionPointContainer)
	END_COM_MAP()

	BEGIN_CONNECTION_POINT_MAP(CServer)
		CONNECTION_POINT_ENTRY(__uuidof(_IServerEvents))
	END_CONNECTION_POINT_MAP()


	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		HRESULT hr = E_FAIL;

		hr = m_thread.CoCreateInstance( CLSID_BackgroundThread );

		if ( S_OK != hr || NULL == m_thread.p )
		{
			return E_FAIL;
		}

		hr = m_settings.CoCreateInstance( CLSID_SettingList );

		if ( S_OK != hr || NULL == m_settings.p )
		{
			return E_FAIL;
		}

		hr = m_channels.CoCreateInstance( CLSID_VideoChannelList );

		if ( S_OK != hr || NULL == m_channels.p )
		{
			return E_FAIL;
		}

		hr = m_services.CoCreateInstance( CLSID_ServiceList );

		if ( S_OK != hr || NULL == m_services.p )
		{
			return E_FAIL;
		}

		return S_OK;
	}

	void FinalRelease()
	{
		(void) this->Shutdown();
	}

public:

	STDMETHOD    (get_Settings)        (ISettingList** pVal);
	
	STDMETHOD    (get_Channels)        (IVideoChannelList** pVal);
	
	STDMETHOD    (get_Services)        (IServiceList** pVal);
	
	STDMETHOD    (IsRunning)           (VARIANT_BOOL* out_result);
	
	STDMETHOD    (Run)                 (VARIANT_BOOL* out_result);
	
	STDMETHOD    (Shutdown)            (void);

};

OBJECT_ENTRY_AUTO(__uuidof(Server), CServer)
