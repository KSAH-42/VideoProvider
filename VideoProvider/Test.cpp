#include "stdafx.h"
#include "Test.h"


// This test search the local cameras installed on your computer
// and select the first video camera 
// Make sure that you web cam is not actually used 
// AND
// Make sure that the camera is activated (Please note that many labtops include a hardware button used to make a quick activation or deactivation without to search on windows settings)

STDMETHODIMP CTest::Run(void)
{
	CComPtr<IVideoDeviceInfoDiscovery> discovery;

	HRESULT hr = discovery.CoCreateInstance( CLSID_VideoDeviceInfoDiscovery );

	if ( S_OK != hr || NULL == discovery.p )
	{
		return S_FALSE;
	}

	CComPtr<IVideoDeviceInfoList> devices;

	hr = discovery->SearchDevices( &devices.p );

	if ( S_OK != hr || NULL == devices.p )
	{
		::OutputDebugString( L"CTest::Run no devices found \n" );
		return S_FALSE;
	}

	CComPtr<IVideoDeviceInfo> deviceInfo;

	hr = devices->FindAt( 0 , &deviceInfo.p );

	if ( S_OK != hr || NULL == deviceInfo.p )
	{
		::OutputDebugString( L"CTest::Run no devices found \n" );
		return S_FALSE;
	}
	
	VARIANT_BOOL boolResult = VARIANT_FALSE;

	hr = deviceInfo->Validate( &boolResult );

	if ( S_OK != hr || VARIANT_FALSE == boolResult )
	{
		::OutputDebugString( L"CTest::Run invalid device infos \n" );

		return S_FALSE;
	}

	CComBSTR deviceName;

	deviceInfo->get_Name( &deviceName );

	CComPtr<IVideoPlayer> player;
	
	hr = player.CoCreateInstance( CLSID_DeviceVideoPlayer );

	if ( S_OK != hr || NULL == player.p )
	{
		::OutputDebugString( L"CTest::Run not create a render \n" );
		return S_FALSE;
	}

	CComPtr<IDeviceVideoPlayer> devicePlayer;

	hr = player.QueryInterface( &devicePlayer.p );

	if ( S_OK != hr || NULL == devicePlayer.p )
	{
		::OutputDebugString( L"CTest::Run get and interface \n" );
		return S_FALSE;
	}

	devicePlayer->put_DeviceName( deviceName );

	hr = player->Play( &boolResult );

	if ( S_OK != hr || VARIANT_TRUE != boolResult )
	{
		::OutputDebugString( L"CTest::Run can not start the rendering \n" );
		return S_FALSE;
	}

	wprintf( L"Press any key stop the test" );

	MSG msg = { 0 };
	
	// Implement here a mesage pump used for STA

	while ( 0 == _kbhit() )
	{
		::MsgWaitForMultipleObjects( 0, NULL, FALSE, 100, QS_ALLEVENTS);
		
		while ( ::PeekMessage( &msg , NULL , 0 , 0 , PM_REMOVE ) )
		{
			::DispatchMessage( &msg );
			::TranslateMessage( &msg );
		}
	}
	
	player->Stop();
	
	return S_OK;
}

