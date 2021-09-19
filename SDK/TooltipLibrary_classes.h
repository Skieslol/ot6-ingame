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

// BlueprintGeneratedClass TooltipLibrary.TooltipLibrary_C
// 0x0000 (FullSize[0x001C] - InheritedSize[0x001C])
class UTooltipLibrary_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TooltipLibrary.TooltipLibrary_C");
		return ptr;
	}



	void STATIC_Create_Core_Stat_Tooltip(class APlayerController* Owning_Player, const struct FHeroCoreStat& Data, float Value, class UObject* __WorldContext, class UUserWidget** Output);
	void STATIC_Create_Basic_Multi_Line_Tooltip(class APlayerController* Owning_Player, TArray<struct FText>* Body_Text, const struct FText& Header_Text, class USlateBrushAsset* Icon_Brush, class UObject* __WorldContext, class UUserWidget** Output);
	void STATIC_Create_Compare_Item_Tooltip(class APlayerController* Owning_Player, const struct FText& Header_Text, class USlateBrushAsset* Header_Icon, class UFortItem* Item, class UFortItem* ComparedItem, class UObject* __WorldContext, class UWidget** Return_Value);
	void STATIC_Create_Item_Tooltip(class APlayerController* Owning_Player, const struct FText& Header_Text, class USlateBrushAsset* Header_Icon, class UFortItem* Item, class UObject* __WorldContext, class UWidget** Return_Value);
	void STATIC_Set_Enabled_And_Tooltip_Text(class UWidget* Widget, bool Enabled, const struct FText& Tooltip_Text, class UObject* __WorldContext);
	void STATIC_Create_Custom_Tooltip(class APlayerController* Owning_Player, const struct FText& Header_Text, class USlateBrushAsset* Icon_Brush, class UUserWidget* Widget, class UObject* __WorldContext, class UUserWidget** Output);
	void STATIC_Create_Basic_Tooltip(class APlayerController* Owning_Player, const struct FText& Body_Text, const struct FText& Header_Text, class USlateBrushAsset* Icon_Brush, class UObject* __WorldContext, class UUserWidget** Output);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
