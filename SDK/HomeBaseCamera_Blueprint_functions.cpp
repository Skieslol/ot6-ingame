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

// Function HomeBaseCamera_Blueprint.HomeBaseCamera_Blueprint_C.IsBusy
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsBusy                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHomeBaseCamera_Blueprint_C::IsBusy(bool* IsBusy)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HomeBaseCamera_Blueprint.HomeBaseCamera_Blueprint_C.IsBusy");

	AHomeBaseCamera_Blueprint_C_IsBusy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsBusy != nullptr)
		*IsBusy = params.IsBusy;

}


// Function HomeBaseCamera_Blueprint.HomeBaseCamera_Blueprint_C.StorePrevious
// (Public, BlueprintCallable, BlueprintEvent)
void AHomeBaseCamera_Blueprint_C::StorePrevious()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HomeBaseCamera_Blueprint.HomeBaseCamera_Blueprint_C.StorePrevious");

	AHomeBaseCamera_Blueprint_C_StorePrevious_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HomeBaseCamera_Blueprint.HomeBaseCamera_Blueprint_C.StoreLerpFrom
// (Public, BlueprintCallable, BlueprintEvent)
void AHomeBaseCamera_Blueprint_C::StoreLerpFrom()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HomeBaseCamera_Blueprint.HomeBaseCamera_Blueprint_C.StoreLerpFrom");

	AHomeBaseCamera_Blueprint_C_StoreLerpFrom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HomeBaseCamera_Blueprint.HomeBaseCamera_Blueprint_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AHomeBaseCamera_Blueprint_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HomeBaseCamera_Blueprint.HomeBaseCamera_Blueprint_C.UserConstructionScript");

	AHomeBaseCamera_Blueprint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HomeBaseCamera_Blueprint.HomeBaseCamera_Blueprint_C.ZoomInTimeline__FinishedFunc
// (BlueprintEvent)
void AHomeBaseCamera_Blueprint_C::ZoomInTimeline__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HomeBaseCamera_Blueprint.HomeBaseCamera_Blueprint_C.ZoomInTimeline__FinishedFunc");

	AHomeBaseCamera_Blueprint_C_ZoomInTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HomeBaseCamera_Blueprint.HomeBaseCamera_Blueprint_C.ZoomInTimeline__UpdateFunc
// (BlueprintEvent)
void AHomeBaseCamera_Blueprint_C::ZoomInTimeline__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HomeBaseCamera_Blueprint.HomeBaseCamera_Blueprint_C.ZoomInTimeline__UpdateFunc");

	AHomeBaseCamera_Blueprint_C_ZoomInTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HomeBaseCamera_Blueprint.HomeBaseCamera_Blueprint_C.ZoomOutTimeline__FinishedFunc
// (BlueprintEvent)
void AHomeBaseCamera_Blueprint_C::ZoomOutTimeline__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HomeBaseCamera_Blueprint.HomeBaseCamera_Blueprint_C.ZoomOutTimeline__FinishedFunc");

	AHomeBaseCamera_Blueprint_C_ZoomOutTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HomeBaseCamera_Blueprint.HomeBaseCamera_Blueprint_C.ZoomOutTimeline__UpdateFunc
