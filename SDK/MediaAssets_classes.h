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
// Classes
//---------------------------------------------------------------------------

// Class MediaAssets.MediaPlayer
// 0x00A4 (FullSize[0x00C0] - InheritedSize[0x001C])
class UMediaPlayer : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnEndReached;                                              // 0x001C(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnMediaClosed;                                             // 0x0028(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnMediaOpened;                                             // 0x0034(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnMediaOpenFailed;                                         // 0x0040(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPlaybackResumed;                                         // 0x004C(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPlaybackSuspended;                                       // 0x0058(0x0010) ELEMENT_SIZE_MISMATCH (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      Looping : 1;                                               // 0x0064(0x0001) BIT_FIELD (Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_JBAT[0x3];                                     // 0x0065(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     URL;                                                       // 0x0068(0x000C) (Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_FZHA[0x4C];                                    // 0x0074(0x004C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MediaAssets.MediaPlayer");
		return ptr;
	}



	bool SupportsSeeking();
	bool SupportsScrubbing();
	bool SupportsRate(float Rate, bool Unthinned);
	bool SetRate(float Rate);
	bool SetLooping(bool InLooping);
	bool Seek(const struct FTimespan& InTime);
	bool Rewind();
	bool Play();
	bool Pause();
	bool OpenUrl(const struct FString& NewUrl);
	bool IsReady();
	bool IsPlaying();
	bool IsPaused();
	bool IsLooping();
	struct FString GetUrl();
	struct FTimespan GetTime();
	float GetRate();
	struct FTimespan GetDuration();
	void Close();
	bool CanPlay();
	bool CanPause();
};

// Class MediaAssets.MediaSoundWave
// 0x0030 (FullSize[0x01D0] - InheritedSize[0x01A0])
class UMediaSoundWave : public USoundWave
{
public:
	int                                                AudioTrackIndex;                                           // 0x01A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMediaPlayer*                                MediaPlayer;                                               // 0x01A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_X3WH[0x10];                                    // 0x01A8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TWeakObjectPtr<class UMediaPlayer>                 CurrentMediaPlayer;                                        // 0x01B8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_ACSH[0x10];                                    // 0x01C0(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MediaAssets.MediaSoundWave");
		return ptr;
	}



	void SetMediaPlayer(class UMediaPlayer* InMediaPlayer);
};

// Class MediaAssets.MediaTexture
// 0x0044 (FullSize[0x00A8] - InheritedSize[0x0064])
class UMediaTexture : public UTexture
{
public:
	TEnumAsByte<Engine_ETextureAddress>                AddressX;                                                  // 0x0064(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ETextureAddress>                AddressY;                                                  // 0x0065(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XTCX[0x2];                                     // 0x0066(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLinearColor                                ClearColor;                                                // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	int                                                VideoTrackIndex;                                           // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMediaPlayer*                                MediaPlayer;                                               // 0x007C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_QACU[0x8];                                     // 0x0080(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TWeakObjectPtr<class UMediaPlayer>                 CurrentMediaPlayer;                                        // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_YOXR[0x18];                                    // 0x0090(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MediaAssets.MediaTexture");
		return ptr;
	}



	void SetMediaPlayer(class UMediaPlayer* InMediaPlayer);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
