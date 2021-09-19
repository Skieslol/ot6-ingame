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

// Function UIManager.UIManager_C.HandleModalContentCleared
// (Public, BlueprintCallable, BlueprintEvent)
void UUIManager_C::HandleModalContentCleared()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.HandleModalContentCleared");

	UUIManager_C_HandleModalContentCleared_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UIManager.UIManager_C.IsStateContentChildShowing
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UUIManager_C::IsStateContentChildShowing()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.IsStateContentChildShowing");

	UUIManager_C_IsStateContentChildShowing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function UIManager.UIManager_C.DismissPurchaseWidget
// (Public, BlueprintCallable, BlueprintEvent)
void UUIManager_C::DismissPurchaseWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.DismissPurchaseWidget");

	UUIManager_C_DismissPurchaseWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UIManager.UIManager_C.DisplayPurchaseWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Web_Widget                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FString                 OfferId                        (Parm, ZeroConstructor)
void UUIManager_C::DisplayPurchaseWidget(class UWidget* Web_Widget, const struct FString& OfferId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.DisplayPurchaseWidget");

	UUIManager_C_DisplayPurchaseWidget_Params params;
	params.Web_Widget = Web_Widget;
	params.OfferId = OfferId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UIManager.UIManager_C.BindDelegates
// (Public, BlueprintCallable, BlueprintEvent)
void UUIManager_C::BindDelegates()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.BindDelegates");

	UUIManager_C_BindDelegates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UIManager.UIManager_C.ShowNextModalWidget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUIManager_C::ShowNextModalWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.ShowNextModalWidget");

	UUIManager_C_ShowNextModalWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UIManager.UIManager_C.QueueActionPanelInModalLayer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortActionHandlerPanel* InActionHandlerPanel           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUIManager_C::QueueActionPanelInModalLayer(class UFortActionHandlerPanel* InActionHandlerPanel, TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment, TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.QueueActionPanelInModalLayer");

	UUIManager_C_QueueActionPanelInModalLayer_Params params;
	params.InActionHandlerPanel = InActionHandlerPanel;
	params.InHorizontalAlignment = InHorizontalAlignment;
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UIManager.UIManager_C.ClearModalLayer
// (Public, BlueprintCallable, BlueprintEvent)
void UUIManager_C::ClearModalLayer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.ClearModalLayer");

	UUIManager_C_ClearModalLayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UIManager.UIManager_C.ClearLayers
// (Public, BlueprintCallable, BlueprintEvent)
void UUIManager_C::ClearLayers()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.ClearLayers");

	UUIManager_C_ClearLayers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UIManager.UIManager_C.ShowActionPanelInModalLayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortActionHandlerPanel* InActionHandlerPanel           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUIManager_C::ShowActionPanelInModalLayer(class UFortActionHandlerPanel* InActionHandlerPanel, TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment, TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.ShowActionPanelInModalLayer");

	UUIManager_C_ShowActionPanelInModalLayer_Params params;
	params.InActionHandlerPanel = InActionHandlerPanel;
	params.InHorizontalAlignment = InHorizontalAlignment;
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UIManager.UIManager_C.DisplayOKButtonConfirmation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Header                         (Parm, OutParm, ReferenceParm)
// struct FText                   Message                        (Parm, OutParm, ReferenceParm)
void UUIManager_C::DisplayOKButtonConfirmation(struct FText* Header, struct FText* Message)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.DisplayOKButtonConfirmation");

	UUIManager_C_DisplayOKButtonConfirmation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Header != nullptr)
		*Header = params.Header;
	if (Message != nullptr)
		*Message = params.Message;

}


// Function UIManager.UIManager_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUIManager_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.Construct");

	UUIManager_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UIManager.UIManager_C.KillConfirmation
// (Event, Public, BlueprintEvent)
void UUIManager_C::KillConfirmation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.KillConfirmation");

	UUIManager_C_KillConfirmation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UIManager.UIManager_C.UpdateStateWidgetContent
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortUIStateWidget*      StateWidget                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUIManager_C::UpdateStateWidgetContent(class UFortUIStateWidget* StateWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.UpdateStateWidgetContent");

	UUIManager_C_UpdateStateWidgetContent_Params params;
	params.StateWidget = StateWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UIManager.UIManager_C.OnShowConfirmation
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FFortDialogDescription  Description                    (ConstParm, Parm, OutParm, ReferenceParm)
void UUIManager_C::OnShowConfirmation(const struct FFortDialogDescription& Description)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.OnShowConfirmation");

	UUIManager_C_OnShowConfirmation_Params params;
	params.Description = Description;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UIManager.UIManager_C.DisplayStateContent
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bDisplay                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUIManager_C::DisplayStateContent(bool bDisplay)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.DisplayStateContent");

	UUIManager_C_DisplayStateContent_Params params;
	params.bDisplay = bDisplay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UIManager.UIManager_C.OnStateStarted
// (Event, Public, BlueprintEvent)
void UUIManager_C::OnStateStarted()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.OnStateStarted");

	UUIManager_C_OnStateStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UIManager.UIManager_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUIManager_C::Destruct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.Destruct");

	UUIManager_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UIManager.UIManager_C.BndEvt__CancelCurrencyStore_Button_K2Node_ComponentBoundEvent_489_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UUIManager_C::BndEvt__CancelCurrencyStore_Button_K2Node_ComponentBoundEvent_489_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.BndEvt__CancelCurrencyStore_Button_K2Node_ComponentBoundEvent_489_OnButtonClickedEvent__DelegateSignature");

	UUIManager_C_BndEvt__CancelCurrencyStore_Button_K2Node_ComponentBoundEvent_489_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UIManager.UIManager_C.DisplayErrorDialog
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FFortErrorInfo          Info                           (ConstParm, Parm, OutParm, ReferenceParm)
void UUIManager_C::DisplayErrorDialog(const struct FFortErrorInfo& Info)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.DisplayErrorDialog");

	UUIManager_C_DisplayErrorDialog_Params params;
	params.Info = Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UIManager.UIManager_C.ExecuteUbergraph_UIManager
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUIManager_C::ExecuteUbergraph_UIManager(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UIManager.UIManager_C.ExecuteUbergraph_UIManager");

	UUIManager_C_ExecuteUbergraph_UIManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
