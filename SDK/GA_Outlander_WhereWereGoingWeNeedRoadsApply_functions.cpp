﻿// Name: Fortnite, Version: OT-6_5

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

// Function GA_Outlander_WhereWereGoingWeNeedRoadsApply.GA_Outlander_WhereWereGoingWeNeedRoadsApply_C.SetVariables
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEffectSpecHandle GameplaySpec                   (Parm, OutParm)
void UGA_Outlander_WhereWereGoingWeNeedRoadsApply_C::SetVariables(struct FGameplayEffectSpecHandle* GameplaySpec)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Outlander_WhereWereGoingWeNeedRoadsApply.GA_Outlander_WhereWereGoingWeNeedRoadsApply_C.SetVariables");

	UGA_Outlander_WhereWereGoingWeNeedRoadsApply_C_SetVariables_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (GameplaySpec != nullptr)
		*GameplaySpec = params.GameplaySpec;

}


// Function GA_Outlander_WhereWereGoingWeNeedRoadsApply.GA_Outlander_WhereWereGoingWeNeedRoadsApply_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      EventData                      (ConstParm, Parm, OutParm, ReferenceParm)
void UGA_Outlander_WhereWereGoingWeNeedRoadsApply_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Outlander_WhereWereGoingWeNeedRoadsApply.GA_Outlander_WhereWereGoingWeNeedRoadsApply_C.K2_ActivateAbilityFromEvent");

	UGA_Outlander_WhereWereGoingWeNeedRoadsApply_C_K2_ActivateAbilityFromEvent_Params params;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Outlander_WhereWereGoingWeNeedRoadsApply.GA_Outlander_WhereWereGoingWeNeedRoadsApply_C.ExecuteUbergraph_GA_Outlander_WhereWereGoingWeNeedRoadsApply
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_Outlander_WhereWereGoingWeNeedRoadsApply_C::ExecuteUbergraph_GA_Outlander_WhereWereGoingWeNeedRoadsApply(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Outlander_WhereWereGoingWeNeedRoadsApply.GA_Outlander_WhereWereGoingWeNeedRoadsApply_C.ExecuteUbergraph_GA_Outlander_WhereWereGoingWeNeedRoadsApply");

	UGA_Outlander_WhereWereGoingWeNeedRoadsApply_C_ExecuteUbergraph_GA_Outlander_WhereWereGoingWeNeedRoadsApply_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif