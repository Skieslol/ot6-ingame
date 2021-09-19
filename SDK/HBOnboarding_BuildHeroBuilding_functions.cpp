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

// Function HBOnboarding_BuildHeroBuilding.HBOnboarding_BuildHeroBuilding_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AHBOnboarding_BuildHeroBuilding_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HBOnboarding_BuildHeroBuilding.HBOnboarding_BuildHeroBuilding_C.UserConstructionScript");

	AHBOnboarding_BuildHeroBuilding_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HBOnboarding_BuildHeroBuilding.HBOnboarding_BuildHeroBuilding_C.OnNotificationStart
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
void AHBOnboarding_BuildHeroBuilding_C::OnNotificationStart()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HBOnboarding_BuildHeroBuilding.HBOnboarding_BuildHeroBuilding_C.OnNotificationStart");

	AHBOnboarding_BuildHeroBuilding_C_OnNotificationStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HBOnboarding_BuildHeroBuilding.HBOnboarding_BuildHeroBuilding_C.HandleClientEvent_OnboardingBuildingsStage2
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 EventSource                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                 EventFocus                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortClientEvent        ClientEvent                    (ConstParm, Parm, OutParm, ReferenceParm)
void AHBOnboarding_BuildHeroBuilding_C::HandleClientEvent_OnboardingBuildingsStage2(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HBOnboarding_BuildHeroBuilding.HBOnboarding_BuildHeroBuilding_C.HandleClientEvent_OnboardingBuildingsStage2");

	AHBOnboarding_BuildHeroBuilding_C_HandleClientEvent_OnboardingBuildingsStage2_Params params;
	params.EventSource = EventSource;
	params.EventFocus = EventFocus;
	params.ClientEvent = ClientEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HBOnboarding_BuildHeroBuilding.HBOnboarding_BuildHeroBuilding_C.HandleClientEvent_BuildingSelected
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 EventSource                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                 EventFocus                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortClientEvent        ClientEvent                    (ConstParm, Parm, OutParm, ReferenceParm)
void AHBOnboarding_BuildHeroBuilding_C::HandleClientEvent_BuildingSelected(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HBOnboarding_BuildHeroBuilding.HBOnboarding_BuildHeroBuilding_C.HandleClientEvent_BuildingSelected");

	AHBOnboarding_BuildHeroBuilding_C_HandleClientEvent_BuildingSelected_Params params;
	params.EventSource = EventSource;
	params.EventFocus = EventFocus;
	params.ClientEvent = ClientEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HBOnboarding_BuildHeroBuilding.HBOnboarding_BuildHeroBuilding_C.HandleClientEvent_HomebaseBuiltBuilding
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 EventSource                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                 EventFocus                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortClientEvent        ClientEvent                    (ConstParm, Parm, OutParm, ReferenceParm)
void AHBOnboarding_BuildHeroBuilding_C::HandleClientEvent_HomebaseBuiltBuilding(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HBOnboarding_BuildHeroBuilding.HBOnboarding_BuildHeroBuilding_C.HandleClientEvent_HomebaseBuiltBuilding");

	AHBOnboarding_BuildHeroBuilding_C_HandleClientEvent_HomebaseBuiltBuilding_Params params;
	params.EventSource = EventSource;
	params.EventFocus = EventFocus;
	params.ClientEvent = ClientEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HBOnboarding_BuildHeroBuilding.HBOnboarding_BuildHeroBuilding_C.finished
// (BlueprintCallable, BlueprintEvent)
void AHBOnboarding_BuildHeroBuilding_C::finished()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HBOnboarding_BuildHeroBuilding.HBOnboarding_BuildHeroBuilding_C.finished");

	AHBOnboarding_BuildHeroBuilding_C_finished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HBOnboarding_BuildHeroBuilding.HBOnboarding_BuildHeroBuilding_C.ExecuteUbergraph_HBOnboarding_BuildHeroBuilding
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHBOnboarding_BuildHeroBuilding_C::ExecuteUbergraph_HBOnboarding_BuildHeroBuilding(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HBOnboarding_BuildHeroBuilding.HBOnboarding_BuildHeroBuilding_C.ExecuteUbergraph_HBOnboarding_BuildHeroBuilding");

	AHBOnboarding_BuildHeroBuilding_C_ExecuteUbergraph_HBOnboarding_BuildHeroBuilding_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
