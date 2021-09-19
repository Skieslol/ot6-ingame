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

// Function B_Base_Deco_Preview.B_Base_Deco_Preview_C.SetupMIDforMeshOverride
struct AB_Base_Deco_Preview_C_SetupMIDforMeshOverride_Params
{
};

// Function B_Base_Deco_Preview.B_Base_Deco_Preview_C.UserConstructionScript
struct AB_Base_Deco_Preview_C_UserConstructionScript_Params
{
};

// Function B_Base_Deco_Preview.B_Base_Deco_Preview_C.OnUpdateVisuals
struct AB_Base_Deco_Preview_C_OnUpdateVisuals_Params
{
	float                                              DeltaSeconds;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bSafeToPlace;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function B_Base_Deco_Preview.B_Base_Deco_Preview_C.OnInitializeDecoPreview
struct AB_Base_Deco_Preview_C_OnInitializeDecoPreview_Params
{
	class ABuildingActor*                              NewBuildingActor;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UFortDecoItemDefinition*                     NewDecoItemDefinition;                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function B_Base_Deco_Preview.B_Base_Deco_Preview_C.ExecuteUbergraph_B_Base_Deco_Preview
struct AB_Base_Deco_Preview_C_ExecuteUbergraph_B_Base_Deco_Preview_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
