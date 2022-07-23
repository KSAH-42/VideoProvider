# Introduction

So here it's a personal project written in C++. Just go back in times, and returns to C++ using the MS COM framework called ATL (Active Template Library). I will problably make a version of this API in C# in a near future. 

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


# What is actually completed ?

The network layer is not actually written. I will start this implementation in another moment.


