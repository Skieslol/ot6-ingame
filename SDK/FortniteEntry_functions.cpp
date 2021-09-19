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

// Function FortniteEntry.FortniteEntry_C.OnMatchStarted
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
void AFortniteEntry_C::OnMatchStarted()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteEntry.FortniteEntry_C.OnMatchStarted");

	AFortniteEntry_C_OnMatchStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteEntry.FortniteEntry_C.EnableTutorial
// (BlueprintCallable, BlueprintEvent)
void AFortniteEntry_C::EnableTutorial()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteEntry.FortniteEntry_C.EnableTutorial");

	AFortniteEntry_C_EnableTutorial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteEntry.FortniteEntry_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void AFortniteEntry_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteEntry.FortniteEntry_C.ReceiveBeginPlay");

	AFortniteEntry_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortniteEntry.FortniteEntry_C.ExecuteUbergraph_FortniteEntry
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AFortniteEntry_C::ExecuteUbergraph_FortniteEntry(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortniteEntry.FortniteEntry_C.ExecuteUbergraph_FortniteEntry");

	AFortniteEntry_C_ExecuteUbergraph_FortniteEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
