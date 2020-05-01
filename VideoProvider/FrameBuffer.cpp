#include "stdafx.h"
#include "FrameBuffer.h"


STDMETHODIMP CFrameBuffer::get_CanWrite(VARIANT_BOOL* pVal)
{
	if ( NULL == pVal )
	{
		return E_POINTER;
	}

	CCritSecLock lock( m_cs );

	*pVal = m_canWrite;

	return S_OK;
}


STDMETHODIMP CFrameBuffer::put_CanWrite(VARIANT_BOOL newVal)
{
	CCritSecLock lock( m_cs );

	m_canWrite = newVal;

	return S_OK;
}


STDMETHODIMP CFrameBuffer::get_Limit(LONG* pVal)
{
	if ( NULL == pVal )
	{
		return E_POINTER;
	}

	CCritSecLock lock( m_cs );

	*pVal = m_limit;

	return S_OK;
}


STDMETHODIMP CFrameBuffer::put_Limit(LONG newVal)
{
	CCritSecLock lock( m_cs );

	m_limit = newVal;

	if ( 0 > m_limit )
	{
		m_limit = 0;
	}

	if ( FRAME_BUFFER_MAX_SIZE < m_limit )
	{
		m_limit = FRAME_BUFFER_MAX_SIZE;
	}

	return S_OK;
}


STDMETHODIMP CFrameBuffer::get_Size(LONG* pVal)
{
	if ( NULL == pVal )
	{
		return E_POINTER;
	}

	CCritSecLock lock( m_cs );

	*pVal = (LONG) m_queue.size();

	return S_OK;
}


STDMETHODIMP CFrameBuffer::get_IsEmpty(VARIANT_BOOL* pVal)
{
	if ( NULL == pVal )
	{
		return E_POINTER;
	}

	CCritSecLock lock( m_cs );

	if ( m_queue.empty() )
	{
		*pVal = VARIANT_TRUE;
	}
	else
	{
		*pVal = VARIANT_FALSE;
	}

	return S_OK;
}


STDMETHODIMP CFrameBuffer::get_IsFull(VARIANT_BOOL* pVal)
{
	if ( NULL == pVal )
	{
		return E_POINTER;
	}

	CCritSecLock lock( m_cs );

	if ( m_limit <= (LONG) m_queue.size() )
	{
		*pVal = VARIANT_TRUE;
	}
	else
	{
		*pVal = VARIANT_FALSE;
	}

	return S_OK;
}


STDMETHODIMP CFrameBuffer::Read(IFrame** out_result)
{
	if ( NULL == out_result )
	{
		return E_POINTER;
	}

	*out_result = NULL;

	CCritSecLock lock( m_cs );

	CComPtr<IFrame> frame;

	if ( ! m_queue.empty() )
	{
		frame = m_queue.back();

		m_queue.pop_back();
	}
	
	if ( NULL != m_handle )
	{
		if ( m_queue.empty() )
		{
			ResetEvent( m_handle );
		}
	}

	return frame.CopyTo( out_result );
}


STDMETHODIMP CFrameBuffer::Write(IFrame* frame, VARIANT_BOOL* out_result)
{
	if ( NULL == out_result )
	{
		return E_POINTER;
	}

	*out_result = VARIANT_FALSE;

	if ( NULL == frame )
	{
		return E_INVALIDARG;
	}

	CComPtr<IFrame> spFrame( frame );

	if ( NULL == spFrame.p )
	{
		return E_ABORT;
	}

	CCritSecLock lock( m_cs );

	if ( ! m_canWrite )
	{
		return S_OK;
	}

	while ( m_limit <= (LONG) m_queue.size() )
	{
		m_queue.pop_front();
	}

	if ( 0 < m_limit )
	{
		m_queue.push_back( spFrame );
	
		if ( NULL != m_handle )
		{
			SetEvent( m_handle );
		}

		*out_result = VARIANT_TRUE;
	}
	
	return S_OK;
}


STDMETHODIMP CFrameBuffer::Clear(void)
{
	CCritSecLock lock( m_cs );

	m_queue.clear();

	if ( NULL != m_handle )
	{
		ResetEvent( m_handle );
	}

	return S_OK;
}


STDMETHODIMP CFrameBuffer::Synchronize(ULONG timeout, ULONG cancelationHandle, VARIANT_BOOL* out_result)
{
	if ( NULL == out_result )
	{
		return E_POINTER;
	}

	*out_result = VARIANT_FALSE;

	if ( NULL == m_handle )
	{
		return S_OK;
	}

	if ( NULL == cancelationHandle )
	{
		if ( WAIT_OBJECT_0 == ::WaitForSingleObject( m_handle , (DWORD) timeout ) )
		{
			*out_result = VARIANT_TRUE;
		}
	}
	else
	{
		HANDLE handles[ 2 ] = { (HANDLE) cancelationHandle , m_handle };

		if ( (WAIT_OBJECT_0 + 1) == ::WaitForMultipleObjects( 2 , handles , FALSE , timeout ) )
		{
			*out_result = VARIANT_TRUE;
		}
	}

	return S_OK;
}
