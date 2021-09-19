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

// Function CommanderRewardsLevelBox.CommanderRewardsLevelBox_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UCommanderRewardsLevelBox_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CommanderRewardsLevelBox.CommanderRewardsLevelBox_C.Construct");

	UCommanderRewardsLevelBox_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CommanderRewardsLevelBox.CommanderRewardsLevelBox_C.ExecuteUbergraph_CommanderRewardsLevelBox
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UCommanderRewardsLevelBox_C::ExecuteUbergraph_CommanderRewardsLevelBox(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CommanderRewardsLevelBox.CommanderRewardsLevelBox_C.ExecuteUbergraph_CommanderRewardsLevelBox");

	UCommanderRewardsLevelBox_C_ExecuteUbergraph_CommanderRewardsLevelBox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
