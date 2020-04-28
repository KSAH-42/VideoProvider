#include "stdafx.h"
#include "Server.h"


STDMETHODIMP CServer::get_Settings(ISettingList** pVal)
{
	return m_settings.CopyTo( pVal );
}


STDMETHODIMP CServer::get_Channels(IVideoChannelList** pVal)
{
	return m_channels.CopyTo( pVal );
}


STDMETHODIMP CServer::get_Services(IServiceList** pVal)
{
	return m_services.CopyTo( pVal );
}


STDMETHODIMP CServer::IsRunning(VARIANT_BOOL* out_result)
{
	return m_thread->IsStarted( out_result );
}


STDMETHODIMP CServer::Run(VARIANT_BOOL* out_result)
{
	return E_NOTIMPL;
}


STDMETHODIMP CServer::Shutdown(void)
{
	return m_thread->Stop();
}
