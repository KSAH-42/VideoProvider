#include "StdAfx.h"
#include "DataConverter.h"


CDataConverter::CDataConverter()
{
}

CDataConverter::~CDataConverter()
{
}


CComBSTR CDataConverter::ConvertToString( GUID value )
{
	UINT  const maxSize				  = 128;
	TCHAR		szGUID[ maxSize + 1 ] = {0};

	if ( 0 < ::StringFromGUID2( value , (LPOLESTR) szGUID , maxSize ) )
	{
		return CComBSTR( (LPCTSTR) szGUID );
	}

	return CComBSTR();
}


CLSID CDataConverter::ConvertToCLSID( CString value )
{
	if ( 0 >= value.GetLength() )
	{
		return CLSID_NULL;
	}

	CLSID result = CLSID_NULL;

	if ( S_OK == ::CLSIDFromString( (LPCTSTR) value , &result ) )
	{
		return result;
	}

	return CLSID_NULL;
}
