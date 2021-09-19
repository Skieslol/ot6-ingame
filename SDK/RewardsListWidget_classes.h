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

// WidgetBlueprintGeneratedClass RewardsListWidget.RewardsListWidget_C
// 0x0006 (FullSize[0x024A] - InheritedSize[0x0244])
class URewardsListWidget_C : public UFortUserWidget
{
public:
	class UHorizontalBox*                              _Horizontal_Box__Container;                                // 0x0244(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	bool                                               bShowDescription;                                          // 0x0248(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	TEnumAsByte<FortniteGame_EFortBrushSize>           BrushSize;                                                 // 0x0249(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass RewardsListWidget.RewardsListWidget_C");
		return ptr;
	}



	void PopulateRewards(TArray<struct FFortQuestReward>* Rewards);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
