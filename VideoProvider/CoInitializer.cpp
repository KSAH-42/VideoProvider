#include "StdAfx.h"
#include "CoInitializer.h"


CCoInitializer::CCoInitializer(void)
{
	::CoInitializeEx( NULL , COINIT_MULTITHREADED );
}


CCoInitializer::~CCoInitializer(void)
{
	::CoUninitialize();
}
