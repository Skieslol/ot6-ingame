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

// Function GAB_BaseDespawn.GAB_BaseDespawn_C.Completed_32BE25FF4375C5CD3FD5BABD11D3AB12
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (Parm)
void UGAB_BaseDespawn_C::Completed_32BE25FF4375C5CD3FD5BABD11D3AB12(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GAB_BaseDespawn.GAB_BaseDespawn_C.Completed_32BE25FF4375C5CD3FD5BABD11D3AB12");

	UGAB_BaseDespawn_C_Completed_32BE25FF4375C5CD3FD5BABD11D3AB12_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GAB_BaseDespawn.GAB_BaseDespawn_C.Cancelled_32BE25FF4375C5CD3FD5BABD11D3AB12
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (Parm)
void UGAB_BaseDespawn_C::Cancelled_32BE25FF4375C5CD3FD5BABD11D3AB12(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GAB_BaseDespawn.GAB_BaseDespawn_C.Cancelled_32BE25FF4375C5CD3FD5BABD11D3AB12");

	UGAB_BaseDespawn_C_Cancelled_32BE25FF4375C5CD3FD5BABD11D3AB12_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GAB_BaseDespawn.GAB_BaseDespawn_C.Triggered_32BE25FF4375C5CD3FD5BABD11D3AB12
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (Parm)
void UGAB_BaseDespawn_C::Triggered_32BE25FF4375C5CD3FD5BABD11D3AB12(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GAB_BaseDespawn.GAB_BaseDespawn_C.Triggered_32BE25FF4375C5CD3FD5BABD11D3AB12");

	UGAB_BaseDespawn_C_Triggered_32BE25FF4375C5CD3FD5BABD11D3AB12_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GAB_BaseDespawn.GAB_BaseDespawn_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      EventData                      (ConstParm, Parm, OutParm, ReferenceParm)
void UGAB_BaseDespawn_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GAB_BaseDespawn.GAB_BaseDespawn_C.K2_ActivateAbilityFromEvent");

	UGAB_BaseDespawn_C_K2_ActivateAbilityFromEvent_Params params;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GAB_BaseDespawn.GAB_BaseDespawn_C.ExecuteUbergraph_GAB_BaseDespawn
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGAB_BaseDespawn_C::ExecuteUbergraph_GAB_BaseDespawn(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GAB_BaseDespawn.GAB_BaseDespawn_C.ExecuteUbergraph_GAB_BaseDespawn");

	UGAB_BaseDespawn_C_ExecuteUbergraph_GAB_BaseDespawn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
