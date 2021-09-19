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

// Function GA_Floor_Health.GA_Floor_Health_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      EventData                      (ConstParm, Parm, OutParm, ReferenceParm)
void UGA_Floor_Health_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Floor_Health.GA_Floor_Health_C.K2_ActivateAbilityFromEvent");

	UGA_Floor_Health_C_K2_ActivateAbilityFromEvent_Params params;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Floor_Health.GA_Floor_Health_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
void UGA_Floor_Health_C::K2_ActivateAbility()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Floor_Health.GA_Floor_Health_C.K2_ActivateAbility");

	UGA_Floor_Health_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Floor_Health.GA_Floor_Health_C.ExecuteUbergraph_GA_Floor_Health
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_Floor_Health_C::ExecuteUbergraph_GA_Floor_Health(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Floor_Health.GA_Floor_Health_C.ExecuteUbergraph_GA_Floor_Health");

	UGA_Floor_Health_C_ExecuteUbergraph_GA_Floor_Health_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
