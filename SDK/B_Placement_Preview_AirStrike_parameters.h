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

// Function B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C.Kill Emitters and Start Times
struct AB_Placement_Preview_AirStrike_C_Kill_Emitters_and_Start_Times_Params
{
};

// Function B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C.UserConstructionScript
struct AB_Placement_Preview_AirStrike_C_UserConstructionScript_Params
{
};

// Function B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C.Spawn Arrow__FinishedFunc
struct AB_Placement_Preview_AirStrike_C_Spawn_Arrow__FinishedFunc_Params
{
};

// Function B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C.Spawn Arrow__UpdateFunc
struct AB_Placement_Preview_AirStrike_C_Spawn_Arrow__UpdateFunc_Params
{
};

// Function B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C.OnBounceMotionUpdate
struct AB_Placement_Preview_AirStrike_C_OnBounceMotionUpdate_Params
{
	float                                              VectorScale;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C.OnInitializeDecoPreview
struct AB_Placement_Preview_AirStrike_C_OnInitializeDecoPreview_Params
{
	class ABuildingActor*                              NewBuildingActor;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UFortDecoItemDefinition*                     NewDecoItemDefinition;                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C.OnUpdateScale
struct AB_Placement_Preview_AirStrike_C_OnUpdateScale_Params
{
	float                                              Scale;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     InWorldSpacePivot;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
};

// Function B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C.OnUpdateVisuals
struct AB_Placement_Preview_AirStrike_C_OnUpdateVisuals_Params
{
	float                                              DeltaSeconds;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bSafeToPlace;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C.SetScalarParameterValueOnAllPreviewMIDs
struct AB_Placement_Preview_AirStrike_C_SetScalarParameterValueOnAllPreviewMIDs_Params
{
	struct FName                                       ParamName;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              ParamValue;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C.SetVectorParameterValueOnAllPreviewMIDs
struct AB_Placement_Preview_AirStrike_C_SetVectorParameterValueOnAllPreviewMIDs_Params
{
	struct FName                                       ParamName;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                                ParamValue;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
};

// Function B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C.SwitchType
struct AB_Placement_Preview_AirStrike_C_SwitchType_Params
{
	TArray<struct FVector>                             Positions_With_Duplicates;                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FVector>                             Cleaned_Positions;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int>                                        Duplicated_Entries;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C.ReceiveBeginPlay
struct AB_Placement_Preview_AirStrike_C_ReceiveBeginPlay_Params
{
};

// Function B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C.RestartLineReticule
struct AB_Placement_Preview_AirStrike_C_RestartLineReticule_Params
{
};

// Function B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C.ExecuteUbergraph_B_Placement_Preview_AirStrike
struct AB_Placement_Preview_AirStrike_C_ExecuteUbergraph_B_Placement_Preview_AirStrike_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
