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

// Function NotificationWindow.NotificationWindow_C.PlayFeedback
struct UNotificationWindow_C_PlayFeedback_Params
{
	TEnumAsByte<FortniteUI_EFortDialogFeedbackType>    FeedBackType;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function NotificationWindow.NotificationWindow_C.TryConsumeNextNotification
struct UNotificationWindow_C_TryConsumeNextNotification_Params
{
};

// Function NotificationWindow.NotificationWindow_C.FinishHandlingNotification
struct UNotificationWindow_C_FinishHandlingNotification_Params
{
};

// Function NotificationWindow.NotificationWindow_C.SetIgnoreButton
struct UNotificationWindow_C_SetIgnoreButton_Params
{
	struct FText                                       InText;                                                    // (Parm, OutParm, ReferenceParm)
};

// Function NotificationWindow.NotificationWindow_C.SetAcceptButton
struct UNotificationWindow_C_SetAcceptButton_Params
{
	struct FText                                       InText;                                                    // (Parm, OutParm, ReferenceParm)
};

// Function NotificationWindow.NotificationWindow_C.SetMessage
struct UNotificationWindow_C_SetMessage_Params
{
	struct FText                                       InText;                                                    // (Parm, OutParm, ReferenceParm)
};

// Function NotificationWindow.NotificationWindow_C.SetTitle
struct UNotificationWindow_C_SetTitle_Params
{
	struct FText                                       InText;                                                    // (Parm, OutParm, ReferenceParm)
};

// Function NotificationWindow.NotificationWindow_C.RegisterNotificationHandler
struct UNotificationWindow_C_RegisterNotificationHandler_Params
{
};

// Function NotificationWindow.NotificationWindow_C.StartNotification
struct UNotificationWindow_C_StartNotification_Params
{
	struct FFortDialogDescription                      NotificationDescription;                                   // (Parm)
};

// Function NotificationWindow.NotificationWindow_C.Construct
struct UNotificationWindow_C_Construct_Params
{
};

// Function NotificationWindow.NotificationWindow_C.BndEvt__NotificationBox_K2Node_ComponentBoundEvent_55_OnConfirmed__DelegateSignature
struct UNotificationWindow_C_BndEvt__NotificationBox_K2Node_ComponentBoundEvent_55_OnConfirmed__DelegateSignature_Params
{
};

// Function NotificationWindow.NotificationWindow_C.NextAnimation
struct UNotificationWindow_C_NextAnimation_Params
{
};

// Function NotificationWindow.NotificationWindow_C.BndEvt__NotificationBox_K2Node_ComponentBoundEvent_116_OnMouseEntered__DelegateSignature
struct UNotificationWindow_C_BndEvt__NotificationBox_K2Node_ComponentBoundEvent_116_OnMouseEntered__DelegateSignature_Params
{
};

// Function NotificationWindow.NotificationWindow_C.BndEvt__NotificationBox_K2Node_ComponentBoundEvent_141_OnMouseLeft__DelegateSignature
struct UNotificationWindow_C_BndEvt__NotificationBox_K2Node_ComponentBoundEvent_141_OnMouseLeft__DelegateSignature_Params
{
};

// Function NotificationWindow.NotificationWindow_C.BndEvt__NotificationBox_K2Node_ComponentBoundEvent_685_OnIntroComplete__DelegateSignature
struct UNotificationWindow_C_BndEvt__NotificationBox_K2Node_ComponentBoundEvent_685_OnIntroComplete__DelegateSignature_Params
{
};

// Function NotificationWindow.NotificationWindow_C.BndEvt__NotificationBox_K2Node_ComponentBoundEvent_694_OnOutroComplete__DelegateSignature
struct UNotificationWindow_C_BndEvt__NotificationBox_K2Node_ComponentBoundEvent_694_OnOutroComplete__DelegateSignature_Params
{
};

// Function NotificationWindow.NotificationWindow_C.HandleNotificationAvailable
struct UNotificationWindow_C_HandleNotificationAvailable_Params
{
};

// Function NotificationWindow.NotificationWindow_C.Destruct
struct UNotificationWindow_C_Destruct_Params
{
};

// Function NotificationWindow.NotificationWindow_C.BndEvt__NotificationBox_K2Node_ComponentBoundEvent_558_OnIgnored__DelegateSignature
struct UNotificationWindow_C_BndEvt__NotificationBox_K2Node_ComponentBoundEvent_558_OnIgnored__DelegateSignature_Params
{
};

// Function NotificationWindow.NotificationWindow_C.ExecuteUbergraph_NotificationWindow
struct UNotificationWindow_C_ExecuteUbergraph_NotificationWindow_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function NotificationWindow.NotificationWindow_C.OnTimerComplete__DelegateSignature
struct UNotificationWindow_C_OnTimerComplete__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
