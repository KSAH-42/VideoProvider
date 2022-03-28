

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 04:14:07 2038
 */
/* Compiler settings for VideoProvider.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0622 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __VideoProvider_i_h__
#define __VideoProvider_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IInitializer_FWD_DEFINED__
#define __IInitializer_FWD_DEFINED__
typedef interface IInitializer IInitializer;

#endif 	/* __IInitializer_FWD_DEFINED__ */


#ifndef __IObjectInitializer_FWD_DEFINED__
#define __IObjectInitializer_FWD_DEFINED__
typedef interface IObjectInitializer IObjectInitializer;

#endif 	/* __IObjectInitializer_FWD_DEFINED__ */


#ifndef __IObjectFactory_FWD_DEFINED__
#define __IObjectFactory_FWD_DEFINED__
typedef interface IObjectFactory IObjectFactory;

#endif 	/* __IObjectFactory_FWD_DEFINED__ */


#ifndef __IBackgroundThread_FWD_DEFINED__
#define __IBackgroundThread_FWD_DEFINED__
typedef interface IBackgroundThread IBackgroundThread;

#endif 	/* __IBackgroundThread_FWD_DEFINED__ */


#ifndef __IVideoGraphConfiguration_FWD_DEFINED__
#define __IVideoGraphConfiguration_FWD_DEFINED__
typedef interface IVideoGraphConfiguration IVideoGraphConfiguration;

#endif 	/* __IVideoGraphConfiguration_FWD_DEFINED__ */


#ifndef __IVideoGraph_FWD_DEFINED__
#define __IVideoGraph_FWD_DEFINED__
typedef interface IVideoGraph IVideoGraph;

#endif 	/* __IVideoGraph_FWD_DEFINED__ */


#ifndef __IMediaMonikerList_FWD_DEFINED__
#define __IMediaMonikerList_FWD_DEFINED__
typedef interface IMediaMonikerList IMediaMonikerList;

#endif 	/* __IMediaMonikerList_FWD_DEFINED__ */


#ifndef __IMediaMonikerStore_FWD_DEFINED__
#define __IMediaMonikerStore_FWD_DEFINED__
typedef interface IMediaMonikerStore IMediaMonikerStore;

#endif 	/* __IMediaMonikerStore_FWD_DEFINED__ */


#ifndef __IVideoDeviceInfo_FWD_DEFINED__
#define __IVideoDeviceInfo_FWD_DEFINED__
typedef interface IVideoDeviceInfo IVideoDeviceInfo;

#endif 	/* __IVideoDeviceInfo_FWD_DEFINED__ */


#ifndef __IVideoDeviceInfoList_FWD_DEFINED__
#define __IVideoDeviceInfoList_FWD_DEFINED__
typedef interface IVideoDeviceInfoList IVideoDeviceInfoList;

#endif 	/* __IVideoDeviceInfoList_FWD_DEFINED__ */


#ifndef __IVideoDeviceInfoAdapter_FWD_DEFINED__
#define __IVideoDeviceInfoAdapter_FWD_DEFINED__
typedef interface IVideoDeviceInfoAdapter IVideoDeviceInfoAdapter;

#endif 	/* __IVideoDeviceInfoAdapter_FWD_DEFINED__ */


#ifndef __IVideoDeviceInfoDiscovery_FWD_DEFINED__
#define __IVideoDeviceInfoDiscovery_FWD_DEFINED__
typedef interface IVideoDeviceInfoDiscovery IVideoDeviceInfoDiscovery;

#endif 	/* __IVideoDeviceInfoDiscovery_FWD_DEFINED__ */


#ifndef __IVideoPlayer_FWD_DEFINED__
#define __IVideoPlayer_FWD_DEFINED__
typedef interface IVideoPlayer IVideoPlayer;

#endif 	/* __IVideoPlayer_FWD_DEFINED__ */


#ifndef __IDeviceVideoPlayer_FWD_DEFINED__
#define __IDeviceVideoPlayer_FWD_DEFINED__
typedef interface IDeviceVideoPlayer IDeviceVideoPlayer;

#endif 	/* __IDeviceVideoPlayer_FWD_DEFINED__ */


#ifndef __ITest_FWD_DEFINED__
#define __ITest_FWD_DEFINED__
typedef interface ITest ITest;

#endif 	/* __ITest_FWD_DEFINED__ */


#ifndef __IVideoGraphRunner_FWD_DEFINED__
#define __IVideoGraphRunner_FWD_DEFINED__
typedef interface IVideoGraphRunner IVideoGraphRunner;

#endif 	/* __IVideoGraphRunner_FWD_DEFINED__ */


#ifndef __ISetting_FWD_DEFINED__
#define __ISetting_FWD_DEFINED__
typedef interface ISetting ISetting;

#endif 	/* __ISetting_FWD_DEFINED__ */


#ifndef __ISettingList_FWD_DEFINED__
#define __ISettingList_FWD_DEFINED__
typedef interface ISettingList ISettingList;

#endif 	/* __ISettingList_FWD_DEFINED__ */


#ifndef __ISettingFactory_FWD_DEFINED__
#define __ISettingFactory_FWD_DEFINED__
typedef interface ISettingFactory ISettingFactory;

#endif 	/* __ISettingFactory_FWD_DEFINED__ */


#ifndef __IFrame_FWD_DEFINED__
#define __IFrame_FWD_DEFINED__
typedef interface IFrame IFrame;

#endif 	/* __IFrame_FWD_DEFINED__ */


#ifndef __IFrameBuffer_FWD_DEFINED__
#define __IFrameBuffer_FWD_DEFINED__
typedef interface IFrameBuffer IFrameBuffer;

#endif 	/* __IFrameBuffer_FWD_DEFINED__ */


#ifndef __IVideoChannel_FWD_DEFINED__
#define __IVideoChannel_FWD_DEFINED__
typedef interface IVideoChannel IVideoChannel;

#endif 	/* __IVideoChannel_FWD_DEFINED__ */


#ifndef __IVideoChannelList_FWD_DEFINED__
#define __IVideoChannelList_FWD_DEFINED__
typedef interface IVideoChannelList IVideoChannelList;

#endif 	/* __IVideoChannelList_FWD_DEFINED__ */


#ifndef __INullVideoChannel_FWD_DEFINED__
#define __INullVideoChannel_FWD_DEFINED__
typedef interface INullVideoChannel INullVideoChannel;

#endif 	/* __INullVideoChannel_FWD_DEFINED__ */


#ifndef __IService_FWD_DEFINED__
#define __IService_FWD_DEFINED__
typedef interface IService IService;

#endif 	/* __IService_FWD_DEFINED__ */


#ifndef __INullService_FWD_DEFINED__
#define __INullService_FWD_DEFINED__
typedef interface INullService INullService;

#endif 	/* __INullService_FWD_DEFINED__ */


#ifndef __IConfigurationService_FWD_DEFINED__
#define __IConfigurationService_FWD_DEFINED__
typedef interface IConfigurationService IConfigurationService;

#endif 	/* __IConfigurationService_FWD_DEFINED__ */


#ifndef __IServiceList_FWD_DEFINED__
#define __IServiceList_FWD_DEFINED__
typedef interface IServiceList IServiceList;

#endif 	/* __IServiceList_FWD_DEFINED__ */


#ifndef __IConfigurationPersistence_FWD_DEFINED__
#define __IConfigurationPersistence_FWD_DEFINED__
typedef interface IConfigurationPersistence IConfigurationPersistence;

#endif 	/* __IConfigurationPersistence_FWD_DEFINED__ */


#ifndef __IServer_FWD_DEFINED__
#define __IServer_FWD_DEFINED__
typedef interface IServer IServer;

#endif 	/* __IServer_FWD_DEFINED__ */


#ifndef __IServerSite_FWD_DEFINED__
#define __IServerSite_FWD_DEFINED__
typedef interface IServerSite IServerSite;

#endif 	/* __IServerSite_FWD_DEFINED__ */


#ifndef __IVideoPlayer_FWD_DEFINED__
#define __IVideoPlayer_FWD_DEFINED__
typedef interface IVideoPlayer IVideoPlayer;

#endif 	/* __IVideoPlayer_FWD_DEFINED__ */


#ifndef __IVideoChannel_FWD_DEFINED__
#define __IVideoChannel_FWD_DEFINED__
typedef interface IVideoChannel IVideoChannel;

#endif 	/* __IVideoChannel_FWD_DEFINED__ */


#ifndef __IService_FWD_DEFINED__
#define __IService_FWD_DEFINED__
typedef interface IService IService;

#endif 	/* __IService_FWD_DEFINED__ */


#ifndef __ObjectFactory_FWD_DEFINED__
#define __ObjectFactory_FWD_DEFINED__

#ifdef __cplusplus
typedef class ObjectFactory ObjectFactory;
#else
typedef struct ObjectFactory ObjectFactory;
#endif /* __cplusplus */

#endif 	/* __ObjectFactory_FWD_DEFINED__ */


#ifndef __BackgroundThread_FWD_DEFINED__
#define __BackgroundThread_FWD_DEFINED__

#ifdef __cplusplus
typedef class BackgroundThread BackgroundThread;
#else
typedef struct BackgroundThread BackgroundThread;
#endif /* __cplusplus */

#endif 	/* __BackgroundThread_FWD_DEFINED__ */


#ifndef __VideoGraphConfiguration_FWD_DEFINED__
#define __VideoGraphConfiguration_FWD_DEFINED__

#ifdef __cplusplus
typedef class VideoGraphConfiguration VideoGraphConfiguration;
#else
typedef struct VideoGraphConfiguration VideoGraphConfiguration;
#endif /* __cplusplus */

#endif 	/* __VideoGraphConfiguration_FWD_DEFINED__ */


#ifndef __VideoGraph_FWD_DEFINED__
#define __VideoGraph_FWD_DEFINED__

#ifdef __cplusplus
typedef class VideoGraph VideoGraph;
#else
typedef struct VideoGraph VideoGraph;
#endif /* __cplusplus */

#endif 	/* __VideoGraph_FWD_DEFINED__ */


#ifndef __MediaMonikerStore_FWD_DEFINED__
#define __MediaMonikerStore_FWD_DEFINED__

#ifdef __cplusplus
typedef class MediaMonikerStore MediaMonikerStore;
#else
typedef struct MediaMonikerStore MediaMonikerStore;
#endif /* __cplusplus */

#endif 	/* __MediaMonikerStore_FWD_DEFINED__ */


#ifndef __MediaMonikerList_FWD_DEFINED__
#define __MediaMonikerList_FWD_DEFINED__

#ifdef __cplusplus
typedef class MediaMonikerList MediaMonikerList;
#else
typedef struct MediaMonikerList MediaMonikerList;
#endif /* __cplusplus */

#endif 	/* __MediaMonikerList_FWD_DEFINED__ */


#ifndef __VideoDeviceInfo_FWD_DEFINED__
#define __VideoDeviceInfo_FWD_DEFINED__

#ifdef __cplusplus
typedef class VideoDeviceInfo VideoDeviceInfo;
#else
typedef struct VideoDeviceInfo VideoDeviceInfo;
#endif /* __cplusplus */

#endif 	/* __VideoDeviceInfo_FWD_DEFINED__ */


#ifndef __VideoDeviceInfoList_FWD_DEFINED__
#define __VideoDeviceInfoList_FWD_DEFINED__

#ifdef __cplusplus
typedef class VideoDeviceInfoList VideoDeviceInfoList;
#else
typedef struct VideoDeviceInfoList VideoDeviceInfoList;
#endif /* __cplusplus */

#endif 	/* __VideoDeviceInfoList_FWD_DEFINED__ */


#ifndef __VideoDeviceInfoAdapter_FWD_DEFINED__
#define __VideoDeviceInfoAdapter_FWD_DEFINED__

#ifdef __cplusplus
typedef class VideoDeviceInfoAdapter VideoDeviceInfoAdapter;
#else
typedef struct VideoDeviceInfoAdapter VideoDeviceInfoAdapter;
#endif /* __cplusplus */

#endif 	/* __VideoDeviceInfoAdapter_FWD_DEFINED__ */


#ifndef __VideoDeviceInfoDiscovery_FWD_DEFINED__
#define __VideoDeviceInfoDiscovery_FWD_DEFINED__

#ifdef __cplusplus
typedef class VideoDeviceInfoDiscovery VideoDeviceInfoDiscovery;
#else
typedef struct VideoDeviceInfoDiscovery VideoDeviceInfoDiscovery;
#endif /* __cplusplus */

#endif 	/* __VideoDeviceInfoDiscovery_FWD_DEFINED__ */


#ifndef __DeviceVideoPlayer_FWD_DEFINED__
#define __DeviceVideoPlayer_FWD_DEFINED__

#ifdef __cplusplus
typedef class DeviceVideoPlayer DeviceVideoPlayer;
#else
typedef struct DeviceVideoPlayer DeviceVideoPlayer;
#endif /* __cplusplus */

#endif 	/* __DeviceVideoPlayer_FWD_DEFINED__ */


#ifndef __Test_FWD_DEFINED__
#define __Test_FWD_DEFINED__

#ifdef __cplusplus
typedef class Test Test;
#else
typedef struct Test Test;
#endif /* __cplusplus */

#endif 	/* __Test_FWD_DEFINED__ */


#ifndef __VideoGraphRunner_FWD_DEFINED__
#define __VideoGraphRunner_FWD_DEFINED__

#ifdef __cplusplus
typedef class VideoGraphRunner VideoGraphRunner;
#else
typedef struct VideoGraphRunner VideoGraphRunner;
#endif /* __cplusplus */

#endif 	/* __VideoGraphRunner_FWD_DEFINED__ */


#ifndef __Setting_FWD_DEFINED__
#define __Setting_FWD_DEFINED__

#ifdef __cplusplus
typedef class Setting Setting;
#else
typedef struct Setting Setting;
#endif /* __cplusplus */

#endif 	/* __Setting_FWD_DEFINED__ */


#ifndef ___ISettingListEvents_FWD_DEFINED__
#define ___ISettingListEvents_FWD_DEFINED__
typedef interface _ISettingListEvents _ISettingListEvents;

#endif 	/* ___ISettingListEvents_FWD_DEFINED__ */


#ifndef __SettingList_FWD_DEFINED__
#define __SettingList_FWD_DEFINED__

