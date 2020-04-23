#pragma once
#include "resource.h"
#include "VideoProvider_i.h"
#include "_IVideoChannelListEvents_CP.h"
#include <map>

#define VIDEO_CHANNEL_LIST_MAX_SIZE  1000

using namespace ATL;

class ATL_NO_VTABLE CVideoChannelList :
	public CComObjectRootEx<CComMultiThreadModel>,
	public CComCoClass<CVideoChannelList, &CLSID_VideoChannelList>,
	public IConnectionPointContainerImpl<CVideoChannelList>,
	public CProxy_IVideoChannelListEvents<CVideoChannelList>,
	public IDispatchImpl<IVideoChannelList, &IID_IVideoChannelList, &LIBID_VideoProviderLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{

private:
	
	CRITICAL_SECTION                           m_cs;
	
	std::map<CComBSTR,CComPtr<IVideoChannel>> m_collection;

	CComPtr<IVideoChannel>                    m_nullChannel;

public:

	CVideoChannelList()
	{
		ATLASSERT( (( 0 < VIDEO_CHANNEL_LIST_MAX_SIZE ) && ( VIDEO_CHANNEL_LIST_MAX_SIZE < INFINITE )) );
	}

	DECLARE_REGISTRY_RESOURCEID(IDR_VIDEOCHANNELLIST)

	BEGIN_COM_MAP(CVideoChannelList)
		COM_INTERFACE_ENTRY(IVideoChannelList)
		COM_INTERFACE_ENTRY(IDispatch)
		COM_INTERFACE_ENTRY(IConnectionPointContainer)
	END_COM_MAP()

	BEGIN_CONNECTION_POINT_MAP(CVideoChannelList)
		CONNECTION_POINT_ENTRY(__uuidof(_IVideoChannelListEvents))
	END_CONNECTION_POINT_MAP()

	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		::InitializeCriticalSection( &m_cs );

		(void) m_nullChannel.CoCreateInstance( CLSID_NullVideoChannel );

		return S_OK;
	}

	void FinalRelease()
	{
		(void) Clear();

		::DeleteCriticalSection( &m_cs );
	}

public:

	STDMETHOD     (get_Count)        (LONG* pVal);
	
	STDMETHOD     (get_IsEmpty)      (VARIANT_BOOL* pVal);
	
	STDMETHOD     (get_IsFull)       (VARIANT_BOOL* pVal);

	STDMETHOD     (Any)              (VARIANT_BOOL* out_result);
	
	STDMETHOD     (Contains)         (IVideoChannel* channel, VARIANT_BOOL* out_result);
	
	STDMETHOD     (Exists)           (BSTR uniqueID, VARIANT_BOOL* out_result);
	
	STDMETHOD     (Add)              (IVideoChannel* channel, VARIANT_BOOL* out_result);
	
	STDMETHOD     (FindByID)         (BSTR uniqueID, IVideoChannel** out_result);
	
	STDMETHOD     (FindAt)           (LONG index, IVideoChannel** out_result);
	
	STDMETHOD     (GetByID)          (BSTR uniqueID, IVideoChannel** out_result);
	
	STDMETHOD     (GetAt)            (LONG index, IVideoChannel** out_result);
	
	STDMETHOD     (Remove)           (IVideoChannel* channel, VARIANT_BOOL* out_result);
	
	STDMETHOD     (RemoveByID)       (BSTR uniqueID, VARIANT_BOOL* out_result);
	
	STDMETHOD     (RemoveAt)         (LONG index, VARIANT_BOOL* out_result);
	
	STDMETHOD     (Clear)            (void);

};

OBJECT_ENTRY_AUTO(__uuidof(VideoChannelList), CVideoChannelList)
