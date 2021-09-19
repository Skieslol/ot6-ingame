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

// Function RateExperience.RateExperience_C.HandleFinished
// (Public, BlueprintCallable, BlueprintEvent)
void URateExperience_C::HandleFinished()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RateExperience.RateExperience_C.HandleFinished");

	URateExperience_C_HandleFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RateExperience.RateExperience_C.OnHandleAction
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventReply             Result                         (Parm, OutParm)
// bool                           bPassThrough                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void URateExperience_C::OnHandleAction(struct FEventReply* Result, bool* bPassThrough)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RateExperience.RateExperience_C.OnHandleAction");

	URateExperience_C_OnHandleAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
	if (bPassThrough != nullptr)
		*bPassThrough = params.bPassThrough;

}


// Function RateExperience.RateExperience_C.UpdateVisibility
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void URateExperience_C::UpdateVisibility()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RateExperience.RateExperience_C.UpdateVisibility");

	URateExperience_C_UpdateVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RateExperience.RateExperience_C.SendAnalyticsEvent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void URateExperience_C::SendAnalyticsEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RateExperience.RateExperience_C.SendAnalyticsEvent");

	URateExperience_C_SendAnalyticsEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RateExperience.RateExperience_C.CreateToolTip
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 StarWidget                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            WidgetIndex                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void URateExperience_C::CreateToolTip(class UWidget* StarWidget, int WidgetIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RateExperience.RateExperience_C.CreateToolTip");

	URateExperience_C_CreateToolTip_Params params;
	params.StarWidget = StarWidget;
	params.WidgetIndex = WidgetIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RateExperience.RateExperience_C.SetStarCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            StarCount                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void URateExperience_C::SetStarCount(int StarCount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RateExperience.RateExperience_C.SetStarCount");

	URateExperience_C_SetStarCount_Params params;
	params.StarCount = StarCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RateExperience.RateExperience_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void URateExperience_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RateExperience.RateExperience_C.Construct");

	URateExperience_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RateExperience.RateExperience_C.BndEvt__Submit_K2Node_ComponentBoundEvent_50_FortBaseButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UFortBaseButton*         Button                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void URateExperience_C::BndEvt__Submit_K2Node_ComponentBoundEvent_50_FortBaseButtonClicked__DelegateSignature(class UFortBaseButton* Button)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RateExperience.RateExperience_C.BndEvt__Submit_K2Node_ComponentBoundEvent_50_FortBaseButtonClicked__DelegateSignature");

	URateExperience_C_BndEvt__Submit_K2Node_ComponentBoundEvent_50_FortBaseButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RateExperience.RateExperience_C.BndEvt__Decline_K2Node_ComponentBoundEvent_59_FortBaseButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UFortBaseButton*         Button                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void URateExperience_C::BndEvt__Decline_K2Node_ComponentBoundEvent_59_FortBaseButtonClicked__DelegateSignature(class UFortBaseButton* Button)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RateExperience.RateExperience_C.BndEvt__Decline_K2Node_ComponentBoundEvent_59_FortBaseButtonClicked__DelegateSignature");

	URateExperience_C_BndEvt__Decline_K2Node_ComponentBoundEvent_59_FortBaseButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RateExperience.RateExperience_C.StarButtonClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortBaseButton*         Button                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void URateExperience_C::StarButtonClicked(class UFortBaseButton* Button)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RateExperience.RateExperience_C.StarButtonClicked");

	URateExperience_C_StarButtonClicked_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RateExperience.RateExperience_C.BndEvt__CommentField_K2Node_ComponentBoundEvent_503_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   TEXT                           (ConstParm, Parm, OutParm, ReferenceParm)
void URateExperience_C::BndEvt__CommentField_K2Node_ComponentBoundEvent_503_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(const struct FText& TEXT)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RateExperience.RateExperience_C.BndEvt__CommentField_K2Node_ComponentBoundEvent_503_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature");

	URateExperience_C_BndEvt__CommentField_K2Node_ComponentBoundEvent_503_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature_Params params;
	params.TEXT = TEXT;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RateExperience.RateExperience_C.ExecuteUbergraph_RateExperience
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void URateExperience_C::ExecuteUbergraph_RateExperience(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RateExperience.RateExperience_C.ExecuteUbergraph_RateExperience");

	URateExperience_C_ExecuteUbergraph_RateExperience_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
