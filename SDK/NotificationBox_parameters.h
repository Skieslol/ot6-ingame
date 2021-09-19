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

// Function NotificationBox.NotificationBox_C.HideMessage
struct UNotificationBox_C_HideMessage_Params
{
};

// Function NotificationBox.NotificationBox_C.HideTitle
struct UNotificationBox_C_HideTitle_Params
{
};

// Function NotificationBox.NotificationBox_C.ShowTitle
struct UNotificationBox_C_ShowTitle_Params
{
	struct FText                                       Title;                                                     // (Parm)
};

// Function NotificationBox.NotificationBox_C.SetIcon
struct UNotificationBox_C_SetIcon_Params
{
	struct FSlateBrush                                 Icon_Brush;                                                // (Parm)
};

// Function NotificationBox.NotificationBox_C.SetTitle
struct UNotificationBox_C_SetTitle_Params
{
	struct FText                                       Title;                                                     // (Parm)
};

// Function NotificationBox.NotificationBox_C.Outro
struct UNotificationBox_C_Outro_Params
{
};

// Function NotificationBox.NotificationBox_C.Intro
struct UNotificationBox_C_Intro_Params
{
};

// Function NotificationBox.NotificationBox_C.HideIgnoreButton
struct UNotificationBox_C_HideIgnoreButton_Params
{
};

// Function NotificationBox.NotificationBox_C.HideAcceptButton
struct UNotificationBox_C_HideAcceptButton_Params
{
};

// Function NotificationBox.NotificationBox_C.ShowIgnoreButton
struct UNotificationBox_C_ShowIgnoreButton_Params
{
	struct FText                                       ButtonName;                                                // (Parm)
};

// Function NotificationBox.NotificationBox_C.ShowAcceptButton
struct UNotificationBox_C_ShowAcceptButton_Params
{
	struct FText                                       ButtonName;                                                // (Parm)
};

// Function NotificationBox.NotificationBox_C.ShowMessage
struct UNotificationBox_C_ShowMessage_Params
{
	struct FText                                       Message;                                                   // (Parm)
};

// Function NotificationBox.NotificationBox_C.Construct
struct UNotificationBox_C_Construct_Params
{
};

// Function NotificationBox.NotificationBox_C.OnMouseEnter
struct UNotificationBox_C_OnMouseEnter_Params
{
	struct FGeometry                                   MyGeometry;                                                // (Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function NotificationBox.NotificationBox_C.OnMouseLeave
struct UNotificationBox_C_OnMouseLeave_Params
{
	struct FPointerEvent                               MouseEvent;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function NotificationBox.NotificationBox_C.BndEvt__Button-1_K2Node_ComponentBoundEvent_490_FortBaseButtonClicked__DelegateSignature
struct UNotificationBox_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_490_FortBaseButtonClicked__DelegateSignature_Params
{
	class UFortBaseButton*                             Button;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function NotificationBox.NotificationBox_C.BndEvt__Button-2_K2Node_ComponentBoundEvent_501_FortBaseButtonClicked__DelegateSignature
struct UNotificationBox_C_BndEvt__Button_2_K2Node_ComponentBoundEvent_501_FortBaseButtonClicked__DelegateSignature_Params
{
	class UFortBaseButton*                             Button;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function NotificationBox.NotificationBox_C.HandleIntroComplete
struct UNotificationBox_C_HandleIntroComplete_Params
{
};

// Function NotificationBox.NotificationBox_C.HandleOutroComplete
struct UNotificationBox_C_HandleOutroComplete_Params
{
};

// Function NotificationBox.NotificationBox_C.ExecuteUbergraph_NotificationBox
struct UNotificationBox_C_ExecuteUbergraph_NotificationBox_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function NotificationBox.NotificationBox_C.OnOutroComplete__DelegateSignature
struct UNotificationBox_C_OnOutroComplete__DelegateSignature_Params
{
};

// Function NotificationBox.NotificationBox_C.OnIntroComplete__DelegateSignature
struct UNotificationBox_C_OnIntroComplete__DelegateSignature_Params
{
};

// Function NotificationBox.NotificationBox_C.OnMouseLeft__DelegateSignature
struct UNotificationBox_C_OnMouseLeft__DelegateSignature_Params
{
};

// Function NotificationBox.NotificationBox_C.OnMouseEntered__DelegateSignature
struct UNotificationBox_C_OnMouseEntered__DelegateSignature_Params
{
};

// Function NotificationBox.NotificationBox_C.OnIgnored__DelegateSignature
struct UNotificationBox_C_OnIgnored__DelegateSignature_Params
{
};

// Function NotificationBox.NotificationBox_C.OnConfirmed__DelegateSignature
struct UNotificationBox_C_OnConfirmed__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