// (BlueprintEvent)
void AHomeBaseCamera_Blueprint_C::ZoomOutTimeline__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HomeBaseCamera_Blueprint.HomeBaseCamera_Blueprint_C.ZoomOutTimeline__UpdateFunc");

	AHomeBaseCamera_Blueprint_C_ZoomOutTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HomeBaseCamera_Blueprint.HomeBaseCamera_Blueprint_C.InpActEvt_MouseScrollUp_UniqueObjectNameForCooking_32
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)
void AHomeBaseCamera_Blueprint_C::InpActEvt_MouseScrollUp_UniqueObjectNameForCooking_32(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HomeBaseCamera_Blueprint.HomeBaseCamera_Blueprint_C.InpActEvt_MouseScrollUp_UniqueObjectNameForCooking_32");

	AHomeBaseCamera_Blueprint_C_InpActEvt_MouseScrollUp_UniqueObjectNameForCooking_32_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HomeBaseCamera_Blueprint.HomeBaseCamera_Blueprint_C.InpActEvt_MouseScrollDown_UniqueObjectNameForCooking_31
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)
void AHomeBaseCamera_Blueprint_C::InpActEvt_MouseScrollDown_UniqueObjectNameForCooking_31(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HomeBaseCamera_Blueprint.HomeBaseCamera_Blueprint_C.InpActEvt_MouseScrollDown_UniqueObjectNameForCooking_31");

	AHomeBaseCamera_Blueprint_C_InpActEvt_MouseScrollDown_UniqueObjectNameForCooking_31_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HomeBaseCamera_Blueprint.HomeBaseCamera_Blueprint_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHomeBaseCamera_Blueprint_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HomeBaseCamera_Blueprint.HomeBaseCamera_Blueprint_C.ReceiveTick");

	AHomeBaseCamera_Blueprint_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HomeBaseCamera_Blueprint.HomeBaseCamera_Blueprint_C.OnActivated
// (Event, Public, BlueprintEvent)
void AHomeBaseCamera_Blueprint_C::OnActivated()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HomeBaseCamera_Blueprint.HomeBaseCamera_Blueprint_C.OnActivated");

	AHomeBaseCamera_Blueprint_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HomeBaseCamera_Blueprint.HomeBaseCamera_Blueprint_C.OnDeactivated
// (Event, Public, BlueprintEvent)
void AHomeBaseCamera_Blueprint_C::OnDeactivated()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HomeBaseCamera_Blueprint.HomeBaseCamera_Blueprint_C.OnDeactivated");

	AHomeBaseCamera_Blueprint_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HomeBaseCamera_Blueprint.HomeBaseCamera_Blueprint_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void AHomeBaseCamera_Blueprint_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HomeBaseCamera_Blueprint.HomeBaseCamera_Blueprint_C.ReceiveBeginPlay");

	AHomeBaseCamera_Blueprint_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HomeBaseCamera_Blueprint.HomeBaseCamera_Blueprint_C.ClearBuildingFocus
// (Event, Public, BlueprintEvent)
void AHomeBaseCamera_Blueprint_C::ClearBuildingFocus()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HomeBaseCamera_Blueprint.HomeBaseCamera_Blueprint_C.ClearBuildingFocus");

	AHomeBaseCamera_Blueprint_C_ClearBuildingFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HomeBaseCamera_Blueprint.HomeBaseCamera_Blueprint_C.SetBuildingFocus
// (Event, Public, BlueprintEvent)
// Parameters:
// class UCameraComponent*        BuildingCameraComponent        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHomeBaseCamera_Blueprint_C::SetBuildingFocus(class UCameraComponent* BuildingCameraComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HomeBaseCamera_Blueprint.HomeBaseCamera_Blueprint_C.SetBuildingFocus");

	AHomeBaseCamera_Blueprint_C_SetBuildingFocus_Params params;
	params.BuildingCameraComponent = BuildingCameraComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HomeBaseCamera_Blueprint.HomeBaseCamera_Blueprint_C.BP Clear Focus
// (BlueprintCallable, BlueprintEvent)
void AHomeBaseCamera_Blueprint_C::BP_Clear_Focus()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HomeBaseCamera_Blueprint.HomeBaseCamera_Blueprint_C.BP Clear Focus");

	AHomeBaseCamera_Blueprint_C_BP_Clear_Focus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HomeBaseCamera_Blueprint.HomeBaseCamera_Blueprint_C.OnDragBegin
// (Event, Public, BlueprintEvent)
void AHomeBaseCamera_Blueprint_C::OnDragBegin()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HomeBaseCamera_Blueprint.HomeBaseCamera_Blueprint_C.OnDragBegin");

	AHomeBaseCamera_Blueprint_C_OnDragBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HomeBaseCamera_Blueprint.HomeBaseCamera_Blueprint_C.OnDragEnd
// (Event, Public, BlueprintEvent)
void AHomeBaseCamera_Blueprint_C::OnDragEnd()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HomeBaseCamera_Blueprint.HomeBaseCamera_Blueprint_C.OnDragEnd");

	AHomeBaseCamera_Blueprint_C_OnDragEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HomeBaseCamera_Blueprint.HomeBaseCamera_Blueprint_C.ExecuteUbergraph_HomeBaseCamera_Blueprint
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHomeBaseCamera_Blueprint_C::ExecuteUbergraph_HomeBaseCamera_Blueprint(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HomeBaseCamera_Blueprint.HomeBaseCamera_Blueprint_C.ExecuteUbergraph_HomeBaseCamera_Blueprint");

	AHomeBaseCamera_Blueprint_C_ExecuteUbergraph_HomeBaseCamera_Blueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
