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

// Class GameplayTags.EditableGameplayTagQuery
// 0x0050 (FullSize[0x006C] - InheritedSize[0x001C])
class UEditableGameplayTagQuery : public UObject
{
public:
	struct FString                                     UserDescription;                                           // 0x001C(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KH9L[0xC];                                     // 0x0028(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UEditableGameplayTagQueryExpression*         RootExpression;                                            // 0x0034(0x0004) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagQuery                           TagQueryExportText_Helper;                                 // 0x0038(0x0034) (NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayTags.EditableGameplayTagQuery");
		return ptr;
	}



};

// Class GameplayTags.EditableGameplayTagQueryExpression
// 0x0000 (FullSize[0x001C] - InheritedSize[0x001C])
class UEditableGameplayTagQueryExpression : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayTags.EditableGameplayTagQueryExpression");
		return ptr;
	}



};

// Class GameplayTags.EditableGameplayTagQueryExpression_AnyTagsMatch
// 0x0018 (FullSize[0x0034] - InheritedSize[0x001C])
class UEditableGameplayTagQueryExpression_AnyTagsMatch : public UEditableGameplayTagQueryExpression
{
public:
	struct FGameplayTagContainer                       Tags;                                                      // 0x001C(0x0018) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayTags.EditableGameplayTagQueryExpression_AnyTagsMatch");
		return ptr;
	}



};

// Class GameplayTags.EditableGameplayTagQueryExpression_AllTagsMatch
// 0x0018 (FullSize[0x0034] - InheritedSize[0x001C])
class UEditableGameplayTagQueryExpression_AllTagsMatch : public UEditableGameplayTagQueryExpression
{
public:
	struct FGameplayTagContainer                       Tags;                                                      // 0x001C(0x0018) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayTags.EditableGameplayTagQueryExpression_AllTagsMatch");
		return ptr;
	}



};

// Class GameplayTags.EditableGameplayTagQueryExpression_NoTagsMatch
// 0x0018 (FullSize[0x0034] - InheritedSize[0x001C])
class UEditableGameplayTagQueryExpression_NoTagsMatch : public UEditableGameplayTagQueryExpression
{
public:
	struct FGameplayTagContainer                       Tags;                                                      // 0x001C(0x0018) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayTags.EditableGameplayTagQueryExpression_NoTagsMatch");
		return ptr;
	}



};

// Class GameplayTags.EditableGameplayTagQueryExpression_AnyExprMatch
// 0x000C (FullSize[0x0028] - InheritedSize[0x001C])
class UEditableGameplayTagQueryExpression_AnyExprMatch : public UEditableGameplayTagQueryExpression
{
public:
	TArray<class UEditableGameplayTagQueryExpression*> Expressions;                                               // 0x001C(0x000C) (Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayTags.EditableGameplayTagQueryExpression_AnyExprMatch");
		return ptr;
	}



};

// Class GameplayTags.EditableGameplayTagQueryExpression_AllExprMatch
// 0x000C (FullSize[0x0028] - InheritedSize[0x001C])
class UEditableGameplayTagQueryExpression_AllExprMatch : public UEditableGameplayTagQueryExpression
{
public:
	TArray<class UEditableGameplayTagQueryExpression*> Expressions;                                               // 0x001C(0x000C) (Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayTags.EditableGameplayTagQueryExpression_AllExprMatch");
		return ptr;
	}



};

// Class GameplayTags.EditableGameplayTagQueryExpression_NoExprMatch
// 0x000C (FullSize[0x0028] - InheritedSize[0x001C])
class UEditableGameplayTagQueryExpression_NoExprMatch : public UEditableGameplayTagQueryExpression
{
public:
	TArray<class UEditableGameplayTagQueryExpression*> Expressions;                                               // 0x001C(0x000C) (Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayTags.EditableGameplayTagQueryExpression_NoExprMatch");
		return ptr;
	}



};

