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

// Function SlateContent_ActionHandlerPanel.SlateContent_ActionHandlerPanel_C.SetSizeBoxOverrides
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InWidth                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          InHeight                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void USlateContent_ActionHandlerPanel_C::SetSizeBoxOverrides(float InWidth, float InHeight)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SlateContent_ActionHandlerPanel.SlateContent_ActionHandlerPanel_C.SetSizeBoxOverrides");

	USlateContent_ActionHandlerPanel_C_SetSizeBoxOverrides_Params params;
	params.InWidth = InWidth;
	params.InHeight = InHeight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SlateContent_ActionHandlerPanel.SlateContent_ActionHandlerPanel_C.OnHandleAction
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventReply             Result                         (Parm, OutParm)
// bool                           bPassThrough                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void USlateContent_ActionHandlerPanel_C::OnHandleAction(struct FEventReply* Result, bool* bPassThrough)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SlateContent_ActionHandlerPanel.SlateContent_ActionHandlerPanel_C.OnHandleAction");

	USlateContent_ActionHandlerPanel_C_OnHandleAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
	if (bPassThrough != nullptr)
		*bPassThrough = params.bPassThrough;

}


// Function SlateContent_ActionHandlerPanel.SlateContent_ActionHandlerPanel_C.InitializeSlateContent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<FortniteUI_EFortLegacySlateWidget> Slate_Widget_Type              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void USlateContent_ActionHandlerPanel_C::InitializeSlateContent(TEnumAsByte<FortniteUI_EFortLegacySlateWidget> Slate_Widget_Type)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SlateContent_ActionHandlerPanel.SlateContent_ActionHandlerPanel_C.InitializeSlateContent");

	USlateContent_ActionHandlerPanel_C_InitializeSlateContent_Params params;
	params.Slate_Widget_Type = Slate_Widget_Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SlateContent_ActionHandlerPanel.SlateContent_ActionHandlerPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void USlateContent_ActionHandlerPanel_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SlateContent_ActionHandlerPanel.SlateContent_ActionHandlerPanel_C.Construct");

	USlateContent_ActionHandlerPanel_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SlateContent_ActionHandlerPanel.SlateContent_ActionHandlerPanel_C.HandleOnSlateWidgetClosed
// (BlueprintCallable, BlueprintEvent)
void USlateContent_ActionHandlerPanel_C::HandleOnSlateWidgetClosed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SlateContent_ActionHandlerPanel.SlateContent_ActionHandlerPanel_C.HandleOnSlateWidgetClosed");

	USlateContent_ActionHandlerPanel_C_HandleOnSlateWidgetClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SlateContent_ActionHandlerPanel.SlateContent_ActionHandlerPanel_C.ExecuteUbergraph_SlateContent_ActionHandlerPanel
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void USlateContent_ActionHandlerPanel_C::ExecuteUbergraph_SlateContent_ActionHandlerPanel(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SlateContent_ActionHandlerPanel.SlateContent_ActionHandlerPanel_C.ExecuteUbergraph_SlateContent_ActionHandlerPanel");

	USlateContent_ActionHandlerPanel_C_ExecuteUbergraph_SlateContent_ActionHandlerPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
