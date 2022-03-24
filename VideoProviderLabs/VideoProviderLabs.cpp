
#include "stdafx.h"
#include <conio.h>
#include <atlbase.h>
#include <iostream>
#include <deque>
#include <stdlib.h>
#include <crtdbg.h>

#define _CRTDBG_MAP_ALLOC

#import <VideoProvider.dll>

using namespace std;
using namespace ATL;

//------------------------------------------------------------------------

class CCoInitializer sealed
{

private:

	CCoInitializer( const CCoInitializer& );
	CCoInitializer& operator = (const CCoInitializer& );

public:

	CCoInitializer()
	{
		CoInitializeEx( NULL , COINIT_APARTMENTTHREADED );
	}

	~CCoInitializer()
	{
		::CoUninitialize();
	}

};

//------------------------------------------------------------------------

void Run()
{
	CCoInitializer coInitialize;

	CComPtr<VideoProviderLib::ITest> test;

	test.CoCreateInstance( __uuidof( VideoProviderLib::Test ) );

	if ( NULL != test.p )
	{
		HRESULT hr = test->Run();

		if (hr != S_OK)
		{
			cout << "Please verify if the camera is not used by an another application\n" << endl;
			cout << "Verify if the camera is not deactivated: please note, that many labtops include a hardware button which can be used for a quick activation/deactivation without to move on the windows settings panel\n" << endl;
		}
	}
	else
	{
		cout << "Please make sure that the COM VideoProvider.dll is registered \n" << endl;
	}
}

//------------------------------------------------------------------------

int _tmain(int argc, _TCHAR* argv[])
{
	Run();
	
	_CrtDumpMemoryLeaks();
		
	return 0;
}

