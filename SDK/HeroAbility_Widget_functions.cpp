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

// Function HeroAbility_Widget.HeroAbility_Widget_C.On Ability Selected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortBaseButton*         Ability_Button                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           SELECTED                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UHeroAbility_Widget_C::On_Ability_Selected(class UFortBaseButton* Ability_Button, bool SELECTED)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HeroAbility_Widget.HeroAbility_Widget_C.On Ability Selected");

	UHeroAbility_Widget_C_On_Ability_Selected_Params params;
	params.Ability_Button = Ability_Button;
	params.SELECTED = SELECTED;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HeroAbility_Widget.HeroAbility_Widget_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortAbilityKit*         Ability_Kit                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            Cost                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Is_Active                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UHeroAbility_Widget_C::Update(class UFortAbilityKit* Ability_Kit, int Cost, bool Is_Active)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HeroAbility_Widget.HeroAbility_Widget_C.Update");

	UHeroAbility_Widget_C_Update_Params params;
	params.Ability_Kit = Ability_Kit;
	params.Cost = Cost;
	params.Is_Active = Is_Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HeroAbility_Widget.HeroAbility_Widget_C.Get Ability Kit Tooltip
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
class UWidget* UHeroAbility_Widget_C::Get_Ability_Kit_Tooltip()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HeroAbility_Widget.HeroAbility_Widget_C.Get Ability Kit Tooltip");

	UHeroAbility_Widget_C_Get_Ability_Kit_Tooltip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HeroAbility_Widget.HeroAbility_Widget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UHeroAbility_Widget_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HeroAbility_Widget.HeroAbility_Widget_C.Construct");

	UHeroAbility_Widget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HeroAbility_Widget.HeroAbility_Widget_C.ExecuteUbergraph_HeroAbility_Widget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UHeroAbility_Widget_C::ExecuteUbergraph_HeroAbility_Widget(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HeroAbility_Widget.HeroAbility_Widget_C.ExecuteUbergraph_HeroAbility_Widget");

	UHeroAbility_Widget_C_ExecuteUbergraph_HeroAbility_Widget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HeroAbility_Widget.HeroAbility_Widget_C.OnAbilitySelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            INDEX                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           SELECTED                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UHeroAbility_Widget_C::OnAbilitySelected__DelegateSignature(int INDEX, bool SELECTED)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HeroAbility_Widget.HeroAbility_Widget_C.OnAbilitySelected__DelegateSignature");

	UHeroAbility_Widget_C_OnAbilitySelected__DelegateSignature_Params params;
	params.INDEX = INDEX;
	params.SELECTED = SELECTED;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
