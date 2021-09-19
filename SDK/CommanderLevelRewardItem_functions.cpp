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

// Function CommanderLevelRewardItem.CommanderLevelRewardItem_C.Get_RewardIcon_ToolTipWidget
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
class UWidget* UCommanderLevelRewardItem_C::Get_RewardIcon_ToolTipWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CommanderLevelRewardItem.CommanderLevelRewardItem_C.Get_RewardIcon_ToolTipWidget");

	UCommanderLevelRewardItem_C_Get_RewardIcon_ToolTipWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function CommanderLevelRewardItem.CommanderLevelRewardItem_C.Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortItemQuantityPair   InItem                         (Parm)
void UCommanderLevelRewardItem_C::Init(const struct FFortItemQuantityPair& InItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CommanderLevelRewardItem.CommanderLevelRewardItem_C.Init");

	UCommanderLevelRewardItem_C_Init_Params params;
	params.InItem = InItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
