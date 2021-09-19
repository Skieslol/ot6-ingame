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

// Function UIManager.UIManager_C.HandleModalContentCleared
struct UUIManager_C_HandleModalContentCleared_Params
{
};

// Function UIManager.UIManager_C.IsStateContentChildShowing
struct UUIManager_C_IsStateContentChildShowing_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function UIManager.UIManager_C.DismissPurchaseWidget
struct UUIManager_C_DismissPurchaseWidget_Params
{
};

// Function UIManager.UIManager_C.DisplayPurchaseWidget
struct UUIManager_C_DisplayPurchaseWidget_Params
{
	class UWidget*                                     Web_Widget;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     OfferId;                                                   // (Parm, ZeroConstructor)
};

// Function UIManager.UIManager_C.BindDelegates
struct UUIManager_C_BindDelegates_Params
{
};

// Function UIManager.UIManager_C.ShowNextModalWidget
struct UUIManager_C_ShowNextModalWidget_Params
{
};

// Function UIManager.UIManager_C.QueueActionPanelInModalLayer
struct UUIManager_C_QueueActionPanelInModalLayer_Params
{
	class UFortActionHandlerPanel*                     InActionHandlerPanel;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        InHorizontalAlignment;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<SlateCore_EVerticalAlignment>          InVerticalAlignment;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UIManager.UIManager_C.ClearModalLayer
struct UUIManager_C_ClearModalLayer_Params
{
};

// Function UIManager.UIManager_C.ClearLayers
struct UUIManager_C_ClearLayers_Params
{
};

// Function UIManager.UIManager_C.ShowActionPanelInModalLayer
struct UUIManager_C_ShowActionPanelInModalLayer_Params
{
	class UFortActionHandlerPanel*                     InActionHandlerPanel;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        InHorizontalAlignment;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<SlateCore_EVerticalAlignment>          InVerticalAlignment;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UIManager.UIManager_C.DisplayOKButtonConfirmation
struct UUIManager_C_DisplayOKButtonConfirmation_Params
{
	struct FText                                       Header;                                                    // (Parm, OutParm, ReferenceParm)
	struct FText                                       Message;                                                   // (Parm, OutParm, ReferenceParm)
};

// Function UIManager.UIManager_C.Construct
struct UUIManager_C_Construct_Params
{
};

// Function UIManager.UIManager_C.KillConfirmation
struct UUIManager_C_KillConfirmation_Params
{
};

// Function UIManager.UIManager_C.UpdateStateWidgetContent
struct UUIManager_C_UpdateStateWidgetContent_Params
{
	class UFortUIStateWidget*                          StateWidget;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UIManager.UIManager_C.OnShowConfirmation
struct UUIManager_C_OnShowConfirmation_Params
{
	struct FFortDialogDescription                      Description;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function UIManager.UIManager_C.DisplayStateContent
struct UUIManager_C_DisplayStateContent_Params
{
	bool                                               bDisplay;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UIManager.UIManager_C.OnStateStarted
struct UUIManager_C_OnStateStarted_Params
{
};

// Function UIManager.UIManager_C.Destruct
struct UUIManager_C_Destruct_Params
{
};

// Function UIManager.UIManager_C.BndEvt__CancelCurrencyStore_Button_K2Node_ComponentBoundEvent_489_OnButtonClickedEvent__DelegateSignature
struct UUIManager_C_BndEvt__CancelCurrencyStore_Button_K2Node_ComponentBoundEvent_489_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UIManager.UIManager_C.DisplayErrorDialog
struct UUIManager_C_DisplayErrorDialog_Params
{
	struct FFortErrorInfo                              Info;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function UIManager.UIManager_C.ExecuteUbergraph_UIManager
struct UUIManager_C_ExecuteUbergraph_UIManager_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
