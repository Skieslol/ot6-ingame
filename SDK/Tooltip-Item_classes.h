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

// WidgetBlueprintGeneratedClass Tooltip-Item.Tooltip-Item_C
// 0x00C4 (FullSize[0x027C] - InheritedSize[0x01B8])
class UTooltip_Item_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x01B8(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                     _Border__Tier;                                             // 0x01BC(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UHorizontalBox*                              _Horizontal_Box__Level;                                    // 0x01C0(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UHorizontalBox*                              _Horizontal_Box__SecondaryType;                            // 0x01C4(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UHorizontalBox*                              _Horizontal_Box__TertiaryType;                             // 0x01C8(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UImage*                                      _Image__SecondaryType;                                     // 0x01CC(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UImage*                                      _Image__TertiaryType;                                      // 0x01D0(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UImage*                                      _Image__Tier;                                              // 0x01D4(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UTextBlock*                                  _Text__Item_Name;                                          // 0x01D8(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UTextBlock*                                  _Text__Level;                                              // 0x01DC(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UTextBlock*                                  _Text__PrimaryType;                                        // 0x01E0(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UTextBlock*                                  _Text__Rarity_Name;                                        // 0x01E4(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UTextBlock*                                  _Text__SecondaryType;                                      // 0x01E8(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UTextBlock*                                  _Text__TertiaryType;                                       // 0x01EC(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UVerticalBox*                                _Vertical_Box__Stats;                                      // 0x01F0(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UVerticalBox*                                _VerticalBox__Content;                                     // 0x01F4(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	struct FText                                       HeaderText;                                                // 0x01F8(0x0018) ELEMENT_SIZE_MISMATCH (Edit, BlueprintVisible, ExposeOnSpawn)
	class USlateBrushAsset*                            Icon_Brush;                                                // 0x0204(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	class UFortItem*                                   Item;                                                      // 0x0208(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	struct FFortRarityItemData                         Rarity_Data;                                               // 0x020C(0x0070) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Tooltip-Item.Tooltip-Item_C");
		return ptr;
	}



	void Build_Durability();
	void Build_Consumable_Stats();
	void Build_Trap_Stats();
	void Build_Alteration_Info();
	void Build_Worker_Stats();
	void Build_Weapon_DPS_Stat();
	void Get_Scaled_Stat__float_(float Base_Stat, float Scaling, int Level, float* Scaled_Stat);
	void Build_Base_Weapon_Stats(const struct FFortBaseWeaponStats& Data);
	void Build_Melee_Weapon_Stats(const struct FFortMeleeWeaponStats& Data);
	void Build_Ranged_Weapon_Stats(const struct FFortRangedWeaponStats& Data);
	void Build_Basic_Info();
	void Build_Weapon_Stats();
	void Set_Item_Data(class UFortItem* Item);
	TEnumAsByte<UMG_ESlateVisibility> Get_Tooltip_Header_Text_Visibility();
	TEnumAsByte<UMG_ESlateVisibility> Get_Tooltip_Header_Icon_Visibility();
	TEnumAsByte<UMG_ESlateVisibility> Get_Tooltip_Header_Visibility();
	void Update();
	struct FLinearColor Get_Theme_Color__Normal_();
	struct FSlateBrush Get_Icon_Brush();
	void Construct();
	void ExecuteUbergraph_Tooltip_Item(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
