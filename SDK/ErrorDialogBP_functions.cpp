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

// Function ErrorDialogBP.ErrorDialogBP_C.KillErrorsDisplayed
// (Public, BlueprintCallable, BlueprintEvent)
void UErrorDialogBP_C::KillErrorsDisplayed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ErrorDialogBP.ErrorDialogBP_C.KillErrorsDisplayed");

	UErrorDialogBP_C_KillErrorsDisplayed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ErrorDialogBP.ErrorDialogBP_C.OnHandleAction
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventReply             Result                         (Parm, OutParm)
// bool                           bPassThrough                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UErrorDialogBP_C::OnHandleAction(struct FEventReply* Result, bool* bPassThrough)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ErrorDialogBP.ErrorDialogBP_C.OnHandleAction");

	UErrorDialogBP_C_OnHandleAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
	if (bPassThrough != nullptr)
		*bPassThrough = params.bPassThrough;

}


// Function ErrorDialogBP.ErrorDialogBP_C.Deactivate
// (Public, BlueprintCallable, BlueprintEvent)
void UErrorDialogBP_C::Deactivate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ErrorDialogBP.ErrorDialogBP_C.Deactivate");

	UErrorDialogBP_C_Deactivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ErrorDialogBP.ErrorDialogBP_C.BindDelegates
// (Public, BlueprintCallable, BlueprintEvent)
void UErrorDialogBP_C::BindDelegates()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ErrorDialogBP.ErrorDialogBP_C.BindDelegates");

	UErrorDialogBP_C_BindDelegates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ErrorDialogBP.ErrorDialogBP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UErrorDialogBP_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ErrorDialogBP.ErrorDialogBP_C.Construct");

	UErrorDialogBP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ErrorDialogBP.ErrorDialogBP_C.OnRebuildDialog
// (Event, Protected, BlueprintEvent)
// Parameters:
// int                            NewIndex                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UErrorDialogBP_C::OnRebuildDialog(int NewIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ErrorDialogBP.ErrorDialogBP_C.OnRebuildDialog");

	UErrorDialogBP_C_OnRebuildDialog_Params params;
	params.NewIndex = NewIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ErrorDialogBP.ErrorDialogBP_C.PartyContextBasicError
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Message                        (ConstParm, Parm, OutParm, ReferenceParm)
// struct FString                 ErrorCode                      (Parm, ZeroConstructor)
void UErrorDialogBP_C::PartyContextBasicError(const struct FText& Message, const struct FString& ErrorCode)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ErrorDialogBP.ErrorDialogBP_C.PartyContextBasicError");

	UErrorDialogBP_C_PartyContextBasicError_Params params;
	params.Message = Message;
	params.ErrorCode = ErrorCode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ErrorDialogBP.ErrorDialogBP_C.OnNetworkError
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   NetworkErrorMessage            (ConstParm, Parm, OutParm, ReferenceParm)
void UErrorDialogBP_C::OnNetworkError(const struct FText& NetworkErrorMessage)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ErrorDialogBP.ErrorDialogBP_C.OnNetworkError");

	UErrorDialogBP_C_OnNetworkError_Params params;
	params.NetworkErrorMessage = NetworkErrorMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ErrorDialogBP.ErrorDialogBP_C.BndEvt__ButtonIconText_K2Node_ComponentBoundEvent_264_FortBaseButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UFortBaseButton*         Button                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UErrorDialogBP_C::BndEvt__ButtonIconText_K2Node_ComponentBoundEvent_264_FortBaseButtonClicked__DelegateSignature(class UFortBaseButton* Button)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ErrorDialogBP.ErrorDialogBP_C.BndEvt__ButtonIconText_K2Node_ComponentBoundEvent_264_FortBaseButtonClicked__DelegateSignature");

	UErrorDialogBP_C_BndEvt__ButtonIconText_K2Node_ComponentBoundEvent_264_FortBaseButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ErrorDialogBP.ErrorDialogBP_C.ExecuteUbergraph_ErrorDialogBP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UErrorDialogBP_C::ExecuteUbergraph_ErrorDialogBP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ErrorDialogBP.ErrorDialogBP_C.ExecuteUbergraph_ErrorDialogBP");

	UErrorDialogBP_C_ExecuteUbergraph_ErrorDialogBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
