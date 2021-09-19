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

// Function JournalEntryListItem.JournalEntryListItem_C.SetSelected
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bSelected                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UJournalEntryListItem_C::SetSelected(bool bSelected)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JournalEntryListItem.JournalEntryListItem_C.SetSelected");

	UJournalEntryListItem_C_SetSelected_Params params;
	params.bSelected = bSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function JournalEntryListItem.JournalEntryListItem_C.ExecuteUbergraph_JournalEntryListItem
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UJournalEntryListItem_C::ExecuteUbergraph_JournalEntryListItem(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JournalEntryListItem.JournalEntryListItem_C.ExecuteUbergraph_JournalEntryListItem");

	UJournalEntryListItem_C_ExecuteUbergraph_JournalEntryListItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
