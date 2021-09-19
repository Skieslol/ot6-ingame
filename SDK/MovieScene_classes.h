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

// Class MovieScene.MovieScene
// 0x0054 (FullSize[0x0070] - InheritedSize[0x001C])
class UMovieScene : public UObject
{
public:
	TArray<struct FMovieSceneSpawnable>                Spawnables;                                                // 0x001C(0x000C) (ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FMovieScenePossessable>              Possessables;                                              // 0x0028(0x000C) (ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FMovieSceneBinding>                  ObjectBindings;                                            // 0x0034(0x000C) (ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<class UMovieSceneTrack*>                    MasterTracks;                                              // 0x0040(0x000C) (ZeroConstructor, NativeAccessSpecifierPrivate)
	class UMovieSceneTrack*                            ShotTrack;                                                 // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FFloatRange                                 PlaybackRange;                                             // 0x0050(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	float                                              InTime;                                                    // 0x0060(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              OutTime;                                                   // 0x0064(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              StartTime;                                                 // 0x0068(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              EndTime;                                                   // 0x006C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.MovieScene");
		return ptr;
	}



};

// Class MovieScene.MovieSceneSection
// 0x0014 (FullSize[0x0030] - InheritedSize[0x001C])
class UMovieSceneSection : public UObject
{
public:
	float                                              StartTime;                                                 // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              EndTime;                                                   // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                RowIndex;                                                  // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                OverlapPriority;                                           // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      bIsActive : 1;                                             // 0x002C(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPrivate)
	unsigned char                                      bIsLocked : 1;                                             // 0x002C(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPrivate)
	unsigned char                                      bIsInfinite : 1;                                           // 0x002C(0x0001) BIT_FIELD (Edit, NoDestructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_TUJV[0x3];                                     // 0x002D(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.MovieSceneSection");
		return ptr;
	}



};

// Class MovieScene.MovieSceneSequence
// 0x0000 (FullSize[0x001C] - InheritedSize[0x001C])
class UMovieSceneSequence : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.MovieSceneSequence");
		return ptr;
	}



};

// Class MovieScene.MovieSceneTrack
// 0x0000 (FullSize[0x001C] - InheritedSize[0x001C])
class UMovieSceneTrack : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.MovieSceneTrack");
		return ptr;
	}



};

// Class MovieScene.MovieSceneNameableTrack
// 0x0000 (FullSize[0x001C] - InheritedSize[0x001C])
class UMovieSceneNameableTrack : public UMovieSceneTrack
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.MovieSceneNameableTrack");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
