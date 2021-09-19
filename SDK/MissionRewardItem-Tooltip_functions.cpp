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

// Function MissionRewardItem-Tooltip.MissionRewardItem-Tooltip_C.Get Rarity Color (SlateColor)
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FSlateColor UMissionRewardItem_Tooltip_C::Get_Rarity_Color__SlateColor_()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MissionRewardItem-Tooltip.MissionRewardItem-Tooltip_C.Get Rarity Color (SlateColor)");

	UMissionRewardItem_Tooltip_C_Get_Rarity_Color__SlateColor__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MissionRewardItem-Tooltip.MissionRewardItem-Tooltip_C.Get Rarity Color
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
struct FLinearColor UMissionRewardItem_Tooltip_C::Get_Rarity_Color()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MissionRewardItem-Tooltip.MissionRewardItem-Tooltip_C.Get Rarity Color");

	UMissionRewardItem_Tooltip_C_Get_Rarity_Color_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MissionRewardItem-Tooltip.MissionRewardItem-Tooltip_C.Get Reward Icon
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FSlateBrush UMissionRewardItem_Tooltip_C::Get_Reward_Icon()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MissionRewardItem-Tooltip.MissionRewardItem-Tooltip_C.Get Reward Icon");

	UMissionRewardItem_Tooltip_C_Get_Reward_Icon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MissionRewardItem-Tooltip.MissionRewardItem-Tooltip_C.Get Reward Name
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UMissionRewardItem_Tooltip_C::Get_Reward_Name()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MissionRewardItem-Tooltip.MissionRewardItem-Tooltip_C.Get Reward Name");

	UMissionRewardItem_Tooltip_C_Get_Reward_Name_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
