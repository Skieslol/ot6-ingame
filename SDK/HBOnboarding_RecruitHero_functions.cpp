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

// Function HBOnboarding_RecruitHero.HBOnboarding_RecruitHero_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AHBOnboarding_RecruitHero_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HBOnboarding_RecruitHero.HBOnboarding_RecruitHero_C.UserConstructionScript");

	AHBOnboarding_RecruitHero_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HBOnboarding_RecruitHero.HBOnboarding_RecruitHero_C.OnNotificationStart
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
void AHBOnboarding_RecruitHero_C::OnNotificationStart()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HBOnboarding_RecruitHero.HBOnboarding_RecruitHero_C.OnNotificationStart");

	AHBOnboarding_RecruitHero_C_OnNotificationStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HBOnboarding_RecruitHero.HBOnboarding_RecruitHero_C.HandleClientEvent_RecruitHeroExpanded
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 EventSource                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                 EventFocus                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortClientEvent        ClientEvent                    (ConstParm, Parm, OutParm, ReferenceParm)
void AHBOnboarding_RecruitHero_C::HandleClientEvent_RecruitHeroExpanded(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HBOnboarding_RecruitHero.HBOnboarding_RecruitHero_C.HandleClientEvent_RecruitHeroExpanded");

	AHBOnboarding_RecruitHero_C_HandleClientEvent_RecruitHeroExpanded_Params params;
	params.EventSource = EventSource;
	params.EventFocus = EventFocus;
	params.ClientEvent = ClientEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HBOnboarding_RecruitHero.HBOnboarding_RecruitHero_C.HandleClientEvent_HomebaseRecruitedHero
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 EventSource                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                 EventFocus                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortClientEvent        ClientEvent                    (ConstParm, Parm, OutParm, ReferenceParm)
void AHBOnboarding_RecruitHero_C::HandleClientEvent_HomebaseRecruitedHero(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HBOnboarding_RecruitHero.HBOnboarding_RecruitHero_C.HandleClientEvent_HomebaseRecruitedHero");

	AHBOnboarding_RecruitHero_C_HandleClientEvent_HomebaseRecruitedHero_Params params;
	params.EventSource = EventSource;
	params.EventFocus = EventFocus;
	params.ClientEvent = ClientEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HBOnboarding_RecruitHero.HBOnboarding_RecruitHero_C.HandleClientEvent_QuestJournalSelected
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 EventSource                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                 EventFocus                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortClientEvent        ClientEvent                    (ConstParm, Parm, OutParm, ReferenceParm)
void AHBOnboarding_RecruitHero_C::HandleClientEvent_QuestJournalSelected(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HBOnboarding_RecruitHero.HBOnboarding_RecruitHero_C.HandleClientEvent_QuestJournalSelected");

	AHBOnboarding_RecruitHero_C_HandleClientEvent_QuestJournalSelected_Params params;
	params.EventSource = EventSource;
	params.EventFocus = EventFocus;
	params.ClientEvent = ClientEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HBOnboarding_RecruitHero.HBOnboarding_RecruitHero_C.HandleClientEvent_HeroesTabSelected
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 EventSource                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                 EventFocus                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortClientEvent        ClientEvent                    (ConstParm, Parm, OutParm, ReferenceParm)
void AHBOnboarding_RecruitHero_C::HandleClientEvent_HeroesTabSelected(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HBOnboarding_RecruitHero.HBOnboarding_RecruitHero_C.HandleClientEvent_HeroesTabSelected");

	AHBOnboarding_RecruitHero_C_HandleClientEvent_HeroesTabSelected_Params params;
	params.EventSource = EventSource;
	params.EventFocus = EventFocus;
	params.ClientEvent = ClientEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HBOnboarding_RecruitHero.HBOnboarding_RecruitHero_C.ExecuteUbergraph_HBOnboarding_RecruitHero
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHBOnboarding_RecruitHero_C::ExecuteUbergraph_HBOnboarding_RecruitHero(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HBOnboarding_RecruitHero.HBOnboarding_RecruitHero_C.ExecuteUbergraph_HBOnboarding_RecruitHero");

	AHBOnboarding_RecruitHero_C_ExecuteUbergraph_HBOnboarding_RecruitHero_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
