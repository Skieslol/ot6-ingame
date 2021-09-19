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

// WidgetBlueprintGeneratedClass ItemBadge.ItemBadge_C
// 0x0B65 (FullSize[0x0D1D] - InheritedSize[0x01B8])
class UItemBadge_C : public UUserWidget
{
public:
	class UVerticalBox*                                _Vertical_Box_;                                            // 0x01B8(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UImage*                                      Accent;                                                    // 0x01BC(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UImage*                                      Base;                                                      // 0x01C0(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UItemLevelBadge_C*                           ItemLevelBadge;                                            // 0x01C4(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UOverlay*                                    Main_Overlay;                                              // 0x01C8(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UImage*                                      Tier_Icon;                                                 // 0x01CC(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	struct FItemTierIconSet                            TierIconSet;                                               // 0x01D0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FFortMultiSizeBrush                         TierBaseMultiBrush;                                        // 0x01DC(0x02B8) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FFortMultiSizeBrush                         TierAccentMultiBrush;                                      // 0x0494(0x02B8) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FFortMultiSizeMargin                        TierMultiMargin;                                           // 0x074C(0x0060) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FFortMultiSizeBrush                         WorkerMultiBrush;                                          // 0x07AC(0x02B8) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FFortMultiSizeBrush                         ManagerMultiBrush;                                         // 0x0A64(0x02B8) (Edit, BlueprintVisible, DisableEditOnInstance)
	TEnumAsByte<FortniteGame_EFortBrushSize>           Brush_Size;                                                // 0x0D1C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ItemBadge.ItemBadge_C");
		return ptr;
	}



	void Refresh(class UFortItem* Item_Data, TEnumAsByte<ItemDisplayStyle_EItemDisplayStyle> Display_Style, TEnumAsByte<ItemDisplayMode_EItemDisplayMode> Display_Mode);
	void Update(TEnumAsByte<FortniteGame_EFortBrushSize> Brush_Size, TEnumAsByte<ItemDisplayStyle_EItemDisplayStyle> Display_Style, TEnumAsByte<ItemDisplayMode_EItemDisplayMode> Display_Mode, const struct FFortRarityItemData& RarityData, class UFortItem* Item_Data);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
