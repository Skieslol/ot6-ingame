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

// Function GadgetSelectTile.GadgetSelectTile_C.SetData
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                 InData                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGadgetSelectTile_C::SetData(class UObject* InData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GadgetSelectTile.GadgetSelectTile_C.SetData");

	UGadgetSelectTile_C_SetData_Params params;
	params.InData = InData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GadgetSelectTile.GadgetSelectTile_C.BndEvt__Item_K2Node_ComponentBoundEvent_357_FortBaseButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UFortBaseButton*         Button                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGadgetSelectTile_C::BndEvt__Item_K2Node_ComponentBoundEvent_357_FortBaseButtonClicked__DelegateSignature(class UFortBaseButton* Button)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GadgetSelectTile.GadgetSelectTile_C.BndEvt__Item_K2Node_ComponentBoundEvent_357_FortBaseButtonClicked__DelegateSignature");

	UGadgetSelectTile_C_BndEvt__Item_K2Node_ComponentBoundEvent_357_FortBaseButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GadgetSelectTile.GadgetSelectTile_C.ExecuteUbergraph_GadgetSelectTile
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGadgetSelectTile_C::ExecuteUbergraph_GadgetSelectTile(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GadgetSelectTile.GadgetSelectTile_C.ExecuteUbergraph_GadgetSelectTile");

	UGadgetSelectTile_C_ExecuteUbergraph_GadgetSelectTile_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
