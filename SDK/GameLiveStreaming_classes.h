﻿#pragma once

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
// Classes
//---------------------------------------------------------------------------

// Class GameLiveStreaming.GameLiveStreamingFunctionLibrary
// 0x0000 (FullSize[0x001C] - InheritedSize[0x001C])
class UGameLiveStreamingFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameLiveStreaming.GameLiveStreamingFunctionLibrary");
		return ptr;
	}



	void STATIC_StopWebCam();
	void STATIC_StopBroadcastingGame();
	void STATIC_StartWebCam(int DesiredWebCamWidth, int DesiredWebCamHeight, bool bMirrorWebCamImage, bool bDrawSimpleWebCamVideo);
	void STATIC_StartBroadcastingGame(const struct FString& LoginUserName, const struct FString& LoginPassword, int FrameRate, float ScreenScaling, bool bStartWebCam, int DesiredWebCamWidth, int DesiredWebCamHeight, bool bMirrorWebCamImage, bool bDrawSimpleWebCamVideo, bool bCaptureAudioFromComputer, bool bCaptureAudioFromMicrophone, class UTexture2D* CoverUpImage);
	bool STATIC_IsWebCamEnabled();
	bool STATIC_IsBroadcastingGame();
};

// Class GameLiveStreaming.QueryLiveStreamsCallbackProxy
// 0x0018 (FullSize[0x0034] - InheritedSize[0x001C])
class UQueryLiveStreamsCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnQueriedLiveStreams;                                      // 0x001C(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CKM1[0xC];                                     // 0x0028(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameLiveStreaming.QueryLiveStreamsCallbackProxy");
		return ptr;
	}



	class UQueryLiveStreamsCallbackProxy* STATIC_QueryLiveStreams(const struct FString& GameName);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
