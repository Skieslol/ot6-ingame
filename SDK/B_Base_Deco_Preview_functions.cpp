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

// Function B_Base_Deco_Preview.B_Base_Deco_Preview_C.SetupMIDforMeshOverride
// (Public, BlueprintCallable, BlueprintEvent)
void AB_Base_Deco_Preview_C::SetupMIDforMeshOverride()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Base_Deco_Preview.B_Base_Deco_Preview_C.SetupMIDforMeshOverride");

	AB_Base_Deco_Preview_C_SetupMIDforMeshOverride_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Base_Deco_Preview.B_Base_Deco_Preview_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AB_Base_Deco_Preview_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Base_Deco_Preview.B_Base_Deco_Preview_C.UserConstructionScript");

	AB_Base_Deco_Preview_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Base_Deco_Preview.B_Base_Deco_Preview_C.OnUpdateVisuals
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           bSafeToPlace                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_Base_Deco_Preview_C::OnUpdateVisuals(float DeltaSeconds, bool bSafeToPlace)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Base_Deco_Preview.B_Base_Deco_Preview_C.OnUpdateVisuals");

	AB_Base_Deco_Preview_C_OnUpdateVisuals_Params params;
	params.DeltaSeconds = DeltaSeconds;
	params.bSafeToPlace = bSafeToPlace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Base_Deco_Preview.B_Base_Deco_Preview_C.OnInitializeDecoPreview
// (Event, Public, BlueprintEvent)
// Parameters:
// class ABuildingActor*          NewBuildingActor               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortDecoItemDefinition* NewDecoItemDefinition          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_Base_Deco_Preview_C::OnInitializeDecoPreview(class ABuildingActor* NewBuildingActor, class UFortDecoItemDefinition* NewDecoItemDefinition)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Base_Deco_Preview.B_Base_Deco_Preview_C.OnInitializeDecoPreview");

	AB_Base_Deco_Preview_C_OnInitializeDecoPreview_Params params;
	params.NewBuildingActor = NewBuildingActor;
	params.NewDecoItemDefinition = NewDecoItemDefinition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Base_Deco_Preview.B_Base_Deco_Preview_C.ExecuteUbergraph_B_Base_Deco_Preview
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_Base_Deco_Preview_C::ExecuteUbergraph_B_Base_Deco_Preview(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Base_Deco_Preview.B_Base_Deco_Preview_C.ExecuteUbergraph_B_Base_Deco_Preview");

	AB_Base_Deco_Preview_C_ExecuteUbergraph_B_Base_Deco_Preview_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