#ifdef __cplusplus
typedef class SettingList SettingList;
#else
typedef struct SettingList SettingList;
#endif /* __cplusplus */

#endif 	/* __SettingList_FWD_DEFINED__ */


#ifndef __SettingFactory_FWD_DEFINED__
#define __SettingFactory_FWD_DEFINED__

#ifdef __cplusplus
typedef class SettingFactory SettingFactory;
#else
typedef struct SettingFactory SettingFactory;
#endif /* __cplusplus */

#endif 	/* __SettingFactory_FWD_DEFINED__ */


#ifndef __Frame_FWD_DEFINED__
#define __Frame_FWD_DEFINED__

#ifdef __cplusplus
typedef class Frame Frame;
#else
typedef struct Frame Frame;
#endif /* __cplusplus */

#endif 	/* __Frame_FWD_DEFINED__ */


#ifndef __FrameBuffer_FWD_DEFINED__
#define __FrameBuffer_FWD_DEFINED__

#ifdef __cplusplus
typedef class FrameBuffer FrameBuffer;
#else
typedef struct FrameBuffer FrameBuffer;
#endif /* __cplusplus */

#endif 	/* __FrameBuffer_FWD_DEFINED__ */


#ifndef ___IVideoChannelListEvents_FWD_DEFINED__
#define ___IVideoChannelListEvents_FWD_DEFINED__
typedef interface _IVideoChannelListEvents _IVideoChannelListEvents;

#endif 	/* ___IVideoChannelListEvents_FWD_DEFINED__ */


#ifndef __VideoChannelList_FWD_DEFINED__
#define __VideoChannelList_FWD_DEFINED__

#ifdef __cplusplus
typedef class VideoChannelList VideoChannelList;
#else
typedef struct VideoChannelList VideoChannelList;
#endif /* __cplusplus */

#endif 	/* __VideoChannelList_FWD_DEFINED__ */


#ifndef __NullVideoChannel_FWD_DEFINED__
#define __NullVideoChannel_FWD_DEFINED__

#ifdef __cplusplus
typedef class NullVideoChannel NullVideoChannel;
#else
typedef struct NullVideoChannel NullVideoChannel;
#endif /* __cplusplus */

#endif 	/* __NullVideoChannel_FWD_DEFINED__ */


#ifndef __NullService_FWD_DEFINED__
#define __NullService_FWD_DEFINED__

#ifdef __cplusplus
typedef class NullService NullService;
#else
typedef struct NullService NullService;
#endif /* __cplusplus */

#endif 	/* __NullService_FWD_DEFINED__ */


#ifndef __ConfigurationService_FWD_DEFINED__
#define __ConfigurationService_FWD_DEFINED__

#ifdef __cplusplus
typedef class ConfigurationService ConfigurationService;
#else
typedef struct ConfigurationService ConfigurationService;
#endif /* __cplusplus */

#endif 	/* __ConfigurationService_FWD_DEFINED__ */


#ifndef ___IServiceListEvents_FWD_DEFINED__
#define ___IServiceListEvents_FWD_DEFINED__
typedef interface _IServiceListEvents _IServiceListEvents;

#endif 	/* ___IServiceListEvents_FWD_DEFINED__ */


#ifndef __ServiceList_FWD_DEFINED__
#define __ServiceList_FWD_DEFINED__

#ifdef __cplusplus
typedef class ServiceList ServiceList;
#else
typedef struct ServiceList ServiceList;
#endif /* __cplusplus */

#endif 	/* __ServiceList_FWD_DEFINED__ */


#ifndef __ConfigurationPersistence_FWD_DEFINED__
#define __ConfigurationPersistence_FWD_DEFINED__

#ifdef __cplusplus
typedef class ConfigurationPersistence ConfigurationPersistence;
#else
typedef struct ConfigurationPersistence ConfigurationPersistence;
#endif /* __cplusplus */

#endif 	/* __ConfigurationPersistence_FWD_DEFINED__ */


#ifndef ___IServerEvents_FWD_DEFINED__
#define ___IServerEvents_FWD_DEFINED__
typedef interface _IServerEvents _IServerEvents;

#endif 	/* ___IServerEvents_FWD_DEFINED__ */


#ifndef __Server_FWD_DEFINED__
#define __Server_FWD_DEFINED__

#ifdef __cplusplus
typedef class Server Server;
#else
typedef struct Server Server;
#endif /* __cplusplus */

#endif 	/* __Server_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "shobjidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_VideoProvider_0000_0000 */
/* [local] */ 

typedef 
enum VIDEO_CHANNEL_TYPES
    {
        VIDEO_CHANNEL_UNKNOWN	= 0,
        VIDEO_CHANNEL_CAMERA	= ( VIDEO_CHANNEL_UNKNOWN + 1 ) 
    } 	VIDEO_CHANNEL_TYPES;

typedef 
enum SERVICE_TYPES
    {
        SERVICE_UNKNOWN	= 0,
        SERVICE_CONFIGURATION	= ( SERVICE_UNKNOWN + 1 ) 
    } 	SERVICE_TYPES;



extern RPC_IF_HANDLE __MIDL_itf_VideoProvider_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_VideoProvider_0000_0000_v0_0_s_ifspec;

#ifndef __IInitializer_INTERFACE_DEFINED__
#define __IInitializer_INTERFACE_DEFINED__

