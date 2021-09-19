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

// Function JournalObjectiveEntry.JournalObjectiveEntry_C.Update
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestObjectiveInfo* Objective                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UJournalObjectiveEntry_C::Update(class UFortQuestObjectiveInfo* Objective)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JournalObjectiveEntry.JournalObjectiveEntry_C.Update");

	UJournalObjectiveEntry_C_Update_Params params;
	params.Objective = Objective;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function JournalObjectiveEntry.JournalObjectiveEntry_C.UpdateProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestObjectiveInfo* Objective                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UJournalObjectiveEntry_C::UpdateProgress(class UFortQuestObjectiveInfo* Objective)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JournalObjectiveEntry.JournalObjectiveEntry_C.UpdateProgress");

	UJournalObjectiveEntry_C_UpdateProgress_Params params;
	params.Objective = Objective;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function JournalObjectiveEntry.JournalObjectiveEntry_C.SetData
// (Event, Public, BlueprintEvent)
// Parameters:
// class UObject*                 InData                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UJournalObjectiveEntry_C::SetData(class UObject* InData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JournalObjectiveEntry.JournalObjectiveEntry_C.SetData");

	UJournalObjectiveEntry_C_SetData_Params params;
	params.InData = InData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function JournalObjectiveEntry.JournalObjectiveEntry_C.ExecuteUbergraph_JournalObjectiveEntry
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UJournalObjectiveEntry_C::ExecuteUbergraph_JournalObjectiveEntry(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JournalObjectiveEntry.JournalObjectiveEntry_C.ExecuteUbergraph_JournalObjectiveEntry");

	UJournalObjectiveEntry_C_ExecuteUbergraph_JournalObjectiveEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
