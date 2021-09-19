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
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct LevelSequence.LevelSequenceObjectReferenceMap
// 0x003C
struct FLevelSequenceObjectReferenceMap
{
	unsigned char                                      UnknownData_RTBQ[0x3C];                                    // 0x0000(0x003C) MISSED OFFSET (PADDING)

};

// ScriptStruct LevelSequence.LevelSequenceObject
// 0x0030
struct FLevelSequenceObject
{
	TLazyObjectPtr<class UObject>                      ObjectOrOwner;                                             // 0x0000(0x001C) (IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     ComponentName;                                             // 0x001C(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class UObject>                      CachedComponent;                                           // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPrivate)

};

// ScriptStruct LevelSequence.LevelSequencePlaybackSettings
// 0x0008
struct FLevelSequencePlaybackSettings
{
	int                                                LoopCount;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PlayRate;                                                  // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct LevelSequence.LevelSequenceObjectReference
// 0x001C
struct FLevelSequenceObjectReference
{
	unsigned char                                      UnknownData_ZNHC[0x1C];                                    // 0x0000(0x001C) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
