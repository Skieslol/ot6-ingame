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

// Function GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C.K2_CanActivateAbility
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAbilityActorInfo ActorInfo                      (Parm, ContainsInstancedReference)
// struct FGameplayTagContainer   RelevantTags                   (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UGAB_FlingerThrowHusk_C::K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayTagContainer* RelevantTags)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C.K2_CanActivateAbility");

	UGAB_FlingerThrowHusk_C_K2_CanActivateAbility_Params params;
	params.ActorInfo = ActorInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RelevantTags != nullptr)
		*RelevantTags = params.RelevantTags;


	return params.ReturnValue;
}


// Function GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C.Completed_B56594C44CE933A96A3E13BDCFC1097D
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (Parm)
void UGAB_FlingerThrowHusk_C::Completed_B56594C44CE933A96A3E13BDCFC1097D(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C.Completed_B56594C44CE933A96A3E13BDCFC1097D");

	UGAB_FlingerThrowHusk_C_Completed_B56594C44CE933A96A3E13BDCFC1097D_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C.Cancelled_B56594C44CE933A96A3E13BDCFC1097D
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (Parm)
void UGAB_FlingerThrowHusk_C::Cancelled_B56594C44CE933A96A3E13BDCFC1097D(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C.Cancelled_B56594C44CE933A96A3E13BDCFC1097D");

	UGAB_FlingerThrowHusk_C_Cancelled_B56594C44CE933A96A3E13BDCFC1097D_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C.Triggered_B56594C44CE933A96A3E13BDCFC1097D
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (Parm)
void UGAB_FlingerThrowHusk_C::Triggered_B56594C44CE933A96A3E13BDCFC1097D(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C.Triggered_B56594C44CE933A96A3E13BDCFC1097D");

	UGAB_FlingerThrowHusk_C_Triggered_B56594C44CE933A96A3E13BDCFC1097D_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
void UGAB_FlingerThrowHusk_C::K2_ActivateAbility()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C.K2_ActivateAbility");

	UGAB_FlingerThrowHusk_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
void UGAB_FlingerThrowHusk_C::K2_OnEndAbility()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C.K2_OnEndAbility");

	UGAB_FlingerThrowHusk_C_K2_OnEndAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C.CommitAndEndAbility
// (BlueprintCallable, BlueprintEvent)
void UGAB_FlingerThrowHusk_C::CommitAndEndAbility()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C.CommitAndEndAbility");

	UGAB_FlingerThrowHusk_C_CommitAndEndAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C.SpawnFX
// (BlueprintCallable, BlueprintEvent)
void UGAB_FlingerThrowHusk_C::SpawnFX()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C.SpawnFX");

	UGAB_FlingerThrowHusk_C_SpawnFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C.StopFX
// (BlueprintCallable, BlueprintEvent)
void UGAB_FlingerThrowHusk_C::StopFX()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C.StopFX");

	UGAB_FlingerThrowHusk_C_StopFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C.ExecuteUbergraph_GAB_FlingerThrowHusk
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGAB_FlingerThrowHusk_C::ExecuteUbergraph_GAB_FlingerThrowHusk(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C.ExecuteUbergraph_GAB_FlingerThrowHusk");

	UGAB_FlingerThrowHusk_C_ExecuteUbergraph_GAB_FlingerThrowHusk_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
