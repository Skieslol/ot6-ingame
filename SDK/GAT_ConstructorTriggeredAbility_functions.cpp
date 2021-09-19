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

// Function GAT_ConstructorTriggeredAbility.GAT_ConstructorTriggeredAbility_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      EventData                      (ConstParm, Parm, OutParm, ReferenceParm)
void UGAT_ConstructorTriggeredAbility_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GAT_ConstructorTriggeredAbility.GAT_ConstructorTriggeredAbility_C.K2_ActivateAbilityFromEvent");

	UGAT_ConstructorTriggeredAbility_C_K2_ActivateAbilityFromEvent_Params params;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GAT_ConstructorTriggeredAbility.GAT_ConstructorTriggeredAbility_C.ExecuteUbergraph_GAT_ConstructorTriggeredAbility
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGAT_ConstructorTriggeredAbility_C::ExecuteUbergraph_GAT_ConstructorTriggeredAbility(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GAT_ConstructorTriggeredAbility.GAT_ConstructorTriggeredAbility_C.ExecuteUbergraph_GAT_ConstructorTriggeredAbility");

	UGAT_ConstructorTriggeredAbility_C_ExecuteUbergraph_GAT_ConstructorTriggeredAbility_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
