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

// Function HBOnboarding_NameHomebase.HBOnboarding_NameHomebase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AHBOnboarding_NameHomebase_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HBOnboarding_NameHomebase.HBOnboarding_NameHomebase_C.UserConstructionScript");

	AHBOnboarding_NameHomebase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HBOnboarding_NameHomebase.HBOnboarding_NameHomebase_C.OnNotificationStart
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
void AHBOnboarding_NameHomebase_C::OnNotificationStart()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HBOnboarding_NameHomebase.HBOnboarding_NameHomebase_C.OnNotificationStart");

	AHBOnboarding_NameHomebase_C_OnNotificationStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HBOnboarding_NameHomebase.HBOnboarding_NameHomebase_C.ExecuteUbergraph_HBOnboarding_NameHomebase
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHBOnboarding_NameHomebase_C::ExecuteUbergraph_HBOnboarding_NameHomebase(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HBOnboarding_NameHomebase.HBOnboarding_NameHomebase_C.ExecuteUbergraph_HBOnboarding_NameHomebase");

	AHBOnboarding_NameHomebase_C_ExecuteUbergraph_HBOnboarding_NameHomebase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
