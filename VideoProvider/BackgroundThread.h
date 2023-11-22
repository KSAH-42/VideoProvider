#pragma once
#include "resource.h"
#include "VideoProvider_i.h"



using namespace ATL;


class ATL_NO_VTABLE CBackgroundThread :
	public CComObjectRootEx<CComMultiThreadModel>,
	public CComCoClass<CBackgroundThread, &CLSID_BackgroundThread>,
	public IDispatchImpl<IBackgroundThread, &IID_IBackgroundThread, &LIBID_VideoProviderLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{

private:

	DWORD		m_identifer;
	HANDLE		m_hHandle;
	HANDLE		m_hExit;

public:
	CBackgroundThread()
		:m_identifer( 0 )
		,m_hHandle( NULL )
		,m_hExit( NULL )
	{
	}

	DECLARE_REGISTRY_RESOURCEID(IDR_BACKGROUNDTHREAD)

	BEGIN_COM_MAP(CBackgroundThread)
		COM_INTERFACE_ENTRY(IBackgroundThread)
		COM_INTERFACE_ENTRY(IDispatch)
	END_COM_MAP()

	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		m_hExit = ::CreateEvent( NULL , TRUE , FALSE , NULL );

		return S_OK;
	}

	void FinalRelease()
	{
		(void) this->Stop();

		if ( NULL != m_hExit )
		{
			(void)::CloseHandle( m_hExit );

			m_hExit = NULL;
		}
	}

public:

	STDMETHOD   (get_Handle)          (ULONG* pVal  );
	
	STDMETHOD   (get_HandleEventExit) (ULONG* pVal );
	
	STDMETHOD   (get_Identifier)      (ULONG* pVal );
	
	STDMETHOD   (IsStarted)           (VARIANT_BOOL* out_result);
	
	STDMETHOD   (IsAlive)             (VARIANT_BOOL* out_result );
	
	STDMETHOD   (Start)               (void* lpRoutine, void* lpRoutineArg, VARIANT_BOOL* out_result );
	
	STDMETHOD   (Stop)                ();
	
	STDMETHOD   (CanContinue)         (ULONG ulTimeout, VARIANT_BOOL* out_result );

	STDMETHOD   (PumpEvents)          ();

};

OBJECT_ENTRY_AUTO(__uuidof(BackgroundThread), CBackgroundThread)
