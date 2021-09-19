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

// Function FortniteUI.FortAbstractButtonGroup.SetDataProvider
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FText>           InDataProvider                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UFortAbstractButtonGroup::SetDataProvider(TArray<struct FText> InDataProvider)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortAbstractButtonGroup.SetDataProvider");

	UFortAbstractButtonGroup_SetDataProvider_Params params;
	params.InDataProvider = InDataProvider;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortAbstractButtonGroup.HandleButtonClicked
// (Native, Public, BlueprintCallable)
// Parameters:
// class UFortButton*             Button                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFortAbstractButtonGroup::HandleButtonClicked(class UFortButton* Button)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortAbstractButtonGroup.HandleButtonClicked");

	UFortAbstractButtonGroup_HandleButtonClicked_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortTabButtonGroup.SetInitialButtonSelection
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            INDEX                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFortTabButtonGroup::SetInitialButtonSelection(int INDEX)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortTabButtonGroup.SetInitialButtonSelection");

	UFortTabButtonGroup_SetInitialButtonSelection_Params params;
	params.INDEX = INDEX;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortTabButtonGroup.GetTabButton
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            INDEX                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortTabButton*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UFortTabButton* UFortTabButtonGroup::GetTabButton(int INDEX)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortTabButtonGroup.GetTabButton");

	UFortTabButtonGroup_GetTabButton_Params params;
	params.INDEX = INDEX;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortActorCanvas.AddActorIndicator
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFortActorIndicatorWidget* Indicator                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortActorCanvasSlot*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UFortActorCanvasSlot* UFortActorCanvas::AddActorIndicator(class UFortActorIndicatorWidget* Indicator)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortActorCanvas.AddActorIndicator");

	UFortActorCanvas_AddActorIndicator_Params params;
	params.Indicator = Indicator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortActorCanvasSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFortActorCanvasSlot::SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortActorCanvasSlot.SetVerticalAlignment");

	UFortActorCanvasSlot_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortActorCanvasSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFortActorCanvasSlot::SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortActorCanvasSlot.SetHorizontalAlignment");

	UFortActorCanvasSlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortActorCanvasSlot.SetCanAutoRemove
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bAllowAutoRemove               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UFortActorCanvasSlot::SetCanAutoRemove(bool bAllowAutoRemove)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortActorCanvasSlot.SetCanAutoRemove");

	UFortActorCanvasSlot_SetCanAutoRemove_Params params;
	params.bAllowAutoRemove = bAllowAutoRemove;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortAsyncAction_SetUIState.SetUIState
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 InWorldContextObject           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<FortniteUI_EFortUIState> DesiredState                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortAsyncAction_SetUIState* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UFortAsyncAction_SetUIState* UFortAsyncAction_SetUIState::STATIC_SetUIState(class UObject* InWorldContextObject, TEnumAsByte<FortniteUI_EFortUIState> DesiredState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortAsyncAction_SetUIState.SetUIState");

	UFortAsyncAction_SetUIState_SetUIState_Params params;
	params.InWorldContextObject = InWorldContextObject;
	params.DesiredState = DesiredState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortAsyncAction_ShowConfirmation.ShowConfirmationDialog
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 InWorldContextObject           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FText                   Title                          (Parm, NativeAccessSpecifierPublic)
// struct FText                   Message                        (Parm, NativeAccessSpecifierPublic)
// struct FText                   ConfirmButtonText              (Parm, NativeAccessSpecifierPublic)
// struct FText                   DeclineButtonText              (Parm, NativeAccessSpecifierPublic)
// class UFortUserWidget*         InAdditionalContent            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          InDisplayTime                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortAsyncAction_ShowConfirmation* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UFortAsyncAction_ShowConfirmation* UFortAsyncAction_ShowConfirmation::STATIC_ShowConfirmationDialog(class UObject* InWorldContextObject, const struct FText& Title, const struct FText& Message, const struct FText& ConfirmButtonText, const struct FText& DeclineButtonText, class UFortUserWidget* InAdditionalContent, float InDisplayTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortAsyncAction_ShowConfirmation.ShowConfirmationDialog");

	UFortAsyncAction_ShowConfirmation_ShowConfirmationDialog_Params params;
	params.InWorldContextObject = InWorldContextObject;
	params.Title = Title;
	params.Message = Message;
	params.ConfirmButtonText = ConfirmButtonText;
	params.DeclineButtonText = DeclineButtonText;
	params.InAdditionalContent = InAdditionalContent;
	params.InDisplayTime = InDisplayTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortBangWrapper.SetBangVisibility
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           InVisible                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UFortBangWrapper::SetBangVisibility(bool InVisible)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortBangWrapper.SetBangVisibility");

	UFortBangWrapper_SetBangVisibility_Params params;
	params.InVisible = InVisible;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortUserWidget.UnregisterForEvent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   EventName                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         InCallback                     (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
void UFortUserWidget::UnregisterForEvent(const struct FName& EventName, const struct FScriptDelegate& InCallback)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortUserWidget.UnregisterForEvent");

	UFortUserWidget_UnregisterForEvent_Params params;
	params.EventName = EventName;
	params.InCallback = InCallback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortUserWidget.RegisterForInvalidation
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FName                   InvalidationType               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Callback                       (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
void UFortUserWidget::RegisterForInvalidation(const struct FName& InvalidationType, const struct FScriptDelegate& Callback)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortUserWidget.RegisterForInvalidation");

	UFortUserWidget_RegisterForInvalidation_Params params;
	params.InvalidationType = InvalidationType;
	params.Callback = Callback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortUserWidget.RegisterForEvent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   EventName                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         InCallback                     (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
void UFortUserWidget::RegisterForEvent(const struct FName& EventName, const struct FScriptDelegate& InCallback)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortUserWidget.RegisterForEvent");

	UFortUserWidget_RegisterForEvent_Params params;
	params.EventName = EventName;
	params.InCallback = InCallback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortUserWidget.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UFortUserWidget::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortUserWidget.PreConstruct");

	UFortUserWidget_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortUserWidget.IsInvalid
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   Type                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool UFortUserWidget::IsInvalid(const struct FName& Type)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortUserWidget.IsInvalid");

	UFortUserWidget_IsInvalid_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortUserWidget.DispatchEvent
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FName                   EventName                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFortUserWidget::DispatchEvent(const struct FName& EventName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortUserWidget.DispatchEvent");

	UFortUserWidget_DispatchEvent_Params params;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortUserWidget._BPInvalidate
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FName                   Type                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFortUserWidget::_BPInvalidate(const struct FName& Type)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortUserWidget._BPInvalidate");

	UFortUserWidget__BPInvalidate_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortButtonStyle.GetMarginBySizeFromMultiSizeMargin
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FFortMultiSizeMargin    MultiSizeMargin                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TEnumAsByte<FortniteGame_EFortBrushSize> Size                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMargin                 ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FMargin UFortButtonStyle::STATIC_GetMarginBySizeFromMultiSizeMargin(const struct FFortMultiSizeMargin& MultiSizeMargin, TEnumAsByte<FortniteGame_EFortBrushSize> Size)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortButtonStyle.GetMarginBySizeFromMultiSizeMargin");

	UFortButtonStyle_GetMarginBySizeFromMultiSizeMargin_Params params;
	params.MultiSizeMargin = MultiSizeMargin;
	params.Size = Size;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortButtonStyle.GetFontBySizeFromMultiSizeFont
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FFortMultiSizeFont      MultiSizeFont                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TEnumAsByte<FortniteGame_EFortBrushSize> Size                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSlateFontInfo          ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FSlateFontInfo UFortButtonStyle::STATIC_GetFontBySizeFromMultiSizeFont(const struct FFortMultiSizeFont& MultiSizeFont, TEnumAsByte<FortniteGame_EFortBrushSize> Size)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortButtonStyle.GetFontBySizeFromMultiSizeFont");

	UFortButtonStyle_GetFontBySizeFromMultiSizeFont_Params params;
	params.MultiSizeFont = MultiSizeFont;
	params.Size = Size;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortButtonStyle.GetFontBySize
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<FortniteGame_EFortBrushSize> Size                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSlateFontInfo          ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FSlateFontInfo UFortButtonStyle::GetFontBySize(TEnumAsByte<FortniteGame_EFortBrushSize> Size)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortButtonStyle.GetFontBySize");

	UFortButtonStyle_GetFontBySize_Params params;
	params.Size = Size;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortButtonStyle.GetCustomPaddingBySize
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<FortniteGame_EFortBrushSize> Size                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMargin                 ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FMargin UFortButtonStyle::GetCustomPaddingBySize(TEnumAsByte<FortniteGame_EFortBrushSize> Size)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortButtonStyle.GetCustomPaddingBySize");

	UFortButtonStyle_GetCustomPaddingBySize_Params params;
	params.Size = Size;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortButtonStyle.GetButtonPaddingBySize
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<FortniteGame_EFortBrushSize> Size                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMargin                 ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FMargin UFortButtonStyle::GetButtonPaddingBySize(TEnumAsByte<FortniteGame_EFortBrushSize> Size)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortButtonStyle.GetButtonPaddingBySize");

	UFortButtonStyle_GetButtonPaddingBySize_Params params;
	params.Size = Size;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortButtonStyle.GetBrushBySizeFromMultiSizeBrush
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FFortMultiSizeBrush     MultiSizeBrush                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TEnumAsByte<FortniteGame_EFortBrushSize> Size                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSlateBrush             ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FSlateBrush UFortButtonStyle::STATIC_GetBrushBySizeFromMultiSizeBrush(const struct FFortMultiSizeBrush& MultiSizeBrush, TEnumAsByte<FortniteGame_EFortBrushSize> Size)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortButtonStyle.GetBrushBySizeFromMultiSizeBrush");

	UFortButtonStyle_GetBrushBySizeFromMultiSizeBrush_Params params;
	params.MultiSizeBrush = MultiSizeBrush;
	params.Size = Size;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortBaseButton.SetStyle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  InStyle                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFortBaseButton::SetStyle(class UClass* InStyle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortBaseButton.SetStyle");

	UFortBaseButton_SetStyle_Params params;
	params.InStyle = InStyle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortBaseButton.SetSelectionGroup
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   InSelectionGroup               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFortBaseButton::SetSelectionGroup(const struct FName& InSelectionGroup)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortBaseButton.SetSelectionGroup");

	UFortBaseButton_SetSelectionGroup_Params params;
	params.InSelectionGroup = InSelectionGroup;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortBaseButton.SetSelected
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           InSelected                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UFortBaseButton::SetSelected(bool InSelected)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortBaseButton.SetSelected");

	UFortBaseButton_SetSelected_Params params;
	params.InSelected = InSelected;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortBaseButton.SetHovered
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           InHovered                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UFortBaseButton::SetHovered(bool InHovered)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortBaseButton.SetHovered");

	UFortBaseButton_SetHovered_Params params;
	params.InHovered = InHovered;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortBaseButton.SetClickMethod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<SlateCore_EButtonClickMethod> InClickMethod                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFortBaseButton::SetClickMethod(TEnumAsByte<SlateCore_EButtonClickMethod> InClickMethod)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortBaseButton.SetClickMethod");

	UFortBaseButton_SetClickMethod_Params params;
	params.InClickMethod = InClickMethod;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortBaseButton.SetClickable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           InClickable                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UFortBaseButton::SetClickable(bool InClickable)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortBaseButton.SetClickable");

	UFortBaseButton_SetClickable_Params params;
	params.InClickable = InClickable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortBaseButton.SetBrushSize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<FortniteGame_EFortBrushSize> InSize                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFortBaseButton::SetBrushSize(TEnumAsByte<FortniteGame_EFortBrushSize> InSize)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortBaseButton.SetBrushSize");

	UFortBaseButton_SetBrushSize_Params params;
	params.InSize = InSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortBaseButton.SetBangVisibility
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bVisible                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UFortBaseButton::SetBangVisibility(bool bVisible)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortBaseButton.SetBangVisibility");

	UFortBaseButton_SetBangVisibility_Params params;
	params.bVisible = bVisible;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortBaseButton.OnButtonClicked
// (Final, Native, Protected)
void UFortBaseButton::OnButtonClicked()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortBaseButton.OnButtonClicked");

	UFortBaseButton_OnButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortBaseButton.GetStyle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortButtonStyle*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UFortButtonStyle* UFortBaseButton::GetStyle()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortBaseButton.GetStyle");

	UFortBaseButton_GetStyle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortBaseButton.GetSelectionGroupIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UFortBaseButton::GetSelectionGroupIndex()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortBaseButton.GetSelectionGroupIndex");

	UFortBaseButton_GetSelectionGroupIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortBaseButton.GetSelected
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool UFortBaseButton::GetSelected()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortBaseButton.GetSelected");

	UFortBaseButton_GetSelected_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortBaseButton.GetCurrentStateStyle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FFortStateStyle         ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FFortStateStyle UFortBaseButton::GetCurrentStateStyle()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortBaseButton.GetCurrentStateStyle");

	UFortBaseButton_GetCurrentStateStyle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortBaseButton.GetCurrentFont
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSlateFontInfo          ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FSlateFontInfo UFortBaseButton::GetCurrentFont()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortBaseButton.GetCurrentFont");

	UFortBaseButton_GetCurrentFont_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortBaseButton.GetCurrentCustomPadding
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMargin                 ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FMargin UFortBaseButton::GetCurrentCustomPadding()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortBaseButton.GetCurrentCustomPadding");

	UFortBaseButton_GetCurrentCustomPadding_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortBaseButton.GetCurrentButtonPadding
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMargin                 ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FMargin UFortBaseButton::GetCurrentButtonPadding()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortBaseButton.GetCurrentButtonPadding");

	UFortBaseButton_GetCurrentButtonPadding_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortBaseButton.ForceClick
// (Final, Native, Public, BlueprintCallable)
void UFortBaseButton::ForceClick()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortBaseButton.ForceClick");

	UFortBaseButton_ForceClick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortFrontEndContext.ViewVaultItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFortItem*               ItemToView                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFortFrontEndContext::ViewVaultItem(class UFortItem* ItemToView)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortFrontEndContext.ViewVaultItem");

	UFortFrontEndContext_ViewVaultItem_Params params;
	params.ItemToView = ItemToView;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortFrontEndContext.TriggerUIFeedbackEvent
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// struct FName                   EventName                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFortFrontEndContext::TriggerUIFeedbackEvent(const struct FName& EventName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortFrontEndContext.TriggerUIFeedbackEvent");

	UFortFrontEndContext_TriggerUIFeedbackEvent_Params params;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortFrontEndContext.SkipInitialBenchmark
// (Final, Native, Public, BlueprintCallable)
void UFortFrontEndContext::SkipInitialBenchmark()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortFrontEndContext.SkipInitialBenchmark");

	UFortFrontEndContext_SkipInitialBenchmark_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortFrontEndContext.ShouldRunInitialBenchmark
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool UFortFrontEndContext::ShouldRunInitialBenchmark()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortFrontEndContext.ShouldRunInitialBenchmark");

	UFortFrontEndContext_ShouldRunInitialBenchmark_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortFrontEndContext.SetSelectedTheater
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            TheaterIndex                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFortFrontEndContext::SetSelectedTheater(int TheaterIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortFrontEndContext.SetSelectedTheater");

	UFortFrontEndContext_SetSelectedTheater_Params params;
	params.TheaterIndex = TheaterIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortFrontEndContext.SetPersonalHeroChoice
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFortHero*               Hero                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFortFrontEndContext::SetPersonalHeroChoice(class UFortHero* Hero)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortFrontEndContext.SetPersonalHeroChoice");

	UFortFrontEndContext_SetPersonalHeroChoice_Params params;
	params.Hero = Hero;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortFrontEndContext.SetHeroChoice
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            PartyMemberIndex               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortHero*               Hero                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFortFrontEndContext::SetHeroChoice(int PartyMemberIndex, class UFortHero* Hero)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortFrontEndContext.SetHeroChoice");

	UFortFrontEndContext_SetHeroChoice_Params params;
	params.PartyMemberIndex = PartyMemberIndex;
	params.Hero = Hero;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortFrontEndContext.SetFrontEndCamera
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<FortniteGame_EFrontEndCamera> NewState                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFortFrontEndContext::SetFrontEndCamera(TEnumAsByte<FortniteGame_EFrontEndCamera> NewState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortFrontEndContext.SetFrontEndCamera");

	UFortFrontEndContext_SetFrontEndCamera_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortFrontEndContext.SelectGadgetForSlot
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Slot                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortItemDefinition*     GadgetDefinition               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFortFrontEndContext::SelectGadgetForSlot(int Slot, class UFortItemDefinition* GadgetDefinition)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortFrontEndContext.SelectGadgetForSlot");

	UFortFrontEndContext_SelectGadgetForSlot_Params params;
	params.Slot = Slot;
	params.GadgetDefinition = GadgetDefinition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortFrontEndContext.SelectDefaultTheaterTile
// (Final, Native, Public, BlueprintCallable)
void UFortFrontEndContext::SelectDefaultTheaterTile()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortFrontEndContext.SelectDefaultTheaterTile");

	UFortFrontEndContext_SelectDefaultTheaterTile_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortFrontEndContext.RunBenchmarkAndApplyBestSettings
// (Final, Native, Public, BlueprintCallable)
void UFortFrontEndContext::RunBenchmarkAndApplyBestSettings()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortFrontEndContext.RunBenchmarkAndApplyBestSettings");

	UFortFrontEndContext_RunBenchmarkAndApplyBestSettings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortFrontEndContext.NotifyCreateBuildingClosed
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UHomeBaseBuilding*       Building                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFortFrontEndContext::NotifyCreateBuildingClosed(class UHomeBaseBuilding* Building)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortFrontEndContext.NotifyCreateBuildingClosed");

	UFortFrontEndContext_NotifyCreateBuildingClosed_Params params;
	params.Building = Building;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortFrontEndContext.MarkSeenItemsInVault
// (Final, Native, Public, BlueprintCallable)
void UFortFrontEndContext::MarkSeenItemsInVault()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortFrontEndContext.MarkSeenItemsInVault");

	UFortFrontEndContext_MarkSeenItemsInVault_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortFrontEndContext.LoadOutpostView
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            TheaterSlot                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool UFortFrontEndContext::LoadOutpostView(int TheaterSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortFrontEndContext.LoadOutpostView");

	UFortFrontEndContext_LoadOutpostView_Params params;
	params.TheaterSlot = TheaterSlot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortFrontEndContext.IsFabricatorDisintegrating
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            TheaterSlot                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool UFortFrontEndContext::IsFabricatorDisintegrating(int TheaterSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortFrontEndContext.IsFabricatorDisintegrating");

	UFortFrontEndContext_IsFabricatorDisintegrating_Params params;
	params.TheaterSlot = TheaterSlot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortFrontEndContext.IsActiveTileMissionValid
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool UFortFrontEndContext::IsActiveTileMissionValid()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortFrontEndContext.IsActiveTileMissionValid");

	UFortFrontEndContext_IsActiveTileMissionValid_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortFrontEndContext.GetTileMissionDetails
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AFortTheaterMapTile*     Tile                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFortMissionDetails     MissionDetails                 (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool UFortFrontEndContext::GetTileMissionDetails(class AFortTheaterMapTile* Tile, struct FFortMissionDetails* MissionDetails)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortFrontEndContext.GetTileMissionDetails");

	UFortFrontEndContext_GetTileMissionDetails_Params params;
	params.Tile = Tile;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MissionDetails != nullptr)
		*MissionDetails = params.MissionDetails;


	return params.ReturnValue;
}


// Function FortniteUI.FortFrontEndContext.GetTheaterType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            TheaterIndex                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<FortniteGame_EFortTheaterType> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TEnumAsByte<FortniteGame_EFortTheaterType> UFortFrontEndContext::GetTheaterType(int TheaterIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortFrontEndContext.GetTheaterType");

	UFortFrontEndContext_GetTheaterType_Params params;
	params.TheaterIndex = TheaterIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortFrontEndContext.GetTheaterRegionCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            TheaterIndex                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UFortFrontEndContext::GetTheaterRegionCount(int TheaterIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortFrontEndContext.GetTheaterRegionCount");

	UFortFrontEndContext_GetTheaterRegionCount_Params params;
	params.TheaterIndex = TheaterIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortFrontEndContext.GetTheaterName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            TheaterIndex                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UFortFrontEndContext::GetTheaterName(int TheaterIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortFrontEndContext.GetTheaterName");

	UFortFrontEndContext_GetTheaterName_Params params;
	params.TheaterIndex = TheaterIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortFrontEndContext.GetTheaterDifficultyText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            TheaterIndex                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UFortFrontEndContext::GetTheaterDifficultyText(int TheaterIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortFrontEndContext.GetTheaterDifficultyText");

	UFortFrontEndContext_GetTheaterDifficultyText_Params params;
	params.TheaterIndex = TheaterIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortFrontEndContext.GetTheaterData
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            TheaterIndex                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFortTheaterMapData     OutTheaterData                 (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool UFortFrontEndContext::GetTheaterData(int TheaterIndex, struct FFortTheaterMapData* OutTheaterData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortFrontEndContext.GetTheaterData");

	UFortFrontEndContext_GetTheaterData_Params params;
	params.TheaterIndex = TheaterIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutTheaterData != nullptr)
		*OutTheaterData = params.OutTheaterData;


	return params.ReturnValue;
}


// Function FortniteUI.FortFrontEndContext.GetSelectedTheaterIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UFortFrontEndContext::GetSelectedTheaterIndex()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortFrontEndContext.GetSelectedTheaterIndex");

	UFortFrontEndContext_GetSelectedTheaterIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortFrontEndContext.GetSelectedTheaterData
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FFortTheaterMapData     OutTheaterData                 (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool UFortFrontEndContext::GetSelectedTheaterData(struct FFortTheaterMapData* OutTheaterData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortFrontEndContext.GetSelectedTheaterData");

	UFortFrontEndContext_GetSelectedTheaterData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutTheaterData != nullptr)
		*OutTheaterData = params.OutTheaterData;


	return params.ReturnValue;
}


// Function FortniteUI.FortFrontEndContext.GetSelectableGadgets
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<class UFortWorldItem*>  SelectableGadgets              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<class UFortWorldItem*>  LastSelectedGadgets            (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UFortFrontEndContext::GetSelectableGadgets(TArray<class UFortWorldItem*>* SelectableGadgets, TArray<class UFortWorldItem*>* LastSelectedGadgets)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortFrontEndContext.GetSelectableGadgets");

	UFortFrontEndContext_GetSelectableGadgets_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SelectableGadgets != nullptr)
		*SelectableGadgets = params.SelectableGadgets;
	if (LastSelectedGadgets != nullptr)
		*LastSelectedGadgets = params.LastSelectedGadgets;

}


// Function FortniteUI.FortFrontEndContext.GetSchematicXpResourceBrush
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FSlateBrush UFortFrontEndContext::GetSchematicXpResourceBrush()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortFrontEndContext.GetSchematicXpResourceBrush");

	UFortFrontEndContext_GetSchematicXpResourceBrush_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortFrontEndContext.GetSchematicResourceItemDefinition
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortPersistentResourceItemDefinition* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UFortPersistentResourceItemDefinition* UFortFrontEndContext::GetSchematicResourceItemDefinition()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortFrontEndContext.GetSchematicResourceItemDefinition");

	UFortFrontEndContext_GetSchematicResourceItemDefinition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortFrontEndContext.GetRequirementText
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FFortRequirementsInfo   InRequirements                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UFortFrontEndContext::GetRequirementText(const struct FFortRequirementsInfo& InRequirements)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortFrontEndContext.GetRequirementText");

	UFortFrontEndContext_GetRequirementText_Params params;
	params.InRequirements = InRequirements;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortFrontEndContext.GetPersonnelXpResourceBrush
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FSlateBrush UFortFrontEndContext::GetPersonnelXpResourceBrush()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortFrontEndContext.GetPersonnelXpResourceBrush");

	UFortFrontEndContext_GetPersonnelXpResourceBrush_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortFrontEndContext.GetPersonnelResourceItemDefinition
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortPersistentResourceItemDefinition* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UFortPersistentResourceItemDefinition* UFortFrontEndContext::GetPersonnelResourceItemDefinition()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortFrontEndContext.GetPersonnelResourceItemDefinition");

	UFortFrontEndContext_GetPersonnelResourceItemDefinition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortFrontEndContext.GetPersistentResourceItemDefinition
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<FortniteGame_EFortPersistentResources> ResourceType                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortPersistentResourceItemDefinition* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UFortPersistentResourceItemDefinition* UFortFrontEndContext::GetPersistentResourceItemDefinition(TEnumAsByte<FortniteGame_EFortPersistentResources> ResourceType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortFrontEndContext.GetPersistentResourceItemDefinition");

	UFortFrontEndContext_GetPersistentResourceItemDefinition_Params params;
	params.ResourceType = ResourceType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortFrontEndContext.GetOutpostStructureUpgradeCost
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            TheaterSlot                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            UpgradeLevel                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortOutpostItemDefinition* OutpostStructure               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FFortItemQuantityPair> OutWorldItems                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FFortItemQuantityPair> OutAccountItems                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UFortFrontEndContext::GetOutpostStructureUpgradeCost(int TheaterSlot, int UpgradeLevel, class UFortOutpostItemDefinition* OutpostStructure, TArray<struct FFortItemQuantityPair>* OutWorldItems, TArray<struct FFortItemQuantityPair>* OutAccountItems)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortFrontEndContext.GetOutpostStructureUpgradeCost");

	UFortFrontEndContext_GetOutpostStructureUpgradeCost_Params params;
	params.TheaterSlot = TheaterSlot;
	params.UpgradeLevel = UpgradeLevel;
	params.OutpostStructure = OutpostStructure;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutWorldItems != nullptr)
		*OutWorldItems = params.OutWorldItems;
	if (OutAccountItems != nullptr)
		*OutAccountItems = params.OutAccountItems;

}


// Function FortniteUI.FortFrontEndContext.GetOutpostStructureMaxLevel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            TheaterSlot                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortOutpostItemDefinition* OutpostStructure               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UFortFrontEndContext::GetOutpostStructureMaxLevel(int TheaterSlot, class UFortOutpostItemDefinition* OutpostStructure)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortFrontEndContext.GetOutpostStructureMaxLevel");

	UFortFrontEndContext_GetOutpostStructureMaxLevel_Params params;
	params.TheaterSlot = TheaterSlot;
	params.OutpostStructure = OutpostStructure;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortFrontEndContext.GetOutpostStructureLevel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            TheaterSlot                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortOutpostItemDefinition* OutpostStructure               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UFortFrontEndContext::GetOutpostStructureLevel(int TheaterSlot, class UFortOutpostItemDefinition* OutpostStructure)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortFrontEndContext.GetOutpostStructureLevel");

	UFortFrontEndContext_GetOutpostStructureLevel_Params params;
	params.TheaterSlot = TheaterSlot;
	params.OutpostStructure = OutpostStructure;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortFrontEndContext.GetNumberOfItemsInStorageVault
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            TheaterSlot                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UFortFrontEndContext::GetNumberOfItemsInStorageVault(int TheaterSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortFrontEndContext.GetNumberOfItemsInStorageVault");

	UFortFrontEndContext_GetNumberOfItemsInStorageVault_Params params;
	params.TheaterSlot = TheaterSlot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortFrontEndContext.GetMaxNumberOfItemsInStorageVault
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            TheaterSlot                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UFortFrontEndContext::GetMaxNumberOfItemsInStorageVault(int TheaterSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortFrontEndContext.GetMaxNumberOfItemsInStorageVault");

	UFortFrontEndContext_GetMaxNumberOfItemsInStorageVault_Params params;
	params.TheaterSlot = TheaterSlot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortFrontEndContext.GetItemFromItemQuantityPair
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FFortItemQuantityPair   InPair                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UFortItemDefinition*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UFortItemDefinition* UFortFrontEndContext::GetItemFromItemQuantityPair(const struct FFortItemQuantityPair& InPair)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortFrontEndContext.GetItemFromItemQuantityPair");

	UFortFrontEndContext_GetItemFromItemQuantityPair_Params params;
	params.InPair = InPair;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortFrontEndContext.GetHeroPlayerPawnByIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            PartyMemberIndex               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AFortPlayerPawn*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AFortPlayerPawn* UFortFrontEndContext::GetHeroPlayerPawnByIndex(int PartyMemberIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortFrontEndContext.GetHeroPlayerPawnByIndex");

	UFortFrontEndContext_GetHeroPlayerPawnByIndex_Params params;
	params.PartyMemberIndex = PartyMemberIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortFrontEndContext.GetHarvestingToolForLevel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            TheaterSlot                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            InHarvestingOptimizerLevel     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortWorldItemDefinition* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UFortWorldItemDefinition* UFortFrontEndContext::GetHarvestingToolForLevel(int TheaterSlot, int InHarvestingOptimizerLevel)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortFrontEndContext.GetHarvestingToolForLevel");

	UFortFrontEndContext_GetHarvestingToolForLevel_Params params;
	params.TheaterSlot = TheaterSlot;
	params.InHarvestingOptimizerLevel = InHarvestingOptimizerLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortFrontEndContext.GetFrontEndCamera
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<FortniteGame_EFrontEndCamera> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TEnumAsByte<FortniteGame_EFrontEndCamera> UFortFrontEndContext::GetFrontEndCamera()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortFrontEndContext.GetFrontEndCamera");

	UFortFrontEndContext_GetFrontEndCamera_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortFrontEndContext.GetFeatureState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<FortniteUI_EFortFrontEndFeature> Feature                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<FortniteUI_EFortFrontEndFeatureState> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TEnumAsByte<FortniteUI_EFortFrontEndFeatureState> UFortFrontEndContext::GetFeatureState(TEnumAsByte<FortniteUI_EFortFrontEndFeature> Feature)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortFrontEndContext.GetFeatureState");

	UFortFrontEndContext_GetFeatureState_Params params;
	params.Feature = Feature;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortFrontEndContext.GetFabricatorStoredGooAmount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            TheaterSlot                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UFortFrontEndContext::GetFabricatorStoredGooAmount(int TheaterSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortFrontEndContext.GetFabricatorStoredGooAmount");

	UFortFrontEndContext_GetFabricatorStoredGooAmount_Params params;
	params.TheaterSlot = TheaterSlot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortFrontEndContext.GetFabricatorMaxCapacity
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            TheaterSlot                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UFortFrontEndContext::GetFabricatorMaxCapacity(int TheaterSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortFrontEndContext.GetFabricatorMaxCapacity");

	UFortFrontEndContext_GetFabricatorMaxCapacity_Params params;
	params.TheaterSlot = TheaterSlot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortFrontEndContext.GetFabricatorIncomingGooAmount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            TheaterSlot                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UFortFrontEndContext::GetFabricatorIncomingGooAmount(int TheaterSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortFrontEndContext.GetFabricatorIncomingGooAmount");

	UFortFrontEndContext_GetFabricatorIncomingGooAmount_Params params;
	params.TheaterSlot = TheaterSlot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortFrontEndContext.GetFabricatorDisintegrationSecondsRemaining
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            TheaterSlot                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UFortFrontEndContext::GetFabricatorDisintegrationSecondsRemaining(int TheaterSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortFrontEndContext.GetFabricatorDisintegrationSecondsRemaining");

	UFortFrontEndContext_GetFabricatorDisintegrationSecondsRemaining_Params params;
	params.TheaterSlot = TheaterSlot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortFrontEndContext.GetDesiredPlayButtonCamera
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<FortniteGame_EFrontEndCamera> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TEnumAsByte<FortniteGame_EFrontEndCamera> UFortFrontEndContext::GetDesiredPlayButtonCamera()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortFrontEndContext.GetDesiredPlayButtonCamera");

	UFortFrontEndContext_GetDesiredPlayButtonCamera_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortFrontEndContext.GetCurrentTheaterName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UFortFrontEndContext::GetCurrentTheaterName()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortFrontEndContext.GetCurrentTheaterName");

	UFortFrontEndContext_GetCurrentTheaterName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortFrontEndContext.GetAvailibleDifficulties
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FGameDifficultyInfo> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FGameDifficultyInfo> UFortFrontEndContext::GetAvailibleDifficulties()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortFrontEndContext.GetAvailibleDifficulties");

	UFortFrontEndContext_GetAvailibleDifficulties_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortFrontEndContext.GetAttributeIcon
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FFortAttributeInfo      InAttribute                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer   InRequiredTags                 (Parm, NativeAccessSpecifierPublic)
// struct FFortMultiSizeBrush     ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FFortMultiSizeBrush UFortFrontEndContext::GetAttributeIcon(const struct FFortAttributeInfo& InAttribute, const struct FGameplayTagContainer& InRequiredTags)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortFrontEndContext.GetAttributeIcon");

	UFortFrontEndContext_GetAttributeIcon_Params params;
	params.InAttribute = InAttribute;
	params.InRequiredTags = InRequiredTags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortFrontEndContext.GetAttributeDisplayName
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FFortAttributeInfo      InAttribute                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer   InRequiredTags                 (Parm, NativeAccessSpecifierPublic)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UFortFrontEndContext::GetAttributeDisplayName(const struct FFortAttributeInfo& InAttribute, const struct FGameplayTagContainer& InRequiredTags)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortFrontEndContext.GetAttributeDisplayName");

	UFortFrontEndContext_GetAttributeDisplayName_Params params;
	params.InAttribute = InAttribute;
	params.InRequiredTags = InRequiredTags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortFrontEndContext.GetAttributeDescription
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FFortAttributeInfo      InAttribute                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer   InRequiredTags                 (Parm, NativeAccessSpecifierPublic)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UFortFrontEndContext::GetAttributeDescription(const struct FFortAttributeInfo& InAttribute, const struct FGameplayTagContainer& InRequiredTags)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortFrontEndContext.GetAttributeDescription");

	UFortFrontEndContext_GetAttributeDescription_Params params;
	params.InAttribute = InAttribute;
	params.InRequiredTags = InRequiredTags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortFrontEndContext.GetAllTheaterData
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FFortTheaterMapData> OutAllTheaterData              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool UFortFrontEndContext::GetAllTheaterData(TArray<struct FFortTheaterMapData>* OutAllTheaterData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortFrontEndContext.GetAllTheaterData");

	UFortFrontEndContext_GetAllTheaterData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutAllTheaterData != nullptr)
		*OutAllTheaterData = params.OutAllTheaterData;


	return params.ReturnValue;
}


// Function FortniteUI.FortFrontEndContext.GetActiveTileMissionDetails
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FFortMissionDetails     MissionDetails                 (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool UFortFrontEndContext::GetActiveTileMissionDetails(struct FFortMissionDetails* MissionDetails)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortFrontEndContext.GetActiveTileMissionDetails");

	UFortFrontEndContext_GetActiveTileMissionDetails_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MissionDetails != nullptr)
		*MissionDetails = params.MissionDetails;


	return params.ReturnValue;
}


// Function FortniteUI.FortFrontEndContext.GetActiveTile
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AFortTheaterMapTile*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AFortTheaterMapTile* UFortFrontEndContext::GetActiveTile()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortFrontEndContext.GetActiveTile");

	UFortFrontEndContext_GetActiveTile_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortFrontEndContext.GetAccountLevelUpRewards
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FFortItemQuantityPair> Rewards                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// int                            AccountLevel                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFortFrontEndContext::GetAccountLevelUpRewards(TArray<struct FFortItemQuantityPair>* Rewards, int AccountLevel)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortFrontEndContext.GetAccountLevelUpRewards");

	UFortFrontEndContext_GetAccountLevelUpRewards_Params params;
	params.AccountLevel = AccountLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Rewards != nullptr)
		*Rewards = params.Rewards;

}


// Function FortniteUI.FortFrontEndContext.ForceSetFeatureState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<FortniteUI_EFortFrontEndFeature> Feature                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<FortniteUI_EFortFrontEndFeatureState> State                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFortFrontEndContext::ForceSetFeatureState(TEnumAsByte<FortniteUI_EFortFrontEndFeature> Feature, TEnumAsByte<FortniteUI_EFortFrontEndFeatureState> State)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortFrontEndContext.ForceSetFeatureState");

	UFortFrontEndContext_ForceSetFeatureState_Params params;
	params.Feature = Feature;
	params.State = State;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortFrontEndContext.CreateKeepMenu
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UNativeWidgetHost*       InNativeWidgetHost             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UHomeBaseBuilding*       Building                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFortFrontEndContext::CreateKeepMenu(class UNativeWidgetHost* InNativeWidgetHost, class UHomeBaseBuilding* Building)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortFrontEndContext.CreateKeepMenu");

	UFortFrontEndContext_CreateKeepMenu_Params params;
	params.InNativeWidgetHost = InNativeWidgetHost;
	params.Building = Building;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortFrontEndContext.ClearSelectedTheater
// (Final, Native, Public, BlueprintCallable)
void UFortFrontEndContext::ClearSelectedTheater()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortFrontEndContext.ClearSelectedTheater");

	UFortFrontEndContext_ClearSelectedTheater_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortFrontEndContext.ClearNativeWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UNativeWidgetHost*       InNativeWidgetHost             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFortFrontEndContext::ClearNativeWidget(class UNativeWidgetHost* InNativeWidgetHost)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortFrontEndContext.ClearNativeWidget");

	UFortFrontEndContext_ClearNativeWidget_Params params;
	params.InNativeWidgetHost = InNativeWidgetHost;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortFrontEndContext.BindToFeatureStateAndInitialize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<FortniteUI_EFortFrontEndFeature> Feature                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
void UFortFrontEndContext::BindToFeatureStateAndInitialize(TEnumAsByte<FortniteUI_EFortFrontEndFeature> Feature, const struct FScriptDelegate& Delegate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortFrontEndContext.BindToFeatureStateAndInitialize");

	UFortFrontEndContext_BindToFeatureStateAndInitialize_Params params;
	params.Feature = Feature;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortGlobalUIContext.UnregisterToReceiveNotifications
// (Final, Native, Public, BlueprintCallable)
void UFortGlobalUIContext::UnregisterToReceiveNotifications()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortGlobalUIContext.UnregisterToReceiveNotifications");

	UFortGlobalUIContext_UnregisterToReceiveNotifications_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortGlobalUIContext.UnregisterScriptedAction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  ScriptedAction                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFortGlobalUIContext::UnregisterScriptedAction(class UClass* ScriptedAction)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortGlobalUIContext.UnregisterScriptedAction");

	UFortGlobalUIContext_UnregisterScriptedAction_Params params;
	params.ScriptedAction = ScriptedAction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortGlobalUIContext.TakeScreenshot
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         Callback                       (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
void UFortGlobalUIContext::TakeScreenshot(const struct FScriptDelegate& Callback)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortGlobalUIContext.TakeScreenshot");

	UFortGlobalUIContext_TakeScreenshot_Params params;
	params.Callback = Callback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortGlobalUIContext.ShowBang
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<FortniteGame_EFortBangType> Type                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFortGlobalUIContext::ShowBang(TEnumAsByte<FortniteGame_EFortBangType> Type)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortGlobalUIContext.ShowBang");

	UFortGlobalUIContext_ShowBang_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortGlobalUIContext.ShouldCloseMenuOnEscape
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool UFortGlobalUIContext::ShouldCloseMenuOnEscape()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortGlobalUIContext.ShouldCloseMenuOnEscape");

	UFortGlobalUIContext_ShouldCloseMenuOnEscape_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortGlobalUIContext.SendUINavigationAnalytic
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Destination                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bUserInitiated                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UFortGlobalUIContext::SendUINavigationAnalytic(const struct FString& Destination, bool bUserInitiated)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortGlobalUIContext.SendUINavigationAnalytic");

	UFortGlobalUIContext_SendUINavigationAnalytic_Params params;
	params.Destination = Destination;
	params.bUserInitiated = bUserInitiated;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortGlobalUIContext.SendLeaveZoneAnalytic
// (Final, Native, Public, BlueprintCallable)
void UFortGlobalUIContext::SendLeaveZoneAnalytic()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortGlobalUIContext.SendLeaveZoneAnalytic");

	UFortGlobalUIContext_SendLeaveZoneAnalytic_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortGlobalUIContext.SendExperienceRatingAnalytic
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 RatingType                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            StarCount                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 GameSessionID                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Comment                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFortGlobalUIContext::SendExperienceRatingAnalytic(const struct FString& RatingType, int StarCount, const struct FString& GameSessionID, const struct FString& Comment)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortGlobalUIContext.SendExperienceRatingAnalytic");

	UFortGlobalUIContext_SendExperienceRatingAnalytic_Params params;
	params.RatingType = RatingType;
	params.StarCount = StarCount;
	params.GameSessionID = GameSessionID;
	params.Comment = Comment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortGlobalUIContext.RemoveNotification
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FFortDialogDescription  NotificationDescription        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UFortGlobalUIContext::RemoveNotification(const struct FFortDialogDescription& NotificationDescription)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortGlobalUIContext.RemoveNotification");

	UFortGlobalUIContext_RemoveNotification_Params params;
	params.NotificationDescription = NotificationDescription;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortGlobalUIContext.RegisterToReceiveNotifications
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         InOnNotifcationAvailable       (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
void UFortGlobalUIContext::RegisterToReceiveNotifications(const struct FScriptDelegate& InOnNotifcationAvailable)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortGlobalUIContext.RegisterToReceiveNotifications");

	UFortGlobalUIContext_RegisterToReceiveNotifications_Params params;
	params.InOnNotifcationAvailable = InOnNotifcationAvailable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortGlobalUIContext.RegisterScriptedActions
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class UClass*>          ScriptedActions                (Parm, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
void UFortGlobalUIContext::RegisterScriptedActions(TArray<class UClass*> ScriptedActions)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortGlobalUIContext.RegisterScriptedActions");

	UFortGlobalUIContext_RegisterScriptedActions_Params params;
	params.ScriptedActions = ScriptedActions;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortGlobalUIContext.RegisterScriptedAction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  ScriptedAction                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFortGlobalUIContext::RegisterScriptedAction(class UClass* ScriptedAction)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortGlobalUIContext.RegisterScriptedAction");

	UFortGlobalUIContext_RegisterScriptedAction_Params params;
	params.ScriptedAction = ScriptedAction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortGlobalUIContext.QuitGame
// (Final, Native, Public, BlueprintCallable)
void UFortGlobalUIContext::QuitGame()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortGlobalUIContext.QuitGame");

	UFortGlobalUIContext_QuitGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortGlobalUIContext.QueryGameBackendVersion
// (Final, Native, Public, BlueprintCallable)
void UFortGlobalUIContext::QueryGameBackendVersion()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortGlobalUIContext.QueryGameBackendVersion");

	UFortGlobalUIContext_QueryGameBackendVersion_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortGlobalUIContext.ProcessNotificationResult
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TEnumAsByte<FortniteUI_EFortDialogResult> InResult                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFortDialogDescription  NotificationDescription        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UFortGlobalUIContext::ProcessNotificationResult(TEnumAsByte<FortniteUI_EFortDialogResult> InResult, const struct FFortDialogDescription& NotificationDescription)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortGlobalUIContext.ProcessNotificationResult");

	UFortGlobalUIContext_ProcessNotificationResult_Params params;
	params.InResult = InResult;
	params.NotificationDescription = NotificationDescription;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// DelegateFunction FortniteUI.FortGlobalUIContext.OnQueryFortBackendVersionDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// struct FFortBackendVersion     FortBackendVersion             (Parm, NativeAccessSpecifierPublic)
void UFortGlobalUIContext::OnQueryFortBackendVersionDelegate__DelegateSignature(const struct FFortBackendVersion& FortBackendVersion)
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction FortniteUI.FortGlobalUIContext.OnQueryFortBackendVersionDelegate__DelegateSignature");

	UFortGlobalUIContext_OnQueryFortBackendVersionDelegate__DelegateSignature_Params params;
	params.FortBackendVersion = FortBackendVersion;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// DelegateFunction FortniteUI.FortGlobalUIContext.OnNetworkErrorDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParms)
// Parameters:
// struct FText                   NetworkErrorMessage            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UFortGlobalUIContext::OnNetworkErrorDelegate__DelegateSignature(const struct FText& NetworkErrorMessage)
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction FortniteUI.FortGlobalUIContext.OnNetworkErrorDelegate__DelegateSignature");

	UFortGlobalUIContext_OnNetworkErrorDelegate__DelegateSignature_Params params;
	params.NetworkErrorMessage = NetworkErrorMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortGlobalUIContext.Logout
// (Final, Native, Public, BlueprintCallable)
void UFortGlobalUIContext::Logout()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortGlobalUIContext.Logout");

	UFortGlobalUIContext_Logout_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortGlobalUIContext.IsUIVisible
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool UFortGlobalUIContext::IsUIVisible()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortGlobalUIContext.IsUIVisible");

	UFortGlobalUIContext_IsUIVisible_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortGlobalUIContext.IsInZone
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool UFortGlobalUIContext::IsInZone()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortGlobalUIContext.IsInZone");

	UFortGlobalUIContext_IsInZone_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortGlobalUIContext.IsInOutpostZone
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool UFortGlobalUIContext::IsInOutpostZone()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortGlobalUIContext.IsInOutpostZone");

	UFortGlobalUIContext_IsInOutpostZone_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortGlobalUIContext.IsHUDVisible
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool UFortGlobalUIContext::IsHUDVisible()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortGlobalUIContext.IsHUDVisible");

	UFortGlobalUIContext_IsHUDVisible_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortGlobalUIContext.IsBluGloEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool UFortGlobalUIContext::IsBluGloEnabled()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortGlobalUIContext.IsBluGloEnabled");

	UFortGlobalUIContext_IsBluGloEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortGlobalUIContext.HideBang
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<FortniteGame_EFortBangType> Type                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFortGlobalUIContext::HideBang(TEnumAsByte<FortniteGame_EFortBangType> Type)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortGlobalUIContext.HideBang");

	UFortGlobalUIContext_HideBang_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortGlobalUIContext.GetWatermark
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UFortGlobalUIContext::GetWatermark()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortGlobalUIContext.GetWatermark");

	UFortGlobalUIContext_GetWatermark_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortGlobalUIContext.GetTeamPower
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            TeamPower                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            PersonalPower                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFortGlobalUIContext::GetTeamPower(int* TeamPower, int* PersonalPower)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortGlobalUIContext.GetTeamPower");

	UFortGlobalUIContext_GetTeamPower_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TeamPower != nullptr)
		*TeamPower = params.TeamPower;
	if (PersonalPower != nullptr)
		*PersonalPower = params.PersonalPower;

}


// Function FortniteUI.FortGlobalUIContext.GetQuestManager
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortQuestManager*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UFortQuestManager* UFortGlobalUIContext::GetQuestManager()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortGlobalUIContext.GetQuestManager");

	UFortGlobalUIContext_GetQuestManager_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortGlobalUIContext.GetNextNotification
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FFortDialogDescription  NotifcationDescription         (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool UFortGlobalUIContext::GetNextNotification(struct FFortDialogDescription* NotifcationDescription)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortGlobalUIContext.GetNextNotification");

	UFortGlobalUIContext_GetNextNotification_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NotifcationDescription != nullptr)
		*NotifcationDescription = params.NotifcationDescription;


	return params.ReturnValue;
}


// Function FortniteUI.FortGlobalUIContext.GetMessageManager
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   ManagerName                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bCreatedNew                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// class UFortUIMessageManager*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UFortUIMessageManager* UFortGlobalUIContext::GetMessageManager(const struct FName& ManagerName, bool* bCreatedNew)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortGlobalUIContext.GetMessageManager");

	UFortGlobalUIContext_GetMessageManager_Params params;
	params.ManagerName = ManagerName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bCreatedNew != nullptr)
		*bCreatedNew = params.bCreatedNew;


	return params.ReturnValue;
}


// Function FortniteUI.FortGlobalUIContext.GetLastGameSummaryInfo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameSummaryInfo        ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FGameSummaryInfo UFortGlobalUIContext::GetLastGameSummaryInfo()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortGlobalUIContext.GetLastGameSummaryInfo");

	UFortGlobalUIContext_GetLastGameSummaryInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortGlobalUIContext.GetKeyTextForAction
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   Action                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UFortGlobalUIContext::GetKeyTextForAction(const struct FName& Action)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortGlobalUIContext.GetKeyTextForAction");

	UFortGlobalUIContext_GetKeyTextForAction_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortGlobalUIContext.GetKeyForAction
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   Action                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKey                    ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FKey UFortGlobalUIContext::GetKeyForAction(const struct FName& Action)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortGlobalUIContext.GetKeyForAction");

	UFortGlobalUIContext_GetKeyForAction_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortGlobalUIContext.GetGameBackendVersion
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FFortBackendVersion     ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FFortBackendVersion UFortGlobalUIContext::GetGameBackendVersion()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortGlobalUIContext.GetGameBackendVersion");

	UFortGlobalUIContext_GetGameBackendVersion_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortGlobalUIContext.GetFeatureState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<FortniteUI_EFortUIFeature> Feature                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<FortniteUI_EFortUIFeatureState> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TEnumAsByte<FortniteUI_EFortUIFeatureState> UFortGlobalUIContext::GetFeatureState(TEnumAsByte<FortniteUI_EFortUIFeature> Feature)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortGlobalUIContext.GetFeatureState");

	UFortGlobalUIContext_GetFeatureState_Params params;
	params.Feature = Feature;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortGlobalUIContext.GetBackendName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UFortGlobalUIContext::GetBackendName()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortGlobalUIContext.GetBackendName");

	UFortGlobalUIContext_GetBackendName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortGlobalUIContext.GetActiveKeybindSet
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<FortniteGame_EFortInputPreset> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TEnumAsByte<FortniteGame_EFortInputPreset> UFortGlobalUIContext::GetActiveKeybindSet()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortGlobalUIContext.GetActiveKeybindSet");

	UFortGlobalUIContext_GetActiveKeybindSet_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortGlobalUIContext.DisplayStateContent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bDisplay                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UFortGlobalUIContext::DisplayStateContent(bool bDisplay)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortGlobalUIContext.DisplayStateContent");

	UFortGlobalUIContext_DisplayStateContent_Params params;
	params.bDisplay = bDisplay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortGlobalUIContext.ClearSelectionGroup
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   SelectionGroup                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFortGlobalUIContext::ClearSelectionGroup(const struct FName& SelectionGroup)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortGlobalUIContext.ClearSelectionGroup");

	UFortGlobalUIContext_ClearSelectionGroup_Params params;
	params.SelectionGroup = SelectionGroup;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortGlobalUIContext.ClearLastGameSummaryInfo
// (Final, Native, Public, BlueprintCallable, Const)
void UFortGlobalUIContext::ClearLastGameSummaryInfo()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortGlobalUIContext.ClearLastGameSummaryInfo");

	UFortGlobalUIContext_ClearLastGameSummaryInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortGlobalUIContext.CheckNetworkError
// (Final, Native, Public, BlueprintCallable)
void UFortGlobalUIContext::CheckNetworkError()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortGlobalUIContext.CheckNetworkError");

	UFortGlobalUIContext_CheckNetworkError_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortGlobalUIContext.CheckFlag
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 FlagName                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<FortniteUI_EFlagStatus> OutStatus                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFortGlobalUIContext::STATIC_CheckFlag(const struct FString& FlagName, TEnumAsByte<FortniteUI_EFlagStatus>* OutStatus)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortGlobalUIContext.CheckFlag");

	UFortGlobalUIContext_CheckFlag_Params params;
	params.FlagName = FlagName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutStatus != nullptr)
		*OutStatus = params.OutStatus;

}


// Function FortniteUI.FortGlobalUIContext.BindToFeatureStateAndInitialize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<FortniteUI_EFortUIFeature> Feature                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptDelegate         Delegate                       (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
void UFortGlobalUIContext::BindToFeatureStateAndInitialize(TEnumAsByte<FortniteUI_EFortUIFeature> Feature, const struct FScriptDelegate& Delegate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortGlobalUIContext.BindToFeatureStateAndInitialize");

	UFortGlobalUIContext_BindToFeatureStateAndInitialize_Params params;
	params.Feature = Feature;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortGridPickerTile.SetData
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                 InData                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFortGridPickerTile::SetData(class UObject* InData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortGridPickerTile.SetData");

	UFortGridPickerTile_SetData_Params params;
	params.InData = InData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortGridPickerTile.OnMouseLeave
// (Event, Protected, BlueprintEvent)
void UFortGridPickerTile::OnMouseLeave()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortGridPickerTile.OnMouseLeave");

	UFortGridPickerTile_OnMouseLeave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortGridPickerTile.OnMouseEnter
// (Event, Protected, BlueprintEvent)
void UFortGridPickerTile::OnMouseEnter()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortGridPickerTile.OnMouseEnter");

	UFortGridPickerTile_OnMouseEnter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortGridPickerTile.OnClicked
// (Event, Protected, BlueprintEvent)
void UFortGridPickerTile::OnClicked()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortGridPickerTile.OnClicked");

	UFortGridPickerTile_OnClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortGridPickerTile.ForwardClicked
// (Final, Native, Protected, BlueprintCallable)
void UFortGridPickerTile::ForwardClicked()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortGridPickerTile.ForwardClicked");

	UFortGridPickerTile_ForwardClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortGridWidgetBase.SetTileWidth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Width                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFortGridWidgetBase::SetTileWidth(float Width)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortGridWidgetBase.SetTileWidth");

	UFortGridWidgetBase_SetTileWidth_Params params;
	params.Width = Width;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortGridWidgetBase.SetTilesDown
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Down                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFortGridWidgetBase::SetTilesDown(int Down)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortGridWidgetBase.SetTilesDown");

	UFortGridWidgetBase_SetTilesDown_Params params;
	params.Down = Down;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortGridWidgetBase.SetTilesAcross
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Across                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFortGridWidgetBase::SetTilesAcross(int Across)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortGridWidgetBase.SetTilesAcross");

	UFortGridWidgetBase_SetTilesAcross_Params params;
	params.Across = Across;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortGridWidgetBase.SetTilePadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                 Padding                        (Parm, NativeAccessSpecifierPublic)
void UFortGridWidgetBase::SetTilePadding(const struct FMargin& Padding)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortGridWidgetBase.SetTilePadding");

	UFortGridWidgetBase_SetTilePadding_Params params;
	params.Padding = Padding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortGridWidgetBase.SetTileHeight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Height                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFortGridWidgetBase::SetTileHeight(float Height)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortGridWidgetBase.SetTileHeight");

	UFortGridWidgetBase_SetTileHeight_Params params;
	params.Height = Height;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortGridWidgetBase.SetPeekOverflowTilePercentage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Percent                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFortGridWidgetBase::SetPeekOverflowTilePercentage(float Percent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortGridWidgetBase.SetPeekOverflowTilePercentage");

	UFortGridWidgetBase_SetPeekOverflowTilePercentage_Params params;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortGridWidgetBase.SetDataProvider
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<class UObject*>         Data                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UFortGridWidgetBase::SetDataProvider(TArray<class UObject*> Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortGridWidgetBase.SetDataProvider");

	UFortGridWidgetBase_SetDataProvider_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortGridWidgetBase.SetClearWidgetType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  InClearWidgetType              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFortGridWidgetBase::SetClearWidgetType(class UClass* InClearWidgetType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortGridWidgetBase.SetClearWidgetType");

	UFortGridWidgetBase_SetClearWidgetType_Params params;
	params.InClearWidgetType = InClearWidgetType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortGridPickerButton.SetIsOpen
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ShouldBeOpen                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UFortGridPickerButton::SetIsOpen(bool ShouldBeOpen)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortGridPickerButton.SetIsOpen");

	UFortGridPickerButton_SetIsOpen_Params params;
	params.ShouldBeOpen = ShouldBeOpen;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// DelegateFunction FortniteUI.FortGridPickerButton.OnIsGridPickerOpenChanged__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// bool                           IsOpen                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UFortGridPickerButton::OnIsGridPickerOpenChanged__DelegateSignature(bool IsOpen)
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction FortniteUI.FortGridPickerButton.OnIsGridPickerOpenChanged__DelegateSignature");

	UFortGridPickerButton_OnIsGridPickerOpenChanged__DelegateSignature_Params params;
	params.IsOpen = IsOpen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortGridPickerButton.OnButtonClicked
// (Final, Native, Public, BlueprintCallable)
void UFortGridPickerButton::OnButtonClicked()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortGridPickerButton.OnButtonClicked");

	UFortGridPickerButton_OnButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// DelegateFunction FortniteUI.FortGridPickerButton.CreateGridWidget__DelegateSignature
// (Public, Delegate)
// Parameters:
// class UFortGridPickerGrid*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UFortGridPickerGrid* UFortGridPickerButton::CreateGridWidget__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction FortniteUI.FortGridPickerButton.CreateGridWidget__DelegateSignature");

	UFortGridPickerButton_CreateGridWidget__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortHeroManagementContext.SetShowingStatsScreen
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bIsShowingStats                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UFortHeroManagementContext::SetShowingStatsScreen(bool bIsShowingStats)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortHeroManagementContext.SetShowingStatsScreen");

	UFortHeroManagementContext_SetShowingStatsScreen_Params params;
	params.bIsShowingStats = bIsShowingStats;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortHeroManagementContext.SetHeroNameFromID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 HeroId                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 NewName                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool UFortHeroManagementContext::SetHeroNameFromID(const struct FString& HeroId, const struct FString& NewName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortHeroManagementContext.SetHeroNameFromID");

	UFortHeroManagementContext_SetHeroNameFromID_Params params;
	params.HeroId = HeroId;
	params.NewName = NewName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortHeroManagementContext.SetHeroName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 NewName                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool UFortHeroManagementContext::SetHeroName(const struct FString& NewName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortHeroManagementContext.SetHeroName");

	UFortHeroManagementContext_SetHeroName_Params params;
	params.NewName = NewName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortHeroManagementContext.SetCurrentHero
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 HeroId                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool UFortHeroManagementContext::SetCurrentHero(const struct FString& HeroId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortHeroManagementContext.SetCurrentHero");

	UFortHeroManagementContext_SetCurrentHero_Params params;
	params.HeroId = HeroId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortHeroManagementContext.RequestSetTraitDepthFromID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 HeroId                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            TraitIdx                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Depth                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool UFortHeroManagementContext::RequestSetTraitDepthFromID(const struct FString& HeroId, int TraitIdx, int Depth)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortHeroManagementContext.RequestSetTraitDepthFromID");

	UFortHeroManagementContext_RequestSetTraitDepthFromID_Params params;
	params.HeroId = HeroId;
	params.TraitIdx = TraitIdx;
	params.Depth = Depth;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortHeroManagementContext.RequestSetTraitDepth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            TraitIdx                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Depth                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool UFortHeroManagementContext::RequestSetTraitDepth(int TraitIdx, int Depth)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortHeroManagementContext.RequestSetTraitDepth");

	UFortHeroManagementContext_RequestSetTraitDepth_Params params;
	params.TraitIdx = TraitIdx;
	params.Depth = Depth;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortHeroManagementContext.RequestDeleteHero
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 HeroId                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool UFortHeroManagementContext::RequestDeleteHero(const struct FString& HeroId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortHeroManagementContext.RequestDeleteHero");

	UFortHeroManagementContext_RequestDeleteHero_Params params;
	params.HeroId = HeroId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortHeroManagementContext.RequestCreateHero
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFortHeroType*           HeroType                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<FortniteGame_EFortCustomGender> Gender                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool UFortHeroManagementContext::RequestCreateHero(class UFortHeroType* HeroType, const struct FString& Name, TEnumAsByte<FortniteGame_EFortCustomGender> Gender)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortHeroManagementContext.RequestCreateHero");

	UFortHeroManagementContext_RequestCreateHero_Params params;
	params.HeroType = HeroType;
	params.Name = Name;
	params.Gender = Gender;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortHeroManagementContext.RedeemPrevAbilityFromID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 HeroId                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            TraitIdx                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool UFortHeroManagementContext::RedeemPrevAbilityFromID(const struct FString& HeroId, int TraitIdx)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortHeroManagementContext.RedeemPrevAbilityFromID");

	UFortHeroManagementContext_RedeemPrevAbilityFromID_Params params;
	params.HeroId = HeroId;
	params.TraitIdx = TraitIdx;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortHeroManagementContext.RedeemPrevAbility
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            TraitIdx                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool UFortHeroManagementContext::RedeemPrevAbility(int TraitIdx)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortHeroManagementContext.RedeemPrevAbility");

	UFortHeroManagementContext_RedeemPrevAbility_Params params;
	params.TraitIdx = TraitIdx;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortHeroManagementContext.RedeemAllAbilitiesFromID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 HeroId                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFortHeroManagementContext::RedeemAllAbilitiesFromID(const struct FString& HeroId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortHeroManagementContext.RedeemAllAbilitiesFromID");

	UFortHeroManagementContext_RedeemAllAbilitiesFromID_Params params;
	params.HeroId = HeroId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortHeroManagementContext.RedeemAllAbilities
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool UFortHeroManagementContext::RedeemAllAbilities()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortHeroManagementContext.RedeemAllAbilities");

	UFortHeroManagementContext_RedeemAllAbilities_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortHeroManagementContext.PurchaseNextAbilityFromID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 HeroId                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            TraitIdx                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool UFortHeroManagementContext::PurchaseNextAbilityFromID(const struct FString& HeroId, int TraitIdx)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortHeroManagementContext.PurchaseNextAbilityFromID");

	UFortHeroManagementContext_PurchaseNextAbilityFromID_Params params;
	params.HeroId = HeroId;
	params.TraitIdx = TraitIdx;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortHeroManagementContext.PurchaseNextAbility
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            TraitIdx                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool UFortHeroManagementContext::PurchaseNextAbility(int TraitIdx)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortHeroManagementContext.PurchaseNextAbility");

	UFortHeroManagementContext_PurchaseNextAbility_Params params;
	params.TraitIdx = TraitIdx;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortHeroManagementContext.NumHeroSlots
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UFortHeroManagementContext::NumHeroSlots()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortHeroManagementContext.NumHeroSlots");

	UFortHeroManagementContext_NumHeroSlots_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortHeroManagementContext.IsSkillTreeUnlockedFromID
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 HeroId                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool UFortHeroManagementContext::IsSkillTreeUnlockedFromID(const struct FString& HeroId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortHeroManagementContext.IsSkillTreeUnlockedFromID");

	UFortHeroManagementContext_IsSkillTreeUnlockedFromID_Params params;
	params.HeroId = HeroId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortHeroManagementContext.IsSkillTreeUnlocked
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool UFortHeroManagementContext::IsSkillTreeUnlocked()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortHeroManagementContext.IsSkillTreeUnlocked");

	UFortHeroManagementContext_IsSkillTreeUnlocked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortHeroManagementContext.IsShowingStatsScreen
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool UFortHeroManagementContext::IsShowingStatsScreen()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortHeroManagementContext.IsShowingStatsScreen");

	UFortHeroManagementContext_IsShowingStatsScreen_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortHeroManagementContext.IsDeleteHeroEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool UFortHeroManagementContext::IsDeleteHeroEnabled()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortHeroManagementContext.IsDeleteHeroEnabled");

	UFortHeroManagementContext_IsDeleteHeroEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortHeroManagementContext.IsCreateHeroEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool UFortHeroManagementContext::IsCreateHeroEnabled()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortHeroManagementContext.IsCreateHeroEnabled");

	UFortHeroManagementContext_IsCreateHeroEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortHeroManagementContext.GetTraitFromID
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 HeroId                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            TraitIdx                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortTrait*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UFortTrait* UFortHeroManagementContext::GetTraitFromID(const struct FString& HeroId, int TraitIdx)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortHeroManagementContext.GetTraitFromID");

	UFortHeroManagementContext_GetTraitFromID_Params params;
	params.HeroId = HeroId;
	params.TraitIdx = TraitIdx;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortHeroManagementContext.GetTraitDepthFromID
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 HeroId                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            TraitIdx                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UFortHeroManagementContext::GetTraitDepthFromID(const struct FString& HeroId, int TraitIdx)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortHeroManagementContext.GetTraitDepthFromID");

	UFortHeroManagementContext_GetTraitDepthFromID_Params params;
	params.HeroId = HeroId;
	params.TraitIdx = TraitIdx;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortHeroManagementContext.GetTraitDepth
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            TraitIdx                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Depth                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool UFortHeroManagementContext::GetTraitDepth(int TraitIdx, int* Depth)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortHeroManagementContext.GetTraitDepth");

	UFortHeroManagementContext_GetTraitDepth_Params params;
	params.TraitIdx = TraitIdx;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Depth != nullptr)
		*Depth = params.Depth;


	return params.ReturnValue;
}


// Function FortniteUI.FortHeroManagementContext.GetTrait
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            TraitIdx                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortTrait*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UFortTrait* UFortHeroManagementContext::GetTrait(int TraitIdx)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortHeroManagementContext.GetTrait");

	UFortHeroManagementContext_GetTrait_Params params;
	params.TraitIdx = TraitIdx;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortHeroManagementContext.GetNumUnspentAbilityPointsFromID
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 HeroId                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UFortHeroManagementContext::GetNumUnspentAbilityPointsFromID(const struct FString& HeroId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortHeroManagementContext.GetNumUnspentAbilityPointsFromID");

	UFortHeroManagementContext_GetNumUnspentAbilityPointsFromID_Params params;
	params.HeroId = HeroId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortHeroManagementContext.GetNumUnspentAbilityPoints
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            NumAbilityPoints               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool UFortHeroManagementContext::GetNumUnspentAbilityPoints(int* NumAbilityPoints)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortHeroManagementContext.GetNumUnspentAbilityPoints");

	UFortHeroManagementContext_GetNumUnspentAbilityPoints_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NumAbilityPoints != nullptr)
		*NumAbilityPoints = params.NumAbilityPoints;


	return params.ReturnValue;
}


// Function FortniteUI.FortHeroManagementContext.GetNumHeroTraits
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UFortHeroManagementContext::GetNumHeroTraits()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortHeroManagementContext.GetNumHeroTraits");

	UFortHeroManagementContext_GetNumHeroTraits_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortHeroManagementContext.GetNextAbilityCostFromID
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 HeroId                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            TraitIdx                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UFortHeroManagementContext::GetNextAbilityCostFromID(const struct FString& HeroId, int TraitIdx)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortHeroManagementContext.GetNextAbilityCostFromID");

	UFortHeroManagementContext_GetNextAbilityCostFromID_Params params;
	params.HeroId = HeroId;
	params.TraitIdx = TraitIdx;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortHeroManagementContext.GetNextAbilityCost
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            TraitIdx                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UFortHeroManagementContext::GetNextAbilityCost(int TraitIdx)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortHeroManagementContext.GetNextAbilityCost");

	UFortHeroManagementContext_GetNextAbilityCost_Params params;
	params.TraitIdx = TraitIdx;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortHeroManagementContext.GetMaxNameLength
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UFortHeroManagementContext::GetMaxNameLength()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortHeroManagementContext.GetMaxNameLength");

	UFortHeroManagementContext_GetMaxNameLength_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortHeroManagementContext.GetHeroDataFromID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 HeroId                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHeroUIData             ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FHeroUIData UFortHeroManagementContext::GetHeroDataFromID(const struct FString& HeroId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortHeroManagementContext.GetHeroDataFromID");

	UFortHeroManagementContext_GetHeroDataFromID_Params params;
	params.HeroId = HeroId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortHeroManagementContext.GetHeroData
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FHeroUIData             HeroData                       (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool UFortHeroManagementContext::GetHeroData(struct FHeroUIData* HeroData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortHeroManagementContext.GetHeroData");

	UFortHeroManagementContext_GetHeroData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HeroData != nullptr)
		*HeroData = params.HeroData;


	return params.ReturnValue;
}


// Function FortniteUI.FortHeroManagementContext.GetEmptyHeroSlots
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FEmptyHeroSlot>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FEmptyHeroSlot> UFortHeroManagementContext::GetEmptyHeroSlots()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortHeroManagementContext.GetEmptyHeroSlots");

	UFortHeroManagementContext_GetEmptyHeroSlots_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortHeroManagementContext.GetDisplayStats
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FFortGameplayEffectModifierDescription> Stats                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UFortHeroManagementContext::GetDisplayStats(TArray<struct FFortGameplayEffectModifierDescription>* Stats)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortHeroManagementContext.GetDisplayStats");

	UFortHeroManagementContext_GetDisplayStats_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Stats != nullptr)
		*Stats = params.Stats;

}


// Function FortniteUI.FortHeroManagementContext.GetCurrentHeroID
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 HeroId                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool UFortHeroManagementContext::GetCurrentHeroID(struct FString* HeroId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortHeroManagementContext.GetCurrentHeroID");

	UFortHeroManagementContext_GetCurrentHeroID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HeroId != nullptr)
		*HeroId = params.HeroId;


	return params.ReturnValue;
}


// Function FortniteUI.FortHeroManagementContext.GetCoreAbilitiesFromID
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 HeroId                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UFortAbilityKit*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<class UFortAbilityKit*> UFortHeroManagementContext::GetCoreAbilitiesFromID(const struct FString& HeroId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortHeroManagementContext.GetCoreAbilitiesFromID");

	UFortHeroManagementContext_GetCoreAbilitiesFromID_Params params;
	params.HeroId = HeroId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortHeroManagementContext.GetCoreAbilities
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UFortAbilityKit*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<class UFortAbilityKit*> UFortHeroManagementContext::GetCoreAbilities()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortHeroManagementContext.GetCoreAbilities");

	UFortHeroManagementContext_GetCoreAbilities_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortHeroManagementContext.GetAttributeValuesArrayFromID
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 HeroId                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FGameplayAttribute> Attributes                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<float>                  Values                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool UFortHeroManagementContext::GetAttributeValuesArrayFromID(const struct FString& HeroId, TArray<struct FGameplayAttribute> Attributes, TArray<float>* Values)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortHeroManagementContext.GetAttributeValuesArrayFromID");

	UFortHeroManagementContext_GetAttributeValuesArrayFromID_Params params;
	params.HeroId = HeroId;
	params.Attributes = Attributes;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Values != nullptr)
		*Values = params.Values;


	return params.ReturnValue;
}


// Function FortniteUI.FortHeroManagementContext.GetAttributeValuesArray
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FGameplayAttribute> Attributes                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<float>                  Values                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool UFortHeroManagementContext::GetAttributeValuesArray(TArray<struct FGameplayAttribute> Attributes, TArray<float>* Values)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortHeroManagementContext.GetAttributeValuesArray");

	UFortHeroManagementContext_GetAttributeValuesArray_Params params;
	params.Attributes = Attributes;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Values != nullptr)
		*Values = params.Values;


	return params.ReturnValue;
}


// Function FortniteUI.FortHeroManagementContext.GetAttributeValueFromID
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 HeroId                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAttribute      Attribute                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UFortHeroManagementContext::GetAttributeValueFromID(const struct FString& HeroId, const struct FGameplayAttribute& Attribute)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortHeroManagementContext.GetAttributeValueFromID");

	UFortHeroManagementContext_GetAttributeValueFromID_Params params;
	params.HeroId = HeroId;
	params.Attribute = Attribute;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortHeroManagementContext.GetAttributeValue
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayAttribute      Attribute                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UFortHeroManagementContext::GetAttributeValue(const struct FGameplayAttribute& Attribute)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortHeroManagementContext.GetAttributeValue");

	UFortHeroManagementContext_GetAttributeValue_Params params;
	params.Attribute = Attribute;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortHeroManagementContext.GetAllHeroIDs
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FString>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FString> UFortHeroManagementContext::GetAllHeroIDs()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortHeroManagementContext.GetAllHeroIDs");

	UFortHeroManagementContext_GetAllHeroIDs_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortHeroManagementContext.GetAbilityCostFromID
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 HeroId                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            TraitIdx                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            TraitDepth                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UFortHeroManagementContext::GetAbilityCostFromID(const struct FString& HeroId, int TraitIdx, int TraitDepth)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortHeroManagementContext.GetAbilityCostFromID");

	UFortHeroManagementContext_GetAbilityCostFromID_Params params;
	params.HeroId = HeroId;
	params.TraitIdx = TraitIdx;
	params.TraitDepth = TraitDepth;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortHeroManagementContext.GetAbilityCost
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            TraitIdx                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            TraitDepth                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UFortHeroManagementContext::GetAbilityCost(int TraitIdx, int TraitDepth)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortHeroManagementContext.GetAbilityCost");

	UFortHeroManagementContext_GetAbilityCost_Params params;
	params.TraitIdx = TraitIdx;
	params.TraitDepth = TraitDepth;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortHeroManagementContext.GenerateRandomHeroName
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UDataTable*              NameTable                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Name                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFortHeroManagementContext::GenerateRandomHeroName(class UDataTable* NameTable, struct FString* Name)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortHeroManagementContext.GenerateRandomHeroName");

	UFortHeroManagementContext_GenerateRandomHeroName_Params params;
	params.NameTable = NameTable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = params.Name;

}


// Function FortniteUI.FortHeroManagementContext.CheckHeroNameValidity
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<FortniteUI_ENameStatus> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TEnumAsByte<FortniteUI_ENameStatus> UFortHeroManagementContext::CheckHeroNameValidity(const struct FString& Name)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortHeroManagementContext.CheckHeroNameValidity");

	UFortHeroManagementContext_CheckHeroNameValidity_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortHeroManagementContext.CanRedeemAllAbilities
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool UFortHeroManagementContext::CanRedeemAllAbilities()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortHeroManagementContext.CanRedeemAllAbilities");

	UFortHeroManagementContext_CanRedeemAllAbilities_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortHeroManagementContext.CanModifyTraitDepthFromID
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 HeroId                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            TraitIdx                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool UFortHeroManagementContext::CanModifyTraitDepthFromID(const struct FString& HeroId, int TraitIdx)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortHeroManagementContext.CanModifyTraitDepthFromID");

	UFortHeroManagementContext_CanModifyTraitDepthFromID_Params params;
	params.HeroId = HeroId;
	params.TraitIdx = TraitIdx;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortHeroManagementContext.CanModifyTraitDepth
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            TraitIdx                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool UFortHeroManagementContext::CanModifyTraitDepth(int TraitIdx)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortHeroManagementContext.CanModifyTraitDepth");

	UFortHeroManagementContext_CanModifyTraitDepth_Params params;
	params.TraitIdx = TraitIdx;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortHeroManagementContext.CanAffordNextAbilityFromID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 HeroId                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            TraitIdx                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool UFortHeroManagementContext::CanAffordNextAbilityFromID(const struct FString& HeroId, int TraitIdx)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortHeroManagementContext.CanAffordNextAbilityFromID");

	UFortHeroManagementContext_CanAffordNextAbilityFromID_Params params;
	params.HeroId = HeroId;
	params.TraitIdx = TraitIdx;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortHeroManagementContext.CanAffordNextAbility
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            TraitIdx                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool UFortHeroManagementContext::CanAffordNextAbility(int TraitIdx)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortHeroManagementContext.CanAffordNextAbility");

	UFortHeroManagementContext_CanAffordNextAbility_Params params;
	params.TraitIdx = TraitIdx;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortHeroManagementContext.CanAffordAbilityFromID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 HeroId                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            TraitIdx                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            TraitDepth                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool UFortHeroManagementContext::CanAffordAbilityFromID(const struct FString& HeroId, int TraitIdx, int TraitDepth)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortHeroManagementContext.CanAffordAbilityFromID");

	UFortHeroManagementContext_CanAffordAbilityFromID_Params params;
	params.HeroId = HeroId;
	params.TraitIdx = TraitIdx;
	params.TraitDepth = TraitDepth;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortHeroManagementContext.CanAffordAbility
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            TraitIdx                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            TraitDepth                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool UFortHeroManagementContext::CanAffordAbility(int TraitIdx, int TraitDepth)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortHeroManagementContext.CanAffordAbility");

	UFortHeroManagementContext_CanAffordAbility_Params params;
	params.TraitIdx = TraitIdx;
	params.TraitDepth = TraitDepth;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortHUDContext.SetIndicatorsAllowed
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bIndicatorsAllowed             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UFortHUDContext::SetIndicatorsAllowed(bool bIndicatorsAllowed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortHUDContext.SetIndicatorsAllowed");

	UFortHUDContext_SetIndicatorsAllowed_Params params;
	params.bIndicatorsAllowed = bIndicatorsAllowed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortHUDContext.IsInCursorMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool UFortHUDContext::IsInCursorMode()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortHUDContext.IsInCursorMode");

	UFortHUDContext_IsInCursorMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortHUDContext.HandleLocalPawnDied
// (Final, Native, Private, HasOutParms)
// Parameters:
// struct FFortPlayerDeathReport  DeathReport                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UFortHUDContext::HandleLocalPawnDied(const struct FFortPlayerDeathReport& DeathReport)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortHUDContext.HandleLocalPawnDied");

	UFortHUDContext_HandleLocalPawnDied_Params params;
	params.DeathReport = DeathReport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortHUDContext.GetTeamCornerstone
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<FortniteGame_EFortTeam> Team                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AFortPvPBaseCornerstone* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AFortPvPBaseCornerstone* UFortHUDContext::GetTeamCornerstone(TEnumAsByte<FortniteGame_EFortTeam> Team)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortHUDContext.GetTeamCornerstone");

	UFortHUDContext_GetTeamCornerstone_Params params;
	params.Team = Team;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortHUDContext.GetScoreDisplayFactor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UFortHUDContext::GetScoreDisplayFactor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortHUDContext.GetScoreDisplayFactor");

	UFortHUDContext_GetScoreDisplayFactor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortHUDContext.GetPlayerStateZone
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AFortPlayerStateZone*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AFortPlayerStateZone* UFortHUDContext::GetPlayerStateZone()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortHUDContext.GetPlayerStateZone");

	UFortHUDContext_GetPlayerStateZone_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortHUDContext.GetPlayerAbilitySystemComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortAbilitySystemComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UFortAbilitySystemComponent* UFortHUDContext::GetPlayerAbilitySystemComponent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortHUDContext.GetPlayerAbilitySystemComponent");

	UFortHUDContext_GetPlayerAbilitySystemComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortHUDContext.GetKillerVisualInfoFromDeathReport
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FFortPlayerDeathReport  DeathReport                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FFortKillerVisualInfo   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FFortKillerVisualInfo UFortHUDContext::GetKillerVisualInfoFromDeathReport(const struct FFortPlayerDeathReport& DeathReport)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortHUDContext.GetKillerVisualInfoFromDeathReport");

	UFortHUDContext_GetKillerVisualInfoFromDeathReport_Params params;
	params.DeathReport = DeathReport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortHUDContext.GetGameStateZone
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AFortGameStateZone*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AFortGameStateZone* UFortHUDContext::GetGameStateZone()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortHUDContext.GetGameStateZone");

	UFortHUDContext_GetGameStateZone_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortHUDContext.GetFocusedBuildingInfo
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FFortFocusedBuildingInfo OutBuildingInfo                (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool UFortHUDContext::GetFocusedBuildingInfo(struct FFortFocusedBuildingInfo* OutBuildingInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortHUDContext.GetFocusedBuildingInfo");

	UFortHUDContext_GetFocusedBuildingInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutBuildingInfo != nullptr)
		*OutBuildingInfo = params.OutBuildingInfo;


	return params.ReturnValue;
}


// Function FortniteUI.FortHUDContext.GetCurrentHero
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortHero*               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UFortHero* UFortHUDContext::GetCurrentHero()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortHUDContext.GetCurrentHero");

	UFortHUDContext_GetCurrentHero_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortHUDContext.ForwardOnWeaponEquipped
// (Final, Native, Private)
// Parameters:
// class AFortWeapon*             NewWeapon                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AFortWeapon*             PrevWeapon                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFortHUDContext::ForwardOnWeaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortHUDContext.ForwardOnWeaponEquipped");

	UFortHUDContext_ForwardOnWeaponEquipped_Params params;
	params.NewWeapon = NewWeapon;
	params.PrevWeapon = PrevWeapon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortHUDContext.ForwardOnAbilityDecisionWindowStackUpdated
// (Final, Native, Private)
void UFortHUDContext::ForwardOnAbilityDecisionWindowStackUpdated()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortHUDContext.ForwardOnAbilityDecisionWindowStackUpdated");

	UFortHUDContext_ForwardOnAbilityDecisionWindowStackUpdated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortHUDContext.EnterCursorMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   ActionName                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UUserWidget*             CursorModeWidget               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFortHUDContext::EnterCursorMode(const struct FName& ActionName, class UUserWidget* CursorModeWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortHUDContext.EnterCursorMode");

	UFortHUDContext_EnterCursorMode_Params params;
	params.ActionName = ActionName;
	params.CursorModeWidget = CursorModeWidget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortHUDContext.EnterCameraMode
// (Final, Native, Public, BlueprintCallable)
void UFortHUDContext::EnterCameraMode()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortHUDContext.EnterCameraMode");

	UFortHUDContext_EnterCameraMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortHUDContext.AreIndicatorsEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool UFortHUDContext::AreIndicatorsEnabled()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortHUDContext.AreIndicatorsEnabled");

	UFortHUDContext_AreIndicatorsEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortInventoryContext.WillQuickBarAcceptItem
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortItem*               Item                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<FortniteGame_EFortQuickBars> InQuickBar                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Slot                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool UFortInventoryContext::WillQuickBarAcceptItem(class UFortItem* Item, TEnumAsByte<FortniteGame_EFortQuickBars> InQuickBar, int Slot)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortInventoryContext.WillQuickBarAcceptItem");

	UFortInventoryContext_WillQuickBarAcceptItem_Params params;
	params.Item = Item;
	params.InQuickBar = InQuickBar;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortInventoryContext.UnlockSchematic
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFortSchematicItemDefinition* SchematicDefinition            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFortInventoryContext::UnlockSchematic(class UFortSchematicItemDefinition* SchematicDefinition)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortInventoryContext.UnlockSchematic");

	UFortInventoryContext_UnlockSchematic_Params params;
	params.SchematicDefinition = SchematicDefinition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortInventoryContext.UnlockAllSchematics
// (Final, Native, Public, BlueprintCallable)
void UFortInventoryContext::UnlockAllSchematics()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortInventoryContext.UnlockAllSchematics");

	UFortInventoryContext_UnlockAllSchematics_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortInventoryContext.SetSchematicPinned
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFortSchematicItem*      Schematic                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool UFortInventoryContext::SetSchematicPinned(class UFortSchematicItem* Schematic, bool bEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortInventoryContext.SetSchematicPinned");

	UFortInventoryContext_SetSchematicPinned_Params params;
	params.Schematic = Schematic;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortInventoryContext.RemoveItemFromQuickBar
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFortItem*               Item                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool UFortInventoryContext::RemoveItemFromQuickBar(class UFortItem* Item)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortInventoryContext.RemoveItemFromQuickBar");

	UFortInventoryContext_RemoveItemFromQuickBar_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortInventoryContext.LockAllSchematics
// (Final, Native, Public, BlueprintCallable)
void UFortInventoryContext::LockAllSchematics()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortInventoryContext.LockAllSchematics");

	UFortInventoryContext_LockAllSchematics_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortInventoryContext.IsSchematicPinned
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortSchematicItem*      Schematic                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool UFortInventoryContext::IsSchematicPinned(class UFortSchematicItem* Schematic)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortInventoryContext.IsSchematicPinned");

	UFortInventoryContext_IsSchematicPinned_Params params;
	params.Schematic = Schematic;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortInventoryContext.GetWorldItemList
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UFortWorldItem*>  Items                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// struct FFortItemListFilter     FilterSettings                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UFortInventoryContext::GetWorldItemList(TArray<class UFortWorldItem*>* Items, const struct FFortItemListFilter& FilterSettings)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortInventoryContext.GetWorldItemList");

	UFortInventoryContext_GetWorldItemList_Params params;
	params.FilterSettings = FilterSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Items != nullptr)
		*Items = params.Items;

}


// Function FortniteUI.FortInventoryContext.GetSchematicItemList
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UFortSchematicItem*> Items                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// struct FFortItemListFilter     FilterSettings                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UFortInventoryContext::GetSchematicItemList(TArray<class UFortSchematicItem*>* Items, const struct FFortItemListFilter& FilterSettings)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortInventoryContext.GetSchematicItemList");

	UFortInventoryContext_GetSchematicItemList_Params params;
	params.FilterSettings = FilterSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Items != nullptr)
		*Items = params.Items;

}


// Function FortniteUI.FortInventoryContext.GetResourceItemDefinition
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<FortniteGame_EFortResourceType> ResourceType                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortResourceItemDefinition* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UFortResourceItemDefinition* UFortInventoryContext::GetResourceItemDefinition(TEnumAsByte<FortniteGame_EFortResourceType> ResourceType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortInventoryContext.GetResourceItemDefinition");

	UFortInventoryContext_GetResourceItemDefinition_Params params;
	params.ResourceType = ResourceType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortInventoryContext.GetResourceIcon
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<FortniteGame_EFortResourceType> ResourceType                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTexture2D* UFortInventoryContext::GetResourceIcon(TEnumAsByte<FortniteGame_EFortResourceType> ResourceType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortInventoryContext.GetResourceIcon");

	UFortInventoryContext_GetResourceIcon_Params params;
	params.ResourceType = ResourceType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortInventoryContext.GetResourceCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<FortniteGame_EFortResourceType> ResourceType                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UFortInventoryContext::GetResourceCount(TEnumAsByte<FortniteGame_EFortResourceType> ResourceType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortInventoryContext.GetResourceCount");

	UFortInventoryContext_GetResourceCount_Params params;
	params.ResourceType = ResourceType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortInventoryContext.GetQuickBarSlottedItem
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<FortniteGame_EFortQuickBars> InQuickBar                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            Slot                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortItem*               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UFortItem* UFortInventoryContext::GetQuickBarSlottedItem(TEnumAsByte<FortniteGame_EFortQuickBars> InQuickBar, int Slot)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortInventoryContext.GetQuickBarSlottedItem");

	UFortInventoryContext_GetQuickBarSlottedItem_Params params;
	params.InQuickBar = InQuickBar;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortInventoryContext.GetQuickbarFocus
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<FortniteGame_EFortQuickBars> OutQuickBar                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            OutSlot                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFortInventoryContext::GetQuickbarFocus(TEnumAsByte<FortniteGame_EFortQuickBars>* OutQuickBar, int* OutSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortInventoryContext.GetQuickbarFocus");

	UFortInventoryContext_GetQuickbarFocus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutQuickBar != nullptr)
		*OutQuickBar = params.OutQuickBar;
	if (OutSlot != nullptr)
		*OutSlot = params.OutSlot;

}


// Function FortniteUI.FortInventoryContext.GetPinnedSchematicList
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UFortSchematicItem*> PinnedItems                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UFortInventoryContext::GetPinnedSchematicList(TArray<class UFortSchematicItem*>* PinnedItems)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortInventoryContext.GetPinnedSchematicList");

	UFortInventoryContext_GetPinnedSchematicList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PinnedItems != nullptr)
		*PinnedItems = params.PinnedItems;

}


// Function FortniteUI.FortInventoryContext.GetNumInInventory
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortWorldItemDefinition* ItemDefinition                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bIncludeReserved               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UFortInventoryContext::GetNumInInventory(class UFortWorldItemDefinition* ItemDefinition, bool bIncludeReserved)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortInventoryContext.GetNumInInventory");

	UFortInventoryContext_GetNumInInventory_Params params;
	params.ItemDefinition = ItemDefinition;
	params.bIncludeReserved = bIncludeReserved;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortInventoryContext.GetEquippedWeapon
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AFortWeapon*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AFortWeapon* UFortInventoryContext::GetEquippedWeapon()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortInventoryContext.GetEquippedWeapon");

	UFortInventoryContext_GetEquippedWeapon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortInventoryContext.GetCurrentResourceItemDefinition
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortResourceItemDefinition* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UFortResourceItemDefinition* UFortInventoryContext::GetCurrentResourceItemDefinition()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortInventoryContext.GetCurrentResourceItemDefinition");

	UFortInventoryContext_GetCurrentResourceItemDefinition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortInventoryContext.GetCurrentResourceIcon
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTexture2D* UFortInventoryContext::GetCurrentResourceIcon()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortInventoryContext.GetCurrentResourceIcon");

	UFortInventoryContext_GetCurrentResourceIcon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortInventoryContext.GetCurrentResourceCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UFortInventoryContext::GetCurrentResourceCount()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortInventoryContext.GetCurrentResourceCount");

	UFortInventoryContext_GetCurrentResourceCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortInventoryContext.GetCurrentAmmoItemDefinition
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortWorldItemDefinition* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UFortWorldItemDefinition* UFortInventoryContext::GetCurrentAmmoItemDefinition()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortInventoryContext.GetCurrentAmmoItemDefinition");

	UFortInventoryContext_GetCurrentAmmoItemDefinition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortInventoryContext.GetCurrentAmmoIcon
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTexture2D* UFortInventoryContext::GetCurrentAmmoIcon()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortInventoryContext.GetCurrentAmmoIcon");

	UFortInventoryContext_GetCurrentAmmoIcon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortInventoryContext.GetBackpackItemCounts
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ItemsCount                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            MaxItemsCount                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            OverflowItemsCount             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFortInventoryContext::GetBackpackItemCounts(int* ItemsCount, int* MaxItemsCount, int* OverflowItemsCount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortInventoryContext.GetBackpackItemCounts");

	UFortInventoryContext_GetBackpackItemCounts_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ItemsCount != nullptr)
		*ItemsCount = params.ItemsCount;
	if (MaxItemsCount != nullptr)
		*MaxItemsCount = params.MaxItemsCount;
	if (OverflowItemsCount != nullptr)
		*OverflowItemsCount = params.OverflowItemsCount;

}


// Function FortniteUI.FortInventoryContext.DropItemOnQuickBar
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFortItem*               Item                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<FortniteGame_EFortQuickBars> TargetQuickbar                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            TargetSlot                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool UFortInventoryContext::DropItemOnQuickBar(class UFortItem* Item, TEnumAsByte<FortniteGame_EFortQuickBars> TargetQuickbar, int TargetSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortInventoryContext.DropItemOnQuickBar");

	UFortInventoryContext_DropItemOnQuickBar_Params params;
	params.Item = Item;
	params.TargetQuickbar = TargetQuickbar;
	params.TargetSlot = TargetSlot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortInventoryContext.DropItemOnPlayerOrWorld
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UFortWorldItem*          ItemBeingDropped               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AFortPlayerState*        InDestinationPlayer            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                 OwnerWidget                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPointerEvent           PointerEvent                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGeometry               InGeometry                     (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UFortInventoryContext::DropItemOnPlayerOrWorld(class UFortWorldItem* ItemBeingDropped, class AFortPlayerState* InDestinationPlayer, class UWidget* OwnerWidget, const struct FPointerEvent& PointerEvent, const struct FGeometry& InGeometry)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortInventoryContext.DropItemOnPlayerOrWorld");

	UFortInventoryContext_DropItemOnPlayerOrWorld_Params params;
	params.ItemBeingDropped = ItemBeingDropped;
	params.InDestinationPlayer = InDestinationPlayer;
	params.OwnerWidget = OwnerWidget;
	params.PointerEvent = PointerEvent;
	params.InGeometry = InGeometry;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortInventoryContext.DoesItemMatchFilter
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortItem*               Item                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFortItemListFilter     FilterSettings                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool UFortInventoryContext::DoesItemMatchFilter(class UFortItem* Item, const struct FFortItemListFilter& FilterSettings)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortInventoryContext.DoesItemMatchFilter");

	UFortInventoryContext_DoesItemMatchFilter_Params params;
	params.Item = Item;
	params.FilterSettings = FilterSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortInventoryContext.DisassembleItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFortWorldItem*          Item                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool UFortInventoryContext::DisassembleItem(class UFortWorldItem* Item)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortInventoryContext.DisassembleItem");

	UFortInventoryContext_DisassembleItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortInventoryContext.CraftSchematic
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UFortSchematicItem*      SchematicItem                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<FortniteGame_EFortCraftFailCause> FailCause                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool UFortInventoryContext::CraftSchematic(class UFortSchematicItem* SchematicItem, TEnumAsByte<FortniteGame_EFortCraftFailCause>* FailCause)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortInventoryContext.CraftSchematic");

	UFortInventoryContext_CraftSchematic_Params params;
	params.SchematicItem = SchematicItem;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FailCause != nullptr)
		*FailCause = params.FailCause;


	return params.ReturnValue;
}


// Function FortniteUI.FortInventoryContext.CanPinSchematic
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortSchematicItem*      Schematic                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool UFortInventoryContext::CanPinSchematic(class UFortSchematicItem* Schematic)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortInventoryContext.CanPinSchematic");

	UFortInventoryContext_CanPinSchematic_Params params;
	params.Schematic = Schematic;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortInventoryContext.CanDisassembleItem
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortWorldItem*          Item                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool UFortInventoryContext::CanDisassembleItem(class UFortWorldItem* Item)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortInventoryContext.CanDisassembleItem");

	UFortInventoryContext_CanDisassembleItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortInventoryContext.CanCraftSchematic
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortSchematicItem*      SchematicItem                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<FortniteGame_EFortCraftFailCause> FailCause                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool UFortInventoryContext::CanCraftSchematic(class UFortSchematicItem* SchematicItem, TEnumAsByte<FortniteGame_EFortCraftFailCause>* FailCause)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortInventoryContext.CanCraftSchematic");

	UFortInventoryContext_CanCraftSchematic_Params params;
	params.SchematicItem = SchematicItem;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FailCause != nullptr)
		*FailCause = params.FailCause;


	return params.ReturnValue;
}


// Function FortniteUI.FortInventoryContext.ActivateItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFortItem*               Item                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool UFortInventoryContext::ActivateItem(class UFortItem* Item)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortInventoryContext.ActivateItem");

	UFortInventoryContext_ActivateItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortLegacySlateBridgeWidget.UpdateSlateWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<FortniteUI_EFortLegacySlateWidget> SlateWidgetType                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFortLegacySlateBridgeWidget::UpdateSlateWidget(TEnumAsByte<FortniteUI_EFortLegacySlateWidget> SlateWidgetType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortLegacySlateBridgeWidget.UpdateSlateWidget");

	UFortLegacySlateBridgeWidget_UpdateSlateWidget_Params params;
	params.SlateWidgetType = SlateWidgetType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortLegacySlateBridgeWidget.SetOnCloseHandler
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         OnCloseHandler                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UFortLegacySlateBridgeWidget::SetOnCloseHandler(const struct FScriptDelegate& OnCloseHandler)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortLegacySlateBridgeWidget.SetOnCloseHandler");

	UFortLegacySlateBridgeWidget_SetOnCloseHandler_Params params;
	params.OnCloseHandler = OnCloseHandler;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortListView.SetItemSelected
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 Item                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool UFortListView::SetItemSelected(class UObject* Item)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortListView.SetItemSelected");

	UFortListView_SetItemSelected_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortListView.SetIndexSelected
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            INDEX                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool UFortListView::SetIndexSelected(int INDEX)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortListView.SetIndexSelected");

	UFortListView_SetIndexSelected_Params params;
	params.INDEX = INDEX;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortListView.SetDataProvider
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<class UObject*>         NewData                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UFortListView::SetDataProvider(TArray<class UObject*> NewData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortListView.SetDataProvider");

	UFortListView_SetDataProvider_Params params;
	params.NewData = NewData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortListView.RemoveItemAt
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            INDEX                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFortListView::RemoveItemAt(int INDEX)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortListView.RemoveItemAt");

	UFortListView_RemoveItemAt_Params params;
	params.INDEX = INDEX;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortListView.GetItemAt
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            INDEX                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UObject* UFortListView::GetItemAt(int INDEX)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortListView.GetItemAt");

	UFortListView_GetItemAt_Params params;
	params.INDEX = INDEX;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortListView.GetIndexForItem
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                 Item                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UFortListView::GetIndexForItem(class UObject* Item)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortListView.GetIndexForItem");

	UFortListView_GetIndexForItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortListView.ClearSelection
// (Final, Native, Public, BlueprintCallable)
void UFortListView::ClearSelection()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortListView.ClearSelection");

	UFortListView_ClearSelection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortListView.Clear
// (Final, Native, Public, BlueprintCallable)
void UFortListView::Clear()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortListView.Clear");

	UFortListView_Clear_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortListView.AddItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 NewItem                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFortListView::AddItem(class UObject* NewItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortListView.AddItem");

	UFortListView_AddItem_Params params;
	params.NewItem = NewItem;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortSocialListView.SetList
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<class UFortSocialItem*> InList                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UFortSocialListView::SetList(TArray<class UFortSocialItem*> InList)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortSocialListView.SetList");

	UFortSocialListView_SetList_Params params;
	params.InList = InList;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortStoreContext.OpenWebPayment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 AttemptedMTXOfferId            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool UFortStoreContext::OpenWebPayment(const struct FString& AttemptedMTXOfferId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortStoreContext.OpenWebPayment");

	UFortStoreContext_OpenWebPayment_Params params;
	params.AttemptedMTXOfferId = AttemptedMTXOfferId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortStoreContext.MakePurchase
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FCardPackOffer          Offer                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int                            Quantity                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<FortniteUI_ECardPackPurchaseError> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TEnumAsByte<FortniteUI_ECardPackPurchaseError> UFortStoreContext::MakePurchase(const struct FCardPackOffer& Offer, int Quantity)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortStoreContext.MakePurchase");

	UFortStoreContext_MakePurchase_Params params;
	params.Offer = Offer;
	params.Quantity = Quantity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortStoreContext.IsNewStoreEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool UFortStoreContext::IsNewStoreEnabled()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortStoreContext.IsNewStoreEnabled");

	UFortStoreContext_IsNewStoreEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortStoreContext.IsCatalogAvailable
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool UFortStoreContext::IsCatalogAvailable()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortStoreContext.IsCatalogAvailable");

	UFortStoreContext_IsCatalogAvailable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortStoreContext.GetTimeUntilMarketplaceRefresh
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTimespan               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
struct FTimespan UFortStoreContext::GetTimeUntilMarketplaceRefresh()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortStoreContext.GetTimeUntilMarketplaceRefresh");

	UFortStoreContext_GetTimeUntilMarketplaceRefresh_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortStoreContext.GetTimeUntilDailyLimitReset
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTimespan               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
struct FTimespan UFortStoreContext::GetTimeUntilDailyLimitReset()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortStoreContext.GetTimeUntilDailyLimitReset");

	UFortStoreContext_GetTimeUntilDailyLimitReset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortStoreContext.GetStoreState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<FortniteUI_EFortStoreState> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TEnumAsByte<FortniteUI_EFortStoreState> UFortStoreContext::GetStoreState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortStoreContext.GetStoreState");

	UFortStoreContext_GetStoreState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortStoreContext.GetRarityColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// TEnumAsByte<FortniteGame_EFortRarity> Rarity                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FLinearColor UFortStoreContext::GetRarityColor(TEnumAsByte<FortniteGame_EFortRarity> Rarity)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortStoreContext.GetRarityColor");

	UFortStoreContext_GetRarityColor_Params params;
	params.Rarity = Rarity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortStoreContext.GetPreviousState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<FortniteUI_EFortStoreState> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TEnumAsByte<FortniteUI_EFortStoreState> UFortStoreContext::GetPreviousState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortStoreContext.GetPreviousState");

	UFortStoreContext_GetPreviousState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortStoreContext.GetNumUnopenedCardPacksRemaining
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortCardPackItemDefinition* PackType                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UFortStoreContext::GetNumUnopenedCardPacksRemaining(class UFortCardPackItemDefinition* PackType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortStoreContext.GetNumUnopenedCardPacksRemaining");

	UFortStoreContext_GetNumUnopenedCardPacksRemaining_Params params;
	params.PackType = PackType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortStoreContext.GetCard
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            CardIdx                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FCard                   ResultOut                      (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool UFortStoreContext::GetCard(int CardIdx, struct FCard* ResultOut)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortStoreContext.GetCard");

	UFortStoreContext_GetCard_Params params;
	params.CardIdx = CardIdx;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ResultOut != nullptr)
		*ResultOut = params.ResultOut;


	return params.ReturnValue;
}


// Function FortniteUI.FortStoreContext.GetAccountItems
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<class UFortAccountItemDefinition*> AccountItemDefinitions         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<class UFortAccountItem*> AccountItems                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UFortStoreContext::GetAccountItems(TArray<class UFortAccountItemDefinition*> AccountItemDefinitions, TArray<class UFortAccountItem*>* AccountItems)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortStoreContext.GetAccountItems");

	UFortStoreContext_GetAccountItems_Params params;
	params.AccountItemDefinitions = AccountItemDefinitions;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AccountItems != nullptr)
		*AccountItems = params.AccountItems;

}


// Function FortniteUI.FortStoreContext.FreshenCache
// (Final, Native, Public, BlueprintCallable)
void UFortStoreContext::FreshenCache()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortStoreContext.FreshenCache");

	UFortStoreContext_FreshenCache_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortStoreContext.FireInteractionAnalyticsEvent
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// struct FString                 Interaction                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 Details                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFortStoreContext::FireInteractionAnalyticsEvent(const struct FString& Interaction, const struct FString& Details)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortStoreContext.FireInteractionAnalyticsEvent");

	UFortStoreContext_FireInteractionAnalyticsEvent_Params params;
	params.Interaction = Interaction;
	params.Details = Details;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortStoreContext.ExitWebPayment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool UFortStoreContext::ExitWebPayment()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortStoreContext.ExitWebPayment");

	UFortStoreContext_ExitWebPayment_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortStoreContext.ExitSummary
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool UFortStoreContext::ExitSummary()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortStoreContext.ExitSummary");

	UFortStoreContext_ExitSummary_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortStoreContext.ExitCurrencyStore
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool UFortStoreContext::ExitCurrencyStore()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortStoreContext.ExitCurrencyStore");

	UFortStoreContext_ExitCurrencyStore_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortStoreContext.ExitCardPackStore
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool UFortStoreContext::ExitCardPackStore()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortStoreContext.ExitCardPackStore");

	UFortStoreContext_ExitCardPackStore_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortStoreContext.ErrorOccurred
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ErrorAnalytics                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool UFortStoreContext::ErrorOccurred(const struct FString& ErrorAnalytics)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortStoreContext.ErrorOccurred");

	UFortStoreContext_ErrorOccurred_Params params;
	params.ErrorAnalytics = ErrorAnalytics;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortStoreContext.EnterCurrencyStore
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 AttemptedPurchaseCardPackId    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool UFortStoreContext::EnterCurrencyStore(const struct FString& AttemptedPurchaseCardPackId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortStoreContext.EnterCurrencyStore");

	UFortStoreContext_EnterCurrencyStore_Params params;
	params.AttemptedPurchaseCardPackId = AttemptedPurchaseCardPackId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortStoreContext.EnterCardPackStore
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool UFortStoreContext::EnterCardPackStore()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortStoreContext.EnterCardPackStore");

	UFortStoreContext_EnterCardPackStore_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortStoreContext.DismissError
// (Final, Native, Public, BlueprintCallable)
void UFortStoreContext::DismissError()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortStoreContext.DismissError");

	UFortStoreContext_DismissError_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortStoreContext.CardPackOpeningComplete
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool UFortStoreContext::CardPackOpeningComplete()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortStoreContext.CardPackOpeningComplete");

	UFortStoreContext_CardPackOpeningComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortStoreContext.CardPackDestroyComplete
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool UFortStoreContext::CardPackDestroyComplete()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortStoreContext.CardPackDestroyComplete");

	UFortStoreContext_CardPackDestroyComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortStoreContext.CardFrontRevealComplete
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool UFortStoreContext::CardFrontRevealComplete()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortStoreContext.CardFrontRevealComplete");

	UFortStoreContext_CardFrontRevealComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortStoreContext.CardFlipComplete
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool UFortStoreContext::CardFlipComplete()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortStoreContext.CardFlipComplete");

	UFortStoreContext_CardFlipComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortStoreContext.CardExitComplete
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool UFortStoreContext::CardExitComplete()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortStoreContext.CardExitComplete");

	UFortStoreContext_CardExitComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortStoreContext.CardEntryComplete
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool UFortStoreContext::CardEntryComplete()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortStoreContext.CardEntryComplete");

	UFortStoreContext_CardEntryComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortStoreContext.CardBackRevealComplete
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool UFortStoreContext::CardBackRevealComplete()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortStoreContext.CardBackRevealComplete");

	UFortStoreContext_CardBackRevealComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortStoreContext.CardAddedToSummaryComplete
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool UFortStoreContext::CardAddedToSummaryComplete()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortStoreContext.CardAddedToSummaryComplete");

	UFortStoreContext_CardAddedToSummaryComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortUIMessageManager.HandleMessageRemoved
// (Final, Native, Private)
// Parameters:
// class UFortUIMessageItemWidget* MessageItem                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFortUIMessageManager::HandleMessageRemoved(class UFortUIMessageItemWidget* MessageItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortUIMessageManager.HandleMessageRemoved");

	UFortUIMessageManager_HandleMessageRemoved_Params params;
	params.MessageItem = MessageItem;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortUIMessageManager.HandleMessageDisplayed
// (Final, Native, Private)
// Parameters:
// class UFortUIMessageItemWidget* MessageItem                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFortUIMessageManager::HandleMessageDisplayed(class UFortUIMessageItemWidget* MessageItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortUIMessageManager.HandleMessageDisplayed");

	UFortUIMessageManager_HandleMessageDisplayed_Params params;
	params.MessageItem = MessageItem;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortUIMessageManager.GetNumDisplayedItems
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UFortUIMessageManager::GetNumDisplayedItems()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortUIMessageManager.GetNumDisplayedItems");

	UFortUIMessageManager_GetNumDisplayedItems_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortUIMessageManager.GetNextMessageInQueue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFortUIMessageItemWidget* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UFortUIMessageItemWidget* UFortUIMessageManager::GetNextMessageInQueue()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortUIMessageManager.GetNextMessageInQueue");

	UFortUIMessageManager_GetNextMessageInQueue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortUIMessageManager.AddMessageItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFortUIMessageItemWidget* MessageItem                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFortUIMessageManager::AddMessageItem(class UFortUIMessageItemWidget* MessageItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortUIMessageManager.AddMessageItem");

	UFortUIMessageManager_AddMessageItem_Params params;
	params.MessageItem = MessageItem;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortUIStateTrigger.IsLoggedIn
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool UFortUIStateTrigger::IsLoggedIn()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortUIStateTrigger.IsLoggedIn");

	UFortUIStateTrigger_IsLoggedIn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortUIStateTrigger.EvalBP
// (Native, Event, Protected, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool UFortUIStateTrigger::EvalBP()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortUIStateTrigger.EvalBP");

	UFortUIStateTrigger_EvalBP_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortActionHandlerPanel.SetOnPanelDeactivated
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         OnDeactivatedHandler           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UFortActionHandlerPanel::SetOnPanelDeactivated(const struct FScriptDelegate& OnDeactivatedHandler)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortActionHandlerPanel.SetOnPanelDeactivated");

	UFortActionHandlerPanel_SetOnPanelDeactivated_Params params;
	params.OnDeactivatedHandler = OnDeactivatedHandler;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortActionHandlerPanel.SetOnPanelActivated
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         OnActivatedHandler             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UFortActionHandlerPanel::SetOnPanelActivated(const struct FScriptDelegate& OnActivatedHandler)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortActionHandlerPanel.SetOnPanelActivated");

	UFortActionHandlerPanel_SetOnPanelActivated_Params params;
	params.OnActivatedHandler = OnActivatedHandler;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortActionHandlerPanel.RemoveOnPanelDeactivated
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 BoundObject                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFortActionHandlerPanel::RemoveOnPanelDeactivated(class UObject* BoundObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortActionHandlerPanel.RemoveOnPanelDeactivated");

	UFortActionHandlerPanel_RemoveOnPanelDeactivated_Params params;
	params.BoundObject = BoundObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortActionHandlerPanel.RemoveOnPanelActivated
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 BoundObject                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFortActionHandlerPanel::RemoveOnPanelActivated(class UObject* BoundObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortActionHandlerPanel.RemoveOnPanelActivated");

	UFortActionHandlerPanel_RemoveOnPanelActivated_Params params;
	params.BoundObject = BoundObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortActionHandlerPanel.OnHandleAction
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FEventReply             Result                         (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                           bPassThrough                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UFortActionHandlerPanel::OnHandleAction(struct FEventReply* Result, bool* bPassThrough)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortActionHandlerPanel.OnHandleAction");

	UFortActionHandlerPanel_OnHandleAction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
	if (bPassThrough != nullptr)
		*bPassThrough = params.bPassThrough;

}


// Function FortniteUI.FortActionHandlerPanel.DeactivateActionHandler
// (Final, Native, Protected, BlueprintCallable)
void UFortActionHandlerPanel::DeactivateActionHandler()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortActionHandlerPanel.DeactivateActionHandler");

	UFortActionHandlerPanel_DeactivateActionHandler_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortActionHandlerPanel.ActivateActionHandler
// (Final, Native, Protected, BlueprintCallable)
void UFortActionHandlerPanel::ActivateActionHandler()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortActionHandlerPanel.ActivateActionHandler");

	UFortActionHandlerPanel_ActivateActionHandler_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortConfirmationWindow.ShowConfirmation
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FFortDialogDescription  Description                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UFortConfirmationWindow::ShowConfirmation(const struct FFortDialogDescription& Description)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortConfirmationWindow.ShowConfirmation");

	UFortConfirmationWindow_ShowConfirmation_Params params;
	params.Description = Description;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortConfirmationWindow.ProcessResult
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// TEnumAsByte<FortniteUI_EFortDialogResult> DialogResult                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFortConfirmationWindow::ProcessResult(TEnumAsByte<FortniteUI_EFortDialogResult> DialogResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortConfirmationWindow.ProcessResult");

	UFortConfirmationWindow_ProcessResult_Params params;
	params.DialogResult = DialogResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortConfirmationWindow.OnShow
// (Event, Protected, BlueprintEvent)
void UFortConfirmationWindow::OnShow()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortConfirmationWindow.OnShow");

	UFortConfirmationWindow_OnShow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortConfirmationWindow.OnKill
// (Event, Protected, BlueprintEvent)
void UFortConfirmationWindow::OnKill()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortConfirmationWindow.OnKill");

	UFortConfirmationWindow_OnKill_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortConfirmationWindow.KillConfirmation
// (Final, Native, Public, BlueprintCallable)
void UFortConfirmationWindow::KillConfirmation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortConfirmationWindow.KillConfirmation");

	UFortConfirmationWindow_KillConfirmation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortErrorDialog.ResetErrorInfo
// (Final, Native, Protected, BlueprintCallable)
void UFortErrorDialog::ResetErrorInfo()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortErrorDialog.ResetErrorInfo");

	UFortErrorDialog_ResetErrorInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortErrorDialog.OnRebuildDialog
// (Event, Protected, BlueprintEvent)
// Parameters:
// int                            NewIndex                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFortErrorDialog::OnRebuildDialog(int NewIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortErrorDialog.OnRebuildDialog");

	UFortErrorDialog_OnRebuildDialog_Params params;
	params.NewIndex = NewIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortErrorDialog.DisplaySimpleError
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FText                   ErrorMessage                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UFortErrorDialog::DisplaySimpleError(const struct FText& ErrorMessage)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortErrorDialog.DisplaySimpleError");

	UFortErrorDialog_DisplaySimpleError_Params params;
	params.ErrorMessage = ErrorMessage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortErrorDialog.DisplayError
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FFortErrorInfo          ErrorInfo                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UFortErrorDialog::DisplayError(const struct FFortErrorInfo& ErrorInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortErrorDialog.DisplayError");

	UFortErrorDialog_DisplayError_Params params;
	params.ErrorInfo = ErrorInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortUIStateWidget.OnExitState
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<FortniteUI_EFortUIState> NextUIState                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFortUIStateWidget::OnExitState(TEnumAsByte<FortniteUI_EFortUIState> NextUIState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortUIStateWidget.OnExitState");

	UFortUIStateWidget_OnExitState_Params params;
	params.NextUIState = NextUIState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortUIStateWidget.OnEnterState
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<FortniteUI_EFortUIState> PreviousUIState                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFortUIStateWidget::OnEnterState(TEnumAsByte<FortniteUI_EFortUIState> PreviousUIState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortUIStateWidget.OnEnterState");

	UFortUIStateWidget_OnEnterState_Params params;
	params.PreviousUIState = PreviousUIState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortVerticalRibbon.PushContent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                 NewContent                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFortVerticalRibbon::PushContent(class UWidget* NewContent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortVerticalRibbon.PushContent");

	UFortVerticalRibbon_PushContent_Params params;
	params.NewContent = NewContent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortVerticalRibbon.PopContent
// (Final, Native, Public, BlueprintCallable)
void UFortVerticalRibbon::PopContent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortVerticalRibbon.PopContent");

	UFortVerticalRibbon_PopContent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortVerticalRibbon.GetTop
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UWidget* UFortVerticalRibbon::GetTop()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortVerticalRibbon.GetTop");

	UFortVerticalRibbon_GetTop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortVerticalRibbon._BPOnStackDepthChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// int                            NewDepth                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFortVerticalRibbon::_BPOnStackDepthChanged(int NewDepth)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortVerticalRibbon._BPOnStackDepthChanged");

	UFortVerticalRibbon__BPOnStackDepthChanged_Params params;
	params.NewDepth = NewDepth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortActorIndicatorWidget.OnIndicatedActorSet
// (Event, Protected, BlueprintEvent)
void UFortActorIndicatorWidget::OnIndicatedActorSet()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortActorIndicatorWidget.OnIndicatedActorSet");

	UFortActorIndicatorWidget_OnIndicatedActorSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortItemWidget.SetOnGetItemToCompareDelegate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         InDelegate                     (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
void UFortItemWidget::SetOnGetItemToCompareDelegate(const struct FScriptDelegate& InDelegate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortItemWidget.SetOnGetItemToCompareDelegate");

	UFortItemWidget_SetOnGetItemToCompareDelegate_Params params;
	params.InDelegate = InDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortItemWidget.SetItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFortItem*               InItem                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            QuantityOverride               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFortItemWidget::SetItem(class UFortItem* InItem, int QuantityOverride)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortItemWidget.SetItem");

	UFortItemWidget_SetItem_Params params;
	params.InItem = InItem;
	params.QuantityOverride = QuantityOverride;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// DelegateFunction FortniteUI.FortItemWidget.OnGetItemToCompare__DelegateSignature
// (Public, Delegate, HasOutParms)
// Parameters:
// class UFortItem*               ItemToCompare                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFortItemWidget::OnGetItemToCompare__DelegateSignature(class UFortItem** ItemToCompare)
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction FortniteUI.FortItemWidget.OnGetItemToCompare__DelegateSignature");

	UFortItemWidget_OnGetItemToCompare__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ItemToCompare != nullptr)
		*ItemToCompare = params.ItemToCompare;

}


// Function FortniteUI.FortItemWidget.OnFortItemUpdated
// (Final, Native, Private)
// Parameters:
// bool                           bItemChanged                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bAmmoChanged                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bIngredientsChanged            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UFortItemWidget::OnFortItemUpdated(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortItemWidget.OnFortItemUpdated");

	UFortItemWidget_OnFortItemUpdated_Params params;
	params.bItemChanged = bItemChanged;
	params.bAmmoChanged = bAmmoChanged;
	params.bIngredientsChanged = bIngredientsChanged;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortItemWidget.OnFortItemInvalidated
// (Final, Native, Private)
void UFortItemWidget::OnFortItemInvalidated()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortItemWidget.OnFortItemInvalidated");

	UFortItemWidget_OnFortItemInvalidated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortItemWidget.OnFortItemDestroyed
// (Final, Native, Private)
void UFortItemWidget::OnFortItemDestroyed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortItemWidget.OnFortItemDestroyed");

	UFortItemWidget_OnFortItemDestroyed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortItemWidget.IsSlotted
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool UFortItemWidget::IsSlotted()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortItemWidget.IsSlotted");

	UFortItemWidget_IsSlotted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortItemWidget.IsSchematic
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool UFortItemWidget::IsSchematic()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortItemWidget.IsSchematic");

	UFortItemWidget_IsSchematic_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortItemWidget.IsItemValid
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool UFortItemWidget::IsItemValid()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortItemWidget.IsItemValid");

	UFortItemWidget_IsItemValid_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortItemWidget.IsInBackpackOverflow
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool UFortItemWidget::IsInBackpackOverflow()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortItemWidget.IsInBackpackOverflow");

	UFortItemWidget_IsInBackpackOverflow_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortItemWidget.IsEquipped
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool UFortItemWidget::IsEquipped()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortItemWidget.IsEquipped");

	UFortItemWidget_IsEquipped_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortItemWidget.HasTertiaryCategory
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool UFortItemWidget::HasTertiaryCategory()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortItemWidget.HasTertiaryCategory");

	UFortItemWidget_HasTertiaryCategory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortItemWidget.HasSecondaryCategory
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool UFortItemWidget::HasSecondaryCategory()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortItemWidget.HasSecondaryCategory");

	UFortItemWidget_HasSecondaryCategory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortItemWidget.HasLevel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool UFortItemWidget::HasLevel()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortItemWidget.HasLevel");

	UFortItemWidget_HasLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortItemWidget.HasDurability
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool UFortItemWidget::HasDurability()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortItemWidget.HasDurability");

	UFortItemWidget_HasDurability_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortItemWidget.GetType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UFortItemWidget::GetType()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortItemWidget.GetType");

	UFortItemWidget_GetType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortItemWidget.GetTertiaryCategoryTexture
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<FortniteGame_EFortBrushSize> InBrushSize                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FSlateBrush UFortItemWidget::GetTertiaryCategoryTexture(TEnumAsByte<FortniteGame_EFortBrushSize> InBrushSize)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortItemWidget.GetTertiaryCategoryTexture");

	UFortItemWidget_GetTertiaryCategoryTexture_Params params;
	params.InBrushSize = InBrushSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortItemWidget.GetStackCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UFortItemWidget::GetStackCount()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortItemWidget.GetStackCount");

	UFortItemWidget_GetStackCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortItemWidget.GetSecondaryCategoryTexture
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<FortniteGame_EFortBrushSize> InBrushSize                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FSlateBrush UFortItemWidget::GetSecondaryCategoryTexture(TEnumAsByte<FortniteGame_EFortBrushSize> InBrushSize)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortItemWidget.GetSecondaryCategoryTexture");

	UFortItemWidget_GetSecondaryCategoryTexture_Params params;
	params.InBrushSize = InBrushSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortItemWidget.GetRarity
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<FortniteGame_EFortRarity> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TEnumAsByte<FortniteGame_EFortRarity> UFortItemWidget::GetRarity()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortItemWidget.GetRarity");

	UFortItemWidget_GetRarity_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortItemWidget.GetPulse
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UFortItemWidget::GetPulse()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortItemWidget.GetPulse");

	UFortItemWidget_GetPulse_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortItemWidget.GetLevel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UFortItemWidget::GetLevel()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortItemWidget.GetLevel");

	UFortItemWidget_GetLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortItemWidget.GetItemToCompare
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFortItem*               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UFortItem* UFortItemWidget::GetItemToCompare()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortItemWidget.GetItemToCompare");

	UFortItemWidget_GetItemToCompare_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortItemWidget.GetItem
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortItem*               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UFortItem* UFortItemWidget::GetItem()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortItemWidget.GetItem");

	UFortItemWidget_GetItem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortItemWidget.GetIconTexture
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<FortniteGame_EFortBrushSize> InBrushSize                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTexture* UFortItemWidget::GetIconTexture(TEnumAsByte<FortniteGame_EFortBrushSize> InBrushSize)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortItemWidget.GetIconTexture");

	UFortItemWidget_GetIconTexture_Params params;
	params.InBrushSize = InBrushSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortItemWidget.GetIconScale
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UFortItemWidget::GetIconScale()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortItemWidget.GetIconScale");

	UFortItemWidget_GetIconScale_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortItemWidget.GetDurability
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UFortItemWidget::GetDurability()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortItemWidget.GetDurability");

	UFortItemWidget_GetDurability_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortItemWidget.GetDisplayName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UFortItemWidget::GetDisplayName()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortItemWidget.GetDisplayName");

	UFortItemWidget_GetDisplayName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortItemWidget.GetDescription
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UFortItemWidget::GetDescription()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortItemWidget.GetDescription");

	UFortItemWidget_GetDescription_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortItemWidget.GetAmmoCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UFortItemWidget::GetAmmoCount()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortItemWidget.GetAmmoCount");

	UFortItemWidget_GetAmmoCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortItemWidget.BPOnItemSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortItem*               NewItem                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFortItemWidget::BPOnItemSet(class UFortItem* NewItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortItemWidget.BPOnItemSet");

	UFortItemWidget_BPOnItemSet_Params params;
	params.NewItem = NewItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortItemWidget.BPOnItemChanged
// (Event, Protected, BlueprintEvent)
void UFortItemWidget::BPOnItemChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortItemWidget.BPOnItemChanged");

	UFortItemWidget_BPOnItemChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortBluGloCounter.OnBluGloQuantityChanged
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// int                            Quantity                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFortBluGloCounter::OnBluGloQuantityChanged(int Quantity)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortBluGloCounter.OnBluGloQuantityChanged");

	UFortBluGloCounter_OnBluGloQuantityChanged_Params params;
	params.Quantity = Quantity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortButton.SetText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FText                   InText                         (Parm, NativeAccessSpecifierPublic)
void UFortButton::SetText(const struct FText& InText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortButton.SetText");

	UFortButton_SetText_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortButton.SetIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            InIndex                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFortButton::SetIndex(int InIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortButton.SetIndex");

	UFortButton_SetIndex_Params params;
	params.InIndex = InIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortButton.SetDisabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           InDisable                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UFortButton::SetDisabled(bool InDisable)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortButton.SetDisabled");

	UFortButton_SetDisabled_Params params;
	params.InDisable = InDisable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortButton.SetCurrentState
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// TEnumAsByte<FortniteUI_EFortButtonState> NewState                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFortButton::SetCurrentState(TEnumAsByte<FortniteUI_EFortButtonState> NewState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortButton.SetCurrentState");

	UFortButton_SetCurrentState_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortButton.GetText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UFortButton::GetText()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortButton.GetText");

	UFortButton_GetText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortButton.GetPendingState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<FortniteUI_EFortButtonState> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TEnumAsByte<FortniteUI_EFortButtonState> UFortButton::GetPendingState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortButton.GetPendingState");

	UFortButton_GetPendingState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortButton.GetIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UFortButton::GetIndex()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortButton.GetIndex");

	UFortButton_GetIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortButton.GetDisabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool UFortButton::GetDisabled()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortButton.GetDisabled");

	UFortButton_GetDisabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortButton.GetCurrentState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<FortniteUI_EFortButtonState> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TEnumAsByte<FortniteUI_EFortButtonState> UFortButton::GetCurrentState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortButton.GetCurrentState");

	UFortButton_GetCurrentState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortTabButton.SetSelection
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           InSelected                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UFortTabButton::SetSelection(bool InSelected)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortTabButton.SetSelection");

	UFortTabButton_SetSelection_Params params;
	params.InSelected = InSelected;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortTabButton.IsSelected
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool UFortTabButton::IsSelected()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortTabButton.IsSelected");

	UFortTabButton_IsSelected_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortTabButton.ClearSelection
// (Final, Native, Public, BlueprintCallable)
void UFortTabButton::ClearSelection()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortTabButton.ClearSelection");

	UFortTabButton_ClearSelection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortTabButton._BPOnSelectedChanged
// (Event, Protected, BlueprintEvent)
void UFortTabButton::_BPOnSelectedChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortTabButton._BPOnSelectedChanged");

	UFortTabButton__BPOnSelectedChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortCapturePointWidget.OnCapturePointDataChanged
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool                           bActivated                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                           bLocked                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// float                          CapturePercentage              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<FortniteGame_ECaptureState> CaptureState                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<FortniteGame_EFortTeam> ControllingTeam                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFortCapturePointWidget::OnCapturePointDataChanged(bool bActivated, bool bLocked, float CapturePercentage, TEnumAsByte<FortniteGame_ECaptureState> CaptureState, TEnumAsByte<FortniteGame_EFortTeam> ControllingTeam)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortCapturePointWidget.OnCapturePointDataChanged");

	UFortCapturePointWidget_OnCapturePointDataChanged_Params params;
	params.bActivated = bActivated;
	params.bLocked = bLocked;
	params.CapturePercentage = CapturePercentage;
	params.CaptureState = CaptureState;
	params.ControllingTeam = ControllingTeam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortChatContainer.SetNativeWidgetHost
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UNativeWidgetHost*       InNativeWidgetHost             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFortChatContainer::SetNativeWidgetHost(class UNativeWidgetHost* InNativeWidgetHost)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortChatContainer.SetNativeWidgetHost");

	UFortChatContainer_SetNativeWidgetHost_Params params;
	params.InNativeWidgetHost = InNativeWidgetHost;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortChatContainer.AttachChatWindowToNativeWidget
// (Final, Native, Public, BlueprintCallable)
void UFortChatContainer::AttachChatWindowToNativeWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortChatContainer.AttachChatWindowToNativeWidget");

	UFortChatContainer_AttachChatWindowToNativeWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortItemCollectorWidget.OnItemCollectorValuesChanged
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<int>                    DepositAmounts                 (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<int>                    DepositGoals                   (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UFortItemCollectorWidget::OnItemCollectorValuesChanged(TArray<int>* DepositAmounts, TArray<int>* DepositGoals)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortItemCollectorWidget.OnItemCollectorValuesChanged");

	UFortItemCollectorWidget_OnItemCollectorValuesChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DepositAmounts != nullptr)
		*DepositAmounts = params.DepositAmounts;
	if (DepositGoals != nullptr)
		*DepositGoals = params.DepositGoals;

}


// Function FortniteUI.FortItemCollectorWidget.OnItemCollectorStateChanged
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<FortniteGame_EFortItemCollectorState> ItemCollectorState             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFortItemCollectorWidget::OnItemCollectorStateChanged(TEnumAsByte<FortniteGame_EFortItemCollectorState> ItemCollectorState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortItemCollectorWidget.OnItemCollectorStateChanged");

	UFortItemCollectorWidget_OnItemCollectorStateChanged_Params params;
	params.ItemCollectorState = ItemCollectorState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortItemCollectorWidget.OnItemCollectorChanged
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class ABuildingItemCollectorActor* OutItemCollector               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFortItemCollectorWidget::OnItemCollectorChanged(class ABuildingItemCollectorActor* OutItemCollector)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortItemCollectorWidget.OnItemCollectorChanged");

	UFortItemCollectorWidget_OnItemCollectorChanged_Params params;
	params.OutItemCollector = OutItemCollector;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortListItem.ToggleExpansion
// (Event, Public, BlueprintEvent)
void UFortListItem::ToggleExpansion()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortListItem.ToggleExpansion");

	UFortListItem_ToggleExpansion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortListItem.SetSelected
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bSelected                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UFortListItem::SetSelected(bool bSelected)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortListItem.SetSelected");

	UFortListItem_SetSelected_Params params;
	params.bSelected = bSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortListItem.SetIndexInList
// (Event, Public, BlueprintEvent)
// Parameters:
// int                            InIndexInList                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFortListItem::SetIndexInList(int InIndexInList)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortListItem.SetIndexInList");

	UFortListItem_SetIndexInList_Params params;
	params.InIndexInList = InIndexInList;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortListItem.SetData
// (Event, Public, BlueprintEvent)
// Parameters:
// class UObject*                 InData                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFortListItem::SetData(class UObject* InData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortListItem.SetData");

	UFortListItem_SetData_Params params;
	params.InData = InData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortListItem.Private_OnExpanderArrowShiftClicked
// (Event, Public, BlueprintEvent)
void UFortListItem::Private_OnExpanderArrowShiftClicked()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortListItem.Private_OnExpanderArrowShiftClicked");

	UFortListItem_Private_OnExpanderArrowShiftClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortListItem.IsItemExpanded
// (Event, Public, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool UFortListItem::IsItemExpanded()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortListItem.IsItemExpanded");

	UFortListItem_IsItemExpanded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortListItem.GetSelectionMode
// (Event, Public, BlueprintEvent, Const)
// Parameters:
// TEnumAsByte<Slate_ESelectionMode> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TEnumAsByte<Slate_ESelectionMode> UFortListItem::GetSelectionMode()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortListItem.GetSelectionMode");

	UFortListItem_GetSelectionMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortListItem.GetIndentLevel
// (Event, Public, BlueprintEvent, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UFortListItem::GetIndentLevel()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortListItem.GetIndentLevel");

	UFortListItem_GetIndentLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortListItem.DoesItemHaveChildren
// (Event, Public, BlueprintEvent, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UFortListItem::DoesItemHaveChildren()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortListItem.DoesItemHaveChildren");

	UFortListItem_DoesItemHaveChildren_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortLoginRewardItem.SetUnclaimedItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInUnclaimedItem               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UFortLoginRewardItem::SetUnclaimedItem(bool bInUnclaimedItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortLoginRewardItem.SetUnclaimedItem");

	UFortLoginRewardItem_SetUnclaimedItem_Params params;
	params.bInUnclaimedItem = bInUnclaimedItem;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortLoginRewardItem.SetPlayClaimAnimation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInPlayClaimAnimation          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UFortLoginRewardItem::SetPlayClaimAnimation(bool bInPlayClaimAnimation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortLoginRewardItem.SetPlayClaimAnimation");

	UFortLoginRewardItem_SetPlayClaimAnimation_Params params;
	params.bInPlayClaimAnimation = bInPlayClaimAnimation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortLoginRewardItem.SetLoginRewardDay
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            InLoginRewardDay               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFortLoginRewardItem::SetLoginRewardDay(int InLoginRewardDay)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortLoginRewardItem.SetLoginRewardDay");

	UFortLoginRewardItem_SetLoginRewardDay_Params params;
	params.InLoginRewardDay = InLoginRewardDay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortLoginRewardItem.SetHighValueItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInHighValueItem               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UFortLoginRewardItem::SetHighValueItem(bool bInHighValueItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortLoginRewardItem.SetHighValueItem");

	UFortLoginRewardItem_SetHighValueItem_Params params;
	params.bInHighValueItem = bInHighValueItem;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortLoginRewardItem.SetFortItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFortItem*               InFortItem                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFortLoginRewardItem::SetFortItem(class UFortItem* InFortItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortLoginRewardItem.SetFortItem");

	UFortLoginRewardItem_SetFortItem_Params params;
	params.InFortItem = InFortItem;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortLoginRewardItem.CreateItemTooltip
// (Final, Native, Public, BlueprintCallable)
void UFortLoginRewardItem::CreateItemTooltip()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortLoginRewardItem.CreateItemTooltip");

	UFortLoginRewardItem_CreateItemTooltip_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortLoginRewards.SetGridPanel
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UUniformGridPanel*       InGridPanel                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFortLoginRewards::SetGridPanel(class UUniformGridPanel* InGridPanel)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortLoginRewards.SetGridPanel");

	UFortLoginRewards_SetGridPanel_Params params;
	params.InGridPanel = InGridPanel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortLoginRewards.HandlePageRight
// (Final, Native, Public, BlueprintCallable)
void UFortLoginRewards::HandlePageRight()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortLoginRewards.HandlePageRight");

	UFortLoginRewards_HandlePageRight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortLoginRewards.HandlePageLeft
// (Final, Native, Public, BlueprintCallable)
void UFortLoginRewards::HandlePageLeft()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortLoginRewards.HandlePageLeft");

	UFortLoginRewards_HandlePageLeft_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortLoginRewards.GetCurrentPage
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UFortLoginRewards::GetCurrentPage()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortLoginRewards.GetCurrentPage");

	UFortLoginRewards_GetCurrentPage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortLoginRewards.GetCurrentLoginDays
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UFortLoginRewards::GetCurrentLoginDays()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortLoginRewards.GetCurrentLoginDays");

	UFortLoginRewards_GetCurrentLoginDays_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortLoginRewards.EnablePaging
// (Event, Protected, BlueprintEvent)
// Parameters:
// TEnumAsByte<FortniteUI_EPageDirection> Direction                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFortLoginRewards::EnablePaging(TEnumAsByte<FortniteUI_EPageDirection> Direction)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortLoginRewards.EnablePaging");

	UFortLoginRewards_EnablePaging_Params params;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortLoginRewards.DisablePaging
// (Event, Protected, BlueprintEvent)
// Parameters:
// TEnumAsByte<FortniteUI_EPageDirection> Direction                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFortLoginRewards::DisablePaging(TEnumAsByte<FortniteUI_EPageDirection> Direction)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortLoginRewards.DisablePaging");

	UFortLoginRewards_DisablePaging_Params params;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortLoginRewards.CreateLoginRewardWidget
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortLoginRewardItem*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UFortLoginRewardItem* UFortLoginRewards::CreateLoginRewardWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortLoginRewards.CreateLoginRewardWidget");

	UFortLoginRewards_CreateLoginRewardWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortLoginWindow.ShouldShowLoginButton
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 InEmail                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 InPassword                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool UFortLoginWindow::ShouldShowLoginButton(const struct FString& InEmail, const struct FString& InPassword)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortLoginWindow.ShouldShowLoginButton");

	UFortLoginWindow_ShouldShowLoginButton_Params params;
	params.InEmail = InEmail;
	params.InPassword = InPassword;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortLoginWindow.OnLoginStatusChanged
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// TEnumAsByte<FortniteUI_EUILoginStatus> NewStatus                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FText                   InMessage                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UFortLoginWindow::OnLoginStatusChanged(TEnumAsByte<FortniteUI_EUILoginStatus> NewStatus, const struct FText& InMessage)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortLoginWindow.OnLoginStatusChanged");

	UFortLoginWindow_OnLoginStatusChanged_Params params;
	params.NewStatus = NewStatus;
	params.InMessage = InMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortLoginWindow.Login
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FString                 InEmail                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FString                 InPassword                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bRemember                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UFortLoginWindow::Login(const struct FString& InEmail, const struct FString& InPassword, bool bRemember)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortLoginWindow.Login");

	UFortLoginWindow_Login_Params params;
	params.InEmail = InEmail;
	params.InPassword = InPassword;
	params.bRemember = bRemember;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortLoginWindow.IsRememberMeChecked
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool UFortLoginWindow::IsRememberMeChecked()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortLoginWindow.IsRememberMeChecked");

	UFortLoginWindow_IsRememberMeChecked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortLoginWindow.GetLoginStatusText
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UFortLoginWindow::GetLoginStatusText()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortLoginWindow.GetLoginStatusText");

	UFortLoginWindow_GetLoginStatusText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortLoginWindow.GetDefaultEmail
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UFortLoginWindow::GetDefaultEmail()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortLoginWindow.GetDefaultEmail");

	UFortLoginWindow_GetDefaultEmail_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortMovieWidget.SetMediaPlayer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMediaPlayer*            NewMediaPlayer                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFortMovieWidget::SetMediaPlayer(class UMediaPlayer* NewMediaPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortMovieWidget.SetMediaPlayer");

	UFortMovieWidget_SetMediaPlayer_Params params;
	params.NewMediaPlayer = NewMediaPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortMovieWidget.RequestStopMovie
// (Final, Native, Public, BlueprintCallable)
void UFortMovieWidget::RequestStopMovie()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortMovieWidget.RequestStopMovie");

	UFortMovieWidget_RequestStopMovie_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortMovieWidget.RequestPlayMovie
// (Final, Native, Public, BlueprintCallable)
void UFortMovieWidget::RequestPlayMovie()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortMovieWidget.RequestPlayMovie");

	UFortMovieWidget_RequestPlayMovie_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortMovieWidget.GetMediaPlayer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMediaPlayer*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMediaPlayer* UFortMovieWidget::GetMediaPlayer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortMovieWidget.GetMediaPlayer");

	UFortMovieWidget_GetMediaPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortSocialItemWidget.SetSocialItem
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortSocialItem*         InSocialItem                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFortSocialItemWidget::SetSocialItem(class UFortSocialItem* InSocialItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortSocialItemWidget.SetSocialItem");

	UFortSocialItemWidget_SetSocialItem_Params params;
	params.InSocialItem = InSocialItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortTutorialOverlay.SetupNativeWidgets
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UNamedSlot*              NativeSlot                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFortTutorialOverlay::SetupNativeWidgets(class UNamedSlot* NativeSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortTutorialOverlay.SetupNativeWidgets");

	UFortTutorialOverlay_SetupNativeWidgets_Params params;
	params.NativeSlot = NativeSlot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortTutorialOverlay.SetTutorialNotificationActive
// (Final, Native, Private)
// Parameters:
// bool                           bActive                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UFortTutorialOverlay::SetTutorialNotificationActive(bool bActive)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortTutorialOverlay.SetTutorialNotificationActive");

	UFortTutorialOverlay_SetTutorialNotificationActive_Params params;
	params.bActive = bActive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortTutorialOverlay.OpenBannerMenu
// (Final, Native, Private)
void UFortTutorialOverlay::OpenBannerMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortTutorialOverlay.OpenBannerMenu");

	UFortTutorialOverlay_OpenBannerMenu_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortTutorialScreen.PlayerFinished
// (Final, Native, Protected, BlueprintCallable)
void UFortTutorialScreen::PlayerFinished()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortTutorialScreen.PlayerFinished");

	UFortTutorialScreen_PlayerFinished_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortTutorialScreen.OnShowTutorialScreen
// (Event, Public, BlueprintEvent)
// Parameters:
// class UTexture2D*              Image                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFortTutorialScreen::OnShowTutorialScreen(class UTexture2D* Image)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortTutorialScreen.OnShowTutorialScreen");

	UFortTutorialScreen_OnShowTutorialScreen_Params params;
	params.Image = Image;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortTutorialScreen.OnHideTutorialScreen
// (Event, Public, BlueprintEvent)
void UFortTutorialScreen::OnHideTutorialScreen()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortTutorialScreen.OnHideTutorialScreen");

	UFortTutorialScreen_OnHideTutorialScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortUIManagerWidget.UpdateStateWidgetContent
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortUIStateWidget*      StateWidget                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFortUIManagerWidget::UpdateStateWidgetContent(class UFortUIStateWidget* StateWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortUIManagerWidget.UpdateStateWidgetContent");

	UFortUIManagerWidget_UpdateStateWidgetContent_Params params;
	params.StateWidget = StateWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortUIManagerWidget.UnregisterStateTrigger
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFortUIStateTrigger*     TriggerToRemove                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFortUIManagerWidget::UnregisterStateTrigger(class UFortUIStateTrigger* TriggerToRemove)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortUIManagerWidget.UnregisterStateTrigger");

	UFortUIManagerWidget_UnregisterStateTrigger_Params params;
	params.TriggerToRemove = TriggerToRemove;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortUIManagerWidget.ShowErrorDialog
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FText                   OperationDesc                  (Parm, NativeAccessSpecifierPublic)
// struct FText                   DisplayMessage                 (Parm, NativeAccessSpecifierPublic)
// struct FString                 ErrorCode                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFortUIManagerWidget::STATIC_ShowErrorDialog(class UObject* WorldContextObject, const struct FText& OperationDesc, const struct FText& DisplayMessage, const struct FString& ErrorCode)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortUIManagerWidget.ShowErrorDialog");

	UFortUIManagerWidget_ShowErrorDialog_Params params;
	params.WorldContextObject = WorldContextObject;
	params.OperationDesc = OperationDesc;
	params.DisplayMessage = DisplayMessage;
	params.ErrorCode = ErrorCode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortUIManagerWidget.SetStateContentDisplayed
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bDisplay                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UFortUIManagerWidget::SetStateContentDisplayed(bool bDisplay)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortUIManagerWidget.SetStateContentDisplayed");

	UFortUIManagerWidget_SetStateContentDisplayed_Params params;
	params.bDisplay = bDisplay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortUIManagerWidget.RegisterStateTrigger
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFortUIStateTrigger*     StateTrigger                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFortUIManagerWidget::RegisterStateTrigger(class UFortUIStateTrigger* StateTrigger)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortUIManagerWidget.RegisterStateTrigger");

	UFortUIManagerWidget_RegisterStateTrigger_Params params;
	params.StateTrigger = StateTrigger;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortUIManagerWidget.OnStateStarted
// (Event, Public, BlueprintEvent)
void UFortUIManagerWidget::OnStateStarted()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortUIManagerWidget.OnStateStarted");

	UFortUIManagerWidget_OnStateStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortUIManagerWidget.OnShowConfirmation
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FFortDialogDescription  Description                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UFortUIManagerWidget::OnShowConfirmation(const struct FFortDialogDescription& Description)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortUIManagerWidget.OnShowConfirmation");

	UFortUIManagerWidget_OnShowConfirmation_Params params;
	params.Description = Description;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// DelegateFunction FortniteUI.FortUIManagerWidget.OnEndSpokenDialog__DelegateSignature
// (MulticastDelegate, Public, Delegate)
void UFortUIManagerWidget::OnEndSpokenDialog__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction FortniteUI.FortUIManagerWidget.OnEndSpokenDialog__DelegateSignature");

	UFortUIManagerWidget_OnEndSpokenDialog__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// DelegateFunction FortniteUI.FortUIManagerWidget.OnBeginSpokenDialog__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UTexture2D*              Image                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FText                   Title                          (Parm, NativeAccessSpecifierPublic)
void UFortUIManagerWidget::OnBeginSpokenDialog__DelegateSignature(class UTexture2D* Image, const struct FText& Title)
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction FortniteUI.FortUIManagerWidget.OnBeginSpokenDialog__DelegateSignature");

	UFortUIManagerWidget_OnBeginSpokenDialog__DelegateSignature_Params params;
	params.Image = Image;
	params.Title = Title;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortUIManagerWidget.KillConfirmationDialog
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFortUIManagerWidget::STATIC_KillConfirmationDialog(class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortUIManagerWidget.KillConfirmationDialog");

	UFortUIManagerWidget_KillConfirmationDialog_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortUIManagerWidget.IsStateContentDisplayed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool UFortUIManagerWidget::IsStateContentDisplayed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortUIManagerWidget.IsStateContentDisplayed");

	UFortUIManagerWidget_IsStateContentDisplayed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortUIManagerWidget.GetUIManagerWidget
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortUIManagerWidget*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UFortUIManagerWidget* UFortUIManagerWidget::STATIC_GetUIManagerWidget(class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortUIManagerWidget.GetUIManagerWidget");

	UFortUIManagerWidget_GetUIManagerWidget_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortUIManagerWidget.GetCurrentUIStateWidget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortUIStateWidget*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UFortUIStateWidget* UFortUIManagerWidget::GetCurrentUIStateWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortUIManagerWidget.GetCurrentUIStateWidget");

	UFortUIManagerWidget_GetCurrentUIStateWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortUIManagerWidget.DisplayStateContent
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bDisplay                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UFortUIManagerWidget::DisplayStateContent(bool bDisplay)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortUIManagerWidget.DisplayStateContent");

	UFortUIManagerWidget_DisplayStateContent_Params params;
	params.bDisplay = bDisplay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortUIManagerWidget.DisplayErrorDialog
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FFortErrorInfo          Info                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UFortUIManagerWidget::DisplayErrorDialog(const struct FFortErrorInfo& Info)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortUIManagerWidget.DisplayErrorDialog");

	UFortUIManagerWidget_DisplayErrorDialog_Params params;
	params.Info = Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortUIManagerWidget.CreateUIStateTrigger
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UClass*                  Class                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortUIStateTrigger*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UFortUIStateTrigger* UFortUIManagerWidget::STATIC_CreateUIStateTrigger(class UClass* Class, class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortUIManagerWidget.CreateUIStateTrigger");

	UFortUIManagerWidget_CreateUIStateTrigger_Params params;
	params.Class = Class;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortUIManagerWidget._BPGetCurrentUIState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<FortniteUI_EFortUIState> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TEnumAsByte<FortniteUI_EFortUIState> UFortUIManagerWidget::_BPGetCurrentUIState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortUIManagerWidget._BPGetCurrentUIState");

	UFortUIManagerWidget__BPGetCurrentUIState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortUIMessageItemWidget.StackItem
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUIMessageItemWidget* StackedItem                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFortUIMessageItemWidget::StackItem(class UFortUIMessageItemWidget* StackedItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortUIMessageItemWidget.StackItem");

	UFortUIMessageItemWidget_StackItem_Params params;
	params.StackedItem = StackedItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortUIMessageItemWidget.RequestRemove
// (Final, Native, Public, BlueprintCallable)
void UFortUIMessageItemWidget::RequestRemove()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortUIMessageItemWidget.RequestRemove");

	UFortUIMessageItemWidget_RequestRemove_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortUIMessageItemWidget.OnRemoveRequested
// (Event, Protected, BlueprintEvent)
void UFortUIMessageItemWidget::OnRemoveRequested()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortUIMessageItemWidget.OnRemoveRequested");

	UFortUIMessageItemWidget_OnRemoveRequested_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortVaultDetailsWidget.SetItemForCommand
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFortItem*               InItem                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<FortniteUI_EVaultCommandType> InCommand                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bForce                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UFortVaultDetailsWidget::SetItemForCommand(class UFortItem* InItem, TEnumAsByte<FortniteUI_EVaultCommandType> InCommand, bool bForce)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortVaultDetailsWidget.SetItemForCommand");

	UFortVaultDetailsWidget_SetItemForCommand_Params params;
	params.InItem = InItem;
	params.InCommand = InCommand;
	params.bForce = bForce;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortVaultDetailsWidget.SetItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFortItem*               InItem                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bForce                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UFortVaultDetailsWidget::SetItem(class UFortItem* InItem, bool bForce)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortVaultDetailsWidget.SetItem");

	UFortVaultDetailsWidget_SetItem_Params params;
	params.InItem = InItem;
	params.bForce = bForce;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortVaultDetailsWidget.HasPendingUpgrade
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool UFortVaultDetailsWidget::HasPendingUpgrade()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortVaultDetailsWidget.HasPendingUpgrade");

	UFortVaultDetailsWidget_HasPendingUpgrade_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortVaultDetailsWidget.HasPendingCustomization
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool UFortVaultDetailsWidget::HasPendingCustomization()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortVaultDetailsWidget.HasPendingCustomization");

	UFortVaultDetailsWidget_HasPendingCustomization_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortVaultDetailsWidget.GetProperties
// (Final, Native, Protected, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FVaultPropertyInfo> Properties                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                           bWithUpgradeData               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UFortVaultDetailsWidget::GetProperties(TArray<struct FVaultPropertyInfo>* Properties, bool bWithUpgradeData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortVaultDetailsWidget.GetProperties");

	UFortVaultDetailsWidget_GetProperties_Params params;
	params.bWithUpgradeData = bWithUpgradeData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Properties != nullptr)
		*Properties = params.Properties;

}


// Function FortniteUI.FortVaultDetailsWidget.GetMaxLevelProperty
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FVaultPropertyInfo      ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FVaultPropertyInfo UFortVaultDetailsWidget::GetMaxLevelProperty()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortVaultDetailsWidget.GetMaxLevelProperty");

	UFortVaultDetailsWidget_GetMaxLevelProperty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortVaultDetailsWidget.GetLevelProperty
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FVaultPropertyInfo      ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FVaultPropertyInfo UFortVaultDetailsWidget::GetLevelProperty()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortVaultDetailsWidget.GetLevelProperty");

	UFortVaultDetailsWidget_GetLevelProperty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortVaultDetailsWidget.GetItem
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UFortItem*               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UFortItem* UFortVaultDetailsWidget::GetItem()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortVaultDetailsWidget.GetItem");

	UFortVaultDetailsWidget_GetItem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortVaultDetailsWidget.GetInfo
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FVaultDetailsInfo       ReturnValue                    (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FVaultDetailsInfo UFortVaultDetailsWidget::GetInfo()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortVaultDetailsWidget.GetInfo");

	UFortVaultDetailsWidget_GetInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortVaultDetailsWidget.GetAlterationSlots
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FVaultAlterationInfo> Slots                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UFortVaultDetailsWidget::GetAlterationSlots(TArray<struct FVaultAlterationInfo>* Slots)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortVaultDetailsWidget.GetAlterationSlots");

	UFortVaultDetailsWidget_GetAlterationSlots_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Slots != nullptr)
		*Slots = params.Slots;

}


// Function FortniteUI.FortVaultDetailsWidget._BPOnNewItemSet
// (Event, Protected, BlueprintEvent)
void UFortVaultDetailsWidget::_BPOnNewItemSet()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortVaultDetailsWidget._BPOnNewItemSet");

	UFortVaultDetailsWidget__BPOnNewItemSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteUI.FortVaultWidget.IsSupportedSortType
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<FortniteUI_EVaultContentSortType> InSortType                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<FortniteUI_EVaultContentType> InContentType                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TEnumAsByte<FortniteGame_EFortInventoryFilter> InContentSubType               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool UFortVaultWidget::IsSupportedSortType(TEnumAsByte<FortniteUI_EVaultContentSortType> InSortType, TEnumAsByte<FortniteUI_EVaultContentType> InContentType, TEnumAsByte<FortniteGame_EFortInventoryFilter> InContentSubType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortVaultWidget.IsSupportedSortType");

	UFortVaultWidget_IsSupportedSortType_Params params;
	params.InSortType = InSortType;
	params.InContentType = InContentType;
	params.InContentSubType = InContentSubType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FortniteUI.FortVaultWidget.GetItemList
// (Final, Native, Protected, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UFortAccountItem*> OutItemList                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TEnumAsByte<FortniteUI_EVaultContentType> InContentType                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVaultContentDetails    Details                        (Parm, NativeAccessSpecifierPublic)
void UFortVaultWidget::GetItemList(TArray<class UFortAccountItem*>* OutItemList, TEnumAsByte<FortniteUI_EVaultContentType> InContentType, const struct FVaultContentDetails& Details)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortVaultWidget.GetItemList");

	UFortVaultWidget_GetItemList_Params params;
	params.InContentType = InContentType;
	params.Details = Details;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutItemList != nullptr)
		*OutItemList = params.OutItemList;

}


// Function FortniteUI.FortVaultWidget._BPOnContentUpdated
// (Event, Protected, BlueprintEvent)
void UFortVaultWidget::_BPOnContentUpdated()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteUI.FortVaultWidget._BPOnContentUpdated");

	UFortVaultWidget__BPOnContentUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
