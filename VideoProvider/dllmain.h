// dllmain.h : Declaration of module class.

class CVideoProviderModule : public ATL::CAtlDllModuleT< CVideoProviderModule >
{
public :
	DECLARE_LIBID(LIBID_VideoProviderLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_VIDEOPROVIDER, "{ECA86A9A-4283-4E3F-B6F0-3DA573D3488E}")
};

extern class CVideoProviderModule _AtlModule;
