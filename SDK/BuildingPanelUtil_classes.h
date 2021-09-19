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

// BlueprintGeneratedClass BuildingPanelUtil.BuildingPanelUtil_C
// 0x0000 (FullSize[0x001C] - InheritedSize[0x001C])
class UBuildingPanelUtil_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BuildingPanelUtil.BuildingPanelUtil_C");
		return ptr;
	}



	struct FText STATIC_Get_Attribute_Modifier_Header_Text(const struct FFortAttributeInfo& Attribute_Info, const struct FGameplayTagContainer& Required_Tags, const struct FText& Required_Gameplay_Tags_Description, class UObject* __WorldContext);
	void STATIC_Create_Attribute_Modifier_Tool_Tip(class APlayerController* Owning_Player, const struct FFortAttributeInfo& Attribute_Info, const struct FGameplayTagContainer& Required_Gameplay_Tags, const struct FText& Required_Gameplay_Tags_Description, const struct FText& Modifier_Source, class UObject* __WorldContext, class UWidget** Result);
	void STATIC_Get_Traits_Of_Workers(TArray<class UFortWorker*>* Workers, class UObject* __WorldContext, struct FGameplayTagContainer* Chief_Personality, struct FGameplayTagContainer* Crew_Personalities, struct FGameplayTagContainer* Crew_Set_Bonuses);
	void STATIC_Calculate_Current_Pulsing_Highlight_Color(const struct FLinearColor& Base_Color, const struct FLinearColor& Hightlight_Color, class UObject* __WorldContext, struct FLinearColor* Current_Color);
	void STATIC_Get_Worker_Bonus_Text(class UHomeBaseWorker* Worker, class UObject* __WorldContext, struct FText* Bonus_Text);
	void STATIC_EnsureIconBrush(const struct FFortMultiSizeBrush& Multi_size_Brush, class UObject* __WorldContext, struct FSlateBrush* Brush);
	void STATIC_InitItemWidget(class UFortItemWidget* Widget, class UFortItem* Item, class UObject* __WorldContext);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
