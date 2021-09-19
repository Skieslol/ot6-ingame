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

// Function Trap_Floor_Launcher.Trap_Floor_Launcher_C.SetFloorPosition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewFloorPosition               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATrap_Floor_Launcher_C::SetFloorPosition(float NewFloorPosition)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Trap_Floor_Launcher.Trap_Floor_Launcher_C.SetFloorPosition");

	ATrap_Floor_Launcher_C_SetFloorPosition_Params params;
	params.NewFloorPosition = NewFloorPosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trap_Floor_Launcher.Trap_Floor_Launcher_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ATrap_Floor_Launcher_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Trap_Floor_Launcher.Trap_Floor_Launcher_C.UserConstructionScript");

	ATrap_Floor_Launcher_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trap_Floor_Launcher.Trap_Floor_Launcher_C.Fire__FinishedFunc
// (BlueprintEvent)
void ATrap_Floor_Launcher_C::Fire__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Trap_Floor_Launcher.Trap_Floor_Launcher_C.Fire__FinishedFunc");

	ATrap_Floor_Launcher_C_Fire__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trap_Floor_Launcher.Trap_Floor_Launcher_C.Fire__UpdateFunc
// (BlueprintEvent)
void ATrap_Floor_Launcher_C::Fire__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Trap_Floor_Launcher.Trap_Floor_Launcher_C.Fire__UpdateFunc");

	ATrap_Floor_Launcher_C_Fire__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trap_Floor_Launcher.Trap_Floor_Launcher_C.OnReloadEnd
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void ATrap_Floor_Launcher_C::OnReloadEnd()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Trap_Floor_Launcher.Trap_Floor_Launcher_C.OnReloadEnd");

	ATrap_Floor_Launcher_C_OnReloadEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trap_Floor_Launcher.Trap_Floor_Launcher_C.OnPlaced
// (Event, Public, BlueprintEvent)
void ATrap_Floor_Launcher_C::OnPlaced()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Trap_Floor_Launcher.Trap_Floor_Launcher_C.OnPlaced");

	ATrap_Floor_Launcher_C_OnPlaced_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trap_Floor_Launcher.Trap_Floor_Launcher_C.OnFinishedBuilding
// (Event, Public, BlueprintEvent)
void ATrap_Floor_Launcher_C::OnFinishedBuilding()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Trap_Floor_Launcher.Trap_Floor_Launcher_C.OnFinishedBuilding");

	ATrap_Floor_Launcher_C_OnFinishedBuilding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trap_Floor_Launcher.Trap_Floor_Launcher_C.OnOutOfDurability
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void ATrap_Floor_Launcher_C::OnOutOfDurability()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Trap_Floor_Launcher.Trap_Floor_Launcher_C.OnOutOfDurability");

	ATrap_Floor_Launcher_C_OnOutOfDurability_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trap_Floor_Launcher.Trap_Floor_Launcher_C.GameplayCue.Abilities.Activation.Traps.ActivateTrap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayCueParameters  Parameters                     (Parm)
void ATrap_Floor_Launcher_C::GameplayCue_Abilities_Activation_Traps_ActivateTrap(TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Trap_Floor_Launcher.Trap_Floor_Launcher_C.GameplayCue.Abilities.Activation.Traps.ActivateTrap");

	ATrap_Floor_Launcher_C_GameplayCue_Abilities_Activation_Traps_ActivateTrap_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trap_Floor_Launcher.Trap_Floor_Launcher_C.ExecuteUbergraph_Trap_Floor_Launcher
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATrap_Floor_Launcher_C::ExecuteUbergraph_Trap_Floor_Launcher(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Trap_Floor_Launcher.Trap_Floor_Launcher_C.ExecuteUbergraph_Trap_Floor_Launcher");

	ATrap_Floor_Launcher_C_ExecuteUbergraph_Trap_Floor_Launcher_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
