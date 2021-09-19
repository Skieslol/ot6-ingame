// Name: Fortnite, Version: OT-6_5

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.StopWebCam
// (Final, Native, Static, Public, BlueprintCallable)
void UGameLiveStreamingFunctionLibrary::STATIC_StopWebCam()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.StopWebCam");

	UGameLiveStreamingFunctionLibrary_StopWebCam_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.StopBroadcastingGame
// (Final, Native, Static, Public, BlueprintCallable)
void UGameLiveStreamingFunctionLibrary::STATIC_StopBroadcastingGame()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.StopBroadcastingGame");

	UGameLiveStreamingFunctionLibrary_StopBroadcastingGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.StartWebCam
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            DesiredWebCamWidth             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            DesiredWebCamHeight            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bMirrorWebCamImage             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bDrawSimpleWebCamVideo         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UGameLiveStreamingFunctionLibrary::STATIC_StartWebCam(int DesiredWebCamWidth, int DesiredWebCamHeight, bool bMirrorWebCamImage, bool bDrawSimpleWebCamVideo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.StartWebCam");

	UGameLiveStreamingFunctionLibrary_StartWebCam_Params params;
	params.DesiredWebCamWidth = DesiredWebCamWidth;
	params.DesiredWebCamHeight = DesiredWebCamHeight;
	params.bMirrorWebCamImage = bMirrorWebCamImage;
	params.bDrawSimpleWebCamVideo = bDrawSimpleWebCamVideo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.StartBroadcastingGame
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 LoginUserName                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 LoginPassword                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            FrameRate                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          ScreenScaling                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bStartWebCam                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// int                            DesiredWebCamWidth             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            DesiredWebCamHeight            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bMirrorWebCamImage             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bDrawSimpleWebCamVideo         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bCaptureAudioFromComputer      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bCaptureAudioFromMicrophone    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// class UTexture2D*              CoverUpImage                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameLiveStreamingFunctionLibrary::STATIC_StartBroadcastingGame(const struct FString& LoginUserName, const struct FString& LoginPassword, int FrameRate, float ScreenScaling, bool bStartWebCam, int DesiredWebCamWidth, int DesiredWebCamHeight, bool bMirrorWebCamImage, bool bDrawSimpleWebCamVideo, bool bCaptureAudioFromComputer, bool bCaptureAudioFromMicrophone, class UTexture2D* CoverUpImage)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.StartBroadcastingGame");

	UGameLiveStreamingFunctionLibrary_StartBroadcastingGame_Params params;
	params.LoginUserName = LoginUserName;
	params.LoginPassword = LoginPassword;
	params.FrameRate = FrameRate;
	params.ScreenScaling = ScreenScaling;
	params.bStartWebCam = bStartWebCam;
	params.DesiredWebCamWidth = DesiredWebCamWidth;
	params.DesiredWebCamHeight = DesiredWebCamHeight;
	params.bMirrorWebCamImage = bMirrorWebCamImage;
	params.bDrawSimpleWebCamVideo = bDrawSimpleWebCamVideo;
	params.bCaptureAudioFromComputer = bCaptureAudioFromComputer;
	params.bCaptureAudioFromMicrophone = bCaptureAudioFromMicrophone;
	params.CoverUpImage = CoverUpImage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.IsWebCamEnabled
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool UGameLiveStreamingFunctionLibrary::STATIC_IsWebCamEnabled()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.IsWebCamEnabled");

	UGameLiveStreamingFunctionLibrary_IsWebCamEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.IsBroadcastingGame
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool UGameLiveStreamingFunctionLibrary::STATIC_IsBroadcastingGame()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameLiveStreaming.GameLiveStreamingFunctionLibrary.IsBroadcastingGame");

	UGameLiveStreamingFunctionLibrary_IsBroadcastingGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GameLiveStreaming.QueryLiveStreamsCallbackProxy.QueryLiveStreams
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 GameName                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UQueryLiveStreamsCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UQueryLiveStreamsCallbackProxy* UQueryLiveStreamsCallbackProxy::STATIC_QueryLiveStreams(const struct FString& GameName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameLiveStreaming.QueryLiveStreamsCallbackProxy.QueryLiveStreams");

	UQueryLiveStreamsCallbackProxy_QueryLiveStreams_Params params;
	params.GameName = GameName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
