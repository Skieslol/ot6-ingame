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

// Function NotificationWindow.NotificationWindow_C.PlayFeedback
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<FortniteUI_EFortDialogFeedbackType> FeedBackType                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UNotificationWindow_C::PlayFeedback(TEnumAsByte<FortniteUI_EFortDialogFeedbackType> FeedBackType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NotificationWindow.NotificationWindow_C.PlayFeedback");

	UNotificationWindow_C_PlayFeedback_Params params;
	params.FeedBackType = FeedBackType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NotificationWindow.NotificationWindow_C.TryConsumeNextNotification
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UNotificationWindow_C::TryConsumeNextNotification()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NotificationWindow.NotificationWindow_C.TryConsumeNextNotification");

	UNotificationWindow_C_TryConsumeNextNotification_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NotificationWindow.NotificationWindow_C.FinishHandlingNotification
// (Public, BlueprintCallable, BlueprintEvent)
void UNotificationWindow_C::FinishHandlingNotification()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NotificationWindow.NotificationWindow_C.FinishHandlingNotification");

	UNotificationWindow_C_FinishHandlingNotification_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NotificationWindow.NotificationWindow_C.SetIgnoreButton
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   InText                         (Parm, OutParm, ReferenceParm)
void UNotificationWindow_C::SetIgnoreButton(struct FText* InText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NotificationWindow.NotificationWindow_C.SetIgnoreButton");

	UNotificationWindow_C_SetIgnoreButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InText != nullptr)
		*InText = params.InText;

}


// Function NotificationWindow.NotificationWindow_C.SetAcceptButton
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   InText                         (Parm, OutParm, ReferenceParm)
void UNotificationWindow_C::SetAcceptButton(struct FText* InText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NotificationWindow.NotificationWindow_C.SetAcceptButton");

	UNotificationWindow_C_SetAcceptButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InText != nullptr)
		*InText = params.InText;

}


// Function NotificationWindow.NotificationWindow_C.SetMessage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   InText                         (Parm, OutParm, ReferenceParm)
void UNotificationWindow_C::SetMessage(struct FText* InText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NotificationWindow.NotificationWindow_C.SetMessage");

	UNotificationWindow_C_SetMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InText != nullptr)
		*InText = params.InText;

}


// Function NotificationWindow.NotificationWindow_C.SetTitle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   InText                         (Parm, OutParm, ReferenceParm)
void UNotificationWindow_C::SetTitle(struct FText* InText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NotificationWindow.NotificationWindow_C.SetTitle");

	UNotificationWindow_C_SetTitle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InText != nullptr)
		*InText = params.InText;

}


// Function NotificationWindow.NotificationWindow_C.RegisterNotificationHandler
// (Public, BlueprintCallable, BlueprintEvent)
void UNotificationWindow_C::RegisterNotificationHandler()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NotificationWindow.NotificationWindow_C.RegisterNotificationHandler");

	UNotificationWindow_C_RegisterNotificationHandler_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NotificationWindow.NotificationWindow_C.StartNotification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortDialogDescription  NotificationDescription        (Parm)
void UNotificationWindow_C::StartNotification(const struct FFortDialogDescription& NotificationDescription)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NotificationWindow.NotificationWindow_C.StartNotification");

	UNotificationWindow_C_StartNotification_Params params;
	params.NotificationDescription = NotificationDescription;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NotificationWindow.NotificationWindow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UNotificationWindow_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NotificationWindow.NotificationWindow_C.Construct");

	UNotificationWindow_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NotificationWindow.NotificationWindow_C.BndEvt__NotificationBox_K2Node_ComponentBoundEvent_55_OnConfirmed__DelegateSignature
// (BlueprintEvent)
void UNotificationWindow_C::BndEvt__NotificationBox_K2Node_ComponentBoundEvent_55_OnConfirmed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NotificationWindow.NotificationWindow_C.BndEvt__NotificationBox_K2Node_ComponentBoundEvent_55_OnConfirmed__DelegateSignature");

	UNotificationWindow_C_BndEvt__NotificationBox_K2Node_ComponentBoundEvent_55_OnConfirmed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NotificationWindow.NotificationWindow_C.NextAnimation
