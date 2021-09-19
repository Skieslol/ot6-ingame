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

// Function HB_RoadManager.HB_RoadManager_C.FindAllPaths
struct AHB_RoadManager_C_FindAllPaths_Params
{
	int                                                ID;                                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<int>                                        IndexArray;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function HB_RoadManager.HB_RoadManager_C.ResetAllPaths
struct AHB_RoadManager_C_ResetAllPaths_Params
{
};

// Function HB_RoadManager.HB_RoadManager_C.Set Path
struct AHB_RoadManager_C_Set_Path_Params
{
	float                                              ProgressValue;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                INDEX;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HB_RoadManager.HB_RoadManager_C.DebugAllRoads
struct AHB_RoadManager_C_DebugAllRoads_Params
{
};

// Function HB_RoadManager.HB_RoadManager_C.UpgradePath
struct AHB_RoadManager_C_UpgradePath_Params
{
	int                                                INDEX;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HB_RoadManager.HB_RoadManager_C.UserConstructionScript
struct AHB_RoadManager_C_UserConstructionScript_Params
{
};

// Function HB_RoadManager.HB_RoadManager_C.UpgradeTimeline__FinishedFunc
struct AHB_RoadManager_C_UpgradeTimeline__FinishedFunc_Params
{
};

// Function HB_RoadManager.HB_RoadManager_C.UpgradeTimeline__UpdateFunc
struct AHB_RoadManager_C_UpgradeTimeline__UpdateFunc_Params
{
};

// Function HB_RoadManager.HB_RoadManager_C.StartPathUpgradeAnimation
struct AHB_RoadManager_C_StartPathUpgradeAnimation_Params
{
	int                                                ID;                                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              ProgressValue;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HB_RoadManager.HB_RoadManager_C.SetPathProgression
struct AHB_RoadManager_C_SetPathProgression_Params
{
	int                                                ID;                                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              ProgressionValue;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HB_RoadManager.HB_RoadManager_C.ExecuteUbergraph_HB_RoadManager
struct AHB_RoadManager_C_ExecuteUbergraph_HB_RoadManager_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
