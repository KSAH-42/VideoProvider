#include "stdafx.h"
#include "NullVideoChannel.h"


STDMETHODIMP CNullVideoChannel::get_Type(VIDEO_CHANNEL_TYPES* pVal)
{
	if ( NULL == pVal )
	{
		return E_POINTER;
	}

	*pVal = VIDEO_CHANNEL_UNKWNOWN;

	return S_OK;
}


STDMETHODIMP CNullVideoChannel::get_UniqueID(BSTR* pVal)
{
	if ( NULL == pVal )
	{
		return E_POINTER;
	}

	return CComBSTR( L"" ).CopyTo( pVal );
}


STDMETHODIMP CNullVideoChannel::get_Buffer(IFrameBuffer** pVal )
{
	if ( NULL == pVal )
	{
		return E_POINTER;
	}
	
	*pVal = NULL;

	if ( NULL == m_buffer.p )
	{
		return S_FALSE;
	}

	return m_buffer.CopyTo( pVal );
}


STDMETHODIMP CNullVideoChannel::IsStarted( VARIANT_BOOL* out_result )
{
	if ( NULL == out_result )
	{
		return E_POINTER;
	}

	*out_result = VARIANT_FALSE;

	return S_OK;
}


STDMETHODIMP CNullVideoChannel::Start( VARIANT_BOOL* out_result )
{
	if ( NULL == out_result )
	{
		return E_POINTER;
	}

	*out_result = VARIANT_FALSE;

	return S_OK;
}


STDMETHODIMP CNullVideoChannel::Stop()
{
	return S_OK;
}