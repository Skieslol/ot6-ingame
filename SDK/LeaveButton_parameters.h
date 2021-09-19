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

// Function LeaveButton.LeaveButton_C.LeaveParty
struct ULeaveButton_C_LeaveParty_Params
{
};

// Function LeaveButton.LeaveButton_C.UpdateState
struct ULeaveButton_C_UpdateState_Params
{
};

// Function LeaveButton.LeaveButton_C.IsConsideredInGame
struct ULeaveButton_C_IsConsideredInGame_Params
{
	bool                                               InGame;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function LeaveButton.LeaveButton_C.GetLeaveActionText
struct ULeaveButton_C_GetLeaveActionText_Params
{
	struct FText                                       TEXT;                                                      // (Parm, OutParm)
};

// Function LeaveButton.LeaveButton_C.OnTimedOut_0FD9CDFF41D146A2389F9EBEB64D7769
struct ULeaveButton_C_OnTimedOut_0FD9CDFF41D146A2389F9EBEB64D7769_Params
{
};

// Function LeaveButton.LeaveButton_C.OnDeclined_0FD9CDFF41D146A2389F9EBEB64D7769
struct ULeaveButton_C_OnDeclined_0FD9CDFF41D146A2389F9EBEB64D7769_Params
{
};

// Function LeaveButton.LeaveButton_C.OnConfirmed_0FD9CDFF41D146A2389F9EBEB64D7769
struct ULeaveButton_C_OnConfirmed_0FD9CDFF41D146A2389F9EBEB64D7769_Params
{
};

// Function LeaveButton.LeaveButton_C.OnTimedOut_A9AA3A5B453A4DE8A2BCA6AA5D014B79
struct ULeaveButton_C_OnTimedOut_A9AA3A5B453A4DE8A2BCA6AA5D014B79_Params
{
};

// Function LeaveButton.LeaveButton_C.OnDeclined_A9AA3A5B453A4DE8A2BCA6AA5D014B79
struct ULeaveButton_C_OnDeclined_A9AA3A5B453A4DE8A2BCA6AA5D014B79_Params
{
};

// Function LeaveButton.LeaveButton_C.OnConfirmed_A9AA3A5B453A4DE8A2BCA6AA5D014B79
struct ULeaveButton_C_OnConfirmed_A9AA3A5B453A4DE8A2BCA6AA5D014B79_Params
{
};

// Function LeaveButton.LeaveButton_C.Construct
struct ULeaveButton_C_Construct_Params
{
};

// Function LeaveButton.LeaveButton_C.HandleLobbyEvents
struct ULeaveButton_C_HandleLobbyEvents_Params
{
};

// Function LeaveButton.LeaveButton_C.HandleTeamMemberAdded
struct ULeaveButton_C_HandleTeamMemberAdded_Params
{
	struct FFortTeamMemberInfo                         NewTeamMemberInfo;                                         // (Parm)
};

// Function LeaveButton.LeaveButton_C.HandleTeamMemberRemoved
struct ULeaveButton_C_HandleTeamMemberRemoved_Params
{
	int                                                PlayerIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function LeaveButton.LeaveButton_C.BndEvt__[Button] Leave_K2Node_ComponentBoundEvent_84_FortBaseButtonClicked__DelegateSignature
struct ULeaveButton_C_BndEvt___Button__Leave_K2Node_ComponentBoundEvent_84_FortBaseButtonClicked__DelegateSignature_Params
{
	class UFortBaseButton*                             Button;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function LeaveButton.LeaveButton_C.PreConstruct
struct ULeaveButton_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function LeaveButton.LeaveButton_C.ExecuteUbergraph_LeaveButton
struct ULeaveButton_C_ExecuteUbergraph_LeaveButton_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function LeaveButton.LeaveButton_C.OnClicked__DelegateSignature
struct ULeaveButton_C_OnClicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
