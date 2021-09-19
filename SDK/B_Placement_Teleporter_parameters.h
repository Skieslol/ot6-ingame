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

// Function B_Placement_Teleporter.B_Placement_Teleporter_C.UserConstructionScript
struct AB_Placement_Teleporter_C_UserConstructionScript_Params
{
};

// Function B_Placement_Teleporter.B_Placement_Teleporter_C.OnBounceMotionUpdate
struct AB_Placement_Teleporter_C_OnBounceMotionUpdate_Params
{
	float                                              VectorScale;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function B_Placement_Teleporter.B_Placement_Teleporter_C.OnInitializeDecoPreview
struct AB_Placement_Teleporter_C_OnInitializeDecoPreview_Params
{
	class ABuildingActor*                              NewBuildingActor;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UFortDecoItemDefinition*                     NewDecoItemDefinition;                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function B_Placement_Teleporter.B_Placement_Teleporter_C.OnUpdateScale
struct AB_Placement_Teleporter_C_OnUpdateScale_Params
{
	float                                              Scale;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     InWorldSpacePivot;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
};

// Function B_Placement_Teleporter.B_Placement_Teleporter_C.OnUpdateVisuals
struct AB_Placement_Teleporter_C_OnUpdateVisuals_Params
{
	float                                              DeltaSeconds;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bSafeToPlace;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function B_Placement_Teleporter.B_Placement_Teleporter_C.SetScalarParameterValueOnAllPreviewMIDs
struct AB_Placement_Teleporter_C_SetScalarParameterValueOnAllPreviewMIDs_Params
{
	struct FName                                       ParamName;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              ParamValue;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function B_Placement_Teleporter.B_Placement_Teleporter_C.SetVectorParameterValueOnAllPreviewMIDs
struct AB_Placement_Teleporter_C_SetVectorParameterValueOnAllPreviewMIDs_Params
{
	struct FName                                       ParamName;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                                ParamValue;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
};

// Function B_Placement_Teleporter.B_Placement_Teleporter_C.ReceiveBeginPlay
struct AB_Placement_Teleporter_C_ReceiveBeginPlay_Params
{
};

// Function B_Placement_Teleporter.B_Placement_Teleporter_C.ExecuteUbergraph_B_Placement_Teleporter
struct AB_Placement_Teleporter_C_ExecuteUbergraph_B_Placement_Teleporter_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
