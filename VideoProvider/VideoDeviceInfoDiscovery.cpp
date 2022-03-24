#include "stdafx.h"
#include "VideoDeviceInfoDiscovery.h"


STDMETHODIMP CVideoDeviceInfoDiscovery::SearchDevices(IVideoDeviceInfoList** out_result)
{
	if ( NULL == out_result )
	{
		return E_POINTER;
	}

	*out_result = NULL;

	CComPtr<IVideoDeviceInfoList> devices;

	HRESULT hr = devices.CoCreateInstance( CLSID_VideoDeviceInfoList );

	if ( S_OK != hr || NULL == devices.p )
	{
		return E_FAIL;
	}

	hr = devices.CopyTo( out_result );

	if ( S_OK != hr)
	{
		return E_FAIL;
	}
	
	CComPtr<IMediaMonikerStore> monikerStore;

	hr = monikerStore.CoCreateInstance( CLSID_MediaMonikerStore );

	if ( S_OK != hr || NULL == monikerStore.p )
	{
		return S_FALSE;
	}

	CComPtr<IMediaMonikerList> monikerList;

	hr = monikerStore->FindAll( &monikerList.p );
	
	if ( S_OK != hr || NULL == monikerList.p )
	{
		return S_FALSE;
	}

	CComPtr<IVideoDeviceInfoAdapter> deviceAdapter;

	hr = deviceAdapter.CoCreateInstance( CLSID_VideoDeviceInfoAdapter );

	if ( S_OK != hr || NULL == deviceAdapter.p )
	{
		return S_FALSE;
	}
	
	LONG numberOfMonikers = 0;

	hr = monikerList->get_Count( &numberOfMonikers );

	if ( S_OK != hr )
	{
		return S_FALSE;
	}
	
	for ( LONG index = 0 ; index < numberOfMonikers ; ++ index )
	{
		CComPtr<IMoniker> moniker;

		hr = monikerList->FindAt( index , &moniker.p );

		if ( S_OK != hr || NULL == moniker.p )
		{
			continue;
		}

		CComPtr<IVideoDeviceInfo> device;

		hr = deviceAdapter->Adapt( moniker , &device.p );

		if ( S_OK != hr || NULL == device.p )
		{
			continue;
		}

		VARIANT_BOOL boolResult = VARIANT_FALSE;

		devices->Add( device , &boolResult );
	}

	return S_OK;
}
