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

// Function GAB_AIBaseRanged.GAB_AIBaseRanged_C.Completed_2221E89D4148023005FB94B04BA06EF9
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (Parm)
void UGAB_AIBaseRanged_C::Completed_2221E89D4148023005FB94B04BA06EF9(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GAB_AIBaseRanged.GAB_AIBaseRanged_C.Completed_2221E89D4148023005FB94B04BA06EF9");

	UGAB_AIBaseRanged_C_Completed_2221E89D4148023005FB94B04BA06EF9_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GAB_AIBaseRanged.GAB_AIBaseRanged_C.Cancelled_2221E89D4148023005FB94B04BA06EF9
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (Parm)
void UGAB_AIBaseRanged_C::Cancelled_2221E89D4148023005FB94B04BA06EF9(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GAB_AIBaseRanged.GAB_AIBaseRanged_C.Cancelled_2221E89D4148023005FB94B04BA06EF9");

	UGAB_AIBaseRanged_C_Cancelled_2221E89D4148023005FB94B04BA06EF9_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GAB_AIBaseRanged.GAB_AIBaseRanged_C.Triggered_2221E89D4148023005FB94B04BA06EF9
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (Parm)
void UGAB_AIBaseRanged_C::Triggered_2221E89D4148023005FB94B04BA06EF9(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GAB_AIBaseRanged.GAB_AIBaseRanged_C.Triggered_2221E89D4148023005FB94B04BA06EF9");

	UGAB_AIBaseRanged_C_Triggered_2221E89D4148023005FB94B04BA06EF9_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GAB_AIBaseRanged.GAB_AIBaseRanged_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
void UGAB_AIBaseRanged_C::K2_ActivateAbility()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GAB_AIBaseRanged.GAB_AIBaseRanged_C.K2_ActivateAbility");

	UGAB_AIBaseRanged_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GAB_AIBaseRanged.GAB_AIBaseRanged_C.K2_TriggerFromAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FGameplayTag            ApplicationTag                 (Parm)
void UGAB_AIBaseRanged_C::K2_TriggerFromAnimation(const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GAB_AIBaseRanged.GAB_AIBaseRanged_C.K2_TriggerFromAnimation");

	UGAB_AIBaseRanged_C_K2_TriggerFromAnimation_Params params;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GAB_AIBaseRanged.GAB_AIBaseRanged_C.IncreaseAccuracyAndUpdateLastThrowTime
// (BlueprintCallable, BlueprintEvent)
void UGAB_AIBaseRanged_C::IncreaseAccuracyAndUpdateLastThrowTime()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GAB_AIBaseRanged.GAB_AIBaseRanged_C.IncreaseAccuracyAndUpdateLastThrowTime");

	UGAB_AIBaseRanged_C_IncreaseAccuracyAndUpdateLastThrowTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GAB_AIBaseRanged.GAB_AIBaseRanged_C.ExecuteUbergraph_GAB_AIBaseRanged
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGAB_AIBaseRanged_C::ExecuteUbergraph_GAB_AIBaseRanged(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GAB_AIBaseRanged.GAB_AIBaseRanged_C.ExecuteUbergraph_GAB_AIBaseRanged");

	UGAB_AIBaseRanged_C_ExecuteUbergraph_GAB_AIBaseRanged_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