/* interface IInitializer */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IInitializer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("961F1178-D82B-49AC-A4FE-687FCEF999A8")
    IInitializer : public IUnknown
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Initialize( 
            /* [in] */ VARIANT data) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IInitializerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IInitializer * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IInitializer * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IInitializer * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IInitializer * This,
            /* [in] */ VARIANT data);
        
        END_INTERFACE
    } IInitializerVtbl;

    interface IInitializer
    {
        CONST_VTBL struct IInitializerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IInitializer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IInitializer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IInitializer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IInitializer_Initialize(This,data)	\
    ( (This)->lpVtbl -> Initialize(This,data) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IInitializer_INTERFACE_DEFINED__ */


#ifndef __IObjectInitializer_INTERFACE_DEFINED__
#define __IObjectInitializer_INTERFACE_DEFINED__

/* interface IObjectInitializer */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IObjectInitializer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("FB5F1C5E-401A-47C4-A970-EC963C5D166A")
    IObjectInitializer : public IUnknown
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Initialize( 
            /* [in] */ BSTR uniqueID) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IObjectInitializerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IObjectInitializer * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IObjectInitializer * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IObjectInitializer * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IObjectInitializer * This,
            /* [in] */ BSTR uniqueID);
        
        END_INTERFACE
    } IObjectInitializerVtbl;

    interface IObjectInitializer
    {
        CONST_VTBL struct IObjectInitializerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IObjectInitializer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IObjectInitializer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IObjectInitializer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IObjectInitializer_Initialize(This,uniqueID)	\
    ( (This)->lpVtbl -> Initialize(This,uniqueID) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IObjectInitializer_INTERFACE_DEFINED__ */


#ifndef __IObjectFactory_INTERFACE_DEFINED__
#define __IObjectFactory_INTERFACE_DEFINED__

/* interface IObjectFactory */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IObjectFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("EEDF965F-F2A9-4DD5-A0CE-05B8C17673C0")
    IObjectFactory : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE CreateObject( 
            /* [in] */ GUID classID,
            /* [retval][out] */ IDispatch **out_result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE CreateObjectByID( 
            /* [in] */ GUID classID,
            /* [in] */ BSTR uniqueID,
            /* [retval][out] */ IDispatch **out_result) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IObjectFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IObjectFactory * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IObjectFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IObjectFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IObjectFactory * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IObjectFactory * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IObjectFactory * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IObjectFactory * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *CreateObject )( 
            IObjectFactory * This,
            /* [in] */ GUID classID,
            /* [retval][out] */ IDispatch **out_result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *CreateObjectByID )( 
            IObjectFactory * This,
            /* [in] */ GUID classID,
            /* [in] */ BSTR uniqueID,
            /* [retval][out] */ IDispatch **out_result);
        
        END_INTERFACE
    } IObjectFactoryVtbl;

    interface IObjectFactory
    {
        CONST_VTBL struct IObjectFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IObjectFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IObjectFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IObjectFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IObjectFactory_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IObjectFactory_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IObjectFactory_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IObjectFactory_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IObjectFactory_CreateObject(This,classID,out_result)	\
    ( (This)->lpVtbl -> CreateObject(This,classID,out_result) ) 

#define IObjectFactory_CreateObjectByID(This,classID,uniqueID,out_result)	\
    ( (This)->lpVtbl -> CreateObjectByID(This,classID,uniqueID,out_result) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IObjectFactory_INTERFACE_DEFINED__ */


#ifndef __IBackgroundThread_INTERFACE_DEFINED__
#define __IBackgroundThread_INTERFACE_DEFINED__

/* interface IBackgroundThread */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IBackgroundThread;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("942603F1-4744-4C1A-B35B-0D4164E82B9E")
    IBackgroundThread : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Handle( 
            /* [retval][out] */ ULONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_HandleEventExit( 
            /* [retval][out] */ ULONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Identifier( 
            /* [retval][out] */ ULONG *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE IsStarted( 
            /* [retval][out] */ VARIANT_BOOL *out_result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE IsAlive( 
            /* [retval][out] */ VARIANT_BOOL *out_result) = 0;
        
        virtual /* [local][id] */ HRESULT STDMETHODCALLTYPE Start( 
            /* [in] */ void *lpRoutine,
            /* [in] */ void *lpRoutineArg,
            /* [retval][out] */ VARIANT_BOOL *out_result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Stop( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE CanContinue( 
            /* [in] */ ULONG timeout,
            /* [retval][out] */ VARIANT_BOOL *out_result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE PumpEvents( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBackgroundThreadVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBackgroundThread * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBackgroundThread * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBackgroundThread * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IBackgroundThread * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IBackgroundThread * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IBackgroundThread * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IBackgroundThread * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Handle )( 
            IBackgroundThread * This,
            /* [retval][out] */ ULONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HandleEventExit )( 
            IBackgroundThread * This,
            /* [retval][out] */ ULONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Identifier )( 
            IBackgroundThread * This,
            /* [retval][out] */ ULONG *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *IsStarted )( 
            IBackgroundThread * This,
            /* [retval][out] */ VARIANT_BOOL *out_result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *IsAlive )( 
            IBackgroundThread * This,
            /* [retval][out] */ VARIANT_BOOL *out_result);
        
        /* [local][id] */ HRESULT ( STDMETHODCALLTYPE *Start )( 
            IBackgroundThread * This,
            /* [in] */ void *lpRoutine,
            /* [in] */ void *lpRoutineArg,
            /* [retval][out] */ VARIANT_BOOL *out_result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Stop )( 
            IBackgroundThread * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *CanContinue )( 
            IBackgroundThread * This,
            /* [in] */ ULONG timeout,
            /* [retval][out] */ VARIANT_BOOL *out_result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *PumpEvents )( 
            IBackgroundThread * This);
        
        END_INTERFACE
    } IBackgroundThreadVtbl;

    interface IBackgroundThread
    {
        CONST_VTBL struct IBackgroundThreadVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBackgroundThread_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBackgroundThread_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBackgroundThread_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBackgroundThread_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IBackgroundThread_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IBackgroundThread_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IBackgroundThread_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IBackgroundThread_get_Handle(This,pVal)	\
    ( (This)->lpVtbl -> get_Handle(This,pVal) ) 

#define IBackgroundThread_get_HandleEventExit(This,pVal)	\
    ( (This)->lpVtbl -> get_HandleEventExit(This,pVal) ) 

#define IBackgroundThread_get_Identifier(This,pVal)	\
    ( (This)->lpVtbl -> get_Identifier(This,pVal) ) 

#define IBackgroundThread_IsStarted(This,out_result)	\
    ( (This)->lpVtbl -> IsStarted(This,out_result) ) 

#define IBackgroundThread_IsAlive(This,out_result)	\
    ( (This)->lpVtbl -> IsAlive(This,out_result) ) 

#define IBackgroundThread_Start(This,lpRoutine,lpRoutineArg,out_result)	\
    ( (This)->lpVtbl -> Start(This,lpRoutine,lpRoutineArg,out_result) ) 

#define IBackgroundThread_Stop(This)	\
    ( (This)->lpVtbl -> Stop(This) ) 

#define IBackgroundThread_CanContinue(This,timeout,out_result)	\
    ( (This)->lpVtbl -> CanContinue(This,timeout,out_result) ) 

#define IBackgroundThread_PumpEvents(This)	\
    ( (This)->lpVtbl -> PumpEvents(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBackgroundThread_INTERFACE_DEFINED__ */


#ifndef __IVideoGraphConfiguration_INTERFACE_DEFINED__
#define __IVideoGraphConfiguration_INTERFACE_DEFINED__

/* interface IVideoGraphConfiguration */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IVideoGraphConfiguration;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("EA91DC21-25EA-44C7-AD60-0428D8B6C40B")
    IVideoGraphConfiguration : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Window( 
            /* [retval][out] */ OLE_HANDLE *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Window( 
            /* [in] */ OLE_HANDLE newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_UseGrabber( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_UseGrabber( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_FormatID( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_FormatID( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_DeviceName( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_DeviceName( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_FileSource( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_FileSource( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVideoGraphConfigurationVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVideoGraphConfiguration * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVideoGraphConfiguration * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVideoGraphConfiguration * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IVideoGraphConfiguration * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IVideoGraphConfiguration * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IVideoGraphConfiguration * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IVideoGraphConfiguration * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Window )( 
            IVideoGraphConfiguration * This,
            /* [retval][out] */ OLE_HANDLE *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Window )( 
            IVideoGraphConfiguration * This,
            /* [in] */ OLE_HANDLE newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UseGrabber )( 
            IVideoGraphConfiguration * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_UseGrabber )( 
            IVideoGraphConfiguration * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FormatID )( 
            IVideoGraphConfiguration * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FormatID )( 
            IVideoGraphConfiguration * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DeviceName )( 
            IVideoGraphConfiguration * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DeviceName )( 
            IVideoGraphConfiguration * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FileSource )( 
            IVideoGraphConfiguration * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FileSource )( 
            IVideoGraphConfiguration * This,
            /* [in] */ BSTR newVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IVideoGraphConfiguration * This);
        
        END_INTERFACE
    } IVideoGraphConfigurationVtbl;

    interface IVideoGraphConfiguration
    {
        CONST_VTBL struct IVideoGraphConfigurationVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVideoGraphConfiguration_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVideoGraphConfiguration_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVideoGraphConfiguration_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVideoGraphConfiguration_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IVideoGraphConfiguration_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IVideoGraphConfiguration_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IVideoGraphConfiguration_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IVideoGraphConfiguration_get_Window(This,pVal)	\
    ( (This)->lpVtbl -> get_Window(This,pVal) ) 

#define IVideoGraphConfiguration_put_Window(This,newVal)	\
    ( (This)->lpVtbl -> put_Window(This,newVal) ) 

#define IVideoGraphConfiguration_get_UseGrabber(This,pVal)	\
    ( (This)->lpVtbl -> get_UseGrabber(This,pVal) ) 

#define IVideoGraphConfiguration_put_UseGrabber(This,newVal)	\
    ( (This)->lpVtbl -> put_UseGrabber(This,newVal) ) 

#define IVideoGraphConfiguration_get_FormatID(This,pVal)	\
    ( (This)->lpVtbl -> get_FormatID(This,pVal) ) 

#define IVideoGraphConfiguration_put_FormatID(This,newVal)	\
    ( (This)->lpVtbl -> put_FormatID(This,newVal) ) 

#define IVideoGraphConfiguration_get_DeviceName(This,pVal)	\
    ( (This)->lpVtbl -> get_DeviceName(This,pVal) ) 

#define IVideoGraphConfiguration_put_DeviceName(This,newVal)	\
    ( (This)->lpVtbl -> put_DeviceName(This,newVal) ) 

#define IVideoGraphConfiguration_get_FileSource(This,pVal)	\
    ( (This)->lpVtbl -> get_FileSource(This,pVal) ) 

#define IVideoGraphConfiguration_put_FileSource(This,newVal)	\
    ( (This)->lpVtbl -> put_FileSource(This,newVal) ) 

#define IVideoGraphConfiguration_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVideoGraphConfiguration_INTERFACE_DEFINED__ */


#ifndef __IVideoGraph_INTERFACE_DEFINED__
#define __IVideoGraph_INTERFACE_DEFINED__

/* interface IVideoGraph */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IVideoGraph;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B108EF2A-39AC-43D7-A027-923333C2ECA7")
    IVideoGraph : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Configuration( 
            /* [retval][out] */ IVideoGraphConfiguration **pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Create( 
            /* [retval][out] */ VARIANT_BOOL *out_result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Destroy( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SelectDevice( 
            /* [retval][out] */ VARIANT_BOOL *out_result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SelectDeviceFormat( 
            /* [retval][out] */ VARIANT_BOOL *out_result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE AddDeviceFilter( 
            /* [retval][out] */ VARIANT_BOOL *out_result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE AddFileSourceFilter( 
            /* [retval][out] */ VARIANT_BOOL *out_result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE AddGrabberFilter( 
            /* [retval][out] */ VARIANT_BOOL *out_result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE AddVideoRenderFilter( 
            /* [retval][out] */ VARIANT_BOOL *out_result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE RenderDeviceStream( 
            /* [in] */ BSTR pinCategoryId,
            /* [retval][out] */ VARIANT_BOOL *out_result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE RenderDeviceCaptureStream( 
            /* [retval][out] */ VARIANT_BOOL *out_result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE RenderDevicePreviewStream( 
            /* [retval][out] */ VARIANT_BOOL *out_result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE RenderFileStream( 
            /* [retval][out] */ VARIANT_BOOL *out_result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SetupWindow( 
            /* [retval][out] */ VARIANT_BOOL *out_result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE CloseWindow( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SetKeepRatioMode( 
            /* [in] */ VARIANT_BOOL keepRatioStatus,
            /* [retval][out] */ VARIANT_BOOL *out_result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE IsRunning( 
            /* [retval][out] */ VARIANT_BOOL *out_result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Run( 
            /* [retval][out] */ VARIANT_BOOL *out_result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Shutdown( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE PumpsEvents( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Resize( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVideoGraphVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVideoGraph * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVideoGraph * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVideoGraph * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IVideoGraph * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IVideoGraph * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IVideoGraph * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IVideoGraph * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Configuration )( 
            IVideoGraph * This,
            /* [retval][out] */ IVideoGraphConfiguration **pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Create )( 
            IVideoGraph * This,
            /* [retval][out] */ VARIANT_BOOL *out_result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Destroy )( 
            IVideoGraph * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SelectDevice )( 
            IVideoGraph * This,
            /* [retval][out] */ VARIANT_BOOL *out_result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SelectDeviceFormat )( 
            IVideoGraph * This,
            /* [retval][out] */ VARIANT_BOOL *out_result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *AddDeviceFilter )( 
            IVideoGraph * This,
            /* [retval][out] */ VARIANT_BOOL *out_result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *AddFileSourceFilter )( 
            IVideoGraph * This,
            /* [retval][out] */ VARIANT_BOOL *out_result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *AddGrabberFilter )( 
            IVideoGraph * This,
            /* [retval][out] */ VARIANT_BOOL *out_result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *AddVideoRenderFilter )( 
            IVideoGraph * This,
            /* [retval][out] */ VARIANT_BOOL *out_result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *RenderDeviceStream )( 
            IVideoGraph * This,
            /* [in] */ BSTR pinCategoryId,
            /* [retval][out] */ VARIANT_BOOL *out_result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *RenderDeviceCaptureStream )( 
            IVideoGraph * This,
            /* [retval][out] */ VARIANT_BOOL *out_result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *RenderDevicePreviewStream )( 
            IVideoGraph * This,
            /* [retval][out] */ VARIANT_BOOL *out_result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *RenderFileStream )( 
            IVideoGraph * This,
            /* [retval][out] */ VARIANT_BOOL *out_result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SetupWindow )( 
            IVideoGraph * This,
            /* [retval][out] */ VARIANT_BOOL *out_result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *CloseWindow )( 
            IVideoGraph * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SetKeepRatioMode )( 
            IVideoGraph * This,
            /* [in] */ VARIANT_BOOL keepRatioStatus,
            /* [retval][out] */ VARIANT_BOOL *out_result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *IsRunning )( 
            IVideoGraph * This,
            /* [retval][out] */ VARIANT_BOOL *out_result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Run )( 
            IVideoGraph * This,
            /* [retval][out] */ VARIANT_BOOL *out_result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Shutdown )( 
            IVideoGraph * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *PumpsEvents )( 
            IVideoGraph * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Resize )( 
            IVideoGraph * This);
        
        END_INTERFACE
    } IVideoGraphVtbl;

    interface IVideoGraph
    {
        CONST_VTBL struct IVideoGraphVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVideoGraph_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVideoGraph_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVideoGraph_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVideoGraph_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IVideoGraph_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IVideoGraph_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IVideoGraph_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IVideoGraph_get_Configuration(This,pVal)	\
    ( (This)->lpVtbl -> get_Configuration(This,pVal) ) 

#define IVideoGraph_Create(This,out_result)	\
    ( (This)->lpVtbl -> Create(This,out_result) ) 

#define IVideoGraph_Destroy(This)	\
    ( (This)->lpVtbl -> Destroy(This) ) 

#define IVideoGraph_SelectDevice(This,out_result)	\
    ( (This)->lpVtbl -> SelectDevice(This,out_result) ) 

#define IVideoGraph_SelectDeviceFormat(This,out_result)	\
    ( (This)->lpVtbl -> SelectDeviceFormat(This,out_result) ) 

#define IVideoGraph_AddDeviceFilter(This,out_result)	\
    ( (This)->lpVtbl -> AddDeviceFilter(This,out_result) ) 

#define IVideoGraph_AddFileSourceFilter(This,out_result)	\
    ( (This)->lpVtbl -> AddFileSourceFilter(This,out_result) ) 

#define IVideoGraph_AddGrabberFilter(This,out_result)	\
    ( (This)->lpVtbl -> AddGrabberFilter(This,out_result) ) 

#define IVideoGraph_AddVideoRenderFilter(This,out_result)	\
    ( (This)->lpVtbl -> AddVideoRenderFilter(This,out_result) ) 

#define IVideoGraph_RenderDeviceStream(This,pinCategoryId,out_result)	\
    ( (This)->lpVtbl -> RenderDeviceStream(This,pinCategoryId,out_result) ) 

#define IVideoGraph_RenderDeviceCaptureStream(This,out_result)	\
    ( (This)->lpVtbl -> RenderDeviceCaptureStream(This,out_result) ) 

#define IVideoGraph_RenderDevicePreviewStream(This,out_result)	\
    ( (This)->lpVtbl -> RenderDevicePreviewStream(This,out_result) ) 

#define IVideoGraph_RenderFileStream(This,out_result)	\
    ( (This)->lpVtbl -> RenderFileStream(This,out_result) ) 

#define IVideoGraph_SetupWindow(This,out_result)	\
    ( (This)->lpVtbl -> SetupWindow(This,out_result) ) 

#define IVideoGraph_CloseWindow(This)	\
    ( (This)->lpVtbl -> CloseWindow(This) ) 

#define IVideoGraph_SetKeepRatioMode(This,keepRatioStatus,out_result)	\
    ( (This)->lpVtbl -> SetKeepRatioMode(This,keepRatioStatus,out_result) ) 

#define IVideoGraph_IsRunning(This,out_result)	\
    ( (This)->lpVtbl -> IsRunning(This,out_result) ) 

#define IVideoGraph_Run(This,out_result)	\
    ( (This)->lpVtbl -> Run(This,out_result) ) 

#define IVideoGraph_Shutdown(This)	\
    ( (This)->lpVtbl -> Shutdown(This) ) 

#define IVideoGraph_PumpsEvents(This)	\
    ( (This)->lpVtbl -> PumpsEvents(This) ) 

#define IVideoGraph_Resize(This)	\
    ( (This)->lpVtbl -> Resize(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVideoGraph_INTERFACE_DEFINED__ */


#ifndef __IMediaMonikerList_INTERFACE_DEFINED__
#define __IMediaMonikerList_INTERFACE_DEFINED__

/* interface IMediaMonikerList */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IMediaMonikerList;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("185643D0-1786-47F1-8AE6-95125CC35C81")
    IMediaMonikerList : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_IsEmpty( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_IsFull( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Any( 
            /* [retval][out] */ VARIANT_BOOL *out_result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Contains( 
            /* [in] */ IMoniker *moniker,
            VARIANT_BOOL *out_result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ IMoniker *moniker,
            VARIANT_BOOL *out_result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE FindAt( 
            /* [in] */ LONG index,
            /* [retval][out] */ IMoniker **out_result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE RemoveAt( 
            /* [in] */ LONG index,
            /* [retval][out] */ VARIANT_BOOL *out_result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Remove( 
            /* [in] */ IMoniker *moniker,
            VARIANT_BOOL *out_result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMediaMonikerListVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMediaMonikerList * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMediaMonikerList * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMediaMonikerList * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMediaMonikerList * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMediaMonikerList * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMediaMonikerList * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMediaMonikerList * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IMediaMonikerList * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsEmpty )( 
            IMediaMonikerList * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsFull )( 
            IMediaMonikerList * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Any )( 
            IMediaMonikerList * This,
            /* [retval][out] */ VARIANT_BOOL *out_result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Contains )( 
            IMediaMonikerList * This,
            /* [in] */ IMoniker *moniker,
            VARIANT_BOOL *out_result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Add )( 
            IMediaMonikerList * This,
            /* [in] */ IMoniker *moniker,
            VARIANT_BOOL *out_result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *FindAt )( 
            IMediaMonikerList * This,
            /* [in] */ LONG index,
            /* [retval][out] */ IMoniker **out_result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *RemoveAt )( 
            IMediaMonikerList * This,
            /* [in] */ LONG index,
            /* [retval][out] */ VARIANT_BOOL *out_result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            IMediaMonikerList * This,
            /* [in] */ IMoniker *moniker,
            VARIANT_BOOL *out_result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            IMediaMonikerList * This);
        
        END_INTERFACE
    } IMediaMonikerListVtbl;

    interface IMediaMonikerList
    {
        CONST_VTBL struct IMediaMonikerListVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMediaMonikerList_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMediaMonikerList_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMediaMonikerList_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMediaMonikerList_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMediaMonikerList_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMediaMonikerList_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMediaMonikerList_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMediaMonikerList_get_Count(This,pVal)	\
    ( (This)->lpVtbl -> get_Count(This,pVal) ) 

#define IMediaMonikerList_get_IsEmpty(This,pVal)	\
    ( (This)->lpVtbl -> get_IsEmpty(This,pVal) ) 

#define IMediaMonikerList_get_IsFull(This,pVal)	\
    ( (This)->lpVtbl -> get_IsFull(This,pVal) ) 

#define IMediaMonikerList_Any(This,out_result)	\
    ( (This)->lpVtbl -> Any(This,out_result) ) 

#define IMediaMonikerList_Contains(This,moniker,out_result)	\
    ( (This)->lpVtbl -> Contains(This,moniker,out_result) ) 

#define IMediaMonikerList_Add(This,moniker,out_result)	\
    ( (This)->lpVtbl -> Add(This,moniker,out_result) ) 

#define IMediaMonikerList_FindAt(This,index,out_result)	\
    ( (This)->lpVtbl -> FindAt(This,index,out_result) ) 

#define IMediaMonikerList_RemoveAt(This,index,out_result)	\
    ( (This)->lpVtbl -> RemoveAt(This,index,out_result) ) 

#define IMediaMonikerList_Remove(This,moniker,out_result)	\
    ( (This)->lpVtbl -> Remove(This,moniker,out_result) ) 

#define IMediaMonikerList_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMediaMonikerList_INTERFACE_DEFINED__ */


#ifndef __IMediaMonikerStore_INTERFACE_DEFINED__
#define __IMediaMonikerStore_INTERFACE_DEFINED__

/* interface IMediaMonikerStore */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IMediaMonikerStore;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C2B43E1F-B6A6-4C3E-BEE9-5B9053E8A748")
    IMediaMonikerStore : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE FindAll( 
            /* [retval][out] */ IMediaMonikerList **out_result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE FindByName( 
            /* [in] */ BSTR deviceName,
            /* [retval][out] */ IMoniker **out_result) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMediaMonikerStoreVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMediaMonikerStore * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMediaMonikerStore * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMediaMonikerStore * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMediaMonikerStore * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMediaMonikerStore * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMediaMonikerStore * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMediaMonikerStore * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *FindAll )( 
            IMediaMonikerStore * This,
            /* [retval][out] */ IMediaMonikerList **out_result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *FindByName )( 
            IMediaMonikerStore * This,
            /* [in] */ BSTR deviceName,
            /* [retval][out] */ IMoniker **out_result);
        
        END_INTERFACE
    } IMediaMonikerStoreVtbl;

    interface IMediaMonikerStore
    {
        CONST_VTBL struct IMediaMonikerStoreVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMediaMonikerStore_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMediaMonikerStore_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMediaMonikerStore_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMediaMonikerStore_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMediaMonikerStore_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMediaMonikerStore_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMediaMonikerStore_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMediaMonikerStore_FindAll(This,out_result)	\
    ( (This)->lpVtbl -> FindAll(This,out_result) ) 

#define IMediaMonikerStore_FindByName(This,deviceName,out_result)	\
    ( (This)->lpVtbl -> FindByName(This,deviceName,out_result) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMediaMonikerStore_INTERFACE_DEFINED__ */


#ifndef __IVideoDeviceInfo_INTERFACE_DEFINED__
#define __IVideoDeviceInfo_INTERFACE_DEFINED__

/* interface IVideoDeviceInfo */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IVideoDeviceInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3DEBBEEF-7996-4D4F-B2D6-C5E25D759709")
    IVideoDeviceInfo : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Name( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Description( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Description( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Path( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Path( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Validate( 
            /* [retval][out] */ VARIANT_BOOL *out_result) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVideoDeviceInfoVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVideoDeviceInfo * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVideoDeviceInfo * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVideoDeviceInfo * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IVideoDeviceInfo * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IVideoDeviceInfo * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IVideoDeviceInfo * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IVideoDeviceInfo * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IVideoDeviceInfo * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            IVideoDeviceInfo * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Description )( 
            IVideoDeviceInfo * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Description )( 
            IVideoDeviceInfo * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Path )( 
            IVideoDeviceInfo * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Path )( 
            IVideoDeviceInfo * This,
            /* [in] */ BSTR newVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Validate )( 
            IVideoDeviceInfo * This,
            /* [retval][out] */ VARIANT_BOOL *out_result);
        
        END_INTERFACE
    } IVideoDeviceInfoVtbl;

    interface IVideoDeviceInfo
    {
        CONST_VTBL struct IVideoDeviceInfoVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVideoDeviceInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVideoDeviceInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVideoDeviceInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVideoDeviceInfo_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IVideoDeviceInfo_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IVideoDeviceInfo_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IVideoDeviceInfo_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IVideoDeviceInfo_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define IVideoDeviceInfo_put_Name(This,newVal)	\
    ( (This)->lpVtbl -> put_Name(This,newVal) ) 

#define IVideoDeviceInfo_get_Description(This,pVal)	\
    ( (This)->lpVtbl -> get_Description(This,pVal) ) 

#define IVideoDeviceInfo_put_Description(This,newVal)	\
    ( (This)->lpVtbl -> put_Description(This,newVal) ) 

#define IVideoDeviceInfo_get_Path(This,pVal)	\
    ( (This)->lpVtbl -> get_Path(This,pVal) ) 

#define IVideoDeviceInfo_put_Path(This,newVal)	\
    ( (This)->lpVtbl -> put_Path(This,newVal) ) 

#define IVideoDeviceInfo_Validate(This,out_result)	\
    ( (This)->lpVtbl -> Validate(This,out_result) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVideoDeviceInfo_INTERFACE_DEFINED__ */


#ifndef __IVideoDeviceInfoList_INTERFACE_DEFINED__
#define __IVideoDeviceInfoList_INTERFACE_DEFINED__

/* interface IVideoDeviceInfoList */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IVideoDeviceInfoList;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7987D343-C893-411A-A467-204648E4259B")
    IVideoDeviceInfoList : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_IsEmpty( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_IsFull( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Any( 
            /* [retval][out] */ VARIANT_BOOL *out_result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Contains( 
            /* [in] */ IVideoDeviceInfo *deviceInfo,
            VARIANT_BOOL *out_result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ IVideoDeviceInfo *deviceInfo,
            VARIANT_BOOL *out_result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE FindAt( 
            /* [in] */ LONG index,
            /* [retval][out] */ IVideoDeviceInfo **out_result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE RemoveAt( 
            /* [in] */ LONG index,
            /* [retval][out] */ VARIANT_BOOL *out_result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Remove( 
            /* [in] */ IVideoDeviceInfo *deviceInfo,
            VARIANT_BOOL *out_result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVideoDeviceInfoListVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVideoDeviceInfoList * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVideoDeviceInfoList * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVideoDeviceInfoList * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IVideoDeviceInfoList * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IVideoDeviceInfoList * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IVideoDeviceInfoList * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IVideoDeviceInfoList * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IVideoDeviceInfoList * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsEmpty )( 
            IVideoDeviceInfoList * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsFull )( 
            IVideoDeviceInfoList * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Any )( 
            IVideoDeviceInfoList * This,
            /* [retval][out] */ VARIANT_BOOL *out_result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Contains )( 
            IVideoDeviceInfoList * This,
            /* [in] */ IVideoDeviceInfo *deviceInfo,
            VARIANT_BOOL *out_result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Add )( 
            IVideoDeviceInfoList * This,
            /* [in] */ IVideoDeviceInfo *deviceInfo,
            VARIANT_BOOL *out_result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *FindAt )( 
            IVideoDeviceInfoList * This,
            /* [in] */ LONG index,
            /* [retval][out] */ IVideoDeviceInfo **out_result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *RemoveAt )( 
            IVideoDeviceInfoList * This,
            /* [in] */ LONG index,
            /* [retval][out] */ VARIANT_BOOL *out_result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            IVideoDeviceInfoList * This,
            /* [in] */ IVideoDeviceInfo *deviceInfo,
            VARIANT_BOOL *out_result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            IVideoDeviceInfoList * This);
        
        END_INTERFACE
    } IVideoDeviceInfoListVtbl;

    interface IVideoDeviceInfoList
    {
        CONST_VTBL struct IVideoDeviceInfoListVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVideoDeviceInfoList_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVideoDeviceInfoList_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVideoDeviceInfoList_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVideoDeviceInfoList_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IVideoDeviceInfoList_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IVideoDeviceInfoList_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IVideoDeviceInfoList_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IVideoDeviceInfoList_get_Count(This,pVal)	\
    ( (This)->lpVtbl -> get_Count(This,pVal) ) 

#define IVideoDeviceInfoList_get_IsEmpty(This,pVal)	\
    ( (This)->lpVtbl -> get_IsEmpty(This,pVal) ) 

#define IVideoDeviceInfoList_get_IsFull(This,pVal)	\
    ( (This)->lpVtbl -> get_IsFull(This,pVal) ) 

#define IVideoDeviceInfoList_Any(This,out_result)	\
    ( (This)->lpVtbl -> Any(This,out_result) ) 

#define IVideoDeviceInfoList_Contains(This,deviceInfo,out_result)	\
    ( (This)->lpVtbl -> Contains(This,deviceInfo,out_result) ) 

#define IVideoDeviceInfoList_Add(This,deviceInfo,out_result)	\
    ( (This)->lpVtbl -> Add(This,deviceInfo,out_result) ) 

#define IVideoDeviceInfoList_FindAt(This,index,out_result)	\
    ( (This)->lpVtbl -> FindAt(This,index,out_result) ) 

#define IVideoDeviceInfoList_RemoveAt(This,index,out_result)	\
    ( (This)->lpVtbl -> RemoveAt(This,index,out_result) ) 

#define IVideoDeviceInfoList_Remove(This,deviceInfo,out_result)	\
    ( (This)->lpVtbl -> Remove(This,deviceInfo,out_result) ) 

#define IVideoDeviceInfoList_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVideoDeviceInfoList_INTERFACE_DEFINED__ */


#ifndef __IVideoDeviceInfoAdapter_INTERFACE_DEFINED__
#define __IVideoDeviceInfoAdapter_INTERFACE_DEFINED__

/* interface IVideoDeviceInfoAdapter */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IVideoDeviceInfoAdapter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("49500E1F-5B1C-4214-995A-98002496C894")
    IVideoDeviceInfoAdapter : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Adapt( 
            /* [in] */ IMoniker *moniker,
            /* [retval][out] */ IVideoDeviceInfo **out_result) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVideoDeviceInfoAdapterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVideoDeviceInfoAdapter * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVideoDeviceInfoAdapter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVideoDeviceInfoAdapter * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IVideoDeviceInfoAdapter * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IVideoDeviceInfoAdapter * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IVideoDeviceInfoAdapter * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IVideoDeviceInfoAdapter * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Adapt )( 
            IVideoDeviceInfoAdapter * This,
            /* [in] */ IMoniker *moniker,
            /* [retval][out] */ IVideoDeviceInfo **out_result);
        
        END_INTERFACE
    } IVideoDeviceInfoAdapterVtbl;

    interface IVideoDeviceInfoAdapter
    {
        CONST_VTBL struct IVideoDeviceInfoAdapterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVideoDeviceInfoAdapter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVideoDeviceInfoAdapter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVideoDeviceInfoAdapter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVideoDeviceInfoAdapter_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IVideoDeviceInfoAdapter_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IVideoDeviceInfoAdapter_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IVideoDeviceInfoAdapter_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IVideoDeviceInfoAdapter_Adapt(This,moniker,out_result)	\
    ( (This)->lpVtbl -> Adapt(This,moniker,out_result) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVideoDeviceInfoAdapter_INTERFACE_DEFINED__ */


#ifndef __IVideoDeviceInfoDiscovery_INTERFACE_DEFINED__
#define __IVideoDeviceInfoDiscovery_INTERFACE_DEFINED__

/* interface IVideoDeviceInfoDiscovery */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IVideoDeviceInfoDiscovery;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("BCE3117A-8B93-4E27-95E5-ACF6FEF3EEF8")
    IVideoDeviceInfoDiscovery : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SearchDevices( 
            /* [retval][out] */ IVideoDeviceInfoList **out_result) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVideoDeviceInfoDiscoveryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVideoDeviceInfoDiscovery * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVideoDeviceInfoDiscovery * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVideoDeviceInfoDiscovery * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IVideoDeviceInfoDiscovery * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IVideoDeviceInfoDiscovery * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IVideoDeviceInfoDiscovery * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IVideoDeviceInfoDiscovery * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SearchDevices )( 
            IVideoDeviceInfoDiscovery * This,
            /* [retval][out] */ IVideoDeviceInfoList **out_result);
        
        END_INTERFACE
    } IVideoDeviceInfoDiscoveryVtbl;

    interface IVideoDeviceInfoDiscovery
    {
        CONST_VTBL struct IVideoDeviceInfoDiscoveryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVideoDeviceInfoDiscovery_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVideoDeviceInfoDiscovery_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVideoDeviceInfoDiscovery_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVideoDeviceInfoDiscovery_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IVideoDeviceInfoDiscovery_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IVideoDeviceInfoDiscovery_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IVideoDeviceInfoDiscovery_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IVideoDeviceInfoDiscovery_SearchDevices(This,out_result)	\
    ( (This)->lpVtbl -> SearchDevices(This,out_result) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVideoDeviceInfoDiscovery_INTERFACE_DEFINED__ */


#ifndef __IVideoPlayer_INTERFACE_DEFINED__
#define __IVideoPlayer_INTERFACE_DEFINED__

/* interface IVideoPlayer */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IVideoPlayer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B4584341-EC02-4084-8E53-76F388363A8C")
    IVideoPlayer : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Window( 
            /* [retval][out] */ OLE_HANDLE *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Window( 
            /* [in] */ OLE_HANDLE newVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE IsPlaying( 
            /* [retval][out] */ VARIANT_BOOL *out_result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Play( 
            /* [retval][out] */ VARIANT_BOOL *out_result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Stop( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Refresh( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVideoPlayerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVideoPlayer * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVideoPlayer * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVideoPlayer * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IVideoPlayer * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IVideoPlayer * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IVideoPlayer * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IVideoPlayer * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Window )( 
            IVideoPlayer * This,
            /* [retval][out] */ OLE_HANDLE *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Window )( 
            IVideoPlayer * This,
            /* [in] */ OLE_HANDLE newVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *IsPlaying )( 
            IVideoPlayer * This,
            /* [retval][out] */ VARIANT_BOOL *out_result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Play )( 
            IVideoPlayer * This,
            /* [retval][out] */ VARIANT_BOOL *out_result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Stop )( 
            IVideoPlayer * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Refresh )( 
            IVideoPlayer * This);
        
        END_INTERFACE
    } IVideoPlayerVtbl;

    interface IVideoPlayer
    {
        CONST_VTBL struct IVideoPlayerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVideoPlayer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVideoPlayer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVideoPlayer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVideoPlayer_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IVideoPlayer_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IVideoPlayer_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IVideoPlayer_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IVideoPlayer_get_Window(This,pVal)	\
    ( (This)->lpVtbl -> get_Window(This,pVal) ) 

#define IVideoPlayer_put_Window(This,newVal)	\
    ( (This)->lpVtbl -> put_Window(This,newVal) ) 

#define IVideoPlayer_IsPlaying(This,out_result)	\
    ( (This)->lpVtbl -> IsPlaying(This,out_result) ) 

#define IVideoPlayer_Play(This,out_result)	\
    ( (This)->lpVtbl -> Play(This,out_result) ) 

#define IVideoPlayer_Stop(This)	\
    ( (This)->lpVtbl -> Stop(This) ) 

#define IVideoPlayer_Refresh(This)	\
    ( (This)->lpVtbl -> Refresh(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVideoPlayer_INTERFACE_DEFINED__ */


#ifndef __IDeviceVideoPlayer_INTERFACE_DEFINED__
#define __IDeviceVideoPlayer_INTERFACE_DEFINED__

/* interface IDeviceVideoPlayer */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IDeviceVideoPlayer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2A240A41-CA05-43D7-8D22-F8DCA58F6B8B")
    IDeviceVideoPlayer : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_DeviceName( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_DeviceName( 
            /* [in] */ BSTR newVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDeviceVideoPlayerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDeviceVideoPlayer * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDeviceVideoPlayer * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDeviceVideoPlayer * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDeviceVideoPlayer * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDeviceVideoPlayer * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDeviceVideoPlayer * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDeviceVideoPlayer * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DeviceName )( 
            IDeviceVideoPlayer * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DeviceName )( 
            IDeviceVideoPlayer * This,
            /* [in] */ BSTR newVal);
        
        END_INTERFACE
    } IDeviceVideoPlayerVtbl;

    interface IDeviceVideoPlayer
    {
        CONST_VTBL struct IDeviceVideoPlayerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDeviceVideoPlayer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDeviceVideoPlayer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDeviceVideoPlayer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDeviceVideoPlayer_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDeviceVideoPlayer_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDeviceVideoPlayer_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDeviceVideoPlayer_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDeviceVideoPlayer_get_DeviceName(This,pVal)	\
    ( (This)->lpVtbl -> get_DeviceName(This,pVal) ) 

#define IDeviceVideoPlayer_put_DeviceName(This,newVal)	\
    ( (This)->lpVtbl -> put_DeviceName(This,newVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDeviceVideoPlayer_INTERFACE_DEFINED__ */


#ifndef __ITest_INTERFACE_DEFINED__
#define __ITest_INTERFACE_DEFINED__

/* interface ITest */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ITest;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("36522271-0168-4B6E-82F4-C83C2C22AAEE")
    ITest : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Run( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITestVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITest * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITest * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITest * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ITest * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ITest * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ITest * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ITest * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Run )( 
            ITest * This);
        
        END_INTERFACE
    } ITestVtbl;

    interface ITest
    {
        CONST_VTBL struct ITestVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITest_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITest_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITest_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITest_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ITest_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ITest_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ITest_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ITest_Run(This)	\
    ( (This)->lpVtbl -> Run(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITest_INTERFACE_DEFINED__ */


#ifndef __IVideoGraphRunner_INTERFACE_DEFINED__
#define __IVideoGraphRunner_INTERFACE_DEFINED__

/* interface IVideoGraphRunner */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IVideoGraphRunner;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("744465B7-9EC6-4E77-AD7A-7AAFDCCA339D")
    IVideoGraphRunner : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE IsStarted( 
            /* [retval][out] */ VARIANT_BOOL *out_result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Start( 
            /* [in] */ IVideoGraph *graph,
            /* [retval][out] */ VARIANT_BOOL *out_result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Stop( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVideoGraphRunnerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVideoGraphRunner * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVideoGraphRunner * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVideoGraphRunner * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IVideoGraphRunner * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IVideoGraphRunner * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IVideoGraphRunner * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IVideoGraphRunner * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *IsStarted )( 
            IVideoGraphRunner * This,
            /* [retval][out] */ VARIANT_BOOL *out_result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Start )( 
            IVideoGraphRunner * This,
            /* [in] */ IVideoGraph *graph,
            /* [retval][out] */ VARIANT_BOOL *out_result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Stop )( 
            IVideoGraphRunner * This);
        
        END_INTERFACE
    } IVideoGraphRunnerVtbl;

    interface IVideoGraphRunner
    {
        CONST_VTBL struct IVideoGraphRunnerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVideoGraphRunner_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVideoGraphRunner_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVideoGraphRunner_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVideoGraphRunner_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IVideoGraphRunner_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IVideoGraphRunner_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IVideoGraphRunner_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IVideoGraphRunner_IsStarted(This,out_result)	\
    ( (This)->lpVtbl -> IsStarted(This,out_result) ) 

#define IVideoGraphRunner_Start(This,graph,out_result)	\
    ( (This)->lpVtbl -> Start(This,graph,out_result) ) 

#define IVideoGraphRunner_Stop(This)	\
    ( (This)->lpVtbl -> Stop(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVideoGraphRunner_INTERFACE_DEFINED__ */


#ifndef __ISetting_INTERFACE_DEFINED__
#define __ISetting_INTERFACE_DEFINED__

/* interface ISetting */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ISetting;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("10DC614F-D061-4EE7-A071-EBFEF8BC9C2B")
    ISetting : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_UniqueID( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Value( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Value( 
            /* [in] */ BSTR newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_IsDirty( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_IsDirty( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Validate( 
            /* [retval][out] */ VARIANT_BOOL *out_result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISettingVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISetting * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISetting * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISetting * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISetting * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISetting * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISetting * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISetting * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UniqueID )( 
            ISetting * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )( 
            ISetting * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Value )( 
            ISetting * This,
            /* [in] */ BSTR newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsDirty )( 
            ISetting * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_IsDirty )( 
            ISetting * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Validate )( 
            ISetting * This,
            /* [retval][out] */ VARIANT_BOOL *out_result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Reset )( 
            ISetting * This);
        
        END_INTERFACE
    } ISettingVtbl;

    interface ISetting
    {
        CONST_VTBL struct ISettingVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISetting_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISetting_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISetting_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISetting_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISetting_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISetting_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISetting_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISetting_get_UniqueID(This,pVal)	\
    ( (This)->lpVtbl -> get_UniqueID(This,pVal) ) 

#define ISetting_get_Value(This,pVal)	\
    ( (This)->lpVtbl -> get_Value(This,pVal) ) 

#define ISetting_put_Value(This,newVal)	\
    ( (This)->lpVtbl -> put_Value(This,newVal) ) 

#define ISetting_get_IsDirty(This,pVal)	\
    ( (This)->lpVtbl -> get_IsDirty(This,pVal) ) 

#define ISetting_put_IsDirty(This,newVal)	\
    ( (This)->lpVtbl -> put_IsDirty(This,newVal) ) 

#define ISetting_Validate(This,out_result)	\
    ( (This)->lpVtbl -> Validate(This,out_result) ) 

#define ISetting_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISetting_INTERFACE_DEFINED__ */


#ifndef __ISettingList_INTERFACE_DEFINED__
#define __ISettingList_INTERFACE_DEFINED__

/* interface ISettingList */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ISettingList;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9F7032F7-82EC-44A6-840C-5D2CE1694B1F")
    ISettingList : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_IsEmpty( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_IsFull( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Any( 
            /* [retval][out] */ VARIANT_BOOL *out_result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Contains( 
            /* [in] */ ISetting *setting,
            /* [retval][out] */ VARIANT_BOOL *out_result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Exists( 
            /* [in] */ BSTR uniqueID,
            /* [retval][out] */ VARIANT_BOOL *out_result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ ISetting *setting,
            /* [retval][out] */ VARIANT_BOOL *out_result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE FindByID( 
            /* [in] */ BSTR uniqueID,
            /* [retval][out] */ ISetting **out_result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE FindAt( 
            /* [in] */ LONG index,
            /* [retval][out] */ ISetting **out_result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetByID( 
            /* [in] */ BSTR uniqueID,
            /* [retval][out] */ ISetting **out_result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetAt( 
            /* [in] */ LONG index,
            /* [retval][out] */ ISetting **out_result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Remove( 
            /* [in] */ ISetting *setting,
            /* [retval][out] */ VARIANT_BOOL *out_result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE RemoveByID( 
            /* [in] */ BSTR uniqueID,
            /* [retval][out] */ VARIANT_BOOL *out_result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE RemoveAt( 
            /* [in] */ LONG index,
            /* [retval][out] */ VARIANT_BOOL *out_result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISettingListVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISettingList * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISettingList * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISettingList * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISettingList * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISettingList * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISettingList * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISettingList * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            ISettingList * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsEmpty )( 
            ISettingList * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsFull )( 
            ISettingList * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Any )( 
            ISettingList * This,
            /* [retval][out] */ VARIANT_BOOL *out_result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Contains )( 
            ISettingList * This,
            /* [in] */ ISetting *setting,
            /* [retval][out] */ VARIANT_BOOL *out_result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Exists )( 
            ISettingList * This,
            /* [in] */ BSTR uniqueID,
            /* [retval][out] */ VARIANT_BOOL *out_result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Add )( 
            ISettingList * This,
            /* [in] */ ISetting *setting,
            /* [retval][out] */ VARIANT_BOOL *out_result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *FindByID )( 
            ISettingList * This,
            /* [in] */ BSTR uniqueID,
            /* [retval][out] */ ISetting **out_result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *FindAt )( 
            ISettingList * This,
            /* [in] */ LONG index,
            /* [retval][out] */ ISetting **out_result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetByID )( 
            ISettingList * This,
            /* [in] */ BSTR uniqueID,
            /* [retval][out] */ ISetting **out_result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetAt )( 
            ISettingList * This,
            /* [in] */ LONG index,
            /* [retval][out] */ ISetting **out_result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            ISettingList * This,
            /* [in] */ ISetting *setting,
            /* [retval][out] */ VARIANT_BOOL *out_result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *RemoveByID )( 
            ISettingList * This,
            /* [in] */ BSTR uniqueID,
            /* [retval][out] */ VARIANT_BOOL *out_result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *RemoveAt )( 
            ISettingList * This,
            /* [in] */ LONG index,
            /* [retval][out] */ VARIANT_BOOL *out_result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            ISettingList * This);
        
        END_INTERFACE
    } ISettingListVtbl;

    interface ISettingList
    {
        CONST_VTBL struct ISettingListVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISettingList_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISettingList_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISettingList_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISettingList_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISettingList_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISettingList_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISettingList_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISettingList_get_Count(This,pVal)	\
    ( (This)->lpVtbl -> get_Count(This,pVal) ) 

#define ISettingList_get_IsEmpty(This,pVal)	\
    ( (This)->lpVtbl -> get_IsEmpty(This,pVal) ) 

#define ISettingList_get_IsFull(This,pVal)	\
    ( (This)->lpVtbl -> get_IsFull(This,pVal) ) 

#define ISettingList_Any(This,out_result)	\
    ( (This)->lpVtbl -> Any(This,out_result) ) 

#define ISettingList_Contains(This,setting,out_result)	\
    ( (This)->lpVtbl -> Contains(This,setting,out_result) ) 

#define ISettingList_Exists(This,uniqueID,out_result)	\
    ( (This)->lpVtbl -> Exists(This,uniqueID,out_result) ) 

#define ISettingList_Add(This,setting,out_result)	\
    ( (This)->lpVtbl -> Add(This,setting,out_result) ) 

#define ISettingList_FindByID(This,uniqueID,out_result)	\
    ( (This)->lpVtbl -> FindByID(This,uniqueID,out_result) ) 

#define ISettingList_FindAt(This,index,out_result)	\
    ( (This)->lpVtbl -> FindAt(This,index,out_result) ) 

#define ISettingList_GetByID(This,uniqueID,out_result)	\
    ( (This)->lpVtbl -> GetByID(This,uniqueID,out_result) ) 

#define ISettingList_GetAt(This,index,out_result)	\
    ( (This)->lpVtbl -> GetAt(This,index,out_result) ) 

#define ISettingList_Remove(This,setting,out_result)	\
    ( (This)->lpVtbl -> Remove(This,setting,out_result) ) 

#define ISettingList_RemoveByID(This,uniqueID,out_result)	\
    ( (This)->lpVtbl -> RemoveByID(This,uniqueID,out_result) ) 

#define ISettingList_RemoveAt(This,index,out_result)	\
    ( (This)->lpVtbl -> RemoveAt(This,index,out_result) ) 

#define ISettingList_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISettingList_INTERFACE_DEFINED__ */


#ifndef __ISettingFactory_INTERFACE_DEFINED__
#define __ISettingFactory_INTERFACE_DEFINED__

/* interface ISettingFactory */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ISettingFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("01A4FD65-0791-4FAC-AC26-CEE233B7F447")
    ISettingFactory : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE CreateSetting( 
            /* [in] */ BSTR uniqueID,
            /* [retval][out] */ ISetting **out_result) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISettingFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISettingFactory * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISettingFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISettingFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISettingFactory * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISettingFactory * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISettingFactory * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISettingFactory * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *CreateSetting )( 
            ISettingFactory * This,
            /* [in] */ BSTR uniqueID,
            /* [retval][out] */ ISetting **out_result);
        
        END_INTERFACE
    } ISettingFactoryVtbl;

    interface ISettingFactory
    {
        CONST_VTBL struct ISettingFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISettingFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISettingFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISettingFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISettingFactory_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISettingFactory_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISettingFactory_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISettingFactory_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISettingFactory_CreateSetting(This,uniqueID,out_result)	\
    ( (This)->lpVtbl -> CreateSetting(This,uniqueID,out_result) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISettingFactory_INTERFACE_DEFINED__ */


#ifndef __IFrame_INTERFACE_DEFINED__
#define __IFrame_INTERFACE_DEFINED__

/* interface IFrame */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IFrame;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("21EB9E48-F9D0-432C-9D99-D4DAFC857125")
    IFrame : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Size( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_IsEmpty( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Values( 
            /* [retval][out] */ BYTE **pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE IsCreated( 
            /* [retval][out] */ VARIANT_BOOL *out_result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Create( 
            /* [in] */ LONG size,
            /* [in] */ VARIANT_BOOL initToZero,
            /* [retval][out] */ VARIANT_BOOL *out_result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE CopyFrom( 
            /* [in] */ BYTE *values,
            /* [in] */ LONG size,
            /* [retval][out] */ VARIANT_BOOL *out_result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetAt( 
            /* [in] */ LONG index,
            /* [retval][out] */ BYTE *out_result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SetAt( 
            /* [in] */ LONG index,
            /* [in] */ BYTE value,
            /* [retval][out] */ VARIANT_BOOL *out_result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Destroy( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFrameVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IFrame * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IFrame * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IFrame * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IFrame * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IFrame * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IFrame * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IFrame * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            IFrame * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsEmpty )( 
            IFrame * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Values )( 
            IFrame * This,
            /* [retval][out] */ BYTE **pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *IsCreated )( 
            IFrame * This,
            /* [retval][out] */ VARIANT_BOOL *out_result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Create )( 
            IFrame * This,
            /* [in] */ LONG size,
            /* [in] */ VARIANT_BOOL initToZero,
            /* [retval][out] */ VARIANT_BOOL *out_result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *CopyFrom )( 
            IFrame * This,
            /* [in] */ BYTE *values,
            /* [in] */ LONG size,
            /* [retval][out] */ VARIANT_BOOL *out_result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetAt )( 
            IFrame * This,
            /* [in] */ LONG index,
            /* [retval][out] */ BYTE *out_result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SetAt )( 
            IFrame * This,
            /* [in] */ LONG index,
            /* [in] */ BYTE value,
            /* [retval][out] */ VARIANT_BOOL *out_result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            IFrame * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Destroy )( 
            IFrame * This);
        
        END_INTERFACE
    } IFrameVtbl;

    interface IFrame
    {
        CONST_VTBL struct IFrameVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFrame_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFrame_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFrame_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFrame_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IFrame_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IFrame_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IFrame_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IFrame_get_Size(This,pVal)	\
    ( (This)->lpVtbl -> get_Size(This,pVal) ) 

#define IFrame_get_IsEmpty(This,pVal)	\
    ( (This)->lpVtbl -> get_IsEmpty(This,pVal) ) 

#define IFrame_get_Values(This,pVal)	\
    ( (This)->lpVtbl -> get_Values(This,pVal) ) 

#define IFrame_IsCreated(This,out_result)	\
    ( (This)->lpVtbl -> IsCreated(This,out_result) ) 

#define IFrame_Create(This,size,initToZero,out_result)	\
    ( (This)->lpVtbl -> Create(This,size,initToZero,out_result) ) 

#define IFrame_CopyFrom(This,values,size,out_result)	\
    ( (This)->lpVtbl -> CopyFrom(This,values,size,out_result) ) 

#define IFrame_GetAt(This,index,out_result)	\
    ( (This)->lpVtbl -> GetAt(This,index,out_result) ) 

#define IFrame_SetAt(This,index,value,out_result)	\
    ( (This)->lpVtbl -> SetAt(This,index,value,out_result) ) 

#define IFrame_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define IFrame_Destroy(This)	\
    ( (This)->lpVtbl -> Destroy(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFrame_INTERFACE_DEFINED__ */


#ifndef __IFrameBuffer_INTERFACE_DEFINED__
#define __IFrameBuffer_INTERFACE_DEFINED__

/* interface IFrameBuffer */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IFrameBuffer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D9E6DB72-ADF0-4605-BF0F-9007D9D3D7E8")
    IFrameBuffer : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_CanWrite( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_CanWrite( 
            /* [in] */ VARIANT_BOOL newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Limit( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Limit( 
            /* [in] */ LONG newVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Size( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_IsEmpty( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_IsFull( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Read( 
            /* [retval][out] */ IFrame **out_result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Write( 
            /* [in] */ IFrame *frame,
            /* [retval][out] */ VARIANT_BOOL *out_result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Synchronize( 
            /* [in] */ ULONG timeout,
            /* [in] */ ULONG cancelationHandle,
            /* [retval][out] */ VARIANT_BOOL *out_result) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFrameBufferVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IFrameBuffer * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IFrameBuffer * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IFrameBuffer * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IFrameBuffer * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IFrameBuffer * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IFrameBuffer * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IFrameBuffer * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CanWrite )( 
            IFrameBuffer * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_CanWrite )( 
            IFrameBuffer * This,
            /* [in] */ VARIANT_BOOL newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Limit )( 
            IFrameBuffer * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Limit )( 
            IFrameBuffer * This,
            /* [in] */ LONG newVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            IFrameBuffer * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsEmpty )( 
            IFrameBuffer * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsFull )( 
            IFrameBuffer * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Read )( 
            IFrameBuffer * This,
            /* [retval][out] */ IFrame **out_result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Write )( 
            IFrameBuffer * This,
            /* [in] */ IFrame *frame,
            /* [retval][out] */ VARIANT_BOOL *out_result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            IFrameBuffer * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Synchronize )( 
            IFrameBuffer * This,
            /* [in] */ ULONG timeout,
            /* [in] */ ULONG cancelationHandle,
            /* [retval][out] */ VARIANT_BOOL *out_result);
        
        END_INTERFACE
    } IFrameBufferVtbl;

    interface IFrameBuffer
    {
        CONST_VTBL struct IFrameBufferVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFrameBuffer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFrameBuffer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFrameBuffer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFrameBuffer_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IFrameBuffer_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IFrameBuffer_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IFrameBuffer_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IFrameBuffer_get_CanWrite(This,pVal)	\
    ( (This)->lpVtbl -> get_CanWrite(This,pVal) ) 

#define IFrameBuffer_put_CanWrite(This,newVal)	\
    ( (This)->lpVtbl -> put_CanWrite(This,newVal) ) 

#define IFrameBuffer_get_Limit(This,pVal)	\
    ( (This)->lpVtbl -> get_Limit(This,pVal) ) 

#define IFrameBuffer_put_Limit(This,newVal)	\
    ( (This)->lpVtbl -> put_Limit(This,newVal) ) 

#define IFrameBuffer_get_Size(This,pVal)	\
    ( (This)->lpVtbl -> get_Size(This,pVal) ) 

#define IFrameBuffer_get_IsEmpty(This,pVal)	\
    ( (This)->lpVtbl -> get_IsEmpty(This,pVal) ) 

#define IFrameBuffer_get_IsFull(This,pVal)	\
    ( (This)->lpVtbl -> get_IsFull(This,pVal) ) 

#define IFrameBuffer_Read(This,out_result)	\
    ( (This)->lpVtbl -> Read(This,out_result) ) 

#define IFrameBuffer_Write(This,frame,out_result)	\
    ( (This)->lpVtbl -> Write(This,frame,out_result) ) 

#define IFrameBuffer_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define IFrameBuffer_Synchronize(This,timeout,cancelationHandle,out_result)	\
    ( (This)->lpVtbl -> Synchronize(This,timeout,cancelationHandle,out_result) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFrameBuffer_INTERFACE_DEFINED__ */


#ifndef __IVideoChannel_INTERFACE_DEFINED__
#define __IVideoChannel_INTERFACE_DEFINED__

/* interface IVideoChannel */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IVideoChannel;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A72909B5-4EE3-4FB9-A009-AE1FDFA141ED")
    IVideoChannel : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Type( 
            /* [retval][out] */ VIDEO_CHANNEL_TYPES *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_UniqueID( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Buffer( 
            /* [retval][out] */ IFrameBuffer **pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE IsStarted( 
            /* [retval][out] */ VARIANT_BOOL *out_result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Start( 
            /* [retval][out] */ VARIANT_BOOL *out_result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Stop( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVideoChannelVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVideoChannel * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVideoChannel * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVideoChannel * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IVideoChannel * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IVideoChannel * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IVideoChannel * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IVideoChannel * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IVideoChannel * This,
            /* [retval][out] */ VIDEO_CHANNEL_TYPES *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UniqueID )( 
            IVideoChannel * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Buffer )( 
            IVideoChannel * This,
            /* [retval][out] */ IFrameBuffer **pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *IsStarted )( 
            IVideoChannel * This,
            /* [retval][out] */ VARIANT_BOOL *out_result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Start )( 
            IVideoChannel * This,
            /* [retval][out] */ VARIANT_BOOL *out_result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Stop )( 
            IVideoChannel * This);
        
        END_INTERFACE
    } IVideoChannelVtbl;

    interface IVideoChannel
    {
        CONST_VTBL struct IVideoChannelVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVideoChannel_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVideoChannel_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVideoChannel_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVideoChannel_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IVideoChannel_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IVideoChannel_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IVideoChannel_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IVideoChannel_get_Type(This,pVal)	\
    ( (This)->lpVtbl -> get_Type(This,pVal) ) 

#define IVideoChannel_get_UniqueID(This,pVal)	\
    ( (This)->lpVtbl -> get_UniqueID(This,pVal) ) 

#define IVideoChannel_get_Buffer(This,pVal)	\
    ( (This)->lpVtbl -> get_Buffer(This,pVal) ) 

#define IVideoChannel_IsStarted(This,out_result)	\
    ( (This)->lpVtbl -> IsStarted(This,out_result) ) 

#define IVideoChannel_Start(This,out_result)	\
    ( (This)->lpVtbl -> Start(This,out_result) ) 

#define IVideoChannel_Stop(This)	\
    ( (This)->lpVtbl -> Stop(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVideoChannel_INTERFACE_DEFINED__ */


#ifndef __IVideoChannelList_INTERFACE_DEFINED__
#define __IVideoChannelList_INTERFACE_DEFINED__

/* interface IVideoChannelList */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IVideoChannelList;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("38C6334A-8DB6-4BD2-B14E-2387F4354EAC")
    IVideoChannelList : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_IsEmpty( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_IsFull( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Any( 
            /* [retval][out] */ VARIANT_BOOL *out_result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Contains( 
            /* [in] */ IVideoChannel *channel,
            /* [retval][out] */ VARIANT_BOOL *out_result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Exists( 
            /* [in] */ BSTR uniqueID,
            /* [retval][out] */ VARIANT_BOOL *out_result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ IVideoChannel *setting,
            /* [retval][out] */ VARIANT_BOOL *out_result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE FindByID( 
            /* [in] */ BSTR uniqueID,
            /* [retval][out] */ IVideoChannel **out_result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE FindAt( 
            /* [in] */ LONG index,
            /* [retval][out] */ IVideoChannel **out_result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetByID( 
            /* [in] */ BSTR uniqueID,
            /* [retval][out] */ IVideoChannel **out_result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetAt( 
            /* [in] */ LONG index,
            /* [retval][out] */ IVideoChannel **out_result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Remove( 
            /* [in] */ IVideoChannel *channel,
            /* [retval][out] */ VARIANT_BOOL *out_result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE RemoveByID( 
            /* [in] */ BSTR uniqueID,
            /* [retval][out] */ VARIANT_BOOL *out_result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE RemoveAt( 
            /* [in] */ LONG index,
            /* [retval][out] */ VARIANT_BOOL *out_result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVideoChannelListVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVideoChannelList * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVideoChannelList * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVideoChannelList * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IVideoChannelList * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IVideoChannelList * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IVideoChannelList * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IVideoChannelList * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IVideoChannelList * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsEmpty )( 
            IVideoChannelList * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsFull )( 
            IVideoChannelList * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Any )( 
            IVideoChannelList * This,
            /* [retval][out] */ VARIANT_BOOL *out_result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Contains )( 
            IVideoChannelList * This,
            /* [in] */ IVideoChannel *channel,
            /* [retval][out] */ VARIANT_BOOL *out_result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Exists )( 
            IVideoChannelList * This,
            /* [in] */ BSTR uniqueID,
            /* [retval][out] */ VARIANT_BOOL *out_result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Add )( 
            IVideoChannelList * This,
            /* [in] */ IVideoChannel *setting,
            /* [retval][out] */ VARIANT_BOOL *out_result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *FindByID )( 
            IVideoChannelList * This,
            /* [in] */ BSTR uniqueID,
            /* [retval][out] */ IVideoChannel **out_result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *FindAt )( 
            IVideoChannelList * This,
            /* [in] */ LONG index,
            /* [retval][out] */ IVideoChannel **out_result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetByID )( 
            IVideoChannelList * This,
            /* [in] */ BSTR uniqueID,
            /* [retval][out] */ IVideoChannel **out_result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetAt )( 
            IVideoChannelList * This,
            /* [in] */ LONG index,
            /* [retval][out] */ IVideoChannel **out_result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            IVideoChannelList * This,
            /* [in] */ IVideoChannel *channel,
            /* [retval][out] */ VARIANT_BOOL *out_result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *RemoveByID )( 
            IVideoChannelList * This,
            /* [in] */ BSTR uniqueID,
            /* [retval][out] */ VARIANT_BOOL *out_result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *RemoveAt )( 
            IVideoChannelList * This,
            /* [in] */ LONG index,
            /* [retval][out] */ VARIANT_BOOL *out_result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            IVideoChannelList * This);
        
        END_INTERFACE
    } IVideoChannelListVtbl;

    interface IVideoChannelList
    {
        CONST_VTBL struct IVideoChannelListVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVideoChannelList_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVideoChannelList_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVideoChannelList_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVideoChannelList_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IVideoChannelList_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IVideoChannelList_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IVideoChannelList_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IVideoChannelList_get_Count(This,pVal)	\
    ( (This)->lpVtbl -> get_Count(This,pVal) ) 

#define IVideoChannelList_get_IsEmpty(This,pVal)	\
    ( (This)->lpVtbl -> get_IsEmpty(This,pVal) ) 

#define IVideoChannelList_get_IsFull(This,pVal)	\
    ( (This)->lpVtbl -> get_IsFull(This,pVal) ) 

#define IVideoChannelList_Any(This,out_result)	\
    ( (This)->lpVtbl -> Any(This,out_result) ) 

#define IVideoChannelList_Contains(This,channel,out_result)	\
    ( (This)->lpVtbl -> Contains(This,channel,out_result) ) 

#define IVideoChannelList_Exists(This,uniqueID,out_result)	\
    ( (This)->lpVtbl -> Exists(This,uniqueID,out_result) ) 

#define IVideoChannelList_Add(This,setting,out_result)	\
    ( (This)->lpVtbl -> Add(This,setting,out_result) ) 

#define IVideoChannelList_FindByID(This,uniqueID,out_result)	\
    ( (This)->lpVtbl -> FindByID(This,uniqueID,out_result) ) 

#define IVideoChannelList_FindAt(This,index,out_result)	\
    ( (This)->lpVtbl -> FindAt(This,index,out_result) ) 

#define IVideoChannelList_GetByID(This,uniqueID,out_result)	\
    ( (This)->lpVtbl -> GetByID(This,uniqueID,out_result) ) 

#define IVideoChannelList_GetAt(This,index,out_result)	\
    ( (This)->lpVtbl -> GetAt(This,index,out_result) ) 

#define IVideoChannelList_Remove(This,channel,out_result)	\
    ( (This)->lpVtbl -> Remove(This,channel,out_result) ) 

#define IVideoChannelList_RemoveByID(This,uniqueID,out_result)	\
    ( (This)->lpVtbl -> RemoveByID(This,uniqueID,out_result) ) 

#define IVideoChannelList_RemoveAt(This,index,out_result)	\
    ( (This)->lpVtbl -> RemoveAt(This,index,out_result) ) 

#define IVideoChannelList_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVideoChannelList_INTERFACE_DEFINED__ */


#ifndef __INullVideoChannel_INTERFACE_DEFINED__
#define __INullVideoChannel_INTERFACE_DEFINED__

/* interface INullVideoChannel */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_INullVideoChannel;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("EB0FC088-C97E-4AC6-B7CA-DD975514DB48")
    INullVideoChannel : public IDispatch
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct INullVideoChannelVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            INullVideoChannel * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            INullVideoChannel * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            INullVideoChannel * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            INullVideoChannel * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            INullVideoChannel * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            INullVideoChannel * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            INullVideoChannel * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } INullVideoChannelVtbl;

    interface INullVideoChannel
    {
        CONST_VTBL struct INullVideoChannelVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define INullVideoChannel_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define INullVideoChannel_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define INullVideoChannel_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define INullVideoChannel_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define INullVideoChannel_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define INullVideoChannel_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define INullVideoChannel_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __INullVideoChannel_INTERFACE_DEFINED__ */


#ifndef __IService_INTERFACE_DEFINED__
#define __IService_INTERFACE_DEFINED__

/* interface IService */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IService;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E2AF5585-4183-435D-9D36-307F4C4B99FE")
    IService : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Type( 
            /* [retval][out] */ SERVICE_TYPES *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IServiceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IService * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IService * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IService * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IService * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IService * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IService * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IService * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IService * This,
            /* [retval][out] */ SERVICE_TYPES *pVal);
        
        END_INTERFACE
    } IServiceVtbl;

    interface IService
    {
        CONST_VTBL struct IServiceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IService_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IService_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IService_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IService_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IService_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IService_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IService_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IService_get_Type(This,pVal)	\
    ( (This)->lpVtbl -> get_Type(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IService_INTERFACE_DEFINED__ */


#ifndef __INullService_INTERFACE_DEFINED__
#define __INullService_INTERFACE_DEFINED__

/* interface INullService */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_INullService;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4FED0BEB-4F27-4F2D-A4CA-70F8F812F66A")
    INullService : public IDispatch
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct INullServiceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            INullService * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            INullService * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            INullService * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            INullService * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            INullService * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            INullService * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            INullService * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } INullServiceVtbl;

    interface INullService
    {
        CONST_VTBL struct INullServiceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define INullService_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define INullService_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define INullService_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define INullService_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define INullService_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define INullService_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define INullService_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __INullService_INTERFACE_DEFINED__ */


#ifndef __IConfigurationService_INTERFACE_DEFINED__
#define __IConfigurationService_INTERFACE_DEFINED__

/* interface IConfigurationService */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IConfigurationService;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1F5A6B21-00A1-4585-BD32-C394BB0124CD")
    IConfigurationService : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE LoadConfiguration( 
            /* [retval][out] */ VARIANT_BOOL *out_result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE LoadConfigurationFromFile( 
            /* [in] */ BSTR fileName,
            /* [retval][out] */ VARIANT_BOOL *out_result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SaveConfiguration( 
            /* [retval][out] */ VARIANT_BOOL *out_result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SaveConfigurationFromFile( 
            /* [in] */ BSTR fileName,
            /* [retval][out] */ VARIANT_BOOL *out_result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ResetConfiguration( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ClearAllSettings( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ReadSetting( 
            /* [in] */ BSTR uniqueID,
            /* [retval][out] */ BSTR *out_result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ReadSettingAsBool( 
            /* [in] */ BSTR uniqueID,
            /* [retval][out] */ VARIANT_BOOL *out_result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ReadSettingAsLong( 
            /* [in] */ BSTR uniqueID,
            /* [retval][out] */ LONG *out_result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE WriteSetting( 
            /* [in] */ BSTR uniqueID,
            /* [in] */ BSTR value,
            /* [retval][out] */ VARIANT_BOOL *out_result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE WriteSettingAsBool( 
            /* [in] */ BSTR uniqueID,
            /* [in] */ VARIANT_BOOL value,
            /* [retval][out] */ VARIANT_BOOL *out_result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE WriteSettingAsLong( 
            /* [in] */ BSTR uniqueID,
            /* [in] */ LONG value,
            /* [retval][out] */ VARIANT_BOOL *out_result) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IConfigurationServiceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IConfigurationService * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IConfigurationService * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IConfigurationService * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IConfigurationService * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IConfigurationService * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IConfigurationService * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IConfigurationService * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *LoadConfiguration )( 
            IConfigurationService * This,
            /* [retval][out] */ VARIANT_BOOL *out_result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *LoadConfigurationFromFile )( 
            IConfigurationService * This,
            /* [in] */ BSTR fileName,
            /* [retval][out] */ VARIANT_BOOL *out_result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SaveConfiguration )( 
            IConfigurationService * This,
            /* [retval][out] */ VARIANT_BOOL *out_result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SaveConfigurationFromFile )( 
            IConfigurationService * This,
            /* [in] */ BSTR fileName,
            /* [retval][out] */ VARIANT_BOOL *out_result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ResetConfiguration )( 
            IConfigurationService * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ClearAllSettings )( 
            IConfigurationService * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ReadSetting )( 
            IConfigurationService * This,
            /* [in] */ BSTR uniqueID,
            /* [retval][out] */ BSTR *out_result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ReadSettingAsBool )( 
            IConfigurationService * This,
            /* [in] */ BSTR uniqueID,
            /* [retval][out] */ VARIANT_BOOL *out_result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ReadSettingAsLong )( 
            IConfigurationService * This,
            /* [in] */ BSTR uniqueID,
            /* [retval][out] */ LONG *out_result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *WriteSetting )( 
            IConfigurationService * This,
            /* [in] */ BSTR uniqueID,
            /* [in] */ BSTR value,
            /* [retval][out] */ VARIANT_BOOL *out_result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *WriteSettingAsBool )( 
            IConfigurationService * This,
            /* [in] */ BSTR uniqueID,
            /* [in] */ VARIANT_BOOL value,
            /* [retval][out] */ VARIANT_BOOL *out_result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *WriteSettingAsLong )( 
            IConfigurationService * This,
            /* [in] */ BSTR uniqueID,
            /* [in] */ LONG value,
            /* [retval][out] */ VARIANT_BOOL *out_result);
        
        END_INTERFACE
    } IConfigurationServiceVtbl;

    interface IConfigurationService
    {
        CONST_VTBL struct IConfigurationServiceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IConfigurationService_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IConfigurationService_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IConfigurationService_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IConfigurationService_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IConfigurationService_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IConfigurationService_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IConfigurationService_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IConfigurationService_LoadConfiguration(This,out_result)	\
    ( (This)->lpVtbl -> LoadConfiguration(This,out_result) ) 

#define IConfigurationService_LoadConfigurationFromFile(This,fileName,out_result)	\
    ( (This)->lpVtbl -> LoadConfigurationFromFile(This,fileName,out_result) ) 

#define IConfigurationService_SaveConfiguration(This,out_result)	\
    ( (This)->lpVtbl -> SaveConfiguration(This,out_result) ) 

#define IConfigurationService_SaveConfigurationFromFile(This,fileName,out_result)	\
    ( (This)->lpVtbl -> SaveConfigurationFromFile(This,fileName,out_result) ) 

#define IConfigurationService_ResetConfiguration(This)	\
    ( (This)->lpVtbl -> ResetConfiguration(This) ) 

#define IConfigurationService_ClearAllSettings(This)	\
    ( (This)->lpVtbl -> ClearAllSettings(This) ) 

#define IConfigurationService_ReadSetting(This,uniqueID,out_result)	\
    ( (This)->lpVtbl -> ReadSetting(This,uniqueID,out_result) ) 

#define IConfigurationService_ReadSettingAsBool(This,uniqueID,out_result)	\
    ( (This)->lpVtbl -> ReadSettingAsBool(This,uniqueID,out_result) ) 

#define IConfigurationService_ReadSettingAsLong(This,uniqueID,out_result)	\
    ( (This)->lpVtbl -> ReadSettingAsLong(This,uniqueID,out_result) ) 

#define IConfigurationService_WriteSetting(This,uniqueID,value,out_result)	\
    ( (This)->lpVtbl -> WriteSetting(This,uniqueID,value,out_result) ) 

#define IConfigurationService_WriteSettingAsBool(This,uniqueID,value,out_result)	\
    ( (This)->lpVtbl -> WriteSettingAsBool(This,uniqueID,value,out_result) ) 

#define IConfigurationService_WriteSettingAsLong(This,uniqueID,value,out_result)	\
    ( (This)->lpVtbl -> WriteSettingAsLong(This,uniqueID,value,out_result) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IConfigurationService_INTERFACE_DEFINED__ */


#ifndef __IServiceList_INTERFACE_DEFINED__
#define __IServiceList_INTERFACE_DEFINED__

/* interface IServiceList */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IServiceList;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("25B97B5F-DF9F-49AC-A0DF-A96F3E24FFB4")
    IServiceList : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ LONG *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_IsEmpty( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Any( 
            /* [retval][out] */ VARIANT_BOOL *out_result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Contains( 
            /* [in] */ IService *setting,
            /* [retval][out] */ VARIANT_BOOL *out_result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Exists( 
            /* [in] */ SERVICE_TYPES type,
            /* [retval][out] */ VARIANT_BOOL *out_result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ IService *setting,
            /* [retval][out] */ VARIANT_BOOL *out_result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE FindByType( 
            /* [in] */ SERVICE_TYPES type,
            /* [retval][out] */ IService **out_result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE FindAt( 
            /* [in] */ LONG index,
            /* [retval][out] */ IService **out_result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetByType( 
            /* [in] */ SERVICE_TYPES type,
            /* [retval][out] */ IService **out_result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetAt( 
            /* [in] */ LONG index,
            /* [retval][out] */ IService **out_result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Remove( 
            /* [in] */ IService *setting,
            /* [retval][out] */ VARIANT_BOOL *out_result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE RemoveByType( 
            /* [in] */ SERVICE_TYPES type,
            /* [retval][out] */ VARIANT_BOOL *out_result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE RemoveAt( 
            /* [in] */ LONG index,
            /* [retval][out] */ VARIANT_BOOL *out_result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IServiceListVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IServiceList * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IServiceList * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IServiceList * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IServiceList * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IServiceList * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IServiceList * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IServiceList * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IServiceList * This,
            /* [retval][out] */ LONG *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsEmpty )( 
            IServiceList * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Any )( 
            IServiceList * This,
            /* [retval][out] */ VARIANT_BOOL *out_result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Contains )( 
            IServiceList * This,
            /* [in] */ IService *setting,
            /* [retval][out] */ VARIANT_BOOL *out_result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Exists )( 
            IServiceList * This,
            /* [in] */ SERVICE_TYPES type,
            /* [retval][out] */ VARIANT_BOOL *out_result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Add )( 
            IServiceList * This,
            /* [in] */ IService *setting,
            /* [retval][out] */ VARIANT_BOOL *out_result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *FindByType )( 
            IServiceList * This,
            /* [in] */ SERVICE_TYPES type,
            /* [retval][out] */ IService **out_result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *FindAt )( 
            IServiceList * This,
            /* [in] */ LONG index,
            /* [retval][out] */ IService **out_result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetByType )( 
            IServiceList * This,
            /* [in] */ SERVICE_TYPES type,
            /* [retval][out] */ IService **out_result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetAt )( 
            IServiceList * This,
            /* [in] */ LONG index,
            /* [retval][out] */ IService **out_result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            IServiceList * This,
            /* [in] */ IService *setting,
            /* [retval][out] */ VARIANT_BOOL *out_result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *RemoveByType )( 
            IServiceList * This,
            /* [in] */ SERVICE_TYPES type,
            /* [retval][out] */ VARIANT_BOOL *out_result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *RemoveAt )( 
            IServiceList * This,
            /* [in] */ LONG index,
            /* [retval][out] */ VARIANT_BOOL *out_result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Clear )( 
            IServiceList * This);
        
        END_INTERFACE
    } IServiceListVtbl;

    interface IServiceList
    {
        CONST_VTBL struct IServiceListVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IServiceList_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IServiceList_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IServiceList_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IServiceList_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IServiceList_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IServiceList_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IServiceList_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IServiceList_get_Count(This,pVal)	\
    ( (This)->lpVtbl -> get_Count(This,pVal) ) 

#define IServiceList_get_IsEmpty(This,pVal)	\
    ( (This)->lpVtbl -> get_IsEmpty(This,pVal) ) 

#define IServiceList_Any(This,out_result)	\
    ( (This)->lpVtbl -> Any(This,out_result) ) 

#define IServiceList_Contains(This,setting,out_result)	\
    ( (This)->lpVtbl -> Contains(This,setting,out_result) ) 

#define IServiceList_Exists(This,type,out_result)	\
    ( (This)->lpVtbl -> Exists(This,type,out_result) ) 

#define IServiceList_Add(This,setting,out_result)	\
    ( (This)->lpVtbl -> Add(This,setting,out_result) ) 

#define IServiceList_FindByType(This,type,out_result)	\
    ( (This)->lpVtbl -> FindByType(This,type,out_result) ) 

#define IServiceList_FindAt(This,index,out_result)	\
    ( (This)->lpVtbl -> FindAt(This,index,out_result) ) 

#define IServiceList_GetByType(This,type,out_result)	\
    ( (This)->lpVtbl -> GetByType(This,type,out_result) ) 

#define IServiceList_GetAt(This,index,out_result)	\
    ( (This)->lpVtbl -> GetAt(This,index,out_result) ) 

#define IServiceList_Remove(This,setting,out_result)	\
    ( (This)->lpVtbl -> Remove(This,setting,out_result) ) 

#define IServiceList_RemoveByType(This,type,out_result)	\
    ( (This)->lpVtbl -> RemoveByType(This,type,out_result) ) 

#define IServiceList_RemoveAt(This,index,out_result)	\
    ( (This)->lpVtbl -> RemoveAt(This,index,out_result) ) 

#define IServiceList_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IServiceList_INTERFACE_DEFINED__ */


#ifndef __IConfigurationPersistence_INTERFACE_DEFINED__
#define __IConfigurationPersistence_INTERFACE_DEFINED__

/* interface IConfigurationPersistence */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IConfigurationPersistence;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E1EA218F-2020-43AC-A88F-7361D63E9AE4")
    IConfigurationPersistence : public IDispatch
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct IConfigurationPersistenceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IConfigurationPersistence * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IConfigurationPersistence * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IConfigurationPersistence * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IConfigurationPersistence * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IConfigurationPersistence * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IConfigurationPersistence * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IConfigurationPersistence * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } IConfigurationPersistenceVtbl;

    interface IConfigurationPersistence
    {
        CONST_VTBL struct IConfigurationPersistenceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IConfigurationPersistence_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IConfigurationPersistence_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IConfigurationPersistence_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IConfigurationPersistence_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IConfigurationPersistence_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IConfigurationPersistence_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IConfigurationPersistence_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IConfigurationPersistence_INTERFACE_DEFINED__ */


#ifndef __IServer_INTERFACE_DEFINED__
#define __IServer_INTERFACE_DEFINED__

/* interface IServer */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IServer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("00D8E0D4-CAA2-4C3E-93A9-EEB1CF683754")
    IServer : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Settings( 
            /* [retval][out] */ ISettingList **pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Channels( 
            /* [retval][out] */ IVideoChannelList **pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Services( 
            /* [retval][out] */ IServiceList **pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE IsRunning( 
            /* [retval][out] */ VARIANT_BOOL *out_result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Run( 
            /* [retval][out] */ VARIANT_BOOL *out_result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Shutdown( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IServerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IServer * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IServer * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IServer * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IServer * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IServer * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IServer * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IServer * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Settings )( 
            IServer * This,
            /* [retval][out] */ ISettingList **pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Channels )( 
            IServer * This,
            /* [retval][out] */ IVideoChannelList **pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Services )( 
            IServer * This,
            /* [retval][out] */ IServiceList **pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *IsRunning )( 
            IServer * This,
            /* [retval][out] */ VARIANT_BOOL *out_result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Run )( 
            IServer * This,
            /* [retval][out] */ VARIANT_BOOL *out_result);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Shutdown )( 
            IServer * This);
        
        END_INTERFACE
    } IServerVtbl;

    interface IServer
    {
        CONST_VTBL struct IServerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IServer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IServer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IServer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IServer_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IServer_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IServer_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IServer_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IServer_get_Settings(This,pVal)	\
    ( (This)->lpVtbl -> get_Settings(This,pVal) ) 

#define IServer_get_Channels(This,pVal)	\
    ( (This)->lpVtbl -> get_Channels(This,pVal) ) 

#define IServer_get_Services(This,pVal)	\
    ( (This)->lpVtbl -> get_Services(This,pVal) ) 

#define IServer_IsRunning(This,out_result)	\
    ( (This)->lpVtbl -> IsRunning(This,out_result) ) 

#define IServer_Run(This,out_result)	\
    ( (This)->lpVtbl -> Run(This,out_result) ) 

#define IServer_Shutdown(This)	\
    ( (This)->lpVtbl -> Shutdown(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IServer_INTERFACE_DEFINED__ */


#ifndef __IServerSite_INTERFACE_DEFINED__
#define __IServerSite_INTERFACE_DEFINED__

/* interface IServerSite */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IServerSite;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("899A9697-4F5F-4D62-844D-6399C8CBEF49")
    IServerSite : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Server( 
            /* [retval][out] */ IServer **pVal) = 0;
        
        virtual /* [id][propput] */ HRESULT STDMETHODCALLTYPE put_Server( 
            /* [in] */ IServer *newVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IServerSiteVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IServerSite * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IServerSite * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IServerSite * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IServerSite * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IServerSite * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IServerSite * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IServerSite * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Server )( 
            IServerSite * This,
            /* [retval][out] */ IServer **pVal);
        
        /* [id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Server )( 
            IServerSite * This,
            /* [in] */ IServer *newVal);
        
        END_INTERFACE
    } IServerSiteVtbl;

    interface IServerSite
    {
        CONST_VTBL struct IServerSiteVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IServerSite_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IServerSite_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IServerSite_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IServerSite_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IServerSite_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IServerSite_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IServerSite_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IServerSite_get_Server(This,pVal)	\
    ( (This)->lpVtbl -> get_Server(This,pVal) ) 

#define IServerSite_put_Server(This,newVal)	\
    ( (This)->lpVtbl -> put_Server(This,newVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IServerSite_INTERFACE_DEFINED__ */



#ifndef __VideoProviderLib_LIBRARY_DEFINED__
#define __VideoProviderLib_LIBRARY_DEFINED__

/* library VideoProviderLib */
/* [version][uuid] */ 





EXTERN_C const IID LIBID_VideoProviderLib;

EXTERN_C const CLSID CLSID_ObjectFactory;

#ifdef __cplusplus

class DECLSPEC_UUID("9A710360-14AE-4DBA-958D-F144DE451CD4")
ObjectFactory;
#endif

EXTERN_C const CLSID CLSID_BackgroundThread;

#ifdef __cplusplus

class DECLSPEC_UUID("8A072813-842C-47A9-BC25-A278EDF627A1")
BackgroundThread;
#endif

EXTERN_C const CLSID CLSID_VideoGraphConfiguration;

#ifdef __cplusplus

class DECLSPEC_UUID("75089B6B-F287-490E-B2E8-A1B3DE278C89")
VideoGraphConfiguration;
#endif

EXTERN_C const CLSID CLSID_VideoGraph;

#ifdef __cplusplus

class DECLSPEC_UUID("F5B6FC19-9FF7-425F-B10A-72918122E774")
VideoGraph;
#endif

EXTERN_C const CLSID CLSID_MediaMonikerStore;

#ifdef __cplusplus

class DECLSPEC_UUID("313574A2-BEAD-44C4-A48F-B13AB1AB6E81")
MediaMonikerStore;
#endif

EXTERN_C const CLSID CLSID_MediaMonikerList;

#ifdef __cplusplus

class DECLSPEC_UUID("77E06CE8-8CE8-4A8D-9635-5D0543EB557E")
MediaMonikerList;
#endif

EXTERN_C const CLSID CLSID_VideoDeviceInfo;

#ifdef __cplusplus

class DECLSPEC_UUID("5E8B2161-B1B3-422F-BC81-325B6D871C04")
VideoDeviceInfo;
#endif

EXTERN_C const CLSID CLSID_VideoDeviceInfoList;

#ifdef __cplusplus

class DECLSPEC_UUID("1D30B373-AE66-4E57-AFCD-BBA251A6A97F")
VideoDeviceInfoList;
#endif

EXTERN_C const CLSID CLSID_VideoDeviceInfoAdapter;

#ifdef __cplusplus

class DECLSPEC_UUID("AD974153-B805-43B3-8342-DC3ECF5A88FE")
VideoDeviceInfoAdapter;
#endif

EXTERN_C const CLSID CLSID_VideoDeviceInfoDiscovery;

#ifdef __cplusplus

class DECLSPEC_UUID("3A9CE378-1148-4254-9BD7-7BE00A218D21")
VideoDeviceInfoDiscovery;
#endif

EXTERN_C const CLSID CLSID_DeviceVideoPlayer;

#ifdef __cplusplus

class DECLSPEC_UUID("7D04D386-38DD-45E7-8C13-B70E474E63AF")
DeviceVideoPlayer;
#endif

EXTERN_C const CLSID CLSID_Test;

#ifdef __cplusplus

class DECLSPEC_UUID("5178F473-FB35-48A1-B6E5-119F682446E0")
Test;
#endif

EXTERN_C const CLSID CLSID_VideoGraphRunner;

#ifdef __cplusplus

class DECLSPEC_UUID("702D508C-EA39-4EE1-B7D2-B52C48A8C3C6")
VideoGraphRunner;
#endif

EXTERN_C const CLSID CLSID_Setting;

#ifdef __cplusplus

class DECLSPEC_UUID("E9BC3B52-16A1-42B6-8D5D-5B757DD75079")
Setting;
#endif

#ifndef ___ISettingListEvents_DISPINTERFACE_DEFINED__
#define ___ISettingListEvents_DISPINTERFACE_DEFINED__

/* dispinterface _ISettingListEvents */
/* [uuid] */ 


EXTERN_C const IID DIID__ISettingListEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("DF316BA8-D0F8-4CF4-AB63-BCC0152D178A")
    _ISettingListEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _ISettingListEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _ISettingListEvents * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _ISettingListEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _ISettingListEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _ISettingListEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _ISettingListEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _ISettingListEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _ISettingListEvents * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } _ISettingListEventsVtbl;

    interface _ISettingListEvents
    {
        CONST_VTBL struct _ISettingListEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _ISettingListEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _ISettingListEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _ISettingListEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _ISettingListEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _ISettingListEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _ISettingListEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _ISettingListEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___ISettingListEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_SettingList;

#ifdef __cplusplus

class DECLSPEC_UUID("9968A980-6B7B-45D4-8A5A-7B51B7C85C3A")
SettingList;
#endif

EXTERN_C const CLSID CLSID_SettingFactory;

#ifdef __cplusplus

class DECLSPEC_UUID("3A3D84A3-2417-4506-A07A-C44F434A88E8")
SettingFactory;
#endif

EXTERN_C const CLSID CLSID_Frame;

#ifdef __cplusplus

class DECLSPEC_UUID("FC2663D7-CA8D-4FDA-830A-F83EFDC08AEF")
Frame;
#endif

EXTERN_C const CLSID CLSID_FrameBuffer;

#ifdef __cplusplus

class DECLSPEC_UUID("F7372E85-17D5-435B-A276-A37FE6CC1A34")
FrameBuffer;
#endif

#ifndef ___IVideoChannelListEvents_DISPINTERFACE_DEFINED__
#define ___IVideoChannelListEvents_DISPINTERFACE_DEFINED__

/* dispinterface _IVideoChannelListEvents */
/* [uuid] */ 


EXTERN_C const IID DIID__IVideoChannelListEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("FAD0E5E2-C398-476D-B447-DD01CDE70FAE")
    _IVideoChannelListEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _IVideoChannelListEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _IVideoChannelListEvents * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _IVideoChannelListEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _IVideoChannelListEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _IVideoChannelListEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _IVideoChannelListEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _IVideoChannelListEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _IVideoChannelListEvents * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } _IVideoChannelListEventsVtbl;

    interface _IVideoChannelListEvents
    {
        CONST_VTBL struct _IVideoChannelListEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _IVideoChannelListEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _IVideoChannelListEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _IVideoChannelListEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _IVideoChannelListEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _IVideoChannelListEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _IVideoChannelListEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _IVideoChannelListEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___IVideoChannelListEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_VideoChannelList;

#ifdef __cplusplus

class DECLSPEC_UUID("DEF3397A-EF27-4B96-AFC0-9DB8AD492268")
VideoChannelList;
#endif

EXTERN_C const CLSID CLSID_NullVideoChannel;

#ifdef __cplusplus

class DECLSPEC_UUID("9A8F0C4F-94DB-4EC5-94E5-A98DC2CC0208")
NullVideoChannel;
#endif

EXTERN_C const CLSID CLSID_NullService;

#ifdef __cplusplus

class DECLSPEC_UUID("890BFF23-9E26-4974-8A55-D57F9CDDC35B")
NullService;
#endif

EXTERN_C const CLSID CLSID_ConfigurationService;

#ifdef __cplusplus

class DECLSPEC_UUID("463DB7A1-02DE-47CF-ABA0-F50B4974A444")
ConfigurationService;
#endif

#ifndef ___IServiceListEvents_DISPINTERFACE_DEFINED__
#define ___IServiceListEvents_DISPINTERFACE_DEFINED__

/* dispinterface _IServiceListEvents */
/* [uuid] */ 


EXTERN_C const IID DIID__IServiceListEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("1169736D-92A2-4351-A53C-E69E4814D065")
    _IServiceListEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _IServiceListEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _IServiceListEvents * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _IServiceListEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _IServiceListEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _IServiceListEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _IServiceListEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _IServiceListEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _IServiceListEvents * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } _IServiceListEventsVtbl;

    interface _IServiceListEvents
    {
        CONST_VTBL struct _IServiceListEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _IServiceListEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _IServiceListEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _IServiceListEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _IServiceListEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _IServiceListEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _IServiceListEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _IServiceListEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___IServiceListEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_ServiceList;

#ifdef __cplusplus

class DECLSPEC_UUID("B9BE617D-F6C4-48E7-BFDF-507EA5DD8174")
ServiceList;
#endif

EXTERN_C const CLSID CLSID_ConfigurationPersistence;

#ifdef __cplusplus

class DECLSPEC_UUID("1F6B6C21-67B8-45E5-B39F-BA8E6EE1A24C")
ConfigurationPersistence;
#endif

#ifndef ___IServerEvents_DISPINTERFACE_DEFINED__
#define ___IServerEvents_DISPINTERFACE_DEFINED__

/* dispinterface _IServerEvents */
/* [uuid] */ 


EXTERN_C const IID DIID__IServerEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("6F28AF56-D1CB-4E04-ABAF-A05E892F90CA")
    _IServerEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _IServerEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _IServerEvents * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _IServerEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _IServerEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _IServerEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _IServerEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _IServerEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _IServerEvents * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } _IServerEventsVtbl;

    interface _IServerEvents
    {
        CONST_VTBL struct _IServerEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _IServerEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _IServerEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _IServerEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _IServerEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _IServerEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _IServerEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _IServerEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___IServerEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_Server;

#ifdef __cplusplus

class DECLSPEC_UUID("7BBB6084-1385-4099-8289-1CEC1A95B383")
Server;
#endif
#endif /* __VideoProviderLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

unsigned long             __RPC_USER  VARIANT_UserSize(     unsigned long *, unsigned long            , VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserMarshal(  unsigned long *, unsigned char *, VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserUnmarshal(unsigned long *, unsigned char *, VARIANT * ); 
void                      __RPC_USER  VARIANT_UserFree(     unsigned long *, VARIANT * ); 

unsigned long             __RPC_USER  BSTR_UserSize64(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal64(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal64(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree64(     unsigned long *, BSTR * ); 

unsigned long             __RPC_USER  VARIANT_UserSize64(     unsigned long *, unsigned long            , VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserMarshal64(  unsigned long *, unsigned char *, VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserUnmarshal64(unsigned long *, unsigned char *, VARIANT * ); 
void                      __RPC_USER  VARIANT_UserFree64(     unsigned long *, VARIANT * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


