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

// Function LeaveButton.LeaveButton_C.LeaveParty
// (Public, BlueprintCallable, BlueprintEvent)
void ULeaveButton_C::LeaveParty()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LeaveButton.LeaveButton_C.LeaveParty");

	ULeaveButton_C_LeaveParty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LeaveButton.LeaveButton_C.UpdateState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ULeaveButton_C::UpdateState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LeaveButton.LeaveButton_C.UpdateState");

	ULeaveButton_C_UpdateState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LeaveButton.LeaveButton_C.IsConsideredInGame
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           InGame                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ULeaveButton_C::IsConsideredInGame(bool* InGame)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LeaveButton.LeaveButton_C.IsConsideredInGame");

	ULeaveButton_C_IsConsideredInGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InGame != nullptr)
		*InGame = params.InGame;

}


// Function LeaveButton.LeaveButton_C.GetLeaveActionText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   TEXT                           (Parm, OutParm)
void ULeaveButton_C::GetLeaveActionText(struct FText* TEXT)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LeaveButton.LeaveButton_C.GetLeaveActionText");

	ULeaveButton_C_GetLeaveActionText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TEXT != nullptr)
		*TEXT = params.TEXT;

}


// Function LeaveButton.LeaveButton_C.OnTimedOut_0FD9CDFF41D146A2389F9EBEB64D7769
// (BlueprintCallable, BlueprintEvent)
void ULeaveButton_C::OnTimedOut_0FD9CDFF41D146A2389F9EBEB64D7769()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LeaveButton.LeaveButton_C.OnTimedOut_0FD9CDFF41D146A2389F9EBEB64D7769");

	ULeaveButton_C_OnTimedOut_0FD9CDFF41D146A2389F9EBEB64D7769_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LeaveButton.LeaveButton_C.OnDeclined_0FD9CDFF41D146A2389F9EBEB64D7769
// (BlueprintCallable, BlueprintEvent)
void ULeaveButton_C::OnDeclined_0FD9CDFF41D146A2389F9EBEB64D7769()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LeaveButton.LeaveButton_C.OnDeclined_0FD9CDFF41D146A2389F9EBEB64D7769");

	ULeaveButton_C_OnDeclined_0FD9CDFF41D146A2389F9EBEB64D7769_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LeaveButton.LeaveButton_C.OnConfirmed_0FD9CDFF41D146A2389F9EBEB64D7769
// (BlueprintCallable, BlueprintEvent)
void ULeaveButton_C::OnConfirmed_0FD9CDFF41D146A2389F9EBEB64D7769()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LeaveButton.LeaveButton_C.OnConfirmed_0FD9CDFF41D146A2389F9EBEB64D7769");

	ULeaveButton_C_OnConfirmed_0FD9CDFF41D146A2389F9EBEB64D7769_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LeaveButton.LeaveButton_C.OnTimedOut_A9AA3A5B453A4DE8A2BCA6AA5D014B79
// (BlueprintCallable, BlueprintEvent)
void ULeaveButton_C::OnTimedOut_A9AA3A5B453A4DE8A2BCA6AA5D014B79()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LeaveButton.LeaveButton_C.OnTimedOut_A9AA3A5B453A4DE8A2BCA6AA5D014B79");

	ULeaveButton_C_OnTimedOut_A9AA3A5B453A4DE8A2BCA6AA5D014B79_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LeaveButton.LeaveButton_C.OnDeclined_A9AA3A5B453A4DE8A2BCA6AA5D014B79
// (BlueprintCallable, BlueprintEvent)
void ULeaveButton_C::OnDeclined_A9AA3A5B453A4DE8A2BCA6AA5D014B79()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LeaveButton.LeaveButton_C.OnDeclined_A9AA3A5B453A4DE8A2BCA6AA5D014B79");

	ULeaveButton_C_OnDeclined_A9AA3A5B453A4DE8A2BCA6AA5D014B79_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LeaveButton.LeaveButton_C.OnConfirmed_A9AA3A5B453A4DE8A2BCA6AA5D014B79
// (BlueprintCallable, BlueprintEvent)
void ULeaveButton_C::OnConfirmed_A9AA3A5B453A4DE8A2BCA6AA5D014B79()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LeaveButton.LeaveButton_C.OnConfirmed_A9AA3A5B453A4DE8A2BCA6AA5D014B79");

	ULeaveButton_C_OnConfirmed_A9AA3A5B453A4DE8A2BCA6AA5D014B79_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LeaveButton.LeaveButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void ULeaveButton_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LeaveButton.LeaveButton_C.Construct");

	ULeaveButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LeaveButton.LeaveButton_C.HandleLobbyEvents
// (BlueprintCallable, BlueprintEvent)
void ULeaveButton_C::HandleLobbyEvents()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LeaveButton.LeaveButton_C.HandleLobbyEvents");

	ULeaveButton_C_HandleLobbyEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LeaveButton.LeaveButton_C.HandleTeamMemberAdded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo     NewTeamMemberInfo              (Parm)
void ULeaveButton_C::HandleTeamMemberAdded(const struct FFortTeamMemberInfo& NewTeamMemberInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LeaveButton.LeaveButton_C.HandleTeamMemberAdded");

	ULeaveButton_C_HandleTeamMemberAdded_Params params;
	params.NewTeamMemberInfo = NewTeamMemberInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LeaveButton.LeaveButton_C.HandleTeamMemberRemoved
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerIndex                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ULeaveButton_C::HandleTeamMemberRemoved(int PlayerIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LeaveButton.LeaveButton_C.HandleTeamMemberRemoved");

	ULeaveButton_C_HandleTeamMemberRemoved_Params params;
	params.PlayerIndex = PlayerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LeaveButton.LeaveButton_C.BndEvt__[Button] Leave_K2Node_ComponentBoundEvent_84_FortBaseButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UFortBaseButton*         Button                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ULeaveButton_C::BndEvt___Button__Leave_K2Node_ComponentBoundEvent_84_FortBaseButtonClicked__DelegateSignature(class UFortBaseButton* Button)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LeaveButton.LeaveButton_C.BndEvt__[Button] Leave_K2Node_ComponentBoundEvent_84_FortBaseButtonClicked__DelegateSignature");

	ULeaveButton_C_BndEvt___Button__Leave_K2Node_ComponentBoundEvent_84_FortBaseButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LeaveButton.LeaveButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ULeaveButton_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LeaveButton.LeaveButton_C.PreConstruct");

	ULeaveButton_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LeaveButton.LeaveButton_C.ExecuteUbergraph_LeaveButton
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ULeaveButton_C::ExecuteUbergraph_LeaveButton(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LeaveButton.LeaveButton_C.ExecuteUbergraph_LeaveButton");

	ULeaveButton_C_ExecuteUbergraph_LeaveButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LeaveButton.LeaveButton_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ULeaveButton_C::OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LeaveButton.LeaveButton_C.OnClicked__DelegateSignature");

	ULeaveButton_C_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
