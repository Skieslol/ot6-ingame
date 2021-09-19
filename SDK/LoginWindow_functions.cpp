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

// Function LoginWindow.LoginWindow_C.RunInitialBenchmark
// (Public, BlueprintCallable, BlueprintEvent)
void ULoginWindow_C::RunInitialBenchmark()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LoginWindow.LoginWindow_C.RunInitialBenchmark");

	ULoginWindow_C_RunInitialBenchmark_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LoginWindow.LoginWindow_C.Update Watermark
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ULoginWindow_C::Update_Watermark()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LoginWindow.LoginWindow_C.Update Watermark");

	ULoginWindow_C_Update_Watermark_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LoginWindow.LoginWindow_C.SetEditingFocus
// (Public, BlueprintCallable, BlueprintEvent)
void ULoginWindow_C::SetEditingFocus()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LoginWindow.LoginWindow_C.SetEditingFocus");

	ULoginWindow_C_SetEditingFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LoginWindow.LoginWindow_C.Show Login Result Error
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   In_Text                        (Parm)
void ULoginWindow_C::Show_Login_Result_Error(const struct FText& In_Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LoginWindow.LoginWindow_C.Show Login Result Error");

	ULoginWindow_C_Show_Login_Result_Error_Params params;
	params.In_Text = In_Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LoginWindow.LoginWindow_C.Set Login Permission
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Login_Enabled                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ULoginWindow_C::Set_Login_Permission(bool Login_Enabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LoginWindow.LoginWindow_C.Set Login Permission");

	ULoginWindow_C_Set_Login_Permission_Params params;
	params.Login_Enabled = Login_Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LoginWindow.LoginWindow_C.Check Login Permission
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ULoginWindow_C::Check_Login_Permission()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LoginWindow.LoginWindow_C.Check Login Permission");

	ULoginWindow_C_Check_Login_Permission_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LoginWindow.LoginWindow_C.RequestLogin
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ULoginWindow_C::RequestLogin()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LoginWindow.LoginWindow_C.RequestLogin");

	ULoginWindow_C_RequestLogin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LoginWindow.LoginWindow_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent               InKeyEvent                     (Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply ULoginWindow_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LoginWindow.LoginWindow_C.OnKeyDown");

	ULoginWindow_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function LoginWindow.LoginWindow_C.OnTimedOut_D5FE647942DB4B7E21D74DBFFFE496C7
// (BlueprintCallable, BlueprintEvent)
void ULoginWindow_C::OnTimedOut_D5FE647942DB4B7E21D74DBFFFE496C7()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LoginWindow.LoginWindow_C.OnTimedOut_D5FE647942DB4B7E21D74DBFFFE496C7");

	ULoginWindow_C_OnTimedOut_D5FE647942DB4B7E21D74DBFFFE496C7_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LoginWindow.LoginWindow_C.OnDeclined_D5FE647942DB4B7E21D74DBFFFE496C7
// (BlueprintCallable, BlueprintEvent)
void ULoginWindow_C::OnDeclined_D5FE647942DB4B7E21D74DBFFFE496C7()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LoginWindow.LoginWindow_C.OnDeclined_D5FE647942DB4B7E21D74DBFFFE496C7");

	ULoginWindow_C_OnDeclined_D5FE647942DB4B7E21D74DBFFFE496C7_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LoginWindow.LoginWindow_C.OnConfirmed_D5FE647942DB4B7E21D74DBFFFE496C7
// (BlueprintCallable, BlueprintEvent)
void ULoginWindow_C::OnConfirmed_D5FE647942DB4B7E21D74DBFFFE496C7()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LoginWindow.LoginWindow_C.OnConfirmed_D5FE647942DB4B7E21D74DBFFFE496C7");

	ULoginWindow_C_OnConfirmed_D5FE647942DB4B7E21D74DBFFFE496C7_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LoginWindow.LoginWindow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void ULoginWindow_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LoginWindow.LoginWindow_C.Construct");

	ULoginWindow_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LoginWindow.LoginWindow_C.OnLoginStatusChanged
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// TEnumAsByte<FortniteUI_EUILoginStatus> NewStatus                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FText                   InMessage                      (ConstParm, Parm, OutParm, ReferenceParm)
void ULoginWindow_C::OnLoginStatusChanged(TEnumAsByte<FortniteUI_EUILoginStatus> NewStatus, const struct FText& InMessage)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LoginWindow.LoginWindow_C.OnLoginStatusChanged");

	ULoginWindow_C_OnLoginStatusChanged_Params params;
	params.NewStatus = NewStatus;
	params.InMessage = InMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LoginWindow.LoginWindow_C.BndEvt__Password_K2Node_ComponentBoundEvent_13_OnEditableTextCommittedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   TEXT                           (ConstParm, Parm, OutParm, ReferenceParm)
// TEnumAsByte<SlateCore_ETextCommit> CommitMethod                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ULoginWindow_C::BndEvt__Password_K2Node_ComponentBoundEvent_13_OnEditableTextCommittedEvent__DelegateSignature(const struct FText& TEXT, TEnumAsByte<SlateCore_ETextCommit> CommitMethod)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LoginWindow.LoginWindow_C.BndEvt__Password_K2Node_ComponentBoundEvent_13_OnEditableTextCommittedEvent__DelegateSignature");

	ULoginWindow_C_BndEvt__Password_K2Node_ComponentBoundEvent_13_OnEditableTextCommittedEvent__DelegateSignature_Params params;
	params.TEXT = TEXT;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LoginWindow.LoginWindow_C.BndEvt__Email_K2Node_ComponentBoundEvent_36_OnEditableTextCommittedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   TEXT                           (ConstParm, Parm, OutParm, ReferenceParm)
// TEnumAsByte<SlateCore_ETextCommit> CommitMethod                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ULoginWindow_C::BndEvt__Email_K2Node_ComponentBoundEvent_36_OnEditableTextCommittedEvent__DelegateSignature(const struct FText& TEXT, TEnumAsByte<SlateCore_ETextCommit> CommitMethod)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LoginWindow.LoginWindow_C.BndEvt__Email_K2Node_ComponentBoundEvent_36_OnEditableTextCommittedEvent__DelegateSignature");

	ULoginWindow_C_BndEvt__Email_K2Node_ComponentBoundEvent_36_OnEditableTextCommittedEvent__DelegateSignature_Params params;
	params.TEXT = TEXT;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LoginWindow.LoginWindow_C.BndEvt__Email_K2Node_ComponentBoundEvent_54_OnEditableTextChangedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   TEXT                           (ConstParm, Parm, OutParm, ReferenceParm)
void ULoginWindow_C::BndEvt__Email_K2Node_ComponentBoundEvent_54_OnEditableTextChangedEvent__DelegateSignature(const struct FText& TEXT)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LoginWindow.LoginWindow_C.BndEvt__Email_K2Node_ComponentBoundEvent_54_OnEditableTextChangedEvent__DelegateSignature");

	ULoginWindow_C_BndEvt__Email_K2Node_ComponentBoundEvent_54_OnEditableTextChangedEvent__DelegateSignature_Params params;
	params.TEXT = TEXT;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LoginWindow.LoginWindow_C.BndEvt__Password_K2Node_ComponentBoundEvent_60_OnEditableTextChangedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   TEXT                           (ConstParm, Parm, OutParm, ReferenceParm)
void ULoginWindow_C::BndEvt__Password_K2Node_ComponentBoundEvent_60_OnEditableTextChangedEvent__DelegateSignature(const struct FText& TEXT)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LoginWindow.LoginWindow_C.BndEvt__Password_K2Node_ComponentBoundEvent_60_OnEditableTextChangedEvent__DelegateSignature");

	ULoginWindow_C_BndEvt__Password_K2Node_ComponentBoundEvent_60_OnEditableTextChangedEvent__DelegateSignature_Params params;
	params.TEXT = TEXT;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LoginWindow.LoginWindow_C.OnQueryFortBackendVersionComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortBackendVersion     FortBackendVersion             (Parm)
void ULoginWindow_C::OnQueryFortBackendVersionComplete(const struct FFortBackendVersion& FortBackendVersion)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LoginWindow.LoginWindow_C.OnQueryFortBackendVersionComplete");

	ULoginWindow_C_OnQueryFortBackendVersionComplete_Params params;
	params.FortBackendVersion = FortBackendVersion;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LoginWindow.LoginWindow_C.BndEvt__Login Button_K2Node_ComponentBoundEvent_437_FortBaseButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UFortBaseButton*         Button                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ULoginWindow_C::BndEvt__Login_Button_K2Node_ComponentBoundEvent_437_FortBaseButtonClicked__DelegateSignature(class UFortBaseButton* Button)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LoginWindow.LoginWindow_C.BndEvt__Login Button_K2Node_ComponentBoundEvent_437_FortBaseButtonClicked__DelegateSignature");

	ULoginWindow_C_BndEvt__Login_Button_K2Node_ComponentBoundEvent_437_FortBaseButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LoginWindow.LoginWindow_C.ExecuteUbergraph_LoginWindow
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ULoginWindow_C::ExecuteUbergraph_LoginWindow(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LoginWindow.LoginWindow_C.ExecuteUbergraph_LoginWindow");

	ULoginWindow_C_ExecuteUbergraph_LoginWindow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
