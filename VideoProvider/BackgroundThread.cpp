#include "stdafx.h"
#include "BackgroundThread.h"


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

	if ( ! ::GetExitCodeThread( this->m_hHandle , &dwResult ) )
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

		(void) ::ResetEvent( this->m_hExit );
	}

	if ( ! success )
	{
		(void) ::TerminateThread( this->m_hHandle , 1 );
	}

	(void) ::CloseHandle( this->m_hHandle );

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
	
	while ( TRUE == ::PeekMessage( &msg , NULL , 0 , 0 , PM_REMOVE ) )
	{
		(void)::DispatchMessageW( &msg );
		(void)::TranslateMessage( &msg );
	}

	return S_OK;
}