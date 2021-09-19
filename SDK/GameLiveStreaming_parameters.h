#pragma once

// Name: Fortnite, Version: OT-6_5


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.StopWebCam
struct UGameLiveStreamingFunctionLibrary_StopWebCam_Params
{
};

// Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.StopBroadcastingGame
struct UGameLiveStreamingFunctionLibrary_StopBroadcastingGame_Params
{
};

// Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.StartWebCam
struct UGameLiveStreamingFunctionLibrary_StartWebCam_Params
{
	int                                                DesiredWebCamWidth;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DesiredWebCamHeight;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bMirrorWebCamImage;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bDrawSimpleWebCamVideo;                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.StartBroadcastingGame
struct UGameLiveStreamingFunctionLibrary_StartBroadcastingGame_Params
{
	struct FString                                     LoginUserName;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     LoginPassword;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FrameRate;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ScreenScaling;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bStartWebCam;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	int                                                DesiredWebCamWidth;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DesiredWebCamHeight;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bMirrorWebCamImage;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bDrawSimpleWebCamVideo;                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bCaptureAudioFromComputer;                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bCaptureAudioFromMicrophone;                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class UTexture2D*                                  CoverUpImage;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.IsWebCamEnabled
struct UGameLiveStreamingFunctionLibrary_IsWebCamEnabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.IsBroadcastingGame
struct UGameLiveStreamingFunctionLibrary_IsBroadcastingGame_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function GameLiveStreaming.QueryLiveStreamsCallbackProxy.QueryLiveStreams
struct UQueryLiveStreamsCallbackProxy_QueryLiveStreams_Params
{
	struct FString                                     GameName;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UQueryLiveStreamsCallbackProxy*              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
