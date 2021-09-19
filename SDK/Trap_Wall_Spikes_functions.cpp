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

// Function Trap_Wall_Spikes.Trap_Wall_Spikes_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ATrap_Wall_Spikes_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Trap_Wall_Spikes.Trap_Wall_Spikes_C.UserConstructionScript");

	ATrap_Wall_Spikes_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trap_Wall_Spikes.Trap_Wall_Spikes_C.OnPlaced
// (Event, Public, BlueprintEvent)
void ATrap_Wall_Spikes_C::OnPlaced()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Trap_Wall_Spikes.Trap_Wall_Spikes_C.OnPlaced");

	ATrap_Wall_Spikes_C_OnPlaced_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trap_Wall_Spikes.Trap_Wall_Spikes_C.OnFinishedBuilding
// (Event, Public, BlueprintEvent)
void ATrap_Wall_Spikes_C::OnFinishedBuilding()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Trap_Wall_Spikes.Trap_Wall_Spikes_C.OnFinishedBuilding");

	ATrap_Wall_Spikes_C_OnFinishedBuilding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trap_Wall_Spikes.Trap_Wall_Spikes_C.OnReloadEnd
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void ATrap_Wall_Spikes_C::OnReloadEnd()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Trap_Wall_Spikes.Trap_Wall_Spikes_C.OnReloadEnd");

	ATrap_Wall_Spikes_C_OnReloadEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trap_Wall_Spikes.Trap_Wall_Spikes_C.GameplayCue.Abilities.Activation.Traps.ActivateTrap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayCueParameters  Parameters                     (Parm)
void ATrap_Wall_Spikes_C::GameplayCue_Abilities_Activation_Traps_ActivateTrap(TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Trap_Wall_Spikes.Trap_Wall_Spikes_C.GameplayCue.Abilities.Activation.Traps.ActivateTrap");

	ATrap_Wall_Spikes_C_GameplayCue_Abilities_Activation_Traps_ActivateTrap_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trap_Wall_Spikes.Trap_Wall_Spikes_C.OnOutOfDurability
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void ATrap_Wall_Spikes_C::OnOutOfDurability()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Trap_Wall_Spikes.Trap_Wall_Spikes_C.OnOutOfDurability");

	ATrap_Wall_Spikes_C_OnOutOfDurability_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trap_Wall_Spikes.Trap_Wall_Spikes_C.ExecuteUbergraph_Trap_Wall_Spikes
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATrap_Wall_Spikes_C::ExecuteUbergraph_Trap_Wall_Spikes(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Trap_Wall_Spikes.Trap_Wall_Spikes_C.ExecuteUbergraph_Trap_Wall_Spikes");

	ATrap_Wall_Spikes_C_ExecuteUbergraph_Trap_Wall_Spikes_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
