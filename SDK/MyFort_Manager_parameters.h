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

// Function MyFort_Manager.MyFort_Manager_C.ShouldCreateBuilding
struct AMyFort_Manager_C_ShouldCreateBuilding_Params
{
	class UMyTownBuildingDefinitionData*               Building_Definition;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Allow_Create;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function MyFort_Manager.MyFort_Manager_C.MouseOverBuildingState
struct AMyFort_Manager_C_MouseOverBuildingState_Params
{
	int                                                Building_ID;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AMyTownBuildingActor*                        Building;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class USphereComponent*                            CollisionComponent;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UStaticMeshComponent*                        Building_Mesh;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function MyFort_Manager.MyFort_Manager_C.FindBuildingID
struct AMyFort_Manager_C_FindBuildingID_Params
{
	struct FString                                     A;                                                         // (Parm, ZeroConstructor)
	class AMyTownBuildingActor*                        Item;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function MyFort_Manager.MyFort_Manager_C.SmallWorldCollision
struct AMyFort_Manager_C_SmallWorldCollision_Params
{
	struct FVector                                     InitialBuildingLocation;                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     CameraLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class USphereComponent*                            Collision;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              DistanceOffset;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function MyFort_Manager.MyFort_Manager_C.UpdateRoads
struct AMyFort_Manager_C_UpdateRoads_Params
{
};

// Function MyFort_Manager.MyFort_Manager_C.SaveBuildingPosition
struct AMyFort_Manager_C_SaveBuildingPosition_Params
{
};

// Function MyFort_Manager.MyFort_Manager_C.Initialize Array
struct AMyFort_Manager_C_Initialize_Array_Params
{
};

// Function MyFort_Manager.MyFort_Manager_C.UserConstructionScript
struct AMyFort_Manager_C_UserConstructionScript_Params
{
};

// Function MyFort_Manager.MyFort_Manager_C.OnMyTownBuildingWorkersChanged_Event_0_Copy
struct AMyFort_Manager_C_OnMyTownBuildingWorkersChanged_Event_0_Copy_Params
{
	struct FString                                     BuildingTemplateId;                                        // (Parm, ZeroConstructor)
};

// Function MyFort_Manager.MyFort_Manager_C.ChangeWorker
struct AMyFort_Manager_C_ChangeWorker_Params
{
};

// Function MyFort_Manager.MyFort_Manager_C.HandleClientEvent_OnboardingInitializeVisuals
struct AMyFort_Manager_C_HandleClientEvent_OnboardingInitializeVisuals_Params
{
	class UObject*                                     EventSource;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                     EventFocus;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FFortClientEvent                            ClientEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function MyFort_Manager.MyFort_Manager_C.ReceiveBeginPlay
struct AMyFort_Manager_C_ReceiveBeginPlay_Params
{
};

// Function MyFort_Manager.MyFort_Manager_C.OnMyTownInitialized_Event
struct AMyFort_Manager_C_OnMyTownInitialized_Event_Params
{
};

// Function MyFort_Manager.MyFort_Manager_C.OnMyTownBannerColorChanged_Event
struct AMyFort_Manager_C_OnMyTownBannerColorChanged_Event_Params
{
	struct FLinearColor                                NewColor;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function MyFort_Manager.MyFort_Manager_C.SpawnBuildings
struct AMyFort_Manager_C_SpawnBuildings_Params
{
};

// Function MyFort_Manager.MyFort_Manager_C.FindNumberofBuildings
struct AMyFort_Manager_C_FindNumberofBuildings_Params
{
};

// Function MyFort_Manager.MyFort_Manager_C.PositioningActors
struct AMyFort_Manager_C_PositioningActors_Params
{
};

// Function MyFort_Manager.MyFort_Manager_C.BannerColors
struct AMyFort_Manager_C_BannerColors_Params
{
};

// Function MyFort_Manager.MyFort_Manager_C.ExecuteUbergraph_MyFort_Manager
struct AMyFort_Manager_C_ExecuteUbergraph_MyFort_Manager_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
