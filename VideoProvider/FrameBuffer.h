#pragma once
#include "resource.h"
#include "VideoProvider_i.h"
#include <deque>

#define FRAME_BUFFER_MAX_SIZE       80

using namespace ATL;

class ATL_NO_VTABLE CFrameBuffer :
	public CComObjectRootEx<CComMultiThreadModel>,
	public CComCoClass<CFrameBuffer, &CLSID_FrameBuffer>,
	public IDispatchImpl<IFrameBuffer, &IID_IFrameBuffer, &LIBID_VideoProviderLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{

private:

	CRITICAL_SECTION                 m_cs;

	std::deque<CComPtr<IFrame>>      m_queue;

	VARIANT_BOOL                     m_canWrite;
	LONG                             m_limit;
	HANDLE                           m_handle;


public:

	CFrameBuffer()
		: m_limit     ( FRAME_BUFFER_MAX_SIZE )
		, m_canWrite  ( VARIANT_FALSE         )
		, m_handle    ( NULL                  )
	{
		ATLASSERT( (( 0 < FRAME_BUFFER_MAX_SIZE ) && ( FRAME_BUFFER_MAX_SIZE < INFINITE )) );
	}

	DECLARE_REGISTRY_RESOURCEID(IDR_FRAMEBUFFER)

	BEGIN_COM_MAP(CFrameBuffer)
		COM_INTERFACE_ENTRY(IFrameBuffer)
		COM_INTERFACE_ENTRY(IDispatch)
	END_COM_MAP()

    DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		::InitializeCriticalSection( &m_cs );

		m_handle = ::CreateEvent( NULL , TRUE , FALSE , NULL );

		return S_OK;
	}

	void FinalRelease()
	{
		(void) Clear();

		if ( NULL != m_handle )
		{
			::CloseHandle( m_handle );
			m_handle = NULL;
		}

		::DeleteCriticalSection( &m_cs );
	}

public:
	
	STDMETHOD    (get_CanWrite)     (VARIANT_BOOL* pVal);
	
	STDMETHOD    (put_CanWrite)     (VARIANT_BOOL newVal);

	STDMETHOD    (get_Limit)        (LONG* pVal);
	
	STDMETHOD    (put_Limit)        (LONG newVal);
	
	STDMETHOD    (get_Size)         (LONG* pVal);
	
	STDMETHOD    (get_IsEmpty)      (VARIANT_BOOL* pVal);

	STDMETHOD    (get_IsFull)       (VARIANT_BOOL* pVal);
	
	STDMETHOD    (Read)             (IFrame** out_result);
	
	STDMETHOD    (Write)            (IFrame* frame, VARIANT_BOOL* out_result);
	
	STDMETHOD    (Clear)            (void);
	
	STDMETHOD    (Synchronize)      (ULONG timeout, ULONG cancelationHandle, VARIANT_BOOL* out_result);

};

OBJECT_ENTRY_AUTO(__uuidof(FrameBuffer), CFrameBuffer)
