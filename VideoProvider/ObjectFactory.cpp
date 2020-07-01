#include "stdafx.h"
#include "ObjectFactory.h"


STDMETHODIMP CObjectFactory::CreateObject( GUID classID , IDispatch** out_result )
{
	*out_result = NULL;

	if ( CLSID_NULL == classID )
	{
		return E_INVALIDARG;
	}

	CComPtr<IDispatch> object;

	HRESULT hr = object.CoCreateInstance( classID );

	if ( FAILED( hr ) || NULL == object.p )
	{
		return E_FAIL;
	}

	return object.CopyTo( out_result );;
}


STDMETHODIMP CObjectFactory::CreateObjectByID( GUID classID , BSTR uniqueID , IDispatch** out_result )
{
	*out_result = NULL;

	if ( CLSID_NULL == classID )
	{
		return E_INVALIDARG;
	}

	if ( NULL == uniqueID )
	{
		return E_INVALIDARG;
	}

	if ( 0 >= ::SysStringLen( uniqueID ) )
	{
		return E_INVALIDARG;
	}

	CComPtr<IDispatch> object;

	HRESULT hr = object.CoCreateInstance( classID );

	if ( FAILED( hr ) || NULL == object.p )
	{
		return E_FAIL;
	}

	CComPtr<IObjectInitializer> initializer;

	hr = object.QueryInterface( &initializer.p );

	if ( FAILED( hr ) || NULL == initializer.p )
	{
		return E_NOINTERFACE;
	}

	hr = initializer->Initialize( uniqueID );

	if ( FAILED( hr ) )
	{
		return E_FAIL;
	}

	return object.CopyTo( out_result );;
}

