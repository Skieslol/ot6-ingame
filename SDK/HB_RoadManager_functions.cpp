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

// Function HB_RoadManager.HB_RoadManager_C.FindAllPaths
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<int>                    IndexArray                     (Parm, OutParm, ZeroConstructor)
void AHB_RoadManager_C::FindAllPaths(int ID, TArray<int>* IndexArray)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HB_RoadManager.HB_RoadManager_C.FindAllPaths");

	AHB_RoadManager_C_FindAllPaths_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IndexArray != nullptr)
		*IndexArray = params.IndexArray;

}


// Function HB_RoadManager.HB_RoadManager_C.ResetAllPaths
// (Public, BlueprintCallable, BlueprintEvent)
void AHB_RoadManager_C::ResetAllPaths()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HB_RoadManager.HB_RoadManager_C.ResetAllPaths");

	AHB_RoadManager_C_ResetAllPaths_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HB_RoadManager.HB_RoadManager_C.Set Path
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ProgressValue                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            INDEX                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHB_RoadManager_C::Set_Path(float ProgressValue, int INDEX)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HB_RoadManager.HB_RoadManager_C.Set Path");

	AHB_RoadManager_C_Set_Path_Params params;
	params.ProgressValue = ProgressValue;
	params.INDEX = INDEX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HB_RoadManager.HB_RoadManager_C.DebugAllRoads
// (Public, BlueprintCallable, BlueprintEvent)
void AHB_RoadManager_C::DebugAllRoads()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HB_RoadManager.HB_RoadManager_C.DebugAllRoads");

	AHB_RoadManager_C_DebugAllRoads_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HB_RoadManager.HB_RoadManager_C.UpgradePath
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            INDEX                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHB_RoadManager_C::UpgradePath(int INDEX)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HB_RoadManager.HB_RoadManager_C.UpgradePath");

	AHB_RoadManager_C_UpgradePath_Params params;
	params.INDEX = INDEX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HB_RoadManager.HB_RoadManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AHB_RoadManager_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HB_RoadManager.HB_RoadManager_C.UserConstructionScript");

	AHB_RoadManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HB_RoadManager.HB_RoadManager_C.UpgradeTimeline__FinishedFunc
// (BlueprintEvent)
void AHB_RoadManager_C::UpgradeTimeline__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HB_RoadManager.HB_RoadManager_C.UpgradeTimeline__FinishedFunc");

	AHB_RoadManager_C_UpgradeTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HB_RoadManager.HB_RoadManager_C.UpgradeTimeline__UpdateFunc
// (BlueprintEvent)
void AHB_RoadManager_C::UpgradeTimeline__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HB_RoadManager.HB_RoadManager_C.UpgradeTimeline__UpdateFunc");

	AHB_RoadManager_C_UpgradeTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HB_RoadManager.HB_RoadManager_C.StartPathUpgradeAnimation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          ProgressValue                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHB_RoadManager_C::StartPathUpgradeAnimation(int ID, float ProgressValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HB_RoadManager.HB_RoadManager_C.StartPathUpgradeAnimation");

	AHB_RoadManager_C_StartPathUpgradeAnimation_Params params;
	params.ID = ID;
	params.ProgressValue = ProgressValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HB_RoadManager.HB_RoadManager_C.SetPathProgression
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          ProgressionValue               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHB_RoadManager_C::SetPathProgression(int ID, float ProgressionValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HB_RoadManager.HB_RoadManager_C.SetPathProgression");

	AHB_RoadManager_C_SetPathProgression_Params params;
	params.ID = ID;
	params.ProgressionValue = ProgressionValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HB_RoadManager.HB_RoadManager_C.ExecuteUbergraph_HB_RoadManager
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHB_RoadManager_C::ExecuteUbergraph_HB_RoadManager(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HB_RoadManager.HB_RoadManager_C.ExecuteUbergraph_HB_RoadManager");

	AHB_RoadManager_C_ExecuteUbergraph_HB_RoadManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
