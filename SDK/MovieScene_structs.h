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
// Enums
//---------------------------------------------------------------------------

// Enum MovieScene.ESpawnOwnership
enum class MovieScene_ESpawnOwnership : uint8_t
{
	ESpawnOwnership__InnerSequence = 0,
	ESpawnOwnership__MasterSequence = 1,
	ESpawnOwnership__External      = 2,
	ESpawnOwnership__ESpawnOwnership_MAX = 3,

};

// Enum MovieScene.EMovieSceneKeyInterpolation
enum class MovieScene_EMovieSceneKeyInterpolation : uint8_t
{
	EMovieSceneKeyInterpolation__Auto = 0,
	EMovieSceneKeyInterpolation__User = 1,
	EMovieSceneKeyInterpolation__Break = 2,
	EMovieSceneKeyInterpolation__Linear = 3,
	EMovieSceneKeyInterpolation__Constant = 4,
	EMovieSceneKeyInterpolation__EMovieSceneKeyInterpolation_MAX = 5,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MovieScene.MovieSceneBinding
// 0x0028
struct FMovieSceneBinding
{
	struct FGuid                                       ObjectGuid;                                                // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	struct FString                                     BindingName;                                               // 0x0010(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UMovieSceneTrack*>                    Tracks;                                                    // 0x001C(0x000C) (ZeroConstructor, NativeAccessSpecifierPrivate)

};

// ScriptStruct MovieScene.MovieScenePossessable
// 0x0030
struct FMovieScenePossessable
{
	struct FGuid                                       Guid;                                                      // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	struct FString                                     Name;                                                      // 0x0010(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UClass*                                      PossessedObjectClass;                                      // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGuid                                       ParentGuid;                                                // 0x0020(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)

};

// ScriptStruct MovieScene.MovieSceneSpawnable
// 0x0030
struct FMovieSceneSpawnable
{
	struct FGuid                                       Guid;                                                      // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	struct FString                                     Name;                                                      // 0x0010(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UClass*                                      GeneratedClass;                                            // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FGuid>                               ChildPossessables;                                         // 0x0020(0x000C) (ZeroConstructor, NativeAccessSpecifierPrivate)
	TEnumAsByte<MovieScene_ESpawnOwnership>            Ownership;                                                 // 0x002C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_NO8U[0x3];                                     // 0x002D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct MovieScene.MovieSceneTrackLabels
// 0x000C
struct FMovieSceneTrackLabels
{
	TArray<struct FString>                             Strings;                                                   // 0x0000(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct MovieScene.MovieSceneExpansionState
// 0x0001
struct FMovieSceneExpansionState
{
	bool                                               bExpanded;                                                 // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct MovieScene.MovieSceneEditorData
// 0x005C
struct FMovieSceneEditorData
{
	TMap<struct FString, struct FMovieSceneExpansionState> ExpansionStates;                                           // 0x0000(0x0050) ELEMENT_SIZE_MISMATCH (ZeroConstructor, NativeAccessSpecifierPublic)
	struct FFloatRange                                 WorkingRange;                                              // 0x003C(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FFloatRange                                 ViewRange;                                                 // 0x004C(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
