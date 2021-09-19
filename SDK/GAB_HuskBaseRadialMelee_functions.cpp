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

// Function GAB_HuskBaseRadialMelee.GAB_HuskBaseRadialMelee_C.K2_CanActivateAbility
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAbilityActorInfo ActorInfo                      (Parm, ContainsInstancedReference)
// struct FGameplayTagContainer   RelevantTags                   (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UGAB_HuskBaseRadialMelee_C::K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayTagContainer* RelevantTags)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GAB_HuskBaseRadialMelee.GAB_HuskBaseRadialMelee_C.K2_CanActivateAbility");

	UGAB_HuskBaseRadialMelee_C_K2_CanActivateAbility_Params params;
	params.ActorInfo = ActorInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RelevantTags != nullptr)
		*RelevantTags = params.RelevantTags;


	return params.ReturnValue;
}


// Function GAB_HuskBaseRadialMelee.GAB_HuskBaseRadialMelee_C.Completed_A0D25C0C4C9CDEEB0EB0018B3334307D
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (Parm)
void UGAB_HuskBaseRadialMelee_C::Completed_A0D25C0C4C9CDEEB0EB0018B3334307D(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GAB_HuskBaseRadialMelee.GAB_HuskBaseRadialMelee_C.Completed_A0D25C0C4C9CDEEB0EB0018B3334307D");

	UGAB_HuskBaseRadialMelee_C_Completed_A0D25C0C4C9CDEEB0EB0018B3334307D_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GAB_HuskBaseRadialMelee.GAB_HuskBaseRadialMelee_C.Cancelled_A0D25C0C4C9CDEEB0EB0018B3334307D
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (Parm)
void UGAB_HuskBaseRadialMelee_C::Cancelled_A0D25C0C4C9CDEEB0EB0018B3334307D(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GAB_HuskBaseRadialMelee.GAB_HuskBaseRadialMelee_C.Cancelled_A0D25C0C4C9CDEEB0EB0018B3334307D");

	UGAB_HuskBaseRadialMelee_C_Cancelled_A0D25C0C4C9CDEEB0EB0018B3334307D_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GAB_HuskBaseRadialMelee.GAB_HuskBaseRadialMelee_C.Triggered_A0D25C0C4C9CDEEB0EB0018B3334307D
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (Parm)
void UGAB_HuskBaseRadialMelee_C::Triggered_A0D25C0C4C9CDEEB0EB0018B3334307D(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GAB_HuskBaseRadialMelee.GAB_HuskBaseRadialMelee_C.Triggered_A0D25C0C4C9CDEEB0EB0018B3334307D");

	UGAB_HuskBaseRadialMelee_C_Triggered_A0D25C0C4C9CDEEB0EB0018B3334307D_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GAB_HuskBaseRadialMelee.GAB_HuskBaseRadialMelee_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
void UGAB_HuskBaseRadialMelee_C::K2_ActivateAbility()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GAB_HuskBaseRadialMelee.GAB_HuskBaseRadialMelee_C.K2_ActivateAbility");

	UGAB_HuskBaseRadialMelee_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GAB_HuskBaseRadialMelee.GAB_HuskBaseRadialMelee_C.ExecuteUbergraph_GAB_HuskBaseRadialMelee
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGAB_HuskBaseRadialMelee_C::ExecuteUbergraph_GAB_HuskBaseRadialMelee(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GAB_HuskBaseRadialMelee.GAB_HuskBaseRadialMelee_C.ExecuteUbergraph_GAB_HuskBaseRadialMelee");

	UGAB_HuskBaseRadialMelee_C_ExecuteUbergraph_GAB_HuskBaseRadialMelee_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
