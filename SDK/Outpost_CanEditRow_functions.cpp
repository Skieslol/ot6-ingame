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

// Function Outpost_CanEditRow.Outpost_CanEditRow_C.Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerStateOutpost* InPlayer                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerStateOutpost* InOutpostOwner                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UOutpost_CanEditRow_C::Init(class AFortPlayerStateOutpost* InPlayer, class AFortPlayerStateOutpost* InOutpostOwner)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Outpost_CanEditRow.Outpost_CanEditRow_C.Init");

	UOutpost_CanEditRow_C_Init_Params params;
	params.InPlayer = InPlayer;
	params.InOutpostOwner = InOutpostOwner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Outpost_CanEditRow.Outpost_CanEditRow_C.BndEvt__CanEditButton_K2Node_ComponentBoundEvent_278_FortSelectedStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UFortBaseButton*         Button                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           SELECTED                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UOutpost_CanEditRow_C::BndEvt__CanEditButton_K2Node_ComponentBoundEvent_278_FortSelectedStateChanged__DelegateSignature(class UFortBaseButton* Button, bool SELECTED)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Outpost_CanEditRow.Outpost_CanEditRow_C.BndEvt__CanEditButton_K2Node_ComponentBoundEvent_278_FortSelectedStateChanged__DelegateSignature");

	UOutpost_CanEditRow_C_BndEvt__CanEditButton_K2Node_ComponentBoundEvent_278_FortSelectedStateChanged__DelegateSignature_Params params;
	params.Button = Button;
	params.SELECTED = SELECTED;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Outpost_CanEditRow.Outpost_CanEditRow_C.ExecuteUbergraph_Outpost_CanEditRow
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UOutpost_CanEditRow_C::ExecuteUbergraph_Outpost_CanEditRow(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Outpost_CanEditRow.Outpost_CanEditRow_C.ExecuteUbergraph_Outpost_CanEditRow");

	UOutpost_CanEditRow_C_ExecuteUbergraph_Outpost_CanEditRow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
