#pragma once
#include "resource.h"
#include "VideoProvider_i.h"

using namespace ATL;

class ATL_NO_VTABLE CFrame :
	public CComObjectRootEx<CComMultiThreadModel>,
	public CComCoClass<CFrame, &CLSID_Frame>,
	public IDispatchImpl<IFrame, &IID_IFrame, &LIBID_VideoProviderLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{

private:

	CRITICAL_SECTION        m_cs;

	BYTE*                   m_data;

	LONG                    m_size;

public:

	CFrame()
		: m_data ( NULL )
		, m_size ( 0    )
	{
	}

	DECLARE_REGISTRY_RESOURCEID(IDR_FRAME)

	BEGIN_COM_MAP(CFrame)
		COM_INTERFACE_ENTRY(IFrame)
		COM_INTERFACE_ENTRY(IDispatch)
	END_COM_MAP()

	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		::InitializeCriticalSection( &m_cs );

		return S_OK;
	}

	void FinalRelease()
	{
		(void) Destroy();

		::DeleteCriticalSection( &m_cs );
	}

public:
	
	STDMETHOD      (get_Size)      (LONG* pVal);

	STDMETHOD      (get_IsEmpty)   (VARIANT_BOOL* pVal);

	STDMETHOD      (get_Values)    (BYTE** pVal);
	
	STDMETHOD      (IsCreated)     (VARIANT_BOOL* out_result);

	STDMETHOD      (Create)        (LONG size , VARIANT_BOOL initToZero , VARIANT_BOOL* out_result);

	STDMETHOD      (CopyFrom)      (BYTE* values , LONG size , VARIANT_BOOL* out_result);

	STDMETHOD      (GetAt)         (LONG index , BYTE* out_result);

	STDMETHOD      (SetAt)         (LONG index , BYTE value , VARIANT_BOOL* out_result);

	STDMETHOD      (Clear)         ();

	STDMETHOD      (Destroy)       ();

};

OBJECT_ENTRY_AUTO(__uuidof(Frame), CFrame)
