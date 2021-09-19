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

// Function FortnitePartyBackdrop.FortnitePartyBackdrop_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
void AFortnitePartyBackdrop_C::Timeline_0__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortnitePartyBackdrop.FortnitePartyBackdrop_C.Timeline_0__FinishedFunc");

	AFortnitePartyBackdrop_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortnitePartyBackdrop.FortnitePartyBackdrop_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
void AFortnitePartyBackdrop_C::Timeline_0__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortnitePartyBackdrop.FortnitePartyBackdrop_C.Timeline_0__UpdateFunc");

	AFortnitePartyBackdrop_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortnitePartyBackdrop.FortnitePartyBackdrop_C.ExecuteUbergraph_FortnitePartyBackdrop
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AFortnitePartyBackdrop_C::ExecuteUbergraph_FortnitePartyBackdrop(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortnitePartyBackdrop.FortnitePartyBackdrop_C.ExecuteUbergraph_FortnitePartyBackdrop");

	AFortnitePartyBackdrop_C_ExecuteUbergraph_FortnitePartyBackdrop_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
