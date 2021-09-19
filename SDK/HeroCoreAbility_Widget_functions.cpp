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

// Function HeroCoreAbility_Widget.HeroCoreAbility_Widget_C.Invalid Data
// (Protected, BlueprintCallable, BlueprintEvent)
void UHeroCoreAbility_Widget_C::Invalid_Data()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HeroCoreAbility_Widget.HeroCoreAbility_Widget_C.Invalid Data");

	UHeroCoreAbility_Widget_C_Invalid_Data_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HeroCoreAbility_Widget.HeroCoreAbility_Widget_C.Update
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortAbilityKit*         Ability_Kit                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Is_Unlocked                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UHeroCoreAbility_Widget_C::Update(class UFortAbilityKit* Ability_Kit, bool Is_Unlocked)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HeroCoreAbility_Widget.HeroCoreAbility_Widget_C.Update");

	UHeroCoreAbility_Widget_C_Update_Params params;
	params.Ability_Kit = Ability_Kit;
	params.Is_Unlocked = Is_Unlocked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HeroCoreAbility_Widget.HeroCoreAbility_Widget_C.Get Ability Kit Tooltip
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
class UWidget* UHeroCoreAbility_Widget_C::Get_Ability_Kit_Tooltip()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HeroCoreAbility_Widget.HeroCoreAbility_Widget_C.Get Ability Kit Tooltip");

	UHeroCoreAbility_Widget_C_Get_Ability_Kit_Tooltip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HeroCoreAbility_Widget.HeroCoreAbility_Widget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UHeroCoreAbility_Widget_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HeroCoreAbility_Widget.HeroCoreAbility_Widget_C.Construct");

	UHeroCoreAbility_Widget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HeroCoreAbility_Widget.HeroCoreAbility_Widget_C.ExecuteUbergraph_HeroCoreAbility_Widget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UHeroCoreAbility_Widget_C::ExecuteUbergraph_HeroCoreAbility_Widget(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HeroCoreAbility_Widget.HeroCoreAbility_Widget_C.ExecuteUbergraph_HeroCoreAbility_Widget");

	UHeroCoreAbility_Widget_C_ExecuteUbergraph_HeroCoreAbility_Widget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
