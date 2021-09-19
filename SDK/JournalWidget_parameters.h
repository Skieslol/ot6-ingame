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

// Function JournalWidget.JournalWidget_C.QuestSelected
struct UJournalWidget_C_QuestSelected_Params
{
	class UJournalCategoryWidget_C*                    CategoryWidget;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UFortQuestItem*                              SelectedQuest;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function JournalWidget.JournalWidget_C.Update
struct UJournalWidget_C_Update_Params
{
	class UFortQuestManager*                           QuestManager;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function JournalWidget.JournalWidget_C.Construct
struct UJournalWidget_C_Construct_Params
{
};

// Function JournalWidget.JournalWidget_C.HandleQuestsUpdates
struct UJournalWidget_C_HandleQuestsUpdates_Params
{
};

// Function JournalWidget.JournalWidget_C.ExecuteUbergraph_JournalWidget
struct UJournalWidget_C_ExecuteUbergraph_JournalWidget_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