// (BlueprintCallable, BlueprintEvent)
void UNotificationWindow_C::NextAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NotificationWindow.NotificationWindow_C.NextAnimation");

	UNotificationWindow_C_NextAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NotificationWindow.NotificationWindow_C.BndEvt__NotificationBox_K2Node_ComponentBoundEvent_116_OnMouseEntered__DelegateSignature
// (BlueprintEvent)
void UNotificationWindow_C::BndEvt__NotificationBox_K2Node_ComponentBoundEvent_116_OnMouseEntered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NotificationWindow.NotificationWindow_C.BndEvt__NotificationBox_K2Node_ComponentBoundEvent_116_OnMouseEntered__DelegateSignature");

	UNotificationWindow_C_BndEvt__NotificationBox_K2Node_ComponentBoundEvent_116_OnMouseEntered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NotificationWindow.NotificationWindow_C.BndEvt__NotificationBox_K2Node_ComponentBoundEvent_141_OnMouseLeft__DelegateSignature
// (BlueprintEvent)
void UNotificationWindow_C::BndEvt__NotificationBox_K2Node_ComponentBoundEvent_141_OnMouseLeft__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NotificationWindow.NotificationWindow_C.BndEvt__NotificationBox_K2Node_ComponentBoundEvent_141_OnMouseLeft__DelegateSignature");

	UNotificationWindow_C_BndEvt__NotificationBox_K2Node_ComponentBoundEvent_141_OnMouseLeft__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NotificationWindow.NotificationWindow_C.BndEvt__NotificationBox_K2Node_ComponentBoundEvent_685_OnIntroComplete__DelegateSignature
// (BlueprintEvent)
void UNotificationWindow_C::BndEvt__NotificationBox_K2Node_ComponentBoundEvent_685_OnIntroComplete__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NotificationWindow.NotificationWindow_C.BndEvt__NotificationBox_K2Node_ComponentBoundEvent_685_OnIntroComplete__DelegateSignature");

	UNotificationWindow_C_BndEvt__NotificationBox_K2Node_ComponentBoundEvent_685_OnIntroComplete__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NotificationWindow.NotificationWindow_C.BndEvt__NotificationBox_K2Node_ComponentBoundEvent_694_OnOutroComplete__DelegateSignature
// (BlueprintEvent)
void UNotificationWindow_C::BndEvt__NotificationBox_K2Node_ComponentBoundEvent_694_OnOutroComplete__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NotificationWindow.NotificationWindow_C.BndEvt__NotificationBox_K2Node_ComponentBoundEvent_694_OnOutroComplete__DelegateSignature");

	UNotificationWindow_C_BndEvt__NotificationBox_K2Node_ComponentBoundEvent_694_OnOutroComplete__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NotificationWindow.NotificationWindow_C.HandleNotificationAvailable
// (BlueprintCallable, BlueprintEvent)
void UNotificationWindow_C::HandleNotificationAvailable()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NotificationWindow.NotificationWindow_C.HandleNotificationAvailable");

	UNotificationWindow_C_HandleNotificationAvailable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NotificationWindow.NotificationWindow_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UNotificationWindow_C::Destruct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NotificationWindow.NotificationWindow_C.Destruct");

	UNotificationWindow_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NotificationWindow.NotificationWindow_C.BndEvt__NotificationBox_K2Node_ComponentBoundEvent_558_OnIgnored__DelegateSignature
// (BlueprintEvent)
void UNotificationWindow_C::BndEvt__NotificationBox_K2Node_ComponentBoundEvent_558_OnIgnored__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NotificationWindow.NotificationWindow_C.BndEvt__NotificationBox_K2Node_ComponentBoundEvent_558_OnIgnored__DelegateSignature");

	UNotificationWindow_C_BndEvt__NotificationBox_K2Node_ComponentBoundEvent_558_OnIgnored__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NotificationWindow.NotificationWindow_C.ExecuteUbergraph_NotificationWindow
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UNotificationWindow_C::ExecuteUbergraph_NotificationWindow(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NotificationWindow.NotificationWindow_C.ExecuteUbergraph_NotificationWindow");

	UNotificationWindow_C_ExecuteUbergraph_NotificationWindow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NotificationWindow.NotificationWindow_C.OnTimerComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UNotificationWindow_C::OnTimerComplete__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NotificationWindow.NotificationWindow_C.OnTimerComplete__DelegateSignature");

	UNotificationWindow_C_OnTimerComplete__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
