// ConfigurationPersistence.h : Declaration of the CConfigurationPersistence

#pragma once
#include "resource.h"       // main symbols



#include "VideoProvider_i.h"



using namespace ATL;


// CConfigurationPersistence

class ATL_NO_VTABLE CConfigurationPersistence :
	public CComObjectRootEx<CComMultiThreadModel>,
	public CComCoClass<CConfigurationPersistence, &CLSID_ConfigurationPersistence>,
	public IDispatchImpl<IConfigurationPersistence, &IID_IConfigurationPersistence, &LIBID_VideoProviderLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CConfigurationPersistence()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_CONFIGURATIONPERSISTENCE)


BEGIN_COM_MAP(CConfigurationPersistence)
	COM_INTERFACE_ENTRY(IConfigurationPersistence)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()



	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		return S_OK;
	}

	void FinalRelease()
	{
	}

public:



};

OBJECT_ENTRY_AUTO(__uuidof(ConfigurationPersistence), CConfigurationPersistence)
