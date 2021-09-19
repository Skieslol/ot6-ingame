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

// Function B_AirStrike_Placement.B_AirStrike_Placement_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AB_AirStrike_Placement_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_AirStrike_Placement.B_AirStrike_Placement_C.UserConstructionScript");

	AB_AirStrike_Placement_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_AirStrike_Placement.B_AirStrike_Placement_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void AB_AirStrike_Placement_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_AirStrike_Placement.B_AirStrike_Placement_C.ReceiveBeginPlay");

	AB_AirStrike_Placement_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_AirStrike_Placement.B_AirStrike_Placement_C.ExecuteUbergraph_B_AirStrike_Placement
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_AirStrike_Placement_C::ExecuteUbergraph_B_AirStrike_Placement(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_AirStrike_Placement.B_AirStrike_Placement_C.ExecuteUbergraph_B_AirStrike_Placement");

	AB_AirStrike_Placement_C_ExecuteUbergraph_B_AirStrike_Placement_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
