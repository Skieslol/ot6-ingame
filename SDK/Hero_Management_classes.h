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

// WidgetBlueprintGeneratedClass Hero_Management.Hero_Management_C
// 0x0094 (FullSize[0x02D8] - InheritedSize[0x0244])
class UHero_Management_C : public UFortUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0244(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                     _Border__Stats_Panel;                                      // 0x0248(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UButtonIconText_C*                           _Button__Close_Stats;                                      // 0x024C(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UButtonIconText_C*                           _Button__Delete;                                           // 0x0250(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UButtonIconText_C*                           _Button__Respec;                                           // 0x0254(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UHorizontalBox*                              _Horizontal_Box__Core_Abilities;                           // 0x0258(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UImage*                                      _Image__CrossoverArrow;                                    // 0x025C(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UImage*                                      _Image__Husklock;                                          // 0x0260(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UImage*                                      _Image__Slot_Pointer;                                      // 0x0264(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UOverlay*                                    _Overlay__Hero_Info;                                       // 0x0268(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UWidgetSwitcher*                             Lock;                                                      // 0x026C(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UButtonIconText_C*                           _Tab__Stats;                                               // 0x0270(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UTextBlock*                                  _Text__Ability_Point_Count;                                // 0x0274(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UTextBlock*                                  _Text__Ability_Tree_Label;                                 // 0x0278(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UTextBlock*                                  _Text__Primary_Header;                                     // 0x027C(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UVerticalBox*                                _Vertical_Box__Skill_Tree;                                 // 0x0280(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UVerticalBox*                                _Vertical_Box__Stats;                                      // 0x0284(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UHeroInfoWidget_C*                           HeroInfoWidget;                                            // 0x0288(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UVerticalBox*                                VerticalBoxHeroSlots;                                      // 0x028C(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UHeroListWidget_C*                           WidgetHeroList;                                            // 0x0290(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	TArray<class UHeroListItemWidget_C*>               HeroWidgetArray;                                           // 0x0294(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     CurrentHero;                                               // 0x02A0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UFortAbilityKit*                             ThisAbilityKitGoesToEleven;                                // 0x02AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<class UHeroTrait_Widget_C*>                 HeroTraitWidgetArray;                                      // 0x02B0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FText                                       StatValue;                                                 // 0x02BC(0x0018) ELEMENT_SIZE_MISMATCH (Edit, BlueprintVisible, DisableEditOnInstance)
	TEnumAsByte<WeaponTooltipStatType_EWeaponTooltipStatType> StatType;                                                  // 0x02C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsCategory;                                                // 0x02C9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_68EF[0x2];                                     // 0x02CA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     StringMagnitude;                                           // 0x02CC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Hero_Management.Hero_Management_C");
		return ptr;
	}



	void On_Hero_Stats_Changed();
	void Set_Main_Panel_Visibility(bool Is_Visible);
	void Refresh_Delete_Permission();
	void Rebuild_Hero_Slots();
	void On_Ability_Points_Assigned(bool Success);
	void On_Hero_Deleted(bool Success);
	void On_Hero_Created(bool Success);
	void Rebuild_All();
	void Hide_Stats_Panel(bool Show_Panel);
	void Rebuild_Stats_Panel();
	void Rebuild_Skill_Tree();
	void Rebuild_Core_Abilities();
	void Rebuild_Main_Panel();
	void Rebuild_Hero_List();
	void On_Hero_Selected();
	void OnTimedOut_2CEB7D4940ED5B5499AC7991F91F4019();
	void OnDeclined_2CEB7D4940ED5B5499AC7991F91F4019();
	void OnConfirmed_2CEB7D4940ED5B5499AC7991F91F4019();
	void Construct();
	void BndEvt___Tab__Stats_K2Node_ComponentBoundEvent_532_FortSelectedStateChanged__DelegateSignature(class UFortBaseButton* Button, bool SELECTED);
	void BndEvt___Button__Close_Stats_K2Node_ComponentBoundEvent_606_FortBaseButtonClicked__DelegateSignature(class UFortBaseButton* Button);
	void BndEvt___Button__Respec_K2Node_ComponentBoundEvent_693_FortBaseButtonClicked__DelegateSignature(class UFortBaseButton* Button);
	void BndEvt___Button__Delete_K2Node_ComponentBoundEvent_827_FortBaseButtonClicked__DelegateSignature(class UFortBaseButton* Button);
	void ExecuteUbergraph_Hero_Management(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
