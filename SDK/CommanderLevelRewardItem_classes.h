#pragma once

// Name: Fortnite, Version: OT-6_5


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass CommanderLevelRewardItem.CommanderLevelRewardItem_C
// 0x0015 (FullSize[0x0259] - InheritedSize[0x0244])
class UCommanderLevelRewardItem_C : public UFortUserWidget
{
public:
	class UItemStackCounter_C*                         ItemStackCounter;                                          // 0x0244(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UImage*                                      RewardIcon;                                                // 0x0248(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UTextBlock*                                  RewardName;                                                // 0x024C(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UFortItemDefinition*                         ItemReward;                                                // 0x0250(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int                                                Quantity;                                                  // 0x0254(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bShowDescription;                                          // 0x0258(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CommanderLevelRewardItem.CommanderLevelRewardItem_C");
		return ptr;
	}



	class UWidget* Get_RewardIcon_ToolTipWidget();
	void Init(const struct FFortItemQuantityPair& InItem);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
