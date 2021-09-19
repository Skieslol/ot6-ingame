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

// Function RewardsListWidget.RewardsListWidget_C.PopulateRewards
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FFortQuestReward> Rewards                        (Parm, OutParm, ZeroConstructor, ReferenceParm)
void URewardsListWidget_C::PopulateRewards(TArray<struct FFortQuestReward>* Rewards)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RewardsListWidget.RewardsListWidget_C.PopulateRewards");

	URewardsListWidget_C_PopulateRewards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Rewards != nullptr)
		*Rewards = params.Rewards;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
