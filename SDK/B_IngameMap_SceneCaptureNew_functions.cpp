﻿// Name: Fortnite, Version: OT-6_5

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

// Function B_IngameMap_SceneCaptureNew.B_IngameMap_SceneCaptureNew_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AB_IngameMap_SceneCaptureNew_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_IngameMap_SceneCaptureNew.B_IngameMap_SceneCaptureNew_C.UserConstructionScript");

	AB_IngameMap_SceneCaptureNew_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_IngameMap_SceneCaptureNew.B_IngameMap_SceneCaptureNew_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void AB_IngameMap_SceneCaptureNew_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_IngameMap_SceneCaptureNew.B_IngameMap_SceneCaptureNew_C.ReceiveBeginPlay");

	AB_IngameMap_SceneCaptureNew_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_IngameMap_SceneCaptureNew.B_IngameMap_SceneCaptureNew_C.ExecuteUbergraph_B_IngameMap_SceneCaptureNew
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_IngameMap_SceneCaptureNew_C::ExecuteUbergraph_B_IngameMap_SceneCaptureNew(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_IngameMap_SceneCaptureNew.B_IngameMap_SceneCaptureNew_C.ExecuteUbergraph_B_IngameMap_SceneCaptureNew");

	AB_IngameMap_SceneCaptureNew_C_ExecuteUbergraph_B_IngameMap_SceneCaptureNew_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
