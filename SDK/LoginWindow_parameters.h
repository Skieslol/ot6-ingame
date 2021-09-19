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

// Function LoginWindow.LoginWindow_C.RunInitialBenchmark
struct ULoginWindow_C_RunInitialBenchmark_Params
{
};

// Function LoginWindow.LoginWindow_C.Update Watermark
struct ULoginWindow_C_Update_Watermark_Params
{
};

// Function LoginWindow.LoginWindow_C.SetEditingFocus
struct ULoginWindow_C_SetEditingFocus_Params
{
};

// Function LoginWindow.LoginWindow_C.Show Login Result Error
struct ULoginWindow_C_Show_Login_Result_Error_Params
{
	struct FText                                       In_Text;                                                   // (Parm)
};

// Function LoginWindow.LoginWindow_C.Set Login Permission
struct ULoginWindow_C_Set_Login_Permission_Params
{
	bool                                               Login_Enabled;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function LoginWindow.LoginWindow_C.Check Login Permission
struct ULoginWindow_C_Check_Login_Permission_Params
{
};

// Function LoginWindow.LoginWindow_C.RequestLogin
struct ULoginWindow_C_RequestLogin_Params
{
};

// Function LoginWindow.LoginWindow_C.OnKeyDown
struct ULoginWindow_C_OnKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // (Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // (Parm)
	struct FEventReply                                 ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function LoginWindow.LoginWindow_C.OnTimedOut_D5FE647942DB4B7E21D74DBFFFE496C7
struct ULoginWindow_C_OnTimedOut_D5FE647942DB4B7E21D74DBFFFE496C7_Params
{
};

// Function LoginWindow.LoginWindow_C.OnDeclined_D5FE647942DB4B7E21D74DBFFFE496C7
struct ULoginWindow_C_OnDeclined_D5FE647942DB4B7E21D74DBFFFE496C7_Params
{
};

// Function LoginWindow.LoginWindow_C.OnConfirmed_D5FE647942DB4B7E21D74DBFFFE496C7
struct ULoginWindow_C_OnConfirmed_D5FE647942DB4B7E21D74DBFFFE496C7_Params
{
};

// Function LoginWindow.LoginWindow_C.Construct
struct ULoginWindow_C_Construct_Params
{
};

// Function LoginWindow.LoginWindow_C.OnLoginStatusChanged
struct ULoginWindow_C_OnLoginStatusChanged_Params
{
	TEnumAsByte<FortniteUI_EUILoginStatus>             NewStatus;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FText                                       InMessage;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function LoginWindow.LoginWindow_C.BndEvt__Password_K2Node_ComponentBoundEvent_13_OnEditableTextCommittedEvent__DelegateSignature
struct ULoginWindow_C_BndEvt__Password_K2Node_ComponentBoundEvent_13_OnEditableTextCommittedEvent__DelegateSignature_Params
{
	struct FText                                       TEXT;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<SlateCore_ETextCommit>                 CommitMethod;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function LoginWindow.LoginWindow_C.BndEvt__Email_K2Node_ComponentBoundEvent_36_OnEditableTextCommittedEvent__DelegateSignature
struct ULoginWindow_C_BndEvt__Email_K2Node_ComponentBoundEvent_36_OnEditableTextCommittedEvent__DelegateSignature_Params
{
	struct FText                                       TEXT;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<SlateCore_ETextCommit>                 CommitMethod;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function LoginWindow.LoginWindow_C.BndEvt__Email_K2Node_ComponentBoundEvent_54_OnEditableTextChangedEvent__DelegateSignature
struct ULoginWindow_C_BndEvt__Email_K2Node_ComponentBoundEvent_54_OnEditableTextChangedEvent__DelegateSignature_Params
{
	struct FText                                       TEXT;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function LoginWindow.LoginWindow_C.BndEvt__Password_K2Node_ComponentBoundEvent_60_OnEditableTextChangedEvent__DelegateSignature
struct ULoginWindow_C_BndEvt__Password_K2Node_ComponentBoundEvent_60_OnEditableTextChangedEvent__DelegateSignature_Params
{
	struct FText                                       TEXT;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function LoginWindow.LoginWindow_C.OnQueryFortBackendVersionComplete
struct ULoginWindow_C_OnQueryFortBackendVersionComplete_Params
{
	struct FFortBackendVersion                         FortBackendVersion;                                        // (Parm)
};

// Function LoginWindow.LoginWindow_C.BndEvt__Login Button_K2Node_ComponentBoundEvent_437_FortBaseButtonClicked__DelegateSignature
struct ULoginWindow_C_BndEvt__Login_Button_K2Node_ComponentBoundEvent_437_FortBaseButtonClicked__DelegateSignature_Params
{
	class UFortBaseButton*                             Button;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function LoginWindow.LoginWindow_C.ExecuteUbergraph_LoginWindow
struct ULoginWindow_C_ExecuteUbergraph_LoginWindow_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
