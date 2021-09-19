#pragma once

// Name: Fortnite, Version: OT-6_5


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function TopLevel-TabControls.TopLevel-TabControls_C.Menu_ToolTipWidget
struct UTopLevel_TabControls_C_Menu_ToolTipWidget_Params
{
	class UWidget*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function TopLevel-TabControls.TopLevel-TabControls_C.Friends_ToolTipWidget
struct UTopLevel_TabControls_C_Friends_ToolTipWidget_Params
{
	class UWidget*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function TopLevel-TabControls.TopLevel-TabControls_C.Journal_ToolTipWidget
struct UTopLevel_TabControls_C_Journal_ToolTipWidget_Params
{
	class UWidget*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function TopLevel-TabControls.TopLevel-TabControls_C.GetTotalQuestCount
struct UTopLevel_TabControls_C_GetTotalQuestCount_Params
{
	int                                                outQuestCount;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TopLevel-TabControls.TopLevel-TabControls_C.SetQuestCountIndicator
struct UTopLevel_TabControls_C_SetQuestCountIndicator_Params
{
};

// Function TopLevel-TabControls.TopLevel-TabControls_C.InitializeFriendAndJournal
struct UTopLevel_TabControls_C_InitializeFriendAndJournal_Params
{
};

// Function TopLevel-TabControls.TopLevel-TabControls_C.SelectButtonAndMenuAnchor
struct UTopLevel_TabControls_C_SelectButtonAndMenuAnchor_Params
{
	class UFortBaseButton*                             Button;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UMenuAnchor*                                 MenuAnchor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               FocusMenu;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TopLevel-TabControls.TopLevel-TabControls_C.OnGetJournal
struct UTopLevel_TabControls_C_OnGetJournal_Params
{
	class UWidget*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function TopLevel-TabControls.TopLevel-TabControls_C.UpdateFriendButtonState
struct UTopLevel_TabControls_C_UpdateFriendButtonState_Params
{
	TEnumAsByte<FortniteUI_EFortUIFeatureState>        FeatureState;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TopLevel-TabControls.TopLevel-TabControls_C.OpenMainMenu
struct UTopLevel_TabControls_C_OpenMainMenu_Params
{
};

// Function TopLevel-TabControls.TopLevel-TabControls_C.HandleMainMenuClose
struct UTopLevel_TabControls_C_HandleMainMenuClose_Params
{
};

// Function TopLevel-TabControls.TopLevel-TabControls_C.HandleMenuAnchorChanged
struct UTopLevel_TabControls_C_HandleMenuAnchorChanged_Params
{
	class UButtonIconText_C*                           Menu_Button;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Is_Open;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TopLevel-TabControls.TopLevel-TabControls_C.OnGetMainMenu
struct UTopLevel_TabControls_C_OnGetMainMenu_Params
{
	class UWidget*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function TopLevel-TabControls.TopLevel-TabControls_C.OnGetFriendsList
struct UTopLevel_TabControls_C_OnGetFriendsList_Params
{
	class UWidget*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function TopLevel-TabControls.TopLevel-TabControls_C.OnHandleAction
struct UTopLevel_TabControls_C_OnHandleAction_Params
{
	struct FEventReply                                 Result;                                                    // (Parm, OutParm)
	bool                                               bPassThrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TopLevel-TabControls.TopLevel-TabControls_C.ClearActiveTab
struct UTopLevel_TabControls_C_ClearActiveTab_Params
{
};

// Function TopLevel-TabControls.TopLevel-TabControls_C.Construct
struct UTopLevel_TabControls_C_Construct_Params
{
};

// Function TopLevel-TabControls.TopLevel-TabControls_C.On Social Feature Changed_Copy
struct UTopLevel_TabControls_C_On_Social_Feature_Changed_Copy_Params
{
	TEnumAsByte<FortniteUI_EFortUIFeature>             ChangedFeature;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<FortniteUI_EFortUIFeatureState>        NewState;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TopLevel-TabControls.TopLevel-TabControls_C.OnSocialUpdate
struct UTopLevel_TabControls_C_OnSocialUpdate_Params
{
	TArray<class UFortSocialItem*>                     SocialItems;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TopLevel-TabControls.TopLevel-TabControls_C.HandlePartyTransitionComplete
struct UTopLevel_TabControls_C_HandlePartyTransitionComplete_Params
{
	TEnumAsByte<FortniteGame_EFortPartyTransition>     PartyTransition;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TopLevel-TabControls.TopLevel-TabControls_C.HandlePartyTransitionStarted
struct UTopLevel_TabControls_C_HandlePartyTransitionStarted_Params
{
	TEnumAsByte<FortniteGame_EFortPartyTransition>     PartyTransition;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TopLevel-TabControls.TopLevel-TabControls_C.BndEvt__[MenuAnchor] Main Menu_K2Node_ComponentBoundEvent_871_OnMenuOpenChangedEvent__DelegateSignature
struct UTopLevel_TabControls_C_BndEvt___MenuAnchor__Main_Menu_K2Node_ComponentBoundEvent_871_OnMenuOpenChangedEvent__DelegateSignature_Params
{
	bool                                               bIsOpen;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TopLevel-TabControls.TopLevel-TabControls_C.BndEvt__[Menu Anchor] Friends List_K2Node_ComponentBoundEvent_879_OnMenuOpenChangedEvent__DelegateSignature
struct UTopLevel_TabControls_C_BndEvt___Menu_Anchor__Friends_List_K2Node_ComponentBoundEvent_879_OnMenuOpenChangedEvent__DelegateSignature_Params
{
	bool                                               bIsOpen;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TopLevel-TabControls.TopLevel-TabControls_C.BndEvt__[Button] Friends_K2Node_ComponentBoundEvent_1106_FortBaseButtonClicked__DelegateSignature
struct UTopLevel_TabControls_C_BndEvt___Button__Friends_K2Node_ComponentBoundEvent_1106_FortBaseButtonClicked__DelegateSignature_Params
{
	class UFortBaseButton*                             Button;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TopLevel-TabControls.TopLevel-TabControls_C.BndEvt__[Button] Menu_K2Node_ComponentBoundEvent_1392_FortBaseButtonClicked__DelegateSignature
struct UTopLevel_TabControls_C_BndEvt___Button__Menu_K2Node_ComponentBoundEvent_1392_FortBaseButtonClicked__DelegateSignature_Params
{
	class UFortBaseButton*                             Button;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TopLevel-TabControls.TopLevel-TabControls_C.BndEvt__[Button] Menu_K2Node_ComponentBoundEvent_1128_FortSelectedStateChanged__DelegateSignature
struct UTopLevel_TabControls_C_BndEvt___Button__Menu_K2Node_ComponentBoundEvent_1128_FortSelectedStateChanged__DelegateSignature_Params
{
	class UFortBaseButton*                             Button;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               SELECTED;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TopLevel-TabControls.TopLevel-TabControls_C.BndEvt__[Button] Friends_K2Node_ComponentBoundEvent_1225_FortSelectedStateChanged__DelegateSignature
struct UTopLevel_TabControls_C_BndEvt___Button__Friends_K2Node_ComponentBoundEvent_1225_FortSelectedStateChanged__DelegateSignature_Params
{
	class UFortBaseButton*                             Button;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               SELECTED;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TopLevel-TabControls.TopLevel-TabControls_C.BndEvt__[Menu Anchor] Journal_K2Node_ComponentBoundEvent_256_OnMenuOpenChangedEvent__DelegateSignature
struct UTopLevel_TabControls_C_BndEvt___Menu_Anchor__Journal_K2Node_ComponentBoundEvent_256_OnMenuOpenChangedEvent__DelegateSignature_Params
{
	bool                                               bIsOpen;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TopLevel-TabControls.TopLevel-TabControls_C.BndEvt__[Button]Journal_K2Node_ComponentBoundEvent_267_FortSelectedStateChanged__DelegateSignature
struct UTopLevel_TabControls_C_BndEvt___Button_Journal_K2Node_ComponentBoundEvent_267_FortSelectedStateChanged__DelegateSignature_Params
{
	class UFortBaseButton*                             Button;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               SELECTED;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TopLevel-TabControls.TopLevel-TabControls_C.BndEvt__[Button]Journal_K2Node_ComponentBoundEvent_281_FortBaseButtonClicked__DelegateSignature
struct UTopLevel_TabControls_C_BndEvt___Button_Journal_K2Node_ComponentBoundEvent_281_FortBaseButtonClicked__DelegateSignature_Params
{
	class UFortBaseButton*                             Button;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TopLevel-TabControls.TopLevel-TabControls_C.HandleQuestUpdated
struct UTopLevel_TabControls_C_HandleQuestUpdated_Params
{
};

// Function TopLevel-TabControls.TopLevel-TabControls_C.HandleClientEvent_OpenQuestJournal
struct UTopLevel_TabControls_C_HandleClientEvent_OpenQuestJournal_Params
{
	class UObject*                                     EventSource;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                     EventFocus;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FFortClientEvent                            ClientEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function TopLevel-TabControls.TopLevel-TabControls_C.HandleClientEvent_OpenNewsScreen
struct UTopLevel_TabControls_C_HandleClientEvent_OpenNewsScreen_Params
{
	class UObject*                                     EventSource;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                     EventFocus;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FFortClientEvent                            ClientEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function TopLevel-TabControls.TopLevel-TabControls_C.ExecuteUbergraph_TopLevel-TabControls
struct UTopLevel_TabControls_C_ExecuteUbergraph_TopLevel_TabControls_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
