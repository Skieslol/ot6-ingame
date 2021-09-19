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

// Function JournalDetails.JournalDetails_C.GenerateAbandonButtonToolTipWidget
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
class UWidget* UJournalDetails_C::GenerateAbandonButtonToolTipWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JournalDetails.JournalDetails_C.GenerateAbandonButtonToolTipWidget");

	UJournalDetails_C_GenerateAbandonButtonToolTipWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function JournalDetails.JournalDetails_C.SetupAbandonBtn
// (Public, BlueprintCallable, BlueprintEvent)
void UJournalDetails_C::SetupAbandonBtn()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JournalDetails.JournalDetails_C.SetupAbandonBtn");

	UJournalDetails_C_SetupAbandonBtn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function JournalDetails.JournalDetails_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UJournalDetails_C::Update()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JournalDetails.JournalDetails_C.Update");

	UJournalDetails_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function JournalDetails.JournalDetails_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestItem*          QuestItem                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           ShowObjectives                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           ShowRewards                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UJournalDetails_C::Setup(class UFortQuestItem* QuestItem, bool ShowObjectives, bool ShowRewards)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JournalDetails.JournalDetails_C.Setup");

	UJournalDetails_C_Setup_Params params;
	params.QuestItem = QuestItem;
	params.ShowObjectives = ShowObjectives;
	params.ShowRewards = ShowRewards;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function JournalDetails.JournalDetails_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UJournalDetails_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JournalDetails.JournalDetails_C.Construct");

	UJournalDetails_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function JournalDetails.JournalDetails_C.BndEvt__AbandonButton_K2Node_ComponentBoundEvent_71_FortBaseButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UFortBaseButton*         Button                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UJournalDetails_C::BndEvt__AbandonButton_K2Node_ComponentBoundEvent_71_FortBaseButtonClicked__DelegateSignature(class UFortBaseButton* Button)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JournalDetails.JournalDetails_C.BndEvt__AbandonButton_K2Node_ComponentBoundEvent_71_FortBaseButtonClicked__DelegateSignature");

	UJournalDetails_C_BndEvt__AbandonButton_K2Node_ComponentBoundEvent_71_FortBaseButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function JournalDetails.JournalDetails_C.ExecuteUbergraph_JournalDetails
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UJournalDetails_C::ExecuteUbergraph_JournalDetails(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JournalDetails.JournalDetails_C.ExecuteUbergraph_JournalDetails");

	UJournalDetails_C_ExecuteUbergraph_JournalDetails_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
