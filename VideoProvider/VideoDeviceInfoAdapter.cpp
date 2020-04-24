#include "stdafx.h"
#include "VideoDeviceInfoAdapter.h"


STDMETHODIMP CVideoDeviceInfoAdapter::Adapt(IMoniker* moniker, IVideoDeviceInfo** out_result)
{
	if ( NULL == out_result )
	{
		return S_FALSE;
	}

	*out_result = NULL;

	if ( NULL == moniker )
	{
		return S_FALSE;
	}

	CComPtr<IVideoDeviceInfo> deviceInfo;

	HRESULT hr = deviceInfo.CoCreateInstance( CLSID_VideoDeviceInfo );

	if ( FAILED( hr ) || NULL == deviceInfo.p )
	{
		return E_OUTOFMEMORY;
	}

	CComPtr<IPropertyBag> propertyBag;

	hr = moniker->BindToStorage( 0 , 0 , IID_PPV_ARGS( &propertyBag.p ) );

	if ( S_OK != hr )
	{
		return S_FALSE;
	}

	CComVariant value;

	if ( S_OK == propertyBag->Read( L"FriendlyName" , &value , 0 ) )
	{
		deviceInfo->put_Name( value.bstrVal );
	}
	
	value.Clear();

	if ( S_OK == propertyBag->Read( L"Description" , &value , 0 ) )
	{
		deviceInfo->put_Description( value.bstrVal );
	}

	value.Clear();

	if ( S_OK == propertyBag->Read( L"DevicePath" , &value , 0 ) )
	{
		deviceInfo->put_Path( value.bstrVal );
	}

	return deviceInfo.CopyTo( out_result );
}
