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

// Class LevelSequence.LevelSequence
// 0x007C (FullSize[0x0098] - InheritedSize[0x001C])
class ULevelSequence : public UMovieSceneSequence
{
public:
	class UMovieScene*                                 MovieScene;                                                // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLevelSequenceObjectReferenceMap            ObjectReferences;                                          // 0x0020(0x003C) (NativeAccessSpecifierPrivate)
	TMap<struct FString, struct FLevelSequenceObject>  PossessedObjects;                                          // 0x005C(0x0050) ELEMENT_SIZE_MISMATCH (ZeroConstructor, Deprecated, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class LevelSequence.LevelSequence");
		return ptr;
	}



};

// Class LevelSequence.LevelSequencePlayer
// 0x004C (FullSize[0x0068] - InheritedSize[0x001C])
class ULevelSequencePlayer : public UObject
{
public:
	unsigned char                                      UnknownData_D5IX[0x10];                                    // 0x001C(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ULevelSequence*                              LevelSequence;                                             // 0x002C(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bIsPlaying;                                                // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_B8LK[0x3];                                     // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TimeCursorPosition;                                        // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_59TD[0x8];                                     // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLevelSequencePlaybackSettings              PlaybackSettings;                                          // 0x0040(0x0008) (NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_DBI5[0x20];                                    // 0x0048(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class LevelSequence.LevelSequencePlayer");
		return ptr;
	}



	void Stop();
	void SetPlayRate(float PlayRate);
	void SetPlaybackRange(float NewStartTime, float NewEndTime);
	void SetPlaybackPosition(float NewPlaybackPosition);
	void PlayLooping(int NumLoops);
	void Play();
	void Pause();
	bool IsPlaying();
	float GetPlayRate();
	float GetPlaybackPosition();
	float GetLength();
	class ULevelSequencePlayer* STATIC_CreateLevelSequencePlayer(class UObject* WorldContextObject, class ULevelSequence* LevelSequence, const struct FLevelSequencePlaybackSettings& Settings);
};

// Class LevelSequence.LevelSequenceActor
// 0x001C (FullSize[0x025C] - InheritedSize[0x0240])
class ALevelSequenceActor : public AActor
{
public:
	bool                                               bAutoPlay;                                                 // 0x0240(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IXRH[0x3];                                     // 0x0241(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLevelSequencePlaybackSettings              PlaybackSettings;                                          // 0x0244(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class ULevelSequencePlayer*                        SequencePlayer;                                            // 0x024C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FStringAssetReference                       LevelSequence;                                             // 0x0250(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class LevelSequence.LevelSequenceActor");
		return ptr;
	}



	void SetSequence(class ULevelSequence* InSequence);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
