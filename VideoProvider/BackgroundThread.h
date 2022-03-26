#pragma once
#include "resource.h"
#include "VideoProvider_i.h"

// To start a thread I prefered to used Win32 OS function instead of using the STL, even I used some STL class (containers) in this project in different places.
// For me, the major reseaon is because, Win32 functions for threading are much more better, Win32 is more flexible than STL thread
// For instance it is actually not possible to suspend, resume a thread using the actual STL implementation
// And many other people say, t<hat is a small wrapper around OS functions or POSIX thread api.
// I don't use also a boolean flag to stop the thread, I used a sync object like the Event handle to stop a thread
// For more details, I strongly recommends to read the Jeffrey Richter book's from microsoft press. It is an old books
// but it is really interesting to read.
// Just to complete my answer against the STL thread:
// You can have many benefits if you are using the Event handle to stop a thread, for instance, it is possible to introduce
// a stop method that take a timeout argument used to avoid a blocking call on the calling thread
// You can implement a similar pattern used in the .Net framework represented by the IAsyncResult where the behind the class which 
// implement this interface, you will problably discovered an internal event handle object perhaps a EventWaitHandle

// you will notice some statement written like this: if ( true == myBool { doSomething(); } where the constant is located at the left
// I don't do this in C#, and even in C++ I am not a great fan to used this stylistic approach but it is possible to produce compilation error on the following 
// that used a single equal operator:  if ( myBool = true )



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
