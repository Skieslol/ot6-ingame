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

// Function HB_Keep_1.HB_Keep_0_C.GetCustomDisplayActors
struct AHB_Keep_0_C_GetCustomDisplayActors_Params
{
	TArray<class ABuildingActor*>                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function HB_Keep_1.HB_Keep_0_C.Set Unbuilt Components Hidden
struct AHB_Keep_0_C_Set_Unbuilt_Components_Hidden_Params
{
	bool                                               Hidden;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HB_Keep_1.HB_Keep_0_C.Set Custom Display Hidden 
struct AHB_Keep_0_C_Set_Custom_Display_Hidden__Params
{
	bool                                               Hidden;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HB_Keep_1.HB_Keep_0_C.IsKeepMiniatureBuilding
struct AHB_Keep_0_C_IsKeepMiniatureBuilding_Params
{
	class ABuildingSMActor*                            Building;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Is_Miniature;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HB_Keep_1.HB_Keep_0_C.UserConstructionScript
struct AHB_Keep_0_C_UserConstructionScript_Params
{
};

// Function HB_Keep_1.HB_Keep_0_C.OnMyTownBuildingCustomDisplayChanged
struct AHB_Keep_0_C_OnMyTownBuildingCustomDisplayChanged_Params
{
	TEnumAsByte<FortniteGame_EMyTownBuildingActorDisplayState> NewDisplayState;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HB_Keep_1.HB_Keep_0_C.ExecuteUbergraph_HB_Keep_1
struct AHB_Keep_0_C_ExecuteUbergraph_HB_Keep_1_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
