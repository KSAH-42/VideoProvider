#pragma once
#ifndef _DATA_CONVERTER__H
#define _DATA_CONVERTER__H
#include <atlstr.h>

using namespace ATL;

class CDataConverter sealed
{
public:
	
	CDataConverter(void);
	~CDataConverter(void);

public:

	static CComBSTR ConvertToString ( CLSID value );

	static CLSID    ConvertToCLSID  ( CString value );

};

#endif // _DATA_CONVERTER__H