#pragma once

// Name: Fortnite, Version: OT-6_5


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function Trap_Floor_Spikes_Wood.Trap_Floor_Spikes_Wood_C.UserConstructionScript
struct ATrap_Floor_Spikes_Wood_C_UserConstructionScript_Params
{
};

// Function Trap_Floor_Spikes_Wood.Trap_Floor_Spikes_Wood_C.OnPlaced
struct ATrap_Floor_Spikes_Wood_C_OnPlaced_Params
{
};

// Function Trap_Floor_Spikes_Wood.Trap_Floor_Spikes_Wood_C.OnFinishedBuilding
struct ATrap_Floor_Spikes_Wood_C_OnFinishedBuilding_Params
{
};

// Function Trap_Floor_Spikes_Wood.Trap_Floor_Spikes_Wood_C.OnOutOfDurability
struct ATrap_Floor_Spikes_Wood_C_OnOutOfDurability_Params
{
};

// Function Trap_Floor_Spikes_Wood.Trap_Floor_Spikes_Wood_C.GameplayCue.Abilities.Activation.Traps.ActivateTrap
struct ATrap_Floor_Spikes_Wood_C_GameplayCue_Abilities_Activation_Traps_ActivateTrap_Params
{
	TEnumAsByte<GameplayAbilities_EGameplayCueEvent>   EventType;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayCueParameters                      Parameters;                                                // (Parm)
};

// Function Trap_Floor_Spikes_Wood.Trap_Floor_Spikes_Wood_C.ExecuteUbergraph_Trap_Floor_Spikes_Wood
struct ATrap_Floor_Spikes_Wood_C_ExecuteUbergraph_Trap_Floor_Spikes_Wood_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
