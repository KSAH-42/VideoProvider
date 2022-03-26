#include "stdafx.h"
#include "BackgroundThread.h"

// To start a thread I prefered to used Win32 OS function instead of using the STL, even I used some STL class (containers) in this project in different places.
// For me, the major reseaon is because, Win32 functions for threading are much more better, Win32 is more flexible than STL thread
// For instance it is actually not possible to suspend, resume a thread using the actual STL implementation
// And many other people say, that is a small wrapper around OS functions or POSIX thread api.
// I don't use also a boolean flag to stop the thread, I used a sync object like the Event handle to stop a thread
// For more details, I strongly recommends to read the Jeffrey Richter book's from microsoft press. It is an old books
// but it is really interesting to read.
// Just to complete my answer against the STL thread:
// You can have many benefits if you are using the Event handle to stop a thread, for instance, it is possible to introduce
// a stop method that take a timeout argument used to avoid a blocking call on the calling thread
// You can implement a similar pattern used in the .Net framework represented by the IAsyncResult where behind the class which 
// implement this interface, you will problably discovered an internal event handle object perhaps a EventWaitHandle

// You will notice some statement written like this: if ( true == myBool { doSomething(); } where the constant is located at the left
// I don't do this in C#, and even in C++ I am not a great fan to used this stylistic approach but it is possible to produce compilation error on the following 
// that used a single equal operator:  if ( myBool = true )

STDMETHODIMP CBackgroundThread::get_Handle(ULONG* pVal)
{
	if ( NULL == pVal )
	{
		return E_POINTER;
	}

	*pVal = (ULONG) this->m_hHandle;
	
	return S_OK;
}


STDMETHODIMP CBackgroundThread::get_HandleEventExit(ULONG* pVal)
{
	if ( NULL == pVal )
	{
		return E_POINTER;
	}

	*pVal = (ULONG) this->m_hExit;

	return S_OK;
}


STDMETHODIMP CBackgroundThread::get_Identifier(ULONG* pVal)
{
	if ( NULL == pVal )
	{
		return E_POINTER;
	}

	*pVal = 0;

	if ( NULL == this->m_hHandle || NULL == this->m_hExit )
	{
		return S_OK;
	}
	 
	*pVal = this->m_identifer;

	return S_OK;
}


STDMETHODIMP CBackgroundThread::IsStarted(VARIANT_BOOL* out_result)
{
	if ( NULL == out_result )
	{
		return E_POINTER;
	}

	*out_result = ( NULL != this->m_hHandle ) ? VARIANT_TRUE : VARIANT_FALSE;

	return S_OK;
}


STDMETHODIMP CBackgroundThread::IsAlive(VARIANT_BOOL* out_result)
{
	if ( NULL == out_result )
	{
		return E_POINTER;
	}

	*out_result = VARIANT_FALSE;

	if ( NULL == this->m_hHandle )
	{
		return S_OK;
	}
		
	DWORD dwResult = 0;

	if ( ! GetExitCodeThread( this->m_hHandle , &dwResult ) )
	{
		return S_OK;
	}
			
	if ( STILL_ACTIVE != dwResult )
	{
		return S_OK;
	}
				
	*out_result = VARIANT_TRUE;

	return S_OK;
}


STDMETHODIMP CBackgroundThread::Start(void* lpRoutine, void* lpRoutineArg, VARIANT_BOOL* out_result)
{
	if ( NULL == out_result )
	{
		return E_POINTER;
	}

	*out_result = VARIANT_FALSE;

	if ( NULL == lpRoutine )
	{
		return E_INVALIDARG;
	}

	if ( NULL != this->m_hHandle )
	{
		return S_OK;
	}
		
	this->m_identifer = 0;

	if ( NULL == m_hExit )
	{
		return S_FALSE;
	}
		
	if ( TRUE != ::ResetEvent( this->m_hExit ) )
	{
		return S_FALSE;
	}
	
	this->m_hHandle = ::CreateThread( NULL , 0 , (LPTHREAD_START_ROUTINE) lpRoutine , lpRoutineArg , 0 , &this->m_identifer );

	if ( NULL == this->m_hHandle )
	{
		this->m_identifer = 0;

		return S_FALSE;
	}
	
	*out_result = VARIANT_TRUE;

	return S_OK;
}


STDMETHODIMP CBackgroundThread::Stop()
{
	if ( NULL == m_hHandle )
	{
		return S_OK;
	}

	bool success = false;

	if ( NULL != this->m_hExit )
	{
		if ( TRUE == ::SetEvent( this->m_hExit ) )
		{
			if ( WAIT_OBJECT_0 == ::WaitForSingleObject( this->m_hHandle , INFINITE ) )
			{
				success = true;
			}
		}

		ResetEvent( this->m_hExit );
	}

	if ( ! success )
	{
		TerminateThread( this->m_hHandle , 1 );
	}

	CloseHandle( this->m_hHandle );

	this->m_hHandle	    = NULL;
	this->m_identifer	= 0;

	return S_OK;
}


STDMETHODIMP CBackgroundThread::CanContinue(ULONG ulTimeout, VARIANT_BOOL* out_result)
{
	if ( NULL == out_result )
	{
		return E_POINTER;
	}

	*out_result = VARIANT_FALSE;
	
	if ( NULL == this->m_hHandle || NULL == this->m_hExit )
	{
		return S_OK;
	}
			
	if ( WAIT_TIMEOUT != ::WaitForSingleObject( this->m_hExit , ulTimeout ) )
	{
		return S_OK;
	}
	
	*out_result = VARIANT_TRUE;

	return S_OK;
}


// Mimic the STA message pump
STDMETHODIMP CBackgroundThread::PumpEvents()
{
	MSG msg = { 0 };
	
	while ( TRUE == PeekMessage( &msg , NULL , 0 , 0 , PM_REMOVE ) )
	{
		DispatchMessageW( &msg );
		TranslateMessage( &msg );
	}

	return S_OK;
}
