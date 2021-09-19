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

// Function TopLevel-TabControls.TopLevel-TabControls_C.Menu_ToolTipWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
class UWidget* UTopLevel_TabControls_C::Menu_ToolTipWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TopLevel-TabControls.TopLevel-TabControls_C.Menu_ToolTipWidget");

	UTopLevel_TabControls_C_Menu_ToolTipWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TopLevel-TabControls.TopLevel-TabControls_C.Friends_ToolTipWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
class UWidget* UTopLevel_TabControls_C::Friends_ToolTipWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TopLevel-TabControls.TopLevel-TabControls_C.Friends_ToolTipWidget");

	UTopLevel_TabControls_C_Friends_ToolTipWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TopLevel-TabControls.TopLevel-TabControls_C.Journal_ToolTipWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
class UWidget* UTopLevel_TabControls_C::Journal_ToolTipWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TopLevel-TabControls.TopLevel-TabControls_C.Journal_ToolTipWidget");

	UTopLevel_TabControls_C_Journal_ToolTipWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TopLevel-TabControls.TopLevel-TabControls_C.GetTotalQuestCount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            outQuestCount                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTopLevel_TabControls_C::GetTotalQuestCount(int* outQuestCount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TopLevel-TabControls.TopLevel-TabControls_C.GetTotalQuestCount");

	UTopLevel_TabControls_C_GetTotalQuestCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (outQuestCount != nullptr)
		*outQuestCount = params.outQuestCount;

}


// Function TopLevel-TabControls.TopLevel-TabControls_C.SetQuestCountIndicator
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UTopLevel_TabControls_C::SetQuestCountIndicator()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TopLevel-TabControls.TopLevel-TabControls_C.SetQuestCountIndicator");

	UTopLevel_TabControls_C_SetQuestCountIndicator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TopLevel-TabControls.TopLevel-TabControls_C.InitializeFriendAndJournal
// (Public, BlueprintCallable, BlueprintEvent)
void UTopLevel_TabControls_C::InitializeFriendAndJournal()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TopLevel-TabControls.TopLevel-TabControls_C.InitializeFriendAndJournal");

	UTopLevel_TabControls_C_InitializeFriendAndJournal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TopLevel-TabControls.TopLevel-TabControls_C.SelectButtonAndMenuAnchor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortBaseButton*         Button                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMenuAnchor*             MenuAnchor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           FocusMenu                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTopLevel_TabControls_C::SelectButtonAndMenuAnchor(class UFortBaseButton* Button, class UMenuAnchor* MenuAnchor, bool FocusMenu)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TopLevel-TabControls.TopLevel-TabControls_C.SelectButtonAndMenuAnchor");

	UTopLevel_TabControls_C_SelectButtonAndMenuAnchor_Params params;
	params.Button = Button;
	params.MenuAnchor = MenuAnchor;
	params.FocusMenu = FocusMenu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TopLevel-TabControls.TopLevel-TabControls_C.OnGetJournal
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
class UWidget* UTopLevel_TabControls_C::OnGetJournal()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TopLevel-TabControls.TopLevel-TabControls_C.OnGetJournal");

	UTopLevel_TabControls_C_OnGetJournal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TopLevel-TabControls.TopLevel-TabControls_C.UpdateFriendButtonState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<FortniteUI_EFortUIFeatureState> FeatureState                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTopLevel_TabControls_C::UpdateFriendButtonState(TEnumAsByte<FortniteUI_EFortUIFeatureState> FeatureState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TopLevel-TabControls.TopLevel-TabControls_C.UpdateFriendButtonState");

	UTopLevel_TabControls_C_UpdateFriendButtonState_Params params;
	params.FeatureState = FeatureState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TopLevel-TabControls.TopLevel-TabControls_C.OpenMainMenu
// (Public, BlueprintCallable, BlueprintEvent)
void UTopLevel_TabControls_C::OpenMainMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TopLevel-TabControls.TopLevel-TabControls_C.OpenMainMenu");

	UTopLevel_TabControls_C_OpenMainMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TopLevel-TabControls.TopLevel-TabControls_C.HandleMainMenuClose
// (Public, BlueprintCallable, BlueprintEvent)
void UTopLevel_TabControls_C::HandleMainMenuClose()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TopLevel-TabControls.TopLevel-TabControls_C.HandleMainMenuClose");

	UTopLevel_TabControls_C_HandleMainMenuClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TopLevel-TabControls.TopLevel-TabControls_C.HandleMenuAnchorChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UButtonIconText_C*       Menu_Button                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Is_Open                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTopLevel_TabControls_C::HandleMenuAnchorChanged(class UButtonIconText_C* Menu_Button, bool Is_Open)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TopLevel-TabControls.TopLevel-TabControls_C.HandleMenuAnchorChanged");

	UTopLevel_TabControls_C_HandleMenuAnchorChanged_Params params;
	params.Menu_Button = Menu_Button;
	params.Is_Open = Is_Open;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TopLevel-TabControls.TopLevel-TabControls_C.OnGetMainMenu
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
class UWidget* UTopLevel_TabControls_C::OnGetMainMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TopLevel-TabControls.TopLevel-TabControls_C.OnGetMainMenu");

	UTopLevel_TabControls_C_OnGetMainMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TopLevel-TabControls.TopLevel-TabControls_C.OnGetFriendsList
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
class UWidget* UTopLevel_TabControls_C::OnGetFriendsList()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TopLevel-TabControls.TopLevel-TabControls_C.OnGetFriendsList");

	UTopLevel_TabControls_C_OnGetFriendsList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TopLevel-TabControls.TopLevel-TabControls_C.OnHandleAction
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventReply             Result                         (Parm, OutParm)
// bool                           bPassThrough                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTopLevel_TabControls_C::OnHandleAction(struct FEventReply* Result, bool* bPassThrough)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TopLevel-TabControls.TopLevel-TabControls_C.OnHandleAction");

	UTopLevel_TabControls_C_OnHandleAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
	if (bPassThrough != nullptr)
		*bPassThrough = params.bPassThrough;

}


