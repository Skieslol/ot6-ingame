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

// ScriptStruct PurchaseFlow.PurchaseFlowItem
// 0x0024
struct FPurchaseFlowItem
{
	struct FString                                     ItemId;                                                    // 0x0000(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     EntitlementId;                                             // 0x000C(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ValidationInfo;                                            // 0x0018(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct PurchaseFlow.PurchaseFlowOffer
// 0x0028
struct FPurchaseFlowOffer
{
	struct FString                                     OfferNamespace;                                            // 0x0000(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     OfferId;                                                   // 0x000C(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Quantity;                                                  // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPurchaseFlowItem>                   Items;                                                     // 0x001C(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct PurchaseFlow.PurchaseFlowReceiptParam
// 0x0024
struct FPurchaseFlowReceiptParam
{
	struct FString                                     TransactionId;                                             // 0x0000(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TransactionState;                                          // 0x000C(0x000C) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPurchaseFlowOffer>                  Offers;                                                    // 0x0018(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
