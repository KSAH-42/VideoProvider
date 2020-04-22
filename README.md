# Introduction

So here it's a personnal project written in C++. Just go back in times, an returns to C++ using the famous MS COM framework called ATL (Active Template Library). I have decided to used here C++, because I love this programming language. I will problably make a version of this API in C# in near feature. Here, I recommand to use the incredible C# language, because ATL is highly complex framework and require a lot of efforts, and you must be really confortable in C++ COM and DirectX programming. COM was used to improve interoperability between software component. And especialy, IDispach COM interface was design to interact managed code like .net but also with glue code using the late binding invocation. If you don't have knowledge about the popularity of C++ COM, just take a look on the so called XPCOM used by FireFox, has clearly inspired from Microsoft COM.  

So what really represent this project ? I have written a COM API that turn you computer in to video server. Here the goal is to retrieve the video stream of any type of video capture like your webcam, and to distribute multiple copy of a video stream from under network.

You also need the followings tools :

* Visual Studio 2010
* ATL
* DirectX 10 or higher installed on computer (used dxDiag on command prompt)


# Project structure

So here, we have the following projects :

| Project name                 | Description                               |
| ---------------------------- | ----------------------------------------- |
| VideoProvider.dll            | the server COM API                        |
| VideoProviderLabs.exe        | the application for debug purposes        |


# Requirements

You must have the administrator privilege to allow visual studio to perform a COM registration of the dll when you want to compile the project. Please note alos, that The COM registration of the VideoProvider.dll can be done manually using regsvr32 command.

The second thing is purely hardware. On windows, you can't have two applications that used at the same time your web camera. The access of your web camera is controlled by the operating system. And Windows can deny the access of the web cam, if there is an another application that used the camera. So make sure that any application on any windows account is actually using the web camera.

# What is actually completed ?

If your run the application test, you see the video stream of your camera. The application will discovered and select the first installed web camera of your computer.

The network layer is not actually written. I will start this implementation this week. So stay tune :)


