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

// Function Survive_Notification_Health.Survive_Notification_Health_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ASurvive_Notification_Health_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Survive_Notification_Health.Survive_Notification_Health_C.UserConstructionScript");

	ASurvive_Notification_Health_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Survive_Notification_Health.Survive_Notification_Health_C.OnNotificationStart
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
void ASurvive_Notification_Health_C::OnNotificationStart()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Survive_Notification_Health.Survive_Notification_Health_C.OnNotificationStart");

	ASurvive_Notification_Health_C_OnNotificationStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Survive_Notification_Health.Survive_Notification_Health_C.ExecuteUbergraph_Survive_Notification_Health
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ASurvive_Notification_Health_C::ExecuteUbergraph_Survive_Notification_Health(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Survive_Notification_Health.Survive_Notification_Health_C.ExecuteUbergraph_Survive_Notification_Health");

	ASurvive_Notification_Health_C_ExecuteUbergraph_Survive_Notification_Health_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
