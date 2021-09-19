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

// Function B_Placement_Teleporter.B_Placement_Teleporter_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AB_Placement_Teleporter_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Placement_Teleporter.B_Placement_Teleporter_C.UserConstructionScript");

	AB_Placement_Teleporter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Placement_Teleporter.B_Placement_Teleporter_C.OnBounceMotionUpdate
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          VectorScale                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_Placement_Teleporter_C::OnBounceMotionUpdate(float VectorScale)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Placement_Teleporter.B_Placement_Teleporter_C.OnBounceMotionUpdate");

	AB_Placement_Teleporter_C_OnBounceMotionUpdate_Params params;
	params.VectorScale = VectorScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Placement_Teleporter.B_Placement_Teleporter_C.OnInitializeDecoPreview
// (Event, Public, BlueprintEvent)
// Parameters:
// class ABuildingActor*          NewBuildingActor               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortDecoItemDefinition* NewDecoItemDefinition          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_Placement_Teleporter_C::OnInitializeDecoPreview(class ABuildingActor* NewBuildingActor, class UFortDecoItemDefinition* NewDecoItemDefinition)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Placement_Teleporter.B_Placement_Teleporter_C.OnInitializeDecoPreview");

	AB_Placement_Teleporter_C_OnInitializeDecoPreview_Params params;
	params.NewBuildingActor = NewBuildingActor;
	params.NewDecoItemDefinition = NewDecoItemDefinition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Placement_Teleporter.B_Placement_Teleporter_C.OnUpdateScale
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float                          Scale                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 InWorldSpacePivot              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
void AB_Placement_Teleporter_C::OnUpdateScale(float Scale, const struct FVector& InWorldSpacePivot)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Placement_Teleporter.B_Placement_Teleporter_C.OnUpdateScale");

	AB_Placement_Teleporter_C_OnUpdateScale_Params params;
	params.Scale = Scale;
	params.InWorldSpacePivot = InWorldSpacePivot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Placement_Teleporter.B_Placement_Teleporter_C.OnUpdateVisuals
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           bSafeToPlace                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_Placement_Teleporter_C::OnUpdateVisuals(float DeltaSeconds, bool bSafeToPlace)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Placement_Teleporter.B_Placement_Teleporter_C.OnUpdateVisuals");

	AB_Placement_Teleporter_C_OnUpdateVisuals_Params params;
	params.DeltaSeconds = DeltaSeconds;
	params.bSafeToPlace = bSafeToPlace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Placement_Teleporter.B_Placement_Teleporter_C.SetScalarParameterValueOnAllPreviewMIDs
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ParamName                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          ParamValue                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_Placement_Teleporter_C::SetScalarParameterValueOnAllPreviewMIDs(const struct FName& ParamName, float ParamValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Placement_Teleporter.B_Placement_Teleporter_C.SetScalarParameterValueOnAllPreviewMIDs");

	AB_Placement_Teleporter_C_SetScalarParameterValueOnAllPreviewMIDs_Params params;
	params.ParamName = ParamName;
	params.ParamValue = ParamValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Placement_Teleporter.B_Placement_Teleporter_C.SetVectorParameterValueOnAllPreviewMIDs
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ParamName                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor            ParamValue                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
void AB_Placement_Teleporter_C::SetVectorParameterValueOnAllPreviewMIDs(const struct FName& ParamName, const struct FLinearColor& ParamValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Placement_Teleporter.B_Placement_Teleporter_C.SetVectorParameterValueOnAllPreviewMIDs");

	AB_Placement_Teleporter_C_SetVectorParameterValueOnAllPreviewMIDs_Params params;
	params.ParamName = ParamName;
	params.ParamValue = ParamValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Placement_Teleporter.B_Placement_Teleporter_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void AB_Placement_Teleporter_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Placement_Teleporter.B_Placement_Teleporter_C.ReceiveBeginPlay");

	AB_Placement_Teleporter_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Placement_Teleporter.B_Placement_Teleporter_C.ExecuteUbergraph_B_Placement_Teleporter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_Placement_Teleporter_C::ExecuteUbergraph_B_Placement_Teleporter(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Placement_Teleporter.B_Placement_Teleporter_C.ExecuteUbergraph_B_Placement_Teleporter");

	AB_Placement_Teleporter_C_ExecuteUbergraph_B_Placement_Teleporter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
