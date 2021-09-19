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

// Function GAB_BlasterRanged.GAB_BlasterRanged_C.K2_CanActivateAbility
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAbilityActorInfo ActorInfo                      (Parm, ContainsInstancedReference)
// struct FGameplayTagContainer   RelevantTags                   (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UGAB_BlasterRanged_C::K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayTagContainer* RelevantTags)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GAB_BlasterRanged.GAB_BlasterRanged_C.K2_CanActivateAbility");

	UGAB_BlasterRanged_C_K2_CanActivateAbility_Params params;
	params.ActorInfo = ActorInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RelevantTags != nullptr)
		*RelevantTags = params.RelevantTags;


	return params.ReturnValue;
}


// Function GAB_BlasterRanged.GAB_BlasterRanged_C.OnInterrupted_F2E0D80F47E87F169FADB1814583F0E0
// (BlueprintCallable, BlueprintEvent)
void UGAB_BlasterRanged_C::OnInterrupted_F2E0D80F47E87F169FADB1814583F0E0()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GAB_BlasterRanged.GAB_BlasterRanged_C.OnInterrupted_F2E0D80F47E87F169FADB1814583F0E0");

	UGAB_BlasterRanged_C_OnInterrupted_F2E0D80F47E87F169FADB1814583F0E0_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GAB_BlasterRanged.GAB_BlasterRanged_C.OnComplete_F2E0D80F47E87F169FADB1814583F0E0
// (BlueprintCallable, BlueprintEvent)
void UGAB_BlasterRanged_C::OnComplete_F2E0D80F47E87F169FADB1814583F0E0()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GAB_BlasterRanged.GAB_BlasterRanged_C.OnComplete_F2E0D80F47E87F169FADB1814583F0E0");

	UGAB_BlasterRanged_C_OnComplete_F2E0D80F47E87F169FADB1814583F0E0_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GAB_BlasterRanged.GAB_BlasterRanged_C.Completed_B70914E34DF839C9F27FBA8D66801C0D
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (Parm)
void UGAB_BlasterRanged_C::Completed_B70914E34DF839C9F27FBA8D66801C0D(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GAB_BlasterRanged.GAB_BlasterRanged_C.Completed_B70914E34DF839C9F27FBA8D66801C0D");

	UGAB_BlasterRanged_C_Completed_B70914E34DF839C9F27FBA8D66801C0D_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GAB_BlasterRanged.GAB_BlasterRanged_C.Cancelled_B70914E34DF839C9F27FBA8D66801C0D
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (Parm)
void UGAB_BlasterRanged_C::Cancelled_B70914E34DF839C9F27FBA8D66801C0D(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GAB_BlasterRanged.GAB_BlasterRanged_C.Cancelled_B70914E34DF839C9F27FBA8D66801C0D");

	UGAB_BlasterRanged_C_Cancelled_B70914E34DF839C9F27FBA8D66801C0D_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GAB_BlasterRanged.GAB_BlasterRanged_C.Triggered_B70914E34DF839C9F27FBA8D66801C0D
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (Parm)
void UGAB_BlasterRanged_C::Triggered_B70914E34DF839C9F27FBA8D66801C0D(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GAB_BlasterRanged.GAB_BlasterRanged_C.Triggered_B70914E34DF839C9F27FBA8D66801C0D");

	UGAB_BlasterRanged_C_Triggered_B70914E34DF839C9F27FBA8D66801C0D_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GAB_BlasterRanged.GAB_BlasterRanged_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
void UGAB_BlasterRanged_C::K2_ActivateAbility()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GAB_BlasterRanged.GAB_BlasterRanged_C.K2_ActivateAbility");

	UGAB_BlasterRanged_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GAB_BlasterRanged.GAB_BlasterRanged_C.Reset Ending Montage DoOnce
// (BlueprintCallable, BlueprintEvent)
void UGAB_BlasterRanged_C::Reset_Ending_Montage_DoOnce()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GAB_BlasterRanged.GAB_BlasterRanged_C.Reset Ending Montage DoOnce");

	UGAB_BlasterRanged_C_Reset_Ending_Montage_DoOnce_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GAB_BlasterRanged.GAB_BlasterRanged_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
void UGAB_BlasterRanged_C::K2_OnEndAbility()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GAB_BlasterRanged.GAB_BlasterRanged_C.K2_OnEndAbility");

	UGAB_BlasterRanged_C_K2_OnEndAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GAB_BlasterRanged.GAB_BlasterRanged_C.StopFiring
// (BlueprintCallable, BlueprintEvent)
void UGAB_BlasterRanged_C::StopFiring()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GAB_BlasterRanged.GAB_BlasterRanged_C.StopFiring");

	UGAB_BlasterRanged_C_StopFiring_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GAB_BlasterRanged.GAB_BlasterRanged_C.ExecuteUbergraph_GAB_BlasterRanged
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGAB_BlasterRanged_C::ExecuteUbergraph_GAB_BlasterRanged(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GAB_BlasterRanged.GAB_BlasterRanged_C.ExecuteUbergraph_GAB_BlasterRanged");

	UGAB_BlasterRanged_C_ExecuteUbergraph_GAB_BlasterRanged_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
