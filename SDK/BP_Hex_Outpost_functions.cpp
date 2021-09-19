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

// Function BP_Hex_Outpost.BP_Hex_Outpost_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_Hex_Outpost_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Hex_Outpost.BP_Hex_Outpost_C.UserConstructionScript");

	ABP_Hex_Outpost_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Hex_Outpost.BP_Hex_Outpost_C.ActivateOutpost
// (BlueprintCallable, BlueprintEvent)
void ABP_Hex_Outpost_C::ActivateOutpost()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Hex_Outpost.BP_Hex_Outpost_C.ActivateOutpost");

	ABP_Hex_Outpost_C_ActivateOutpost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Hex_Outpost.BP_Hex_Outpost_C.ExecuteUbergraph_BP_Hex_Outpost
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Hex_Outpost_C::ExecuteUbergraph_BP_Hex_Outpost(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Hex_Outpost.BP_Hex_Outpost_C.ExecuteUbergraph_BP_Hex_Outpost");

	ABP_Hex_Outpost_C_ExecuteUbergraph_BP_Hex_Outpost_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
