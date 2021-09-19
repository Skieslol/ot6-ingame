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

// Function HB_RoadSpline.HB_RoadSpline_C.AddPath
struct AHB_RoadSpline_C_AddPath_Params
{
	TEnumAsByte<RoadPathConnections_ERoadPathConnections> Connection;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              GravelValue;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              StreetValue;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HB_RoadSpline.HB_RoadSpline_C.SetPath
struct AHB_RoadSpline_C_SetPath_Params
{
	TEnumAsByte<RoadPathConnections_ERoadPathConnections> Connection;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Value;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HB_RoadSpline.HB_RoadSpline_C.UpgradePath
struct AHB_RoadSpline_C_UpgradePath_Params
{
	class AActor*                                      UpgradeBuilding;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HB_RoadSpline.HB_RoadSpline_C.ClearDependentActors
struct AHB_RoadSpline_C_ClearDependentActors_Params
{
};

// Function HB_RoadSpline.HB_RoadSpline_C.Set Dependent ActorsforSpline
struct AHB_RoadSpline_C_Set_Dependent_ActorsforSpline_Params
{
};

// Function HB_RoadSpline.HB_RoadSpline_C.Make Dynamic Material
struct AHB_RoadSpline_C_Make_Dynamic_Material_Params
{
	class UMeshComponent*                              Mesh;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HB_RoadSpline.HB_RoadSpline_C.UpdateDependentActors
struct AHB_RoadSpline_C_UpdateDependentActors_Params
{
};

// Function HB_RoadSpline.HB_RoadSpline_C.SetDependentActor
struct AHB_RoadSpline_C_SetDependentActor_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<RoadConnections_ERoadConnections>      RoadConnection;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HB_RoadSpline.HB_RoadSpline_C.UpdateSplineRoadConectionEnd
struct AHB_RoadSpline_C_UpdateSplineRoadConectionEnd_Params
{
};

// Function HB_RoadSpline.HB_RoadSpline_C.UpdateSpline Road Connection Start
struct AHB_RoadSpline_C_UpdateSpline_Road_Connection_Start_Params
{
};

// Function HB_RoadSpline.HB_RoadSpline_C.SetSplineVaribles
struct AHB_RoadSpline_C_SetSplineVaribles_Params
{
};

// Function HB_RoadSpline.HB_RoadSpline_C.UserConstructionScript
struct AHB_RoadSpline_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
