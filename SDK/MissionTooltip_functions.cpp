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

// Function MissionTooltip.MissionTooltip_C.HandleMissionRewards
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UMissionTooltip_C::HandleMissionRewards()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MissionTooltip.MissionTooltip_C.HandleMissionRewards");

	UMissionTooltip_C_HandleMissionRewards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MissionTooltip.MissionTooltip_C.UpdateMissionInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Hex_PARENT_C*        Mission_Details                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UMissionTooltip_C::UpdateMissionInfo(class ABP_Hex_PARENT_C* Mission_Details)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MissionTooltip.MissionTooltip_C.UpdateMissionInfo");

	UMissionTooltip_C_UpdateMissionInfo_Params params;
	params.Mission_Details = Mission_Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MissionTooltip.MissionTooltip_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UMissionTooltip_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MissionTooltip.MissionTooltip_C.Construct");

	UMissionTooltip_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MissionTooltip.MissionTooltip_C.ExecuteUbergraph_MissionTooltip
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UMissionTooltip_C::ExecuteUbergraph_MissionTooltip(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MissionTooltip.MissionTooltip_C.ExecuteUbergraph_MissionTooltip");

	UMissionTooltip_C_ExecuteUbergraph_MissionTooltip_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
