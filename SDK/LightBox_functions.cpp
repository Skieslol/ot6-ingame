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

// Function LightBox.LightBox_C.OnPanelActivated
// (Private, BlueprintCallable, BlueprintEvent)
void ULightBox_C::OnPanelActivated()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LightBox.LightBox_C.OnPanelActivated");

	ULightBox_C_OnPanelActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LightBox.LightBox_C.EstablishContainedPanel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortActionHandlerPanel* New_Panel                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ULightBox_C::EstablishContainedPanel(class UFortActionHandlerPanel* New_Panel)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LightBox.LightBox_C.EstablishContainedPanel");

	ULightBox_C_EstablishContainedPanel_Params params;
	params.New_Panel = New_Panel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LightBox.LightBox_C.AddActivePanelContent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortActionHandlerPanel* ActionHandlerPanel             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontal_Alignment         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TEnumAsByte<SlateCore_EVerticalAlignment> InVertical_Alignment           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ULightBox_C::AddActivePanelContent(class UFortActionHandlerPanel* ActionHandlerPanel, TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontal_Alignment, TEnumAsByte<SlateCore_EVerticalAlignment> InVertical_Alignment)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LightBox.LightBox_C.AddActivePanelContent");

	ULightBox_C_AddActivePanelContent_Params params;
	params.ActionHandlerPanel = ActionHandlerPanel;
	params.InHorizontal_Alignment = InHorizontal_Alignment;
	params.InVertical_Alignment = InVertical_Alignment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LightBox.LightBox_C.OnPanelDeactivated
// (Private, BlueprintCallable, BlueprintEvent)
void ULightBox_C::OnPanelDeactivated()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LightBox.LightBox_C.OnPanelDeactivated");

	ULightBox_C_OnPanelDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LightBox.LightBox_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void ULightBox_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LightBox.LightBox_C.Construct");

	ULightBox_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LightBox.LightBox_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void ULightBox_C::Destruct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LightBox.LightBox_C.Destruct");

	ULightBox_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LightBox.LightBox_C.OnFadeOutComplete
// (BlueprintCallable, BlueprintEvent)
void ULightBox_C::OnFadeOutComplete()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LightBox.LightBox_C.OnFadeOutComplete");

	ULightBox_C_OnFadeOutComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LightBox.LightBox_C.ExecuteUbergraph_LightBox
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ULightBox_C::ExecuteUbergraph_LightBox(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LightBox.LightBox_C.ExecuteUbergraph_LightBox");

	ULightBox_C_ExecuteUbergraph_LightBox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LightBox.LightBox_C.CenterContentCleared__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ULightBox_C::CenterContentCleared__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LightBox.LightBox_C.CenterContentCleared__DelegateSignature");

	ULightBox_C_CenterContentCleared__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
