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

// Function Trap_Floor_Launcher.Trap_Floor_Launcher_C.SetFloorPosition
struct ATrap_Floor_Launcher_C_SetFloorPosition_Params
{
	float                                              NewFloorPosition;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Trap_Floor_Launcher.Trap_Floor_Launcher_C.UserConstructionScript
struct ATrap_Floor_Launcher_C_UserConstructionScript_Params
{
};

// Function Trap_Floor_Launcher.Trap_Floor_Launcher_C.Fire__FinishedFunc
struct ATrap_Floor_Launcher_C_Fire__FinishedFunc_Params
{
};

// Function Trap_Floor_Launcher.Trap_Floor_Launcher_C.Fire__UpdateFunc
struct ATrap_Floor_Launcher_C_Fire__UpdateFunc_Params
{
};

// Function Trap_Floor_Launcher.Trap_Floor_Launcher_C.OnReloadEnd
struct ATrap_Floor_Launcher_C_OnReloadEnd_Params
{
};

// Function Trap_Floor_Launcher.Trap_Floor_Launcher_C.OnPlaced
struct ATrap_Floor_Launcher_C_OnPlaced_Params
{
};

// Function Trap_Floor_Launcher.Trap_Floor_Launcher_C.OnFinishedBuilding
struct ATrap_Floor_Launcher_C_OnFinishedBuilding_Params
{
};

// Function Trap_Floor_Launcher.Trap_Floor_Launcher_C.OnOutOfDurability
struct ATrap_Floor_Launcher_C_OnOutOfDurability_Params
{
};

// Function Trap_Floor_Launcher.Trap_Floor_Launcher_C.GameplayCue.Abilities.Activation.Traps.ActivateTrap
struct ATrap_Floor_Launcher_C_GameplayCue_Abilities_Activation_Traps_ActivateTrap_Params
{
	TEnumAsByte<GameplayAbilities_EGameplayCueEvent>   EventType;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayCueParameters                      Parameters;                                                // (Parm)
};

// Function Trap_Floor_Launcher.Trap_Floor_Launcher_C.ExecuteUbergraph_Trap_Floor_Launcher
struct ATrap_Floor_Launcher_C_ExecuteUbergraph_Trap_Floor_Launcher_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