// Function TopLevel-TabControls.TopLevel-TabControls_C.ClearActiveTab
// (Public, BlueprintCallable, BlueprintEvent)
void UTopLevel_TabControls_C::ClearActiveTab()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TopLevel-TabControls.TopLevel-TabControls_C.ClearActiveTab");

	UTopLevel_TabControls_C_ClearActiveTab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TopLevel-TabControls.TopLevel-TabControls_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTopLevel_TabControls_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TopLevel-TabControls.TopLevel-TabControls_C.Construct");

	UTopLevel_TabControls_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TopLevel-TabControls.TopLevel-TabControls_C.On Social Feature Changed_Copy
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<FortniteUI_EFortUIFeature> ChangedFeature                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TEnumAsByte<FortniteUI_EFortUIFeatureState> NewState                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTopLevel_TabControls_C::On_Social_Feature_Changed_Copy(TEnumAsByte<FortniteUI_EFortUIFeature> ChangedFeature, TEnumAsByte<FortniteUI_EFortUIFeatureState> NewState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TopLevel-TabControls.TopLevel-TabControls_C.On Social Feature Changed_Copy");

	UTopLevel_TabControls_C_On_Social_Feature_Changed_Copy_Params params;
	params.ChangedFeature = ChangedFeature;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TopLevel-TabControls.TopLevel-TabControls_C.OnSocialUpdate
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortSocialItem*> SocialItems                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UTopLevel_TabControls_C::OnSocialUpdate(TArray<class UFortSocialItem*> SocialItems)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TopLevel-TabControls.TopLevel-TabControls_C.OnSocialUpdate");

	UTopLevel_TabControls_C_OnSocialUpdate_Params params;
	params.SocialItems = SocialItems;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TopLevel-TabControls.TopLevel-TabControls_C.HandlePartyTransitionComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<FortniteGame_EFortPartyTransition> PartyTransition                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTopLevel_TabControls_C::HandlePartyTransitionComplete(TEnumAsByte<FortniteGame_EFortPartyTransition> PartyTransition)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TopLevel-TabControls.TopLevel-TabControls_C.HandlePartyTransitionComplete");

	UTopLevel_TabControls_C_HandlePartyTransitionComplete_Params params;
	params.PartyTransition = PartyTransition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TopLevel-TabControls.TopLevel-TabControls_C.HandlePartyTransitionStarted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<FortniteGame_EFortPartyTransition> PartyTransition                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTopLevel_TabControls_C::HandlePartyTransitionStarted(TEnumAsByte<FortniteGame_EFortPartyTransition> PartyTransition)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TopLevel-TabControls.TopLevel-TabControls_C.HandlePartyTransitionStarted");

	UTopLevel_TabControls_C_HandlePartyTransitionStarted_Params params;
	params.PartyTransition = PartyTransition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TopLevel-TabControls.TopLevel-TabControls_C.BndEvt__[MenuAnchor] Main Menu_K2Node_ComponentBoundEvent_871_OnMenuOpenChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bIsOpen                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTopLevel_TabControls_C::BndEvt___MenuAnchor__Main_Menu_K2Node_ComponentBoundEvent_871_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TopLevel-TabControls.TopLevel-TabControls_C.BndEvt__[MenuAnchor] Main Menu_K2Node_ComponentBoundEvent_871_OnMenuOpenChangedEvent__DelegateSignature");

	UTopLevel_TabControls_C_BndEvt___MenuAnchor__Main_Menu_K2Node_ComponentBoundEvent_871_OnMenuOpenChangedEvent__DelegateSignature_Params params;
	params.bIsOpen = bIsOpen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TopLevel-TabControls.TopLevel-TabControls_C.BndEvt__[Menu Anchor] Friends List_K2Node_ComponentBoundEvent_879_OnMenuOpenChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bIsOpen                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTopLevel_TabControls_C::BndEvt___Menu_Anchor__Friends_List_K2Node_ComponentBoundEvent_879_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TopLevel-TabControls.TopLevel-TabControls_C.BndEvt__[Menu Anchor] Friends List_K2Node_ComponentBoundEvent_879_OnMenuOpenChangedEvent__DelegateSignature");

	UTopLevel_TabControls_C_BndEvt___Menu_Anchor__Friends_List_K2Node_ComponentBoundEvent_879_OnMenuOpenChangedEvent__DelegateSignature_Params params;
	params.bIsOpen = bIsOpen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TopLevel-TabControls.TopLevel-TabControls_C.BndEvt__[Button] Friends_K2Node_ComponentBoundEvent_1106_FortBaseButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UFortBaseButton*         Button                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTopLevel_TabControls_C::BndEvt___Button__Friends_K2Node_ComponentBoundEvent_1106_FortBaseButtonClicked__DelegateSignature(class UFortBaseButton* Button)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TopLevel-TabControls.TopLevel-TabControls_C.BndEvt__[Button] Friends_K2Node_ComponentBoundEvent_1106_FortBaseButtonClicked__DelegateSignature");

	UTopLevel_TabControls_C_BndEvt___Button__Friends_K2Node_ComponentBoundEvent_1106_FortBaseButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TopLevel-TabControls.TopLevel-TabControls_C.BndEvt__[Button] Menu_K2Node_ComponentBoundEvent_1392_FortBaseButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UFortBaseButton*         Button                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTopLevel_TabControls_C::BndEvt___Button__Menu_K2Node_ComponentBoundEvent_1392_FortBaseButtonClicked__DelegateSignature(class UFortBaseButton* Button)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TopLevel-TabControls.TopLevel-TabControls_C.BndEvt__[Button] Menu_K2Node_ComponentBoundEvent_1392_FortBaseButtonClicked__DelegateSignature");

	UTopLevel_TabControls_C_BndEvt___Button__Menu_K2Node_ComponentBoundEvent_1392_FortBaseButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TopLevel-TabControls.TopLevel-TabControls_C.BndEvt__[Button] Menu_K2Node_ComponentBoundEvent_1128_FortSelectedStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UFortBaseButton*         Button                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           SELECTED                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTopLevel_TabControls_C::BndEvt___Button__Menu_K2Node_ComponentBoundEvent_1128_FortSelectedStateChanged__DelegateSignature(class UFortBaseButton* Button, bool SELECTED)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TopLevel-TabControls.TopLevel-TabControls_C.BndEvt__[Button] Menu_K2Node_ComponentBoundEvent_1128_FortSelectedStateChanged__DelegateSignature");

	UTopLevel_TabControls_C_BndEvt___Button__Menu_K2Node_ComponentBoundEvent_1128_FortSelectedStateChanged__DelegateSignature_Params params;
	params.Button = Button;
	params.SELECTED = SELECTED;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TopLevel-TabControls.TopLevel-TabControls_C.BndEvt__[Button] Friends_K2Node_ComponentBoundEvent_1225_FortSelectedStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UFortBaseButton*         Button                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           SELECTED                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTopLevel_TabControls_C::BndEvt___Button__Friends_K2Node_ComponentBoundEvent_1225_FortSelectedStateChanged__DelegateSignature(class UFortBaseButton* Button, bool SELECTED)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TopLevel-TabControls.TopLevel-TabControls_C.BndEvt__[Button] Friends_K2Node_ComponentBoundEvent_1225_FortSelectedStateChanged__DelegateSignature");

	UTopLevel_TabControls_C_BndEvt___Button__Friends_K2Node_ComponentBoundEvent_1225_FortSelectedStateChanged__DelegateSignature_Params params;
	params.Button = Button;
	params.SELECTED = SELECTED;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TopLevel-TabControls.TopLevel-TabControls_C.BndEvt__[Menu Anchor] Journal_K2Node_ComponentBoundEvent_256_OnMenuOpenChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bIsOpen                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTopLevel_TabControls_C::BndEvt___Menu_Anchor__Journal_K2Node_ComponentBoundEvent_256_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TopLevel-TabControls.TopLevel-TabControls_C.BndEvt__[Menu Anchor] Journal_K2Node_ComponentBoundEvent_256_OnMenuOpenChangedEvent__DelegateSignature");

	UTopLevel_TabControls_C_BndEvt___Menu_Anchor__Journal_K2Node_ComponentBoundEvent_256_OnMenuOpenChangedEvent__DelegateSignature_Params params;
	params.bIsOpen = bIsOpen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TopLevel-TabControls.TopLevel-TabControls_C.BndEvt__[Button]Journal_K2Node_ComponentBoundEvent_267_FortSelectedStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UFortBaseButton*         Button                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           SELECTED                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTopLevel_TabControls_C::BndEvt___Button_Journal_K2Node_ComponentBoundEvent_267_FortSelectedStateChanged__DelegateSignature(class UFortBaseButton* Button, bool SELECTED)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TopLevel-TabControls.TopLevel-TabControls_C.BndEvt__[Button]Journal_K2Node_ComponentBoundEvent_267_FortSelectedStateChanged__DelegateSignature");

	UTopLevel_TabControls_C_BndEvt___Button_Journal_K2Node_ComponentBoundEvent_267_FortSelectedStateChanged__DelegateSignature_Params params;
	params.Button = Button;
	params.SELECTED = SELECTED;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TopLevel-TabControls.TopLevel-TabControls_C.BndEvt__[Button]Journal_K2Node_ComponentBoundEvent_281_FortBaseButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UFortBaseButton*         Button                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTopLevel_TabControls_C::BndEvt___Button_Journal_K2Node_ComponentBoundEvent_281_FortBaseButtonClicked__DelegateSignature(class UFortBaseButton* Button)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TopLevel-TabControls.TopLevel-TabControls_C.BndEvt__[Button]Journal_K2Node_ComponentBoundEvent_281_FortBaseButtonClicked__DelegateSignature");

	UTopLevel_TabControls_C_BndEvt___Button_Journal_K2Node_ComponentBoundEvent_281_FortBaseButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TopLevel-TabControls.TopLevel-TabControls_C.HandleQuestUpdated
// (BlueprintCallable, BlueprintEvent)
void UTopLevel_TabControls_C::HandleQuestUpdated()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TopLevel-TabControls.TopLevel-TabControls_C.HandleQuestUpdated");

	UTopLevel_TabControls_C_HandleQuestUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TopLevel-TabControls.TopLevel-TabControls_C.HandleClientEvent_OpenQuestJournal
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 EventSource                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                 EventFocus                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortClientEvent        ClientEvent                    (ConstParm, Parm, OutParm, ReferenceParm)
void UTopLevel_TabControls_C::HandleClientEvent_OpenQuestJournal(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TopLevel-TabControls.TopLevel-TabControls_C.HandleClientEvent_OpenQuestJournal");

	UTopLevel_TabControls_C_HandleClientEvent_OpenQuestJournal_Params params;
	params.EventSource = EventSource;
	params.EventFocus = EventFocus;
	params.ClientEvent = ClientEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TopLevel-TabControls.TopLevel-TabControls_C.HandleClientEvent_OpenNewsScreen
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 EventSource                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                 EventFocus                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortClientEvent        ClientEvent                    (ConstParm, Parm, OutParm, ReferenceParm)
void UTopLevel_TabControls_C::HandleClientEvent_OpenNewsScreen(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TopLevel-TabControls.TopLevel-TabControls_C.HandleClientEvent_OpenNewsScreen");

	UTopLevel_TabControls_C_HandleClientEvent_OpenNewsScreen_Params params;
	params.EventSource = EventSource;
	params.EventFocus = EventFocus;
	params.ClientEvent = ClientEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TopLevel-TabControls.TopLevel-TabControls_C.ExecuteUbergraph_TopLevel-TabControls
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTopLevel_TabControls_C::ExecuteUbergraph_TopLevel_TabControls(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TopLevel-TabControls.TopLevel-TabControls_C.ExecuteUbergraph_TopLevel-TabControls");

	UTopLevel_TabControls_C_ExecuteUbergraph_TopLevel_TabControls_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