// Class GameplayTags.GameplayTagAssetInterface
// 0x0000 (FullSize[0x001C] - InheritedSize[0x001C])
class UGameplayTagAssetInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayTags.GameplayTagAssetInterface");
		return ptr;
	}



	bool HasMatchingGameplayTag(const struct FGameplayTag& TagToCheck);
	bool HasAnyMatchingGameplayTags(const struct FGameplayTagContainer& TagContainer, bool bCountEmptyAsMatch);
	bool HasAllMatchingGameplayTags(const struct FGameplayTagContainer& TagContainer, bool bCountEmptyAsMatch);
	void GetOwnedGameplayTags(struct FGameplayTagContainer* TagContainer);
};

// Class GameplayTags.BlueprintGameplayTagLibrary
// 0x0000 (FullSize[0x001C] - InheritedSize[0x001C])
class UBlueprintGameplayTagLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayTags.BlueprintGameplayTagLibrary");
		return ptr;
	}



	bool STATIC_NotEqual_TagTag(const struct FGameplayTag& A, const struct FString& B);
	bool STATIC_NotEqual_TagContainerTagContainer(const struct FGameplayTagContainer& A, const struct FString& B);
	struct FGameplayTag STATIC_MakeLiteralGameplayTag(const struct FGameplayTag& Value);
	struct FGameplayTagQuery STATIC_MakeGameplayTagQuery(const struct FGameplayTagQuery& TagQuery);
	bool STATIC_HasAllMatchingGameplayTags(const struct FGameplayTagContainer& OtherContainer, bool bCountEmptyAsMatch);
	int STATIC_GetNumGameplayTagsInContainer(const struct FGameplayTagContainer& TagContainer);
	struct FString STATIC_GetDebugStringFromGameplayTagContainer(const struct FGameplayTagContainer& TagContainer);
	bool STATIC_DoGameplayTagsMatch(const struct FGameplayTag& TagOne, const struct FGameplayTag& TagTwo, TEnumAsByte<GameplayTags_EGameplayTagMatchType> TagOneMatchType, TEnumAsByte<GameplayTags_EGameplayTagMatchType> TagTwoMatchType);
	bool STATIC_DoesTagAssetInterfaceHaveTag(TEnumAsByte<GameplayTags_EGameplayTagMatchType> ContainerTagsMatchType, const struct FGameplayTag& Tag, TEnumAsByte<GameplayTags_EGameplayTagMatchType> TagMatchType);
	bool STATIC_DoesContainerMatchTagQuery(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTagQuery& TagQuery);
	bool STATIC_DoesContainerMatchAnyTagsInContainer(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTagContainer& OtherContainer, bool bCountEmptyAsMatch);
	bool STATIC_DoesContainerMatchAllTagsInContainer(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTagContainer& OtherContainer, bool bCountEmptyAsMatch);
	bool STATIC_DoesContainerHaveTag(const struct FGameplayTagContainer& TagContainer, TEnumAsByte<GameplayTags_EGameplayTagMatchType> ContainerTagsMatchType, const struct FGameplayTag& Tag, TEnumAsByte<GameplayTags_EGameplayTagMatchType> TagMatchType);
	bool STATIC_AppendGameplayTagContainers(const struct FGameplayTagContainer& InTagContainer, struct FGameplayTagContainer* InOutTagContainer);
};

// Class GameplayTags.GameplayTagsManager
// 0x00F0 (FullSize[0x010C] - InheritedSize[0x001C])
class UGameplayTagsManager : public UObject
{
public:
	unsigned char                                      UnknownData_KPQE[0x8C];                                    // 0x001C(0x008C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UDataTable*>                          GameplayTagTables;                                         // 0x00A8(0x000C) (ZeroConstructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_D0R8[0x58];                                    // 0x00B4(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayTags.GameplayTagsManager");
		return ptr;
	}



	struct FGameplayTag RequestGameplayTag(const struct FName& TagName, bool ErrorIfNotFound);
};

// Class GameplayTags.GameplayTagsSettings
// 0x000C (FullSize[0x0028] - InheritedSize[0x001C])
class UGameplayTagsSettings : public UObject
{
public:
	TArray<struct FString>                             GameplayTags;                                              // 0x001C(0x000C) (Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameplayTags.GameplayTagsSettings");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
