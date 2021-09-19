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

// WidgetBlueprintGeneratedClass ItemLevelBadge.ItemLevelBadge_C
// 0x0414 (FullSize[0x05CC] - InheritedSize[0x01B8])
class UItemLevelBadge_C : public UUserWidget
{
public:
	class UBorder*                                     _Border__Base;                                             // 0x01B8(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UTextBlock*                                  _Text__Level;                                              // 0x01BC(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class USizeBox*                                    Size_Box;                                                  // 0x01C0(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	struct FFortMultiSizeFont                          MultiFont;                                                 // 0x01C4(0x00F0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FFortMultiSizeMargin                        MultiMargin;                                               // 0x02B4(0x0060) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FFortMultiSizeBrush                         MultiBrush;                                                // 0x0314(0x02B8) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ItemLevelBadge.ItemLevelBadge_C");
		return ptr;
	}



	void Refresh(TEnumAsByte<ItemDisplayMode_EItemDisplayMode> Display_Mode, int Max, int Level);
	void Update(int Max, int Level, TEnumAsByte<FortniteGame_EFortBrushSize> Brush_Size, const struct FFortRarityItemData& Rarity_Data, TEnumAsByte<ItemDisplayMode_EItemDisplayMode> Display_Mode);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
