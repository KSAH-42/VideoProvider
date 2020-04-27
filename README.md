# Introduction

So here it's a personnal project written in C++. Just go back in times, an returns to C++ using the famous MS COM framework called ATL (Active Template Library). I have decided to used here C++, because I love this programming language. I will problably make a version of this API in C# in near feature. Here, I recommand to use the C# language, because ATL is much more complex and require a lot of efforts, and you must be really confortable in C++ COM and DirectX programming. COM was introduced to improve interoperability between software component. And especialy, IDispach COM interface was design to interact with managed code like .net but also with glue code using the late binding invocation. 

So what really represent this project ? I have written a COM API that turn you computer into a video server. Here the goal is to retrieve the video stream of any type of video capture like your webcam which are connected to your computer, and to distribute multiple copy of a video stream under the network.

You also need the followings tools :

* Visual Studio 2010
* ATL
* DirectX 10 or higher installed on your computer (used dxDiag on command prompt to check this point)


# Project structure

So here, we have actually the following projects :

| Project name                 | Description                               |
| ---------------------------- | ----------------------------------------- |
| VideoProvider.dll            | the server COM API                        |
| VideoProviderLabs.exe        | the application for debug purposes        |


# Requirements

You must have the administrator privilege to allow visual studio to perform a COM registration of the dll when you want to compile the project. Please note also, that The COM registration of the VideoProvider.dll can be done manually using regsvr32 command.

The second thing is purely hardware. On windows, you can't have two applications that used at the same time your web camera. The access of your web camera is controlled by the operating system. And Windows can deny the access of the web cam, if there is an another application that used the camera. So make sure that any application on any windows accounts is not actually using the web camera.

# What is actually completed ?

If your run the application test, you see the video stream of your camera. The application will discovered and select the first installed web camera of your computer.

The network layer is not actually written. I will start this implementation this week. So stay tune :)


