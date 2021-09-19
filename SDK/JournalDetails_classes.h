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

// WidgetBlueprintGeneratedClass JournalDetails.JournalDetails_C
// 0x0038 (FullSize[0x027C] - InheritedSize[0x0244])
class UJournalDetails_C : public UFortUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0244(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class UButtonIconText_C*                           AbandonButton;                                             // 0x0248(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UTextBlock*                                  DescriptionTextBlock;                                      // 0x024C(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UVerticalBox*                                DescriptionVerticalBox;                                    // 0x0250(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UImage*                                      Image_573;                                                 // 0x0254(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UBorder*                                     ProgressBorder;                                            // 0x0258(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UImage*                                      QuestIcon_Fill;                                            // 0x025C(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UImage*                                      QuestIcon_Shadow;                                          // 0x0260(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UTextBlock*                                  QuestName;                                                 // 0x0264(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UWidgetSwitcher*                             QuestSelectedWidgetSwitcher;                               // 0x0268(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UBorder*                                     RewardsBorder;                                             // 0x026C(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class URewardsListWidget_C*                        RewardsListWidget;                                         // 0x0270(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UFortListView*                               TaskList;                                                  // 0x0274(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UFortQuestItem*                              QuestItem;                                                 // 0x0278(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass JournalDetails.JournalDetails_C");
		return ptr;
	}



	class UWidget* GenerateAbandonButtonToolTipWidget();
	void SetupAbandonBtn();
	void Update();
	void Setup(class UFortQuestItem* QuestItem, bool ShowObjectives, bool ShowRewards);
	void Construct();
	void BndEvt__AbandonButton_K2Node_ComponentBoundEvent_71_FortBaseButtonClicked__DelegateSignature(class UFortBaseButton* Button);
	void ExecuteUbergraph_JournalDetails(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
