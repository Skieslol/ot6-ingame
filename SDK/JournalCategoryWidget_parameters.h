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

// Function JournalCategoryWidget.JournalCategoryWidget_C.ClearSelection
struct UJournalCategoryWidget_C_ClearSelection_Params
{
};

// Function JournalCategoryWidget.JournalCategoryWidget_C.On_EntryList_GenerateRow
struct UJournalCategoryWidget_C_On_EntryList_GenerateRow_Params
{
	class UObject*                                     Item;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UWidget*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function JournalCategoryWidget.JournalCategoryWidget_C.Construct
struct UJournalCategoryWidget_C_Construct_Params
{
};

// Function JournalCategoryWidget.JournalCategoryWidget_C.BndEvt__EntryList_K2Node_ComponentBoundEvent_467_ListViewEvent__DelegateSignature
struct UJournalCategoryWidget_C_BndEvt__EntryList_K2Node_ComponentBoundEvent_467_ListViewEvent__DelegateSignature_Params
{
	class UObject*                                     Item;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function JournalCategoryWidget.JournalCategoryWidget_C.BndEvt__ExpanderButton_K2Node_ComponentBoundEvent_78_FortSelectedStateChanged__DelegateSignature
struct UJournalCategoryWidget_C_BndEvt__ExpanderButton_K2Node_ComponentBoundEvent_78_FortSelectedStateChanged__DelegateSignature_Params
{
	class UFortBaseButton*                             Button;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               SELECTED;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function JournalCategoryWidget.JournalCategoryWidget_C.ExecuteUbergraph_JournalCategoryWidget
struct UJournalCategoryWidget_C_ExecuteUbergraph_JournalCategoryWidget_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function JournalCategoryWidget.JournalCategoryWidget_C.OnItemSelected__DelegateSignature
struct UJournalCategoryWidget_C_OnItemSelected__DelegateSignature_Params
{
	class UJournalCategoryWidget_C*                    CategoryWidget;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UFortQuestItem*                              QuestItem;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
