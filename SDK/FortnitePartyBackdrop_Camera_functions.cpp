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

// Function FortnitePartyBackdrop_Camera.FortnitePartyBackdrop_Camera_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AFortnitePartyBackdrop_Camera_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortnitePartyBackdrop_Camera.FortnitePartyBackdrop_Camera_C.UserConstructionScript");

	AFortnitePartyBackdrop_Camera_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortnitePartyBackdrop_Camera.FortnitePartyBackdrop_Camera_C.OnActivated
// (Event, Public, BlueprintEvent)
void AFortnitePartyBackdrop_Camera_C::OnActivated()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortnitePartyBackdrop_Camera.FortnitePartyBackdrop_Camera_C.OnActivated");

	AFortnitePartyBackdrop_Camera_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FortnitePartyBackdrop_Camera.FortnitePartyBackdrop_Camera_C.ExecuteUbergraph_FortnitePartyBackdrop_Camera
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AFortnitePartyBackdrop_Camera_C::ExecuteUbergraph_FortnitePartyBackdrop_Camera(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FortnitePartyBackdrop_Camera.FortnitePartyBackdrop_Camera_C.ExecuteUbergraph_FortnitePartyBackdrop_Camera");

	AFortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
