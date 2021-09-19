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

// WidgetBlueprintGeneratedClass HeroListRecruitWidget.HeroListRecruitWidget_C
// 0x006A (FullSize[0x02AE] - InheritedSize[0x0244])
class UHeroListRecruitWidget_C : public UFortUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0244(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class UButtonIconText_C*                           _Button__Cancel;                                           // 0x0248(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UButtonIconText_C*                           _Button__Expand;                                           // 0x024C(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UButton*                                     _Button__Random_Name;                                      // 0x0250(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UButtonIconText_C*                           _Button__Recruit;                                          // 0x0254(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UImage*                                      _Image__Class_Icon;                                        // 0x0258(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UImage*                                      _Image__Class_Icon__2_;                                    // 0x025C(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UImage*                                      _Image__Top_Bevel;                                         // 0x0260(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UButtonIconText_C*                           _Radio__Female_Option;                                     // 0x0264(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UButtonIconText_C*                           _Radio__Male_Option;                                       // 0x0268(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UWidgetSwitcher*                             _Switcher__Recruit_Details;                                // 0x026C(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UTextBlock*                                  _Text__Recruit_Text;                                       // 0x0270(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UTextBlock*                                  _Text__Recruit_Text__2_;                                   // 0x0274(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UTextBlock*                                  _Text__Slot_Count;                                         // 0x0278(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UEditableTextBox*                            _TextBox__Name_Input;                                      // 0x027C(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UWidgetSwitcher*                             SwitcherErrorInfo;                                         // 0x0280(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UTextBlock*                                  TextError;                                                 // 0x0284(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UTextBlock*                                  TextMaxLen;                                                // 0x0288(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UFortHeroType*                               HeroType;                                                  // 0x028C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TEnumAsByte<FortniteGame_EFortCustomGender>        Gender;                                                    // 0x0290(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_HLG4[0x3];                                     // 0x0291(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEmptyHeroSlot                              Hero_Slot;                                                 // 0x0294(0x000C) (Edit, BlueprintVisible, ExposeOnSpawn)
	struct FScriptMulticastDelegate                    OnRequestCreateHero;                                       // 0x02A0(0x0010) ELEMENT_SIZE_MISMATCH (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               HasNameBeenChosen;                                         // 0x02AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TEnumAsByte<FortniteUI_ENameStatus>                LastError;                                                 // 0x02AD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HeroListRecruitWidget.HeroListRecruitWidget_C");
		return ptr;
	}



	void Refresh_Info();
	void Clear_Error();
	void Set_Error(const struct FText& Error_Text);
	void ValidateNameField();
	void Get_Random_Name();
	void Collapse();
	void Expand();
	void Initialize(const struct FEmptyHeroSlot& Hero_Slot);
	void Construct();
	void BndEvt___Button__Cancel_K2Node_ComponentBoundEvent_150_FortBaseButtonClicked__DelegateSignature(class UFortBaseButton* Button);
	void BndEvt___Button__Random_Name_K2Node_ComponentBoundEvent_160_OnButtonClickedEvent__DelegateSignature();
	void BndEvt___Radio__Male_Option_K2Node_ComponentBoundEvent_771_FortSelectedStateChanged__DelegateSignature(class UFortBaseButton* Button, bool SELECTED);
	void BndEvt___Radio__Female_Option_K2Node_ComponentBoundEvent_784_FortSelectedStateChanged__DelegateSignature(class UFortBaseButton* Button, bool SELECTED);
	void BndEvt___Button__Recruit_K2Node_ComponentBoundEvent_1020_FortBaseButtonClicked__DelegateSignature(class UFortBaseButton* Button);
	void BndEvt___Button__Expand_K2Node_ComponentBoundEvent_631_FortSelectedStateChanged__DelegateSignature(class UFortBaseButton* Button, bool SELECTED);
	void BndEvt___TextBox__Name_Input_K2Node_ComponentBoundEvent_100_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& TEXT, TEnumAsByte<SlateCore_ETextCommit> CommitMethod);
	void BndEvt___TextBox__Name_Input_K2Node_ComponentBoundEvent_42_OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& TEXT);
	void ExecuteUbergraph_HeroListRecruitWidget(int EntryPoint);
	void OnRequestCreateHero__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
