#include "stdafx.h"
#include "FrameBuffer.h"


STDMETHODIMP CFrameBuffer::get_Limit(LONG* pVal)
{
	// TODO: Add your implementation code here

	return S_OK;
}


STDMETHODIMP CFrameBuffer::put_Limit(LONG newVal)
{
	// TODO: Add your implementation code here

	return S_OK;
}


STDMETHODIMP CFrameBuffer::get_Size(LONG* pVal)
{
	// TODO: Add your implementation code here

	return S_OK;
}


STDMETHODIMP CFrameBuffer::get_IsEmpty(VARIANT_BOOL* pVal)
{
	// TODO: Add your implementation code here

	return S_OK;
}


STDMETHODIMP CFrameBuffer::Read(IFrame** out_result)
{
	// TODO: Add your implementation code here

	return S_OK;
}


STDMETHODIMP CFrameBuffer::Write(IFrame* frame, VARIANT_BOOL* out_result)
{
	// TODO: Add your implementation code here

	return S_OK;
}


STDMETHODIMP CFrameBuffer::Clear(void)
{
	// TODO: Add your implementation code here

	return S_OK;
}


STDMETHODIMP CFrameBuffer::Synchronize(ULONG timeout, ULONG cancelationHandle, VARIANT_BOOL* out_result)
{
	// TODO: Add your implementation code here

	return S_OK;
}