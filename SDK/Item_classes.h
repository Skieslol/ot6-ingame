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

// WidgetBlueprintGeneratedClass Item.Item_C
// 0x1527 (FullSize[0x1C7F] - InheritedSize[0x0758])
class UItem_C : public UFortItemWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0758(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                     _Border__Secondary_Icon_Fill;                              // 0x075C(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UBorder*                                     _Border__Secondary_Icon_Frame;                             // 0x0760(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UBorder*                                     _Border__Tertiary_Icon_Fill;                               // 0x0764(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UBorder*                                     _Border__Tertiary_Icon_Frame;                              // 0x0768(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UHorizontalBox*                              _Horizontal_Box__Subtype_Icons;                            // 0x076C(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UImage*                                      Shade;                                                     // 0x0770(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UImage*                                      _Image__Background;                                        // 0x0774(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UImage*                                      _Image__Bevel_Bottom;                                      // 0x0778(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UImage*                                      _Image__Bevel_Side;                                        // 0x077C(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UImage*                                      _Image__Bevel_Top;                                         // 0x0780(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UImage*                                      _Image__Item_Icon;                                         // 0x0784(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UImage*                                      _Image__Secondary_Icon;                                    // 0x0788(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UImage*                                      _Image__Tertiary_Icon;                                     // 0x078C(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UTextBlock*                                  _Text__Ammo_Counter;                                       // 0x0790(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UTextBlock*                                  _Text__Ammo_Counter_Alternate;                             // 0x0794(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UVerticalBox*                                _Vertical_Box__Subtype_Icons___Ammo_Count;                 // 0x0798(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UItemBadge_C*                                ItemBadge;                                                 // 0x079C(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UItemCooldownMeter_C*                        ItemCooldownMeter;                                         // 0x07A0(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UItemDurabilityMeter_C*                      ItemDurabilityMeter;                                       // 0x07A4(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UItemStackCounter_C*                         ItemStackCounter;                                          // 0x07A8(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class USizeBox*                                    SizeBox;                                                   // 0x07AC(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	struct FFortRarityItemData                         RarityData;                                                // 0x07B0(0x0070) (Edit, BlueprintVisible)
	bool                                               CanBeDragged;                                              // 0x0820(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	unsigned char                                      UnknownData_2365[0x3];                                     // 0x0821(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     DragTagString;                                             // 0x0824(0x000C) (Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn)
	class UFortItem*                                   ItemData;                                                  // 0x0830(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TEnumAsByte<ItemDisplayMode_EItemDisplayMode>      DisplayMode;                                               // 0x0834(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TEnumAsByte<ItemDisplayStyle_EItemDisplayStyle>    DisplayStyle;                                              // 0x0835(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ERF6[0x2];                                     // 0x0836(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FItemTextureSet                             Item_Textures;                                             // 0x0838(0x0D9C) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FItemTextureStylesheet                      Item_Texture_Stylesheet;                                   // 0x15D4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FFortMultiSizeBrush                         Subtype_Icon_Frame;                                        // 0x15E0(0x02B8) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FFortMultiSizeFont                          AmmoMultiFont;                                             // 0x1898(0x00F0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       TooltipHeaderText;                                         // 0x1988(0x0018) ELEMENT_SIZE_MISMATCH (Edit, BlueprintVisible, DisableEditOnInstance)
	class USlateBrushAsset*                            TooltipHeaderIcon;                                         // 0x1994(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               InfiniteAmmo;                                              // 0x1998(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_U02D[0x3];                                     // 0x1999(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UFortItemDefinition*                         DemoItemData;                                              // 0x199C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FFortMultiSizeBrush                         Subtype_Icon_Fill;                                         // 0x19A0(0x02B8) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FLinearColor                                Subtype_Fill_Color;                                        // 0x1C58(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Subtype_Frame_Color;                                       // 0x1C68(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               OverrideSecondaryTypeIconColor;                            // 0x1C78(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ShowSecondaryTypeIcon;                                     // 0x1C79(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ShowTertiaryTypeIcon;                                      // 0x1C7A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               OverrideTertiaryTypeIconColor;                             // 0x1C7B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               OverrideItemIconVisibility;                                // 0x1C7C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ShowStackCounter;                                          // 0x1C7D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                               OverrideDisplayStyle;                                      // 0x1C7E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Item.Item_C");
		return ptr;
	}



	void Set_Display_Style(bool Override_Display_Style, TEnumAsByte<ItemDisplayStyle_EItemDisplayStyle> DisplayStyle);
	void Hide_Subtype_Icons();
	void Set_Item_Icon_Visibility(bool Override_Icon_Visibility, TEnumAsByte<UMG_ESlateVisibility> Item_Icon_Visibility);
	void Set_Subtype_Icons___Ammo_Color(bool Override_Secondary_Icon_Color, const struct FLinearColor& Secondary_Icon_Override_Color, bool Override_Tertiary_Icon_Color, const struct FLinearColor& Tertiary_Icon_Override_Color);
	struct FEventReply OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, const struct FPointerEvent& InMouseEvent);
	void Resize(TEnumAsByte<FortniteGame_EFortBrushSize> Brush_Size);
	void Refresh();
	void Set_Stack_Count(int Count);
	void Set_Cooldown(const struct FTimespan& Time_Left, float Percentage, bool Show_Disabled_Without_Cooldown);
	void Set_Durability(float Durability);
	void Update_Cooldown_Meter();
	void Update_Durability_Meter();
	void Set_Tooltip_Header(const struct FText& Header_Text, class USlateBrushAsset* Icon_Brush);
	class UWidget* Get_Item_Tooltip();
	void Set_Display_Mode(TEnumAsByte<FortniteUI_EFortUIState> Current_UI_State, bool Cursor_Mode);
	void Set_Ammo_Count(int Count);
	void Update_Subtype_Icons___Ammo();
	void ShadeFunc();
	void Update_Side_Bevel();
	void Update_Top_Bevel();
	void Update_Bottom_Bevel();
	void Update_Masked_Gradient(class UImage* Image, class UTexture* Texture_Mask, const struct FLinearColor& Color_A, const struct FLinearColor& Color_B);
	void Get_Display_Style(TEnumAsByte<FortniteGame_EFortItemType> Item_Type, TEnumAsByte<ItemDisplayStyle_EItemDisplayStyle>* Style);
	void Level_Badge();
	void Update_Item_Icon();
	void Get_Item_Texture_Set(TEnumAsByte<ItemDisplayStyle_EItemDisplayStyle> Display_Style, struct FItemTextureSet* Texture_Set);
	void Update_Background();
	void Update_Size_Box();
	void OnDragDetected(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void Update_All();
	void Update_Stack_Counter();
	void Set_Item_Data(class UFortItem* Item_Data);
	void Update_Base();
	void BPOnItemChanged();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void BPOnItemSet(class UFortItem* NewItem);
	void OnCursorModeChanged(bool bCursorModeEnabled, const struct FName& ActionName, class UUserWidget* CursorModeContentWidget);
	void ExecuteUbergraph_Item(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
