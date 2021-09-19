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

// Function JournalObjectiveEntry.JournalObjectiveEntry_C.Update
struct UJournalObjectiveEntry_C_Update_Params
{
	class UFortQuestObjectiveInfo*                     Objective;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function JournalObjectiveEntry.JournalObjectiveEntry_C.UpdateProgress
struct UJournalObjectiveEntry_C_UpdateProgress_Params
{
	class UFortQuestObjectiveInfo*                     Objective;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function JournalObjectiveEntry.JournalObjectiveEntry_C.SetData
struct UJournalObjectiveEntry_C_SetData_Params
{
	class UObject*                                     InData;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function JournalObjectiveEntry.JournalObjectiveEntry_C.ExecuteUbergraph_JournalObjectiveEntry
struct UJournalObjectiveEntry_C_ExecuteUbergraph_JournalObjectiveEntry_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
