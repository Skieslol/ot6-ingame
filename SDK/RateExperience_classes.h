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

// WidgetBlueprintGeneratedClass RateExperience.RateExperience_C
// 0x0141 (FullSize[0x03A9] - InheritedSize[0x0268])
class URateExperience_C : public UFortActionHandlerPanel
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0268(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class UButtonIconText_C*                           _1Star;                                                    // 0x026C(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UButtonIconText_C*                           _2Star;                                                    // 0x0270(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UButtonIconText_C*                           _3Star;                                                    // 0x0274(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UButtonIconText_C*                           _4Star;                                                    // 0x0278(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UButtonIconText_C*                           _5Star;                                                    // 0x027C(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UMultiLineEditableTextBox*                   CommentField;                                              // 0x0280(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UButtonIconText_C*                           Decline;                                                   // 0x0284(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UImage*                                      Image_5;                                                   // 0x0288(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UHorizontalBox*                              RewardBox;                                                 // 0x028C(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UButtonIconText_C*                           Submit;                                                    // 0x0290(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UTextBlock*                                  Title;                                                     // 0x0294(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	TArray<class UButtonIconText_C*>                   StarButtons;                                               // 0x0298(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                StarCount;                                                 // 0x02A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FSlateBrush                                 StarOnBrush;                                               // 0x02A8(0x0074) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                                 StarOffBrush;                                              // 0x031C(0x0074) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FText>                               TooltipHeaders;                                            // 0x0390(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FText>                               TooltipBodys;                                              // 0x039C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               QuitAfter;                                                 // 0x03A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass RateExperience.RateExperience_C");
		return ptr;
	}



	void HandleFinished();
	void OnHandleAction(struct FEventReply* Result, bool* bPassThrough);
	void UpdateVisibility();
	void SendAnalyticsEvent();
	void CreateToolTip(class UWidget* StarWidget, int WidgetIndex);
	void SetStarCount(int StarCount);
	void Construct();
	void BndEvt__Submit_K2Node_ComponentBoundEvent_50_FortBaseButtonClicked__DelegateSignature(class UFortBaseButton* Button);
	void BndEvt__Decline_K2Node_ComponentBoundEvent_59_FortBaseButtonClicked__DelegateSignature(class UFortBaseButton* Button);
	void StarButtonClicked(class UFortBaseButton* Button);
	void BndEvt__CommentField_K2Node_ComponentBoundEvent_503_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(const struct FText& TEXT);
	void ExecuteUbergraph_RateExperience(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
