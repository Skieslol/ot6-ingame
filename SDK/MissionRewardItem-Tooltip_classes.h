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

// WidgetBlueprintGeneratedClass MissionRewardItem-Tooltip.MissionRewardItem-Tooltip_C
// 0x001C (FullSize[0x01D4] - InheritedSize[0x01B8])
class UMissionRewardItem_Tooltip_C : public UUserWidget
{
public:
	class UBorder*                                     Border;                                                    // 0x01B8(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UImage*                                      Icon;                                                      // 0x01BC(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UTextBlock*                                  TextField;                                                 // 0x01C0(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UFortItem*                                   Item;                                                      // 0x01C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	struct FText                                       DisplayName;                                               // 0x01C8(0x0018) ELEMENT_SIZE_MISMATCH (Edit, BlueprintVisible, ExposeOnSpawn)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MissionRewardItem-Tooltip.MissionRewardItem-Tooltip_C");
		return ptr;
	}



	struct FSlateColor Get_Rarity_Color__SlateColor_();
	struct FLinearColor Get_Rarity_Color();
	struct FSlateBrush Get_Reward_Icon();
	struct FText Get_Reward_Name();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
