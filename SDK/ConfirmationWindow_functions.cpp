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

// Function ConfirmationWindow.ConfirmationWindow_C.OnHandleAction
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventReply             Result                         (Parm, OutParm)
// bool                           bPassThrough                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UConfirmationWindow_C::OnHandleAction(struct FEventReply* Result, bool* bPassThrough)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ConfirmationWindow.ConfirmationWindow_C.OnHandleAction");

	UConfirmationWindow_C_OnHandleAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
	if (bPassThrough != nullptr)
		*bPassThrough = params.bPassThrough;

}


// Function ConfirmationWindow.ConfirmationWindow_C.HandleTimedOut
// (Public, BlueprintCallable, BlueprintEvent)
void UConfirmationWindow_C::HandleTimedOut()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ConfirmationWindow.ConfirmationWindow_C.HandleTimedOut");

	UConfirmationWindow_C_HandleTimedOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ConfirmationWindow.ConfirmationWindow_C.UpdateTimer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Display_Time                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UConfirmationWindow_C::UpdateTimer(float Display_Time)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ConfirmationWindow.ConfirmationWindow_C.UpdateTimer");

	UConfirmationWindow_C_UpdateTimer_Params params;
	params.Display_Time = Display_Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ConfirmationWindow.ConfirmationWindow_C.UpdateButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UButtonIconText_C*       Button                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FText                   TEXT                           (Parm)
void UConfirmationWindow_C::UpdateButton(class UButtonIconText_C* Button, const struct FText& TEXT)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ConfirmationWindow.ConfirmationWindow_C.UpdateButton");

	UConfirmationWindow_C_UpdateButton_Params params;
	params.Button = Button;
	params.TEXT = TEXT;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ConfirmationWindow.ConfirmationWindow_C.OnShow
// (Event, Protected, BlueprintEvent)
void UConfirmationWindow_C::OnShow()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ConfirmationWindow.ConfirmationWindow_C.OnShow");

	UConfirmationWindow_C_OnShow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ConfirmationWindow.ConfirmationWindow_C.OnKill
// (Event, Protected, BlueprintEvent)
void UConfirmationWindow_C::OnKill()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ConfirmationWindow.ConfirmationWindow_C.OnKill");

	UConfirmationWindow_C_OnKill_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ConfirmationWindow.ConfirmationWindow_C.BndEvt__Button-Confirm_K2Node_ComponentBoundEvent_940_FortBaseButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UFortBaseButton*         Button                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UConfirmationWindow_C::BndEvt__Button_Confirm_K2Node_ComponentBoundEvent_940_FortBaseButtonClicked__DelegateSignature(class UFortBaseButton* Button)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ConfirmationWindow.ConfirmationWindow_C.BndEvt__Button-Confirm_K2Node_ComponentBoundEvent_940_FortBaseButtonClicked__DelegateSignature");

	UConfirmationWindow_C_BndEvt__Button_Confirm_K2Node_ComponentBoundEvent_940_FortBaseButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ConfirmationWindow.ConfirmationWindow_C.BndEvt__Button-Decline_K2Node_ComponentBoundEvent_951_FortBaseButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UFortBaseButton*         Button                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UConfirmationWindow_C::BndEvt__Button_Decline_K2Node_ComponentBoundEvent_951_FortBaseButtonClicked__DelegateSignature(class UFortBaseButton* Button)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ConfirmationWindow.ConfirmationWindow_C.BndEvt__Button-Decline_K2Node_ComponentBoundEvent_951_FortBaseButtonClicked__DelegateSignature");

	UConfirmationWindow_C_BndEvt__Button_Decline_K2Node_ComponentBoundEvent_951_FortBaseButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ConfirmationWindow.ConfirmationWindow_C.ExecuteUbergraph_ConfirmationWindow
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UConfirmationWindow_C::ExecuteUbergraph_ConfirmationWindow(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ConfirmationWindow.ConfirmationWindow_C.ExecuteUbergraph_ConfirmationWindow");

	UConfirmationWindow_C_ExecuteUbergraph_ConfirmationWindow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
