#include "stdafx.h"
#include "MediaMonikerStore.h"


STDMETHODIMP CMediaMonikerStore::FindAll(IMediaMonikerList** out_result)
{
	if ( NULL == out_result )
	{
		return E_POINTER;
	}

	*out_result = NULL;

	CComPtr<IMediaMonikerList> monikers;

	HRESULT hr = monikers.CoCreateInstance( CLSID_MediaMonikerList );

	if ( FAILED( hr ) || NULL == monikers.p )
	{
		return E_OUTOFMEMORY;
	}

	hr = monikers.CopyTo( out_result );

	if ( FAILED( hr ) )
	{
		return E_ABORT;
	}

	CComPtr<ICreateDevEnum> deviceEnumerator;

	hr = deviceEnumerator.CoCreateInstance( CLSID_SystemDeviceEnum );

	if ( FAILED( hr ) || NULL == deviceEnumerator.p )
	{
		return S_FALSE;
	}

	CComPtr<IEnumMoniker> monikerEnumerator;

	hr = deviceEnumerator->CreateClassEnumerator( CLSID_VideoInputDeviceCategory , &monikerEnumerator.p , 0 );

	if ( FAILED( hr ) || NULL == deviceEnumerator.p )
	{
		return S_FALSE;
	}

	CComPtr<IMoniker> moniker;

	while ( S_OK == monikerEnumerator->Next( 1 , &moniker.p , NULL ) )
	{
		if ( NULL == moniker.p )
		{
			continue;
		}

		VARIANT_BOOL boolResult = VARIANT_FALSE;

		(void) monikers->Add( moniker , &boolResult );
	}

	return S_OK;
}


STDMETHODIMP CMediaMonikerStore::FindByName(BSTR deviceName, IMoniker** out_result)
{
	if ( NULL == out_result )
	{
		return E_POINTER;
	}

	*out_result = NULL;

	if ( NULL == deviceName )
	{
		return S_FALSE;
	}

	CComBSTR monikerName( deviceName );

	if ( NULL == monikerName.m_str || 0 >= monikerName.Length() )
	{
		return S_FALSE;
	}

	CComPtr<ICreateDevEnum> deviceEnumerator;

	HRESULT hr = deviceEnumerator.CoCreateInstance( CLSID_SystemDeviceEnum );

	if ( FAILED( hr ) || NULL == deviceEnumerator.p )
	{
		return S_FALSE;
	}

	CComPtr<IEnumMoniker> monikerEnumerator;

	hr = deviceEnumerator->CreateClassEnumerator( CLSID_VideoInputDeviceCategory , &monikerEnumerator.p , 0 );

	if ( FAILED( hr ) || NULL == deviceEnumerator.p )
	{
		return S_FALSE;
	}

	CComPtr<IMoniker> moniker;

	while ( S_OK == monikerEnumerator->Next( 1 , &moniker.p , NULL ) )
	{
		if ( NULL == moniker.p )
		{
			continue;
		}

		CComPtr<IPropertyBag> propertyBag;

		hr = moniker->BindToStorage( 0 , 0 , IID_PPV_ARGS( &propertyBag.p ) );

		if ( S_OK != hr )
		{
			continue;
		}

		CComVariant value;

		if ( S_OK != propertyBag->Read( L"FriendlyName" , &value , 0 ) )
		{
			continue;
		}
		
		if ( monikerName != value.bstrVal )
		{
			continue;
		}

		return moniker.CopyTo( out_result );
	}

	return S_FALSE;
}