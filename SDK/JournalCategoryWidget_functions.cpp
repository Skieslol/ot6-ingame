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

// Function JournalCategoryWidget.JournalCategoryWidget_C.ClearSelection
// (Public, BlueprintCallable, BlueprintEvent)
void UJournalCategoryWidget_C::ClearSelection()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JournalCategoryWidget.JournalCategoryWidget_C.ClearSelection");

	UJournalCategoryWidget_C_ClearSelection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function JournalCategoryWidget.JournalCategoryWidget_C.On_EntryList_GenerateRow
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Item                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
class UWidget* UJournalCategoryWidget_C::On_EntryList_GenerateRow(class UObject* Item)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JournalCategoryWidget.JournalCategoryWidget_C.On_EntryList_GenerateRow");

	UJournalCategoryWidget_C_On_EntryList_GenerateRow_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function JournalCategoryWidget.JournalCategoryWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UJournalCategoryWidget_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JournalCategoryWidget.JournalCategoryWidget_C.Construct");

	UJournalCategoryWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function JournalCategoryWidget.JournalCategoryWidget_C.BndEvt__EntryList_K2Node_ComponentBoundEvent_467_ListViewEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject*                 Item                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UJournalCategoryWidget_C::BndEvt__EntryList_K2Node_ComponentBoundEvent_467_ListViewEvent__DelegateSignature(class UObject* Item)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JournalCategoryWidget.JournalCategoryWidget_C.BndEvt__EntryList_K2Node_ComponentBoundEvent_467_ListViewEvent__DelegateSignature");

	UJournalCategoryWidget_C_BndEvt__EntryList_K2Node_ComponentBoundEvent_467_ListViewEvent__DelegateSignature_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function JournalCategoryWidget.JournalCategoryWidget_C.BndEvt__ExpanderButton_K2Node_ComponentBoundEvent_78_FortSelectedStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UFortBaseButton*         Button                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           SELECTED                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UJournalCategoryWidget_C::BndEvt__ExpanderButton_K2Node_ComponentBoundEvent_78_FortSelectedStateChanged__DelegateSignature(class UFortBaseButton* Button, bool SELECTED)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JournalCategoryWidget.JournalCategoryWidget_C.BndEvt__ExpanderButton_K2Node_ComponentBoundEvent_78_FortSelectedStateChanged__DelegateSignature");

	UJournalCategoryWidget_C_BndEvt__ExpanderButton_K2Node_ComponentBoundEvent_78_FortSelectedStateChanged__DelegateSignature_Params params;
	params.Button = Button;
	params.SELECTED = SELECTED;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function JournalCategoryWidget.JournalCategoryWidget_C.ExecuteUbergraph_JournalCategoryWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UJournalCategoryWidget_C::ExecuteUbergraph_JournalCategoryWidget(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JournalCategoryWidget.JournalCategoryWidget_C.ExecuteUbergraph_JournalCategoryWidget");

	UJournalCategoryWidget_C_ExecuteUbergraph_JournalCategoryWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function JournalCategoryWidget.JournalCategoryWidget_C.OnItemSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJournalCategoryWidget_C* CategoryWidget                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortQuestItem*          QuestItem                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UJournalCategoryWidget_C::OnItemSelected__DelegateSignature(class UJournalCategoryWidget_C* CategoryWidget, class UFortQuestItem* QuestItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JournalCategoryWidget.JournalCategoryWidget_C.OnItemSelected__DelegateSignature");

	UJournalCategoryWidget_C_OnItemSelected__DelegateSignature_Params params;
	params.CategoryWidget = CategoryWidget;
	params.QuestItem = QuestItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
