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

// Enum OnlineSubsystem.EInAppPurchaseState
enum class OnlineSubsystem_EInAppPurchaseState : uint8_t
{
	EInAppPurchaseState__Success   = 0,
	EInAppPurchaseState__Failed    = 1,
	EInAppPurchaseState__Cancelled = 2,
	EInAppPurchaseState__Invalid   = 3,
	EInAppPurchaseState__NotAllowed = 4,
	EInAppPurchaseState__Restored  = 5,
	EInAppPurchaseState__Unknown   = 6,
	EInAppPurchaseState__EInAppPurchaseState_MAX = 7,

};

// Enum OnlineSubsystem.EMPMatchOutcome
enum class OnlineSubsystem_EMPMatchOutcome : uint8_t
{
	EMPMatchOutcome__None          = 0,
	EMPMatchOutcome__Quit          = 1,
	EMPMatchOutcome__Won           = 2,
	EMPMatchOutcome__Lost          = 3,
	EMPMatchOutcome__Tied          = 4,
	EMPMatchOutcome__TimeExpired   = 5,
	EMPMatchOutcome__First         = 6,
	EMPMatchOutcome__Second        = 7,
	EMPMatchOutcome__Third         = 8,
	EMPMatchOutcome__Fourth        = 9,
	EMPMatchOutcome__EMPMatchOutcome_MAX = 10,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct OnlineSubsystem.NamedInterface
// 0x000C
struct FNamedInterface
{
	struct FName                                       InterfaceName;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     InterfaceObject;                                           // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct OnlineSubsystem.NamedInterfaceDef
// 0x0014
struct FNamedInterfaceDef
{
	struct FName                                       InterfaceName;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     InterfaceClassName;                                        // 0x0008(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct OnlineSubsystem.InAppPurchaseProductInfo
// 0x0078
struct FInAppPurchaseProductInfo
{
	struct FString                                     Identifier;                                                // 0x0000(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TransactionIdentifier;                                     // 0x000C(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DisplayName;                                               // 0x0018(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DisplayDescription;                                        // 0x0024(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DisplayPrice;                                              // 0x0030(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CurrencyCode;                                              // 0x003C(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CurrencySymbol;                                            // 0x0048(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DecimalSeparator;                                          // 0x0054(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GroupingSeparator;                                         // 0x0060(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReceiptData;                                               // 0x006C(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct OnlineSubsystem.InAppPurchaseRestoreInfo
// 0x0018
struct FInAppPurchaseRestoreInfo
{
	struct FString                                     Identifier;                                                // 0x0000(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReceiptData;                                               // 0x000C(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct OnlineSubsystem.InAppPurchaseProductRequest
// 0x0010
struct FInAppPurchaseProductRequest
{
	struct FString                                     ProductIdentifier;                                         // 0x0000(0x000C) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsConsumable;                                             // 0x000C(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2QIW[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct OnlineSubsystem.JoinabilitySettings
// 0x0014
struct FJoinabilitySettings
{
	struct FName                                       SessionName;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPublicSearchable;                                         // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bAllowInvites;                                             // 0x0009(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bJoinViaPresence;                                          // 0x000A(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bJoinViaPresenceFriendsOnly;                               // 0x000B(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	int                                                MaxPlayers;                                                // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxPartySize;                                              // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
