#pragma once
#include "resource.h"
#include "VideoProvider_i.h"

using namespace ATL;

class ATL_NO_VTABLE CSetting :
	public CComObjectRootEx<CComMultiThreadModel>,
	public CComCoClass<CSetting, &CLSID_Setting>,
	public IDispatchImpl<ISetting, &IID_ISetting, &LIBID_VideoProviderLib, /*wMajor =*/ 1, /*wMinor =*/ 0>,
	public IInitializer
{

private:

	CRITICAL_SECTION     m_cs;

	CComBSTR             m_uniqueID;
	CComBSTR             m_value;
	VARIANT_BOOL         m_isDirty;

public:

	CSetting()
		: m_uniqueID( L"" )
		, m_value   ( L"" )
		, m_isDirty ( VARIANT_FALSE )
	{
	}

	DECLARE_REGISTRY_RESOURCEID(IDR_SETTING)

	BEGIN_COM_MAP(CSetting)
		COM_INTERFACE_ENTRY(ISetting)
		COM_INTERFACE_ENTRY(IDispatch)
		COM_INTERFACE_ENTRY(IInitializer)
	END_COM_MAP()

	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		::InitializeCriticalSection( &m_cs );

		return S_OK;
	}

	void FinalRelease()
	{
		::DeleteCriticalSection( &m_cs );
	}

public:

	STDMETHOD     (Initialize)    (VARIANT data);

	STDMETHOD     (get_UniqueID)  (BSTR* pVal);
	
	STDMETHOD     (get_Value)     (BSTR* pVal);
	
	STDMETHOD     (put_Value)     (BSTR newVal);
	
	STDMETHOD     (get_IsDirty)   (VARIANT_BOOL* pVal);
	
	STDMETHOD     (put_IsDirty)   (VARIANT_BOOL newVal);
	
	STDMETHOD     (Validate)      (VARIANT_BOOL* out_result);
	
	STDMETHOD     (Reset)         (void);

};

OBJECT_ENTRY_AUTO(__uuidof(Setting), CSetting)
