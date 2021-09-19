// Name: Fortnite, Version: OT-6_5

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function PurchaseFlow.PurchaseFlowJSBridge.RequestClose
// (Final, Native, Public)
// Parameters:
// struct FString                 CloseInfo                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPurchaseFlowJSBridge::RequestClose(const struct FString& CloseInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PurchaseFlow.PurchaseFlowJSBridge.RequestClose");

	UPurchaseFlowJSBridge_RequestClose_Params params;
	params.CloseInfo = CloseInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PurchaseFlow.PurchaseFlowJSBridge.Receipt
// (Final, Native, Public)
// Parameters:
// struct FPurchaseFlowReceiptParam Receipt                        (Parm, NativeAccessSpecifierPublic)
void UPurchaseFlowJSBridge::Receipt(const struct FPurchaseFlowReceiptParam& Receipt)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PurchaseFlow.PurchaseFlowJSBridge.Receipt");

	UPurchaseFlowJSBridge_Receipt_Params params;
	params.Receipt = Receipt;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
