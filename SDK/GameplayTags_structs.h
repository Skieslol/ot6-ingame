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

// Enum GameplayTags.EGameplayTagQueryExprType
enum class GameplayTags_EGameplayTagQueryExprType : uint8_t
{
	EGameplayTagQueryExprType__Undefined = 0,
	EGameplayTagQueryExprType__AnyTagsMatch = 1,
	EGameplayTagQueryExprType__AllTagsMatch = 2,
	EGameplayTagQueryExprType__NoTagsMatch = 3,
	EGameplayTagQueryExprType__AnyExprMatch = 4,
	EGameplayTagQueryExprType__AllExprMatch = 5,
	EGameplayTagQueryExprType__NoExprMatch = 6,
	EGameplayTagQueryExprType__EGameplayTagQueryExprType_MAX = 7,

};

// Enum GameplayTags.EGameplayContainerMatchType
enum class GameplayTags_EGameplayContainerMatchType : uint8_t
{
	EGameplayContainerMatchType__Any = 0,
	EGameplayContainerMatchType__All = 1,
	EGameplayContainerMatchType__EGameplayContainerMatchType_MAX = 2,

};

// Enum GameplayTags.EGameplayTagMatchType
enum class GameplayTags_EGameplayTagMatchType : uint8_t
{
	EGameplayTagMatchType__Explicit = 0,
	EGameplayTagMatchType__IncludeParentTags = 1,
	EGameplayTagMatchType__EGameplayTagMatchType_MAX = 2,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GameplayTags.GameplayTag
// 0x0008
struct FGameplayTag
{
	struct FName                                       TagName;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct GameplayTags.GameplayTagQuery
// 0x0034
struct FGameplayTagQuery
{
	int                                                TokenStreamVersion;                                        // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FGameplayTag>                        TagDictionary;                                             // 0x0004(0x000C) (ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<unsigned char>                              QueryTokenStream;                                          // 0x0010(0x000C) (ZeroConstructor, NativeAccessSpecifierPrivate)
	struct FString                                     UserDescription;                                           // 0x001C(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     AutoDescription;                                           // 0x0028(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct GameplayTags.GameplayTagContainer
// 0x0018
struct FGameplayTagContainer
{
	TArray<struct FGameplayTag>                        GameplayTags;                                              // 0x0000(0x000C) (BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FName>                               Tags;                                                      // 0x000C(0x000C) (ZeroConstructor, Deprecated, NativeAccessSpecifierPrivate)

};

// ScriptStruct GameplayTags.GameplayTagNode
// 0x004C
struct FGameplayTagNode
{
	unsigned char                                      UnknownData_EX68[0x4C];                                    // 0x0000(0x004C) MISSED OFFSET (PADDING)

};

// ScriptStruct GameplayTags.GameplayTagTableRow
// 0x0024
struct FGameplayTagTableRow : public FTableRowBase
{
	struct FString                                     Tag;                                                       // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       CategoryText;                                              // 0x000C(0x0018) ELEMENT_SIZE_MISMATCH (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FString                                     DevComment;                                                // 0x0018(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
