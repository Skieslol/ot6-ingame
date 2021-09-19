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

// Function JournalEntry.JournalEntry_C.Setup
struct UJournalEntry_C_Setup_Params
{
	class UFortQuestItem*                              Quest;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function JournalEntry.JournalEntry_C.UpdateProgress
struct UJournalEntry_C_UpdateProgress_Params
{
};

// Function JournalEntry.JournalEntry_C.Construct
struct UJournalEntry_C_Construct_Params
{
};

// Function JournalEntry.JournalEntry_C.HandleSelectedChanged
struct UJournalEntry_C_HandleSelectedChanged_Params
{
	class UFortBaseButton*                             Button;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               SELECTED;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function JournalEntry.JournalEntry_C.ExecuteUbergraph_JournalEntry
struct UJournalEntry_C_ExecuteUbergraph_JournalEntry_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
