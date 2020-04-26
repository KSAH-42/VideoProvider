#include "stdafx.h"
#include "NullService.h"


HRESULT CNullService::get_Type( SERVICE_TYPES* pVal )
{
	if ( NULL == pVal )
	{
		return E_POINTER;
	}

	*pVal = SERVICE_UNKNOWN;

	return S_OK;
}

