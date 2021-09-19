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

// Function JournalWidget.JournalWidget_C.QuestSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJournalCategoryWidget_C* CategoryWidget                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortQuestItem*          SelectedQuest                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UJournalWidget_C::QuestSelected(class UJournalCategoryWidget_C* CategoryWidget, class UFortQuestItem* SelectedQuest)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JournalWidget.JournalWidget_C.QuestSelected");

	UJournalWidget_C_QuestSelected_Params params;
	params.CategoryWidget = CategoryWidget;
	params.SelectedQuest = SelectedQuest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function JournalWidget.JournalWidget_C.Update
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestManager*       QuestManager                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UJournalWidget_C::Update(class UFortQuestManager* QuestManager)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JournalWidget.JournalWidget_C.Update");

	UJournalWidget_C_Update_Params params;
	params.QuestManager = QuestManager;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function JournalWidget.JournalWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UJournalWidget_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JournalWidget.JournalWidget_C.Construct");

	UJournalWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function JournalWidget.JournalWidget_C.HandleQuestsUpdates
// (BlueprintCallable, BlueprintEvent)
void UJournalWidget_C::HandleQuestsUpdates()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JournalWidget.JournalWidget_C.HandleQuestsUpdates");

	UJournalWidget_C_HandleQuestsUpdates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function JournalWidget.JournalWidget_C.ExecuteUbergraph_JournalWidget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UJournalWidget_C::ExecuteUbergraph_JournalWidget(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JournalWidget.JournalWidget_C.ExecuteUbergraph_JournalWidget");

	UJournalWidget_C_ExecuteUbergraph_JournalWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
