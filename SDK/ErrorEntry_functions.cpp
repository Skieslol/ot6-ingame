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

// Function ErrorEntry.ErrorEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UErrorEntry_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ErrorEntry.ErrorEntry_C.Construct");

	UErrorEntry_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ErrorEntry.ErrorEntry_C.BndEvt__Button_50_K2Node_ComponentBoundEvent_82_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UErrorEntry_C::BndEvt__Button_50_K2Node_ComponentBoundEvent_82_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ErrorEntry.ErrorEntry_C.BndEvt__Button_50_K2Node_ComponentBoundEvent_82_OnButtonClickedEvent__DelegateSignature");

	UErrorEntry_C_BndEvt__Button_50_K2Node_ComponentBoundEvent_82_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ErrorEntry.ErrorEntry_C.ExecuteUbergraph_ErrorEntry
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UErrorEntry_C::ExecuteUbergraph_ErrorEntry(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ErrorEntry.ErrorEntry_C.ExecuteUbergraph_ErrorEntry");

	UErrorEntry_C_ExecuteUbergraph_ErrorEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
