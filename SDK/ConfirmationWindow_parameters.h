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

// Function ConfirmationWindow.ConfirmationWindow_C.OnHandleAction
struct UConfirmationWindow_C_OnHandleAction_Params
{
	struct FEventReply                                 Result;                                                    // (Parm, OutParm)
	bool                                               bPassThrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ConfirmationWindow.ConfirmationWindow_C.HandleTimedOut
struct UConfirmationWindow_C_HandleTimedOut_Params
{
};

// Function ConfirmationWindow.ConfirmationWindow_C.UpdateTimer
struct UConfirmationWindow_C_UpdateTimer_Params
{
	float                                              Display_Time;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ConfirmationWindow.ConfirmationWindow_C.UpdateButton
struct UConfirmationWindow_C_UpdateButton_Params
{
	class UButtonIconText_C*                           Button;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FText                                       TEXT;                                                      // (Parm)
};

// Function ConfirmationWindow.ConfirmationWindow_C.OnShow
struct UConfirmationWindow_C_OnShow_Params
{
};

// Function ConfirmationWindow.ConfirmationWindow_C.OnKill
struct UConfirmationWindow_C_OnKill_Params
{
};

// Function ConfirmationWindow.ConfirmationWindow_C.BndEvt__Button-Confirm_K2Node_ComponentBoundEvent_940_FortBaseButtonClicked__DelegateSignature
struct UConfirmationWindow_C_BndEvt__Button_Confirm_K2Node_ComponentBoundEvent_940_FortBaseButtonClicked__DelegateSignature_Params
{
	class UFortBaseButton*                             Button;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ConfirmationWindow.ConfirmationWindow_C.BndEvt__Button-Decline_K2Node_ComponentBoundEvent_951_FortBaseButtonClicked__DelegateSignature
struct UConfirmationWindow_C_BndEvt__Button_Decline_K2Node_ComponentBoundEvent_951_FortBaseButtonClicked__DelegateSignature_Params
{
	class UFortBaseButton*                             Button;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ConfirmationWindow.ConfirmationWindow_C.ExecuteUbergraph_ConfirmationWindow
struct UConfirmationWindow_C_ExecuteUbergraph_ConfirmationWindow_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
