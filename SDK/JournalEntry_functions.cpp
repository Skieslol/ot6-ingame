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

// Function JournalEntry.JournalEntry_C.Setup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestItem*          Quest                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UJournalEntry_C::Setup(class UFortQuestItem* Quest)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JournalEntry.JournalEntry_C.Setup");

	UJournalEntry_C_Setup_Params params;
	params.Quest = Quest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function JournalEntry.JournalEntry_C.UpdateProgress
// (Public, BlueprintCallable, BlueprintEvent)
void UJournalEntry_C::UpdateProgress()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JournalEntry.JournalEntry_C.UpdateProgress");

	UJournalEntry_C_UpdateProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function JournalEntry.JournalEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UJournalEntry_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JournalEntry.JournalEntry_C.Construct");

	UJournalEntry_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function JournalEntry.JournalEntry_C.HandleSelectedChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortBaseButton*         Button                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           SELECTED                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UJournalEntry_C::HandleSelectedChanged(class UFortBaseButton* Button, bool SELECTED)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JournalEntry.JournalEntry_C.HandleSelectedChanged");

	UJournalEntry_C_HandleSelectedChanged_Params params;
	params.Button = Button;
	params.SELECTED = SELECTED;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function JournalEntry.JournalEntry_C.ExecuteUbergraph_JournalEntry
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UJournalEntry_C::ExecuteUbergraph_JournalEntry(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JournalEntry.JournalEntry_C.ExecuteUbergraph_JournalEntry");

	UJournalEntry_C_ExecuteUbergraph_JournalEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
