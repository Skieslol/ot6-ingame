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

// Function GAT_OutlanderTriggeredAbility.GAT_OutlanderTriggeredAbility_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      EventData                      (ConstParm, Parm, OutParm, ReferenceParm)
void UGAT_OutlanderTriggeredAbility_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GAT_OutlanderTriggeredAbility.GAT_OutlanderTriggeredAbility_C.K2_ActivateAbilityFromEvent");

	UGAT_OutlanderTriggeredAbility_C_K2_ActivateAbilityFromEvent_Params params;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GAT_OutlanderTriggeredAbility.GAT_OutlanderTriggeredAbility_C.ExecuteUbergraph_GAT_OutlanderTriggeredAbility
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGAT_OutlanderTriggeredAbility_C::ExecuteUbergraph_GAT_OutlanderTriggeredAbility(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GAT_OutlanderTriggeredAbility.GAT_OutlanderTriggeredAbility_C.ExecuteUbergraph_GAT_OutlanderTriggeredAbility");

	UGAT_OutlanderTriggeredAbility_C_ExecuteUbergraph_GAT_OutlanderTriggeredAbility_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
