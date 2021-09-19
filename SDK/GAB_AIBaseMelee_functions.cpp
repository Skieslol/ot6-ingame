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

// Function GAB_AIBaseMelee.GAB_AIBaseMelee_C.Completed_8CCC8A6B41B7B728038BDE887BD23BCC
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (Parm)
void UGAB_AIBaseMelee_C::Completed_8CCC8A6B41B7B728038BDE887BD23BCC(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GAB_AIBaseMelee.GAB_AIBaseMelee_C.Completed_8CCC8A6B41B7B728038BDE887BD23BCC");

	UGAB_AIBaseMelee_C_Completed_8CCC8A6B41B7B728038BDE887BD23BCC_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GAB_AIBaseMelee.GAB_AIBaseMelee_C.Cancelled_8CCC8A6B41B7B728038BDE887BD23BCC
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (Parm)
void UGAB_AIBaseMelee_C::Cancelled_8CCC8A6B41B7B728038BDE887BD23BCC(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GAB_AIBaseMelee.GAB_AIBaseMelee_C.Cancelled_8CCC8A6B41B7B728038BDE887BD23BCC");

	UGAB_AIBaseMelee_C_Cancelled_8CCC8A6B41B7B728038BDE887BD23BCC_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GAB_AIBaseMelee.GAB_AIBaseMelee_C.Triggered_8CCC8A6B41B7B728038BDE887BD23BCC
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (Parm)
void UGAB_AIBaseMelee_C::Triggered_8CCC8A6B41B7B728038BDE887BD23BCC(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GAB_AIBaseMelee.GAB_AIBaseMelee_C.Triggered_8CCC8A6B41B7B728038BDE887BD23BCC");

	UGAB_AIBaseMelee_C_Triggered_8CCC8A6B41B7B728038BDE887BD23BCC_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GAB_AIBaseMelee.GAB_AIBaseMelee_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
void UGAB_AIBaseMelee_C::K2_ActivateAbility()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GAB_AIBaseMelee.GAB_AIBaseMelee_C.K2_ActivateAbility");

	UGAB_AIBaseMelee_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GAB_AIBaseMelee.GAB_AIBaseMelee_C.ExecuteUbergraph_GAB_AIBaseMelee
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGAB_AIBaseMelee_C::ExecuteUbergraph_GAB_AIBaseMelee(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GAB_AIBaseMelee.GAB_AIBaseMelee_C.ExecuteUbergraph_GAB_AIBaseMelee");

	UGAB_AIBaseMelee_C_ExecuteUbergraph_GAB_AIBaseMelee_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
