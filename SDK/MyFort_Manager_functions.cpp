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

// Function MyFort_Manager.MyFort_Manager_C.ShouldCreateBuilding
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMyTownBuildingDefinitionData* Building_Definition            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Allow_Create                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMyFort_Manager_C::ShouldCreateBuilding(class UMyTownBuildingDefinitionData* Building_Definition, bool* Allow_Create)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MyFort_Manager.MyFort_Manager_C.ShouldCreateBuilding");

	AMyFort_Manager_C_ShouldCreateBuilding_Params params;
	params.Building_Definition = Building_Definition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Allow_Create != nullptr)
		*Allow_Create = params.Allow_Create;

}


// Function MyFort_Manager.MyFort_Manager_C.MouseOverBuildingState
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Building_ID                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AMyTownBuildingActor*    Building                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class USphereComponent*        CollisionComponent             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UStaticMeshComponent*    Building_Mesh                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMyFort_Manager_C::MouseOverBuildingState(int Building_ID, class AMyTownBuildingActor** Building, class USphereComponent** CollisionComponent, class UStaticMeshComponent** Building_Mesh)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MyFort_Manager.MyFort_Manager_C.MouseOverBuildingState");

	AMyFort_Manager_C_MouseOverBuildingState_Params params;
	params.Building_ID = Building_ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Building != nullptr)
		*Building = params.Building;
	if (CollisionComponent != nullptr)
		*CollisionComponent = params.CollisionComponent;
	if (Building_Mesh != nullptr)
		*Building_Mesh = params.Building_Mesh;

}


// Function MyFort_Manager.MyFort_Manager_C.FindBuildingID
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 A                              (Parm, ZeroConstructor)
// class AMyTownBuildingActor*    Item                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool AMyFort_Manager_C::FindBuildingID(const struct FString& A, class AMyTownBuildingActor** Item)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MyFort_Manager.MyFort_Manager_C.FindBuildingID");

	AMyFort_Manager_C_FindBuildingID_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Item != nullptr)
		*Item = params.Item;


	return params.ReturnValue;
}


// Function MyFort_Manager.MyFort_Manager_C.SmallWorldCollision
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 InitialBuildingLocation        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 CameraLocation                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class USphereComponent*        Collision                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          DistanceOffset                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMyFort_Manager_C::SmallWorldCollision(const struct FVector& InitialBuildingLocation, const struct FVector& CameraLocation, class USphereComponent* Collision, float DistanceOffset)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MyFort_Manager.MyFort_Manager_C.SmallWorldCollision");

	AMyFort_Manager_C_SmallWorldCollision_Params params;
	params.InitialBuildingLocation = InitialBuildingLocation;
	params.CameraLocation = CameraLocation;
	params.Collision = Collision;
	params.DistanceOffset = DistanceOffset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MyFort_Manager.MyFort_Manager_C.UpdateRoads
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AMyFort_Manager_C::UpdateRoads()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MyFort_Manager.MyFort_Manager_C.UpdateRoads");

	AMyFort_Manager_C_UpdateRoads_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MyFort_Manager.MyFort_Manager_C.SaveBuildingPosition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AMyFort_Manager_C::SaveBuildingPosition()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MyFort_Manager.MyFort_Manager_C.SaveBuildingPosition");

	AMyFort_Manager_C_SaveBuildingPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MyFort_Manager.MyFort_Manager_C.Initialize Array
