#include "stdafx.h"
#include <conio.h>
#include <atlbase.h>

#import <VideoProvider.dll>

using namespace std;
using namespace ATL;

class CCoInitializer sealed
{

private:

	CCoInitializer( const CCoInitializer& );
	CCoInitializer& operator = (const CCoInitializer& );

public:

	CCoInitializer()
	{
		(void)::CoInitializeEx( NULL , COINIT_APARTMENTTHREADED );
	}

	~CCoInitializer()
	{
		::CoUninitialize();
	}

};

int _tmain(int argc, _TCHAR* argv[])
{
	CCoInitializer coInitialize;

	CComPtr<VideoProviderLib::ITest> test;

	test.CoCreateInstance( __uuidof( VideoProviderLib::Test ) );

	if ( NULL == test.p )
	{
		wprintf_s( L"Please make that the com libray is installed\n" );
		wprintf_s( L"Make sure that the current process is running under administrator account with elevated privileges\n" );
		getch();
		return -1;
	}

	test->Run();
	
	return 0;
}

