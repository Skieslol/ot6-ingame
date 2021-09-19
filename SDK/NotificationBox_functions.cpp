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

// Function NotificationBox.NotificationBox_C.HideMessage
// (Public, BlueprintCallable, BlueprintEvent)
void UNotificationBox_C::HideMessage()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NotificationBox.NotificationBox_C.HideMessage");

	UNotificationBox_C_HideMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NotificationBox.NotificationBox_C.HideTitle
// (Public, BlueprintCallable, BlueprintEvent)
void UNotificationBox_C::HideTitle()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NotificationBox.NotificationBox_C.HideTitle");

	UNotificationBox_C_HideTitle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NotificationBox.NotificationBox_C.ShowTitle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Title                          (Parm)
void UNotificationBox_C::ShowTitle(const struct FText& Title)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NotificationBox.NotificationBox_C.ShowTitle");

	UNotificationBox_C_ShowTitle_Params params;
	params.Title = Title;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NotificationBox.NotificationBox_C.SetIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush             Icon_Brush                     (Parm)
void UNotificationBox_C::SetIcon(const struct FSlateBrush& Icon_Brush)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NotificationBox.NotificationBox_C.SetIcon");

	UNotificationBox_C_SetIcon_Params params;
	params.Icon_Brush = Icon_Brush;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NotificationBox.NotificationBox_C.SetTitle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Title                          (Parm)
void UNotificationBox_C::SetTitle(const struct FText& Title)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NotificationBox.NotificationBox_C.SetTitle");

	UNotificationBox_C_SetTitle_Params params;
	params.Title = Title;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NotificationBox.NotificationBox_C.Outro
// (Public, BlueprintCallable, BlueprintEvent)
void UNotificationBox_C::Outro()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NotificationBox.NotificationBox_C.Outro");

	UNotificationBox_C_Outro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NotificationBox.NotificationBox_C.Intro
// (Public, BlueprintCallable, BlueprintEvent)
void UNotificationBox_C::Intro()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NotificationBox.NotificationBox_C.Intro");

	UNotificationBox_C_Intro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NotificationBox.NotificationBox_C.HideIgnoreButton
// (Public, BlueprintCallable, BlueprintEvent)
void UNotificationBox_C::HideIgnoreButton()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NotificationBox.NotificationBox_C.HideIgnoreButton");

	UNotificationBox_C_HideIgnoreButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NotificationBox.NotificationBox_C.HideAcceptButton
// (Public, BlueprintCallable, BlueprintEvent)
void UNotificationBox_C::HideAcceptButton()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NotificationBox.NotificationBox_C.HideAcceptButton");

	UNotificationBox_C_HideAcceptButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NotificationBox.NotificationBox_C.ShowIgnoreButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   ButtonName                     (Parm)
void UNotificationBox_C::ShowIgnoreButton(const struct FText& ButtonName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NotificationBox.NotificationBox_C.ShowIgnoreButton");

	UNotificationBox_C_ShowIgnoreButton_Params params;
	params.ButtonName = ButtonName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NotificationBox.NotificationBox_C.ShowAcceptButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   ButtonName                     (Parm)
void UNotificationBox_C::ShowAcceptButton(const struct FText& ButtonName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NotificationBox.NotificationBox_C.ShowAcceptButton");

	UNotificationBox_C_ShowAcceptButton_Params params;
	params.ButtonName = ButtonName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NotificationBox.NotificationBox_C.ShowMessage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Message                        (Parm)
void UNotificationBox_C::ShowMessage(const struct FText& Message)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NotificationBox.NotificationBox_C.ShowMessage");

	UNotificationBox_C_ShowMessage_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NotificationBox.NotificationBox_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UNotificationBox_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NotificationBox.NotificationBox_C.Construct");

	UNotificationBox_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NotificationBox.NotificationBox_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)
void UNotificationBox_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NotificationBox.NotificationBox_C.OnMouseEnter");

	UNotificationBox_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NotificationBox.NotificationBox_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent           MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)
void UNotificationBox_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NotificationBox.NotificationBox_C.OnMouseLeave");

	UNotificationBox_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NotificationBox.NotificationBox_C.BndEvt__Button-1_K2Node_ComponentBoundEvent_490_FortBaseButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UFortBaseButton*         Button                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UNotificationBox_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_490_FortBaseButtonClicked__DelegateSignature(class UFortBaseButton* Button)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NotificationBox.NotificationBox_C.BndEvt__Button-1_K2Node_ComponentBoundEvent_490_FortBaseButtonClicked__DelegateSignature");

	UNotificationBox_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_490_FortBaseButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NotificationBox.NotificationBox_C.BndEvt__Button-2_K2Node_ComponentBoundEvent_501_FortBaseButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UFortBaseButton*         Button                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UNotificationBox_C::BndEvt__Button_2_K2Node_ComponentBoundEvent_501_FortBaseButtonClicked__DelegateSignature(class UFortBaseButton* Button)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NotificationBox.NotificationBox_C.BndEvt__Button-2_K2Node_ComponentBoundEvent_501_FortBaseButtonClicked__DelegateSignature");

	UNotificationBox_C_BndEvt__Button_2_K2Node_ComponentBoundEvent_501_FortBaseButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NotificationBox.NotificationBox_C.HandleIntroComplete
// (BlueprintCallable, BlueprintEvent)
void UNotificationBox_C::HandleIntroComplete()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NotificationBox.NotificationBox_C.HandleIntroComplete");

	UNotificationBox_C_HandleIntroComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NotificationBox.NotificationBox_C.HandleOutroComplete
// (BlueprintCallable, BlueprintEvent)
void UNotificationBox_C::HandleOutroComplete()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NotificationBox.NotificationBox_C.HandleOutroComplete");

	UNotificationBox_C_HandleOutroComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NotificationBox.NotificationBox_C.ExecuteUbergraph_NotificationBox
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UNotificationBox_C::ExecuteUbergraph_NotificationBox(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NotificationBox.NotificationBox_C.ExecuteUbergraph_NotificationBox");

	UNotificationBox_C_ExecuteUbergraph_NotificationBox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NotificationBox.NotificationBox_C.OnOutroComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UNotificationBox_C::OnOutroComplete__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NotificationBox.NotificationBox_C.OnOutroComplete__DelegateSignature");

	UNotificationBox_C_OnOutroComplete__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NotificationBox.NotificationBox_C.OnIntroComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UNotificationBox_C::OnIntroComplete__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NotificationBox.NotificationBox_C.OnIntroComplete__DelegateSignature");

	UNotificationBox_C_OnIntroComplete__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NotificationBox.NotificationBox_C.OnMouseLeft__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UNotificationBox_C::OnMouseLeft__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NotificationBox.NotificationBox_C.OnMouseLeft__DelegateSignature");

	UNotificationBox_C_OnMouseLeft__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NotificationBox.NotificationBox_C.OnMouseEntered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UNotificationBox_C::OnMouseEntered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NotificationBox.NotificationBox_C.OnMouseEntered__DelegateSignature");

	UNotificationBox_C_OnMouseEntered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NotificationBox.NotificationBox_C.OnIgnored__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UNotificationBox_C::OnIgnored__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NotificationBox.NotificationBox_C.OnIgnored__DelegateSignature");

	UNotificationBox_C_OnIgnored__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NotificationBox.NotificationBox_C.OnConfirmed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UNotificationBox_C::OnConfirmed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NotificationBox.NotificationBox_C.OnConfirmed__DelegateSignature");

	UNotificationBox_C_OnConfirmed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