// (Public, BlueprintCallable, BlueprintEvent)
void AMyFort_Manager_C::Initialize_Array()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MyFort_Manager.MyFort_Manager_C.Initialize Array");

	AMyFort_Manager_C_Initialize_Array_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MyFort_Manager.MyFort_Manager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AMyFort_Manager_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MyFort_Manager.MyFort_Manager_C.UserConstructionScript");

	AMyFort_Manager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MyFort_Manager.MyFort_Manager_C.OnMyTownBuildingWorkersChanged_Event_0_Copy
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 BuildingTemplateId             (Parm, ZeroConstructor)
void AMyFort_Manager_C::OnMyTownBuildingWorkersChanged_Event_0_Copy(const struct FString& BuildingTemplateId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MyFort_Manager.MyFort_Manager_C.OnMyTownBuildingWorkersChanged_Event_0_Copy");

	AMyFort_Manager_C_OnMyTownBuildingWorkersChanged_Event_0_Copy_Params params;
	params.BuildingTemplateId = BuildingTemplateId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MyFort_Manager.MyFort_Manager_C.ChangeWorker
// (BlueprintCallable, BlueprintEvent)
void AMyFort_Manager_C::ChangeWorker()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MyFort_Manager.MyFort_Manager_C.ChangeWorker");

	AMyFort_Manager_C_ChangeWorker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MyFort_Manager.MyFort_Manager_C.HandleClientEvent_OnboardingInitializeVisuals
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 EventSource                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                 EventFocus                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortClientEvent        ClientEvent                    (ConstParm, Parm, OutParm, ReferenceParm)
void AMyFort_Manager_C::HandleClientEvent_OnboardingInitializeVisuals(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MyFort_Manager.MyFort_Manager_C.HandleClientEvent_OnboardingInitializeVisuals");

	AMyFort_Manager_C_HandleClientEvent_OnboardingInitializeVisuals_Params params;
	params.EventSource = EventSource;
	params.EventFocus = EventFocus;
	params.ClientEvent = ClientEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MyFort_Manager.MyFort_Manager_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void AMyFort_Manager_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MyFort_Manager.MyFort_Manager_C.ReceiveBeginPlay");

	AMyFort_Manager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MyFort_Manager.MyFort_Manager_C.OnMyTownInitialized_Event
// (BlueprintCallable, BlueprintEvent)
void AMyFort_Manager_C::OnMyTownInitialized_Event()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MyFort_Manager.MyFort_Manager_C.OnMyTownInitialized_Event");

	AMyFort_Manager_C_OnMyTownInitialized_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MyFort_Manager.MyFort_Manager_C.OnMyTownBannerColorChanged_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            NewColor                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMyFort_Manager_C::OnMyTownBannerColorChanged_Event(const struct FLinearColor& NewColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MyFort_Manager.MyFort_Manager_C.OnMyTownBannerColorChanged_Event");

	AMyFort_Manager_C_OnMyTownBannerColorChanged_Event_Params params;
	params.NewColor = NewColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MyFort_Manager.MyFort_Manager_C.SpawnBuildings
// (BlueprintCallable, BlueprintEvent)
void AMyFort_Manager_C::SpawnBuildings()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MyFort_Manager.MyFort_Manager_C.SpawnBuildings");

	AMyFort_Manager_C_SpawnBuildings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MyFort_Manager.MyFort_Manager_C.FindNumberofBuildings
// (BlueprintCallable, BlueprintEvent)
void AMyFort_Manager_C::FindNumberofBuildings()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MyFort_Manager.MyFort_Manager_C.FindNumberofBuildings");

	AMyFort_Manager_C_FindNumberofBuildings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MyFort_Manager.MyFort_Manager_C.PositioningActors
// (BlueprintCallable, BlueprintEvent)
void AMyFort_Manager_C::PositioningActors()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MyFort_Manager.MyFort_Manager_C.PositioningActors");

	AMyFort_Manager_C_PositioningActors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MyFort_Manager.MyFort_Manager_C.BannerColors
// (BlueprintCallable, BlueprintEvent)
void AMyFort_Manager_C::BannerColors()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MyFort_Manager.MyFort_Manager_C.BannerColors");

	AMyFort_Manager_C_BannerColors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MyFort_Manager.MyFort_Manager_C.ExecuteUbergraph_MyFort_Manager
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMyFort_Manager_C::ExecuteUbergraph_MyFort_Manager(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MyFort_Manager.MyFort_Manager_C.ExecuteUbergraph_MyFort_Manager");

	AMyFort_Manager_C_ExecuteUbergraph_MyFort_Manager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
