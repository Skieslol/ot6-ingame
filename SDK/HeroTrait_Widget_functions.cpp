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

// Function HeroTrait_Widget.HeroTrait_Widget_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)
void UHeroTrait_Widget_C::Refresh()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HeroTrait_Widget.HeroTrait_Widget_C.Refresh");

	UHeroTrait_Widget_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HeroTrait_Widget.HeroTrait_Widget_C.On Ability Selected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            INDEX                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           SELECTED                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UHeroTrait_Widget_C::On_Ability_Selected(int INDEX, bool SELECTED)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HeroTrait_Widget.HeroTrait_Widget_C.On Ability Selected");

	UHeroTrait_Widget_C_On_Ability_Selected_Params params;
	params.INDEX = INDEX;
	params.SELECTED = SELECTED;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HeroTrait_Widget.HeroTrait_Widget_C.Get Primary Trait Tooltip
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
class UWidget* UHeroTrait_Widget_C::Get_Primary_Trait_Tooltip()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HeroTrait_Widget.HeroTrait_Widget_C.Get Primary Trait Tooltip");

	UHeroTrait_Widget_C_Get_Primary_Trait_Tooltip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HeroTrait_Widget.HeroTrait_Widget_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortTrait*              Trait                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            INDEX                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UHeroTrait_Widget_C::Update(class UFortTrait* Trait, int INDEX)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HeroTrait_Widget.HeroTrait_Widget_C.Update");

	UHeroTrait_Widget_C_Update_Params params;
	params.Trait = Trait;
	params.INDEX = INDEX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HeroTrait_Widget.HeroTrait_Widget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UHeroTrait_Widget_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HeroTrait_Widget.HeroTrait_Widget_C.Construct");

	UHeroTrait_Widget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HeroTrait_Widget.HeroTrait_Widget_C.ExecuteUbergraph_HeroTrait_Widget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UHeroTrait_Widget_C::ExecuteUbergraph_HeroTrait_Widget(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HeroTrait_Widget.HeroTrait_Widget_C.ExecuteUbergraph_HeroTrait_Widget");

	UHeroTrait_Widget_C_ExecuteUbergraph_HeroTrait_Widget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HeroTrait_Widget.HeroTrait_Widget_C.OnRequestSetTraitDepth__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UHeroTrait_Widget_C::OnRequestSetTraitDepth__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HeroTrait_Widget.HeroTrait_Widget_C.OnRequestSetTraitDepth__DelegateSignature");

	UHeroTrait_Widget_C_OnRequestSetTraitDepth__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
