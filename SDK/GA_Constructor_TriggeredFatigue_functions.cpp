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

// Function GA_Constructor_TriggeredFatigue.GA_Constructor_TriggeredFatigue_C.K2_ShouldAbilityRespondToEvent
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAbilityActorInfo ActorInfo                      (Parm, ContainsInstancedReference)
// struct FGameplayEventData      Payload                        (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UGA_Constructor_TriggeredFatigue_C::K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& Payload)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Constructor_TriggeredFatigue.GA_Constructor_TriggeredFatigue_C.K2_ShouldAbilityRespondToEvent");

	UGA_Constructor_TriggeredFatigue_C_K2_ShouldAbilityRespondToEvent_Params params;
	params.ActorInfo = ActorInfo;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GA_Constructor_TriggeredFatigue.GA_Constructor_TriggeredFatigue_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      EventData                      (ConstParm, Parm, OutParm, ReferenceParm)
void UGA_Constructor_TriggeredFatigue_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Constructor_TriggeredFatigue.GA_Constructor_TriggeredFatigue_C.K2_ActivateAbilityFromEvent");

	UGA_Constructor_TriggeredFatigue_C_K2_ActivateAbilityFromEvent_Params params;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Constructor_TriggeredFatigue.GA_Constructor_TriggeredFatigue_C.ExecuteUbergraph_GA_Constructor_TriggeredFatigue
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_Constructor_TriggeredFatigue_C::ExecuteUbergraph_GA_Constructor_TriggeredFatigue(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Constructor_TriggeredFatigue.GA_Constructor_TriggeredFatigue_C.ExecuteUbergraph_GA_Constructor_TriggeredFatigue");

	UGA_Constructor_TriggeredFatigue_C_ExecuteUbergraph_GA_Constructor_TriggeredFatigue_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
