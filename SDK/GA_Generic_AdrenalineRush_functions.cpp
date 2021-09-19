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

// Function GA_Generic_AdrenalineRush.GA_Generic_AdrenalineRush_C.SpawnVisuals
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UGA_Generic_AdrenalineRush_C::SpawnVisuals()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Generic_AdrenalineRush.GA_Generic_AdrenalineRush_C.SpawnVisuals");

	UGA_Generic_AdrenalineRush_C_SpawnVisuals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Generic_AdrenalineRush.GA_Generic_AdrenalineRush_C.ApplyGadgetEffects
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (Parm)
void UGA_Generic_AdrenalineRush_C::ApplyGadgetEffects(const struct FGameplayAbilityTargetDataHandle& TargetData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Generic_AdrenalineRush.GA_Generic_AdrenalineRush_C.ApplyGadgetEffects");

	UGA_Generic_AdrenalineRush_C_ApplyGadgetEffects_Params params;
	params.TargetData = TargetData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Generic_AdrenalineRush.GA_Generic_AdrenalineRush_C.SetupVariable_Upgrades
// (Public, BlueprintCallable, BlueprintEvent)
void UGA_Generic_AdrenalineRush_C::SetupVariable_Upgrades()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Generic_AdrenalineRush.GA_Generic_AdrenalineRush_C.SetupVariable_Upgrades");

	UGA_Generic_AdrenalineRush_C_SetupVariable_Upgrades_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Generic_AdrenalineRush.GA_Generic_AdrenalineRush_C.Cancelled_96CD2D2546A5DCD7B7C14BBA26232864
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (Parm)
void UGA_Generic_AdrenalineRush_C::Cancelled_96CD2D2546A5DCD7B7C14BBA26232864(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Generic_AdrenalineRush.GA_Generic_AdrenalineRush_C.Cancelled_96CD2D2546A5DCD7B7C14BBA26232864");

	UGA_Generic_AdrenalineRush_C_Cancelled_96CD2D2546A5DCD7B7C14BBA26232864_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Generic_AdrenalineRush.GA_Generic_AdrenalineRush_C.Targeted_96CD2D2546A5DCD7B7C14BBA26232864
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (Parm)
void UGA_Generic_AdrenalineRush_C::Targeted_96CD2D2546A5DCD7B7C14BBA26232864(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Generic_AdrenalineRush.GA_Generic_AdrenalineRush_C.Targeted_96CD2D2546A5DCD7B7C14BBA26232864");

	UGA_Generic_AdrenalineRush_C_Targeted_96CD2D2546A5DCD7B7C14BBA26232864_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Generic_AdrenalineRush.GA_Generic_AdrenalineRush_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
void UGA_Generic_AdrenalineRush_C::K2_ActivateAbility()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Generic_AdrenalineRush.GA_Generic_AdrenalineRush_C.K2_ActivateAbility");

	UGA_Generic_AdrenalineRush_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Generic_AdrenalineRush.GA_Generic_AdrenalineRush_C.ExecuteUbergraph_GA_Generic_AdrenalineRush
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_Generic_AdrenalineRush_C::ExecuteUbergraph_GA_Generic_AdrenalineRush(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Generic_AdrenalineRush.GA_Generic_AdrenalineRush_C.ExecuteUbergraph_GA_Generic_AdrenalineRush");

	UGA_Generic_AdrenalineRush_C_ExecuteUbergraph_GA_Generic_AdrenalineRush_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
