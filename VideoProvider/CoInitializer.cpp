#include "StdAfx.h"
#include "CoInitializer.h"


CCoInitializer::CCoInitializer(void)
	:m_isInitialized( false )
{
	HRESULT hr = ::CoInitializeEx( NULL , COINIT_MULTITHREADED );

	if ( SUCCEEDED( hr ) )
	{
		m_isInitialized = true;
	}
}


CCoInitializer::~CCoInitializer(void)
{
	if ( m_isInitialized )
	{
		::CoUninitialize();
	}
}
