#include "stdafx.h"
#include <conio.h>
#include <atlbase.h>
#include <iostream>

#import <VideoProvider.dll>

using namespace std;
using namespace ATL;

//------------------------------------------------------------------------
// COM Initalizer
//------------------------------------------------------------------------

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

//------------------------------------------------------------------------
// Application entry point
//------------------------------------------------------------------------

int _tmain(int argc, _TCHAR* argv[])
{
	CCoInitializer coInitialize;

	CComPtr<VideoProviderLib::ITest> test;

	test.CoCreateInstance( __uuidof( VideoProviderLib::Test ) );

	if ( NULL == test.p )
	{
		cout << ( L"Please make sure that the COM VideoProvider.dll is registered \n" ) << endl;
		_getch();
		return -1;
	}

	test->Run();
	
	return 0;
}

