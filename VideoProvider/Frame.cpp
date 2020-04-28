#include "stdafx.h"
#include "Frame.h"

/*
Some part of this class can be optimized
*/

STDMETHODIMP CFrame::get_Size(LONG* pVal)
{
	if ( NULL == pVal )
	{
		return E_POINTER;
	}

	*pVal = 0;

	CCritSecLock lock( m_cs );

	if ( NULL == m_data || 0 >= m_size )
	{
		return S_OK;
	}

	*pVal = m_size;

	return S_OK;
}


STDMETHODIMP CFrame::get_IsEmpty(VARIANT_BOOL* pVal)
{
	if ( NULL == pVal )
	{
		return E_POINTER;
	}

	*pVal = VARIANT_FALSE;

	CCritSecLock lock( m_cs );

	if ( NULL == m_data || 0 >= m_size )
	{
		return S_FALSE;
	}

	*pVal = VARIANT_TRUE;

	return S_OK;
}


STDMETHODIMP CFrame::get_Values(BYTE** pVal)
{
	if ( NULL == pVal )
	{
		return E_POINTER;
	}

	*pVal = NULL;

	CCritSecLock lock( m_cs );

	if ( NULL == m_data || 0 >= m_size )
	{
		return S_OK;
	}

	*pVal = m_data;

	return S_OK;
}


STDMETHODIMP CFrame::IsCreated( VARIANT_BOOL* out_result )
{
	if ( NULL == out_result )
	{
		return E_POINTER;
	}

	*out_result = VARIANT_FALSE;

	CCritSecLock lock( m_cs );

	if ( NULL == m_data || 0 >= m_size )
	{
		return S_OK;
	}

	*out_result = VARIANT_TRUE;

	return S_OK;
}


STDMETHODIMP CFrame::Create( LONG size , VARIANT_BOOL initToZero , VARIANT_BOOL* out_result )
{
	if ( NULL == out_result )
	{
		return E_POINTER;
	}
	
	*out_result = VARIANT_FALSE;

	if ( 0 >= size || size == INFINITE )
	{
		return S_FALSE;
	}

	CCritSecLock lock( m_cs );

	if ( NULL != m_data || 0 < m_size )
	{
		return S_FALSE;
	}

	BYTE* pBuffer = NULL;
		
	if ( initToZero )
	{
		pBuffer = (BYTE*) ::calloc( size , sizeof( BYTE ) );
	}
	else
	{
		pBuffer = (BYTE*) ::malloc( size );
	}		

	if ( NULL == pBuffer )
	{
		return S_FALSE;
	}

	m_data = pBuffer;
	m_size = size;

	*out_result = VARIANT_TRUE;

	return S_OK;
}


STDMETHODIMP CFrame::CopyFrom( BYTE* values , LONG size , VARIANT_BOOL* out_result )
{
	if ( NULL == out_result )
	{
		return E_POINTER;
	}

	*out_result = VARIANT_FALSE;

	if ( NULL == values || 0 >= size )
	{
		return S_OK; // should be E_INVALIDARG
	}

	CCritSecLock lock( m_cs );

	if ( NULL == m_data )
	{
		m_data = (BYTE*) ::malloc( size );

		if ( NULL != m_data )
		{
			m_size = size;
		}
	}

	if ( NULL == m_data || 0 >= m_size )
	{
		return S_FALSE; // should be E_ABORT
	}

	LONG realSize = m_size;

	if ( size < m_size )
	{
		realSize = size;
	}

	memcpy( (void*) m_data , (void*) values , realSize ); 

	return S_OK;
}


STDMETHODIMP CFrame::GetAt( LONG index , BYTE* out_result )
{
	if ( NULL == out_result )
	{
		return E_POINTER;
	}

	*out_result = 0;

	CCritSecLock lock( m_cs );

	if ( NULL == m_data )
	{
		return S_FALSE;
	}

	if ( ! (( 0 <= index ) && ( index < m_size )) )
	{
		return S_FALSE;
	}

	*out_result = m_data[ index ];

	return S_OK;
}


STDMETHODIMP CFrame::SetAt( LONG index , BYTE value , VARIANT_BOOL* out_result )
{
	if ( NULL == out_result )
	{
		return E_POINTER;
	}

	*out_result = VARIANT_FALSE;

	CCritSecLock lock( m_cs );

	if ( NULL == m_data )
	{
		return S_FALSE;
	}

	if ( ! (( 0 <= index ) && ( index < m_size )) )
	{
		return S_FALSE;
	}

	m_data[ index ] = value;

	*out_result = VARIANT_TRUE;

	return S_OK;;
}


STDMETHODIMP CFrame::Clear()
{
	CCritSecLock lock( m_cs );

	if ( NULL == m_data || 0 >= m_size )
	{
		return S_FALSE;
	}

	memset( (void*) m_data , 0 , m_size );

	return S_OK;
}


STDMETHODIMP CFrame::Destroy()
{
	CCritSecLock lock( m_cs );

	if ( NULL != m_data )
	{
		free( m_data );
		m_data = NULL;
	}

	m_size = 0;

	return S_OK;
}