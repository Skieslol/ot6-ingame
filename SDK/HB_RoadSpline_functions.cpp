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

// Function HB_RoadSpline.HB_RoadSpline_C.AddPath
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<RoadPathConnections_ERoadPathConnections> Connection                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          GravelValue                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          StreetValue                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHB_RoadSpline_C::AddPath(TEnumAsByte<RoadPathConnections_ERoadPathConnections> Connection, float GravelValue, float StreetValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HB_RoadSpline.HB_RoadSpline_C.AddPath");

	AHB_RoadSpline_C_AddPath_Params params;
	params.Connection = Connection;
	params.GravelValue = GravelValue;
	params.StreetValue = StreetValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HB_RoadSpline.HB_RoadSpline_C.SetPath
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<RoadPathConnections_ERoadPathConnections> Connection                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHB_RoadSpline_C::SetPath(TEnumAsByte<RoadPathConnections_ERoadPathConnections> Connection, float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HB_RoadSpline.HB_RoadSpline_C.SetPath");

	AHB_RoadSpline_C_SetPath_Params params;
	params.Connection = Connection;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HB_RoadSpline.HB_RoadSpline_C.UpgradePath
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  UpgradeBuilding                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHB_RoadSpline_C::UpgradePath(class AActor* UpgradeBuilding)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HB_RoadSpline.HB_RoadSpline_C.UpgradePath");

	AHB_RoadSpline_C_UpgradePath_Params params;
	params.UpgradeBuilding = UpgradeBuilding;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HB_RoadSpline.HB_RoadSpline_C.ClearDependentActors
// (Public, BlueprintCallable, BlueprintEvent)
void AHB_RoadSpline_C::ClearDependentActors()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HB_RoadSpline.HB_RoadSpline_C.ClearDependentActors");

	AHB_RoadSpline_C_ClearDependentActors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HB_RoadSpline.HB_RoadSpline_C.Set Dependent ActorsforSpline
// (Public, BlueprintCallable, BlueprintEvent)
void AHB_RoadSpline_C::Set_Dependent_ActorsforSpline()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HB_RoadSpline.HB_RoadSpline_C.Set Dependent ActorsforSpline");

	AHB_RoadSpline_C_Set_Dependent_ActorsforSpline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HB_RoadSpline.HB_RoadSpline_C.Make Dynamic Material
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMeshComponent*          Mesh                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHB_RoadSpline_C::Make_Dynamic_Material(class UMeshComponent* Mesh)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HB_RoadSpline.HB_RoadSpline_C.Make Dynamic Material");

	AHB_RoadSpline_C_Make_Dynamic_Material_Params params;
	params.Mesh = Mesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HB_RoadSpline.HB_RoadSpline_C.UpdateDependentActors
// (Public, BlueprintCallable, BlueprintEvent)
void AHB_RoadSpline_C::UpdateDependentActors()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HB_RoadSpline.HB_RoadSpline_C.UpdateDependentActors");

	AHB_RoadSpline_C_UpdateDependentActors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HB_RoadSpline.HB_RoadSpline_C.SetDependentActor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TEnumAsByte<RoadConnections_ERoadConnections> RoadConnection                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHB_RoadSpline_C::SetDependentActor(class AActor* Actor, TEnumAsByte<RoadConnections_ERoadConnections> RoadConnection)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HB_RoadSpline.HB_RoadSpline_C.SetDependentActor");

	AHB_RoadSpline_C_SetDependentActor_Params params;
	params.Actor = Actor;
	params.RoadConnection = RoadConnection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HB_RoadSpline.HB_RoadSpline_C.UpdateSplineRoadConectionEnd
// (Public, BlueprintCallable, BlueprintEvent)
void AHB_RoadSpline_C::UpdateSplineRoadConectionEnd()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HB_RoadSpline.HB_RoadSpline_C.UpdateSplineRoadConectionEnd");

	AHB_RoadSpline_C_UpdateSplineRoadConectionEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HB_RoadSpline.HB_RoadSpline_C.UpdateSpline Road Connection Start
// (Public, BlueprintCallable, BlueprintEvent)
void AHB_RoadSpline_C::UpdateSpline_Road_Connection_Start()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HB_RoadSpline.HB_RoadSpline_C.UpdateSpline Road Connection Start");

	AHB_RoadSpline_C_UpdateSpline_Road_Connection_Start_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HB_RoadSpline.HB_RoadSpline_C.SetSplineVaribles
// (Public, BlueprintCallable, BlueprintEvent)
void AHB_RoadSpline_C::SetSplineVaribles()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HB_RoadSpline.HB_RoadSpline_C.SetSplineVaribles");

	AHB_RoadSpline_C_SetSplineVaribles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HB_RoadSpline.HB_RoadSpline_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AHB_RoadSpline_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HB_RoadSpline.HB_RoadSpline_C.UserConstructionScript");

	AHB_RoadSpline_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
