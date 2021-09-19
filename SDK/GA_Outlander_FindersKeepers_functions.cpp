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

// Function GA_Outlander_FindersKeepers.GA_Outlander_FindersKeepers_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      EventData                      (ConstParm, Parm, OutParm, ReferenceParm)
void UGA_Outlander_FindersKeepers_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Outlander_FindersKeepers.GA_Outlander_FindersKeepers_C.K2_ActivateAbilityFromEvent");

	UGA_Outlander_FindersKeepers_C_K2_ActivateAbilityFromEvent_Params params;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Outlander_FindersKeepers.GA_Outlander_FindersKeepers_C.ExecuteUbergraph_GA_Outlander_FindersKeepers
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_Outlander_FindersKeepers_C::ExecuteUbergraph_GA_Outlander_FindersKeepers(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Outlander_FindersKeepers.GA_Outlander_FindersKeepers_C.ExecuteUbergraph_GA_Outlander_FindersKeepers");

	UGA_Outlander_FindersKeepers_C_ExecuteUbergraph_GA_Outlander_FindersKeepers_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
