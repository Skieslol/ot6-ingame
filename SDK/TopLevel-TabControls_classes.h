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

// WidgetBlueprintGeneratedClass TopLevel-TabControls.TopLevel-TabControls_C
// 0x004C (FullSize[0x02B4] - InheritedSize[0x0268])
class UTopLevel_TabControls_C : public UFortActionHandlerPanel
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0268(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            QuestCountPulse;                                           // 0x026C(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UButtonIconText_C*                           _Button__Friends;                                          // 0x0270(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UButtonIconText_C*                           _Button__Menu;                                             // 0x0274(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UButtonIconText_C*                           _Button_Journal;                                           // 0x0278(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UMenuAnchor*                                 _Menu_Anchor__Friends_List;                                // 0x027C(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UMenuAnchor*                                 _Menu_Anchor__Journal;                                     // 0x0280(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UMenuAnchor*                                 _MenuAnchor__Main_Menu;                                    // 0x0284(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UBorder*                                     BorderOuterFrame;                                          // 0x0288(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UImage*                                      Image_1046;                                                // 0x028C(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	int                                                ActiveIndex;                                               // 0x0290(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundBase*                                  Sound_ConfigClicked;                                       // 0x0294(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UFortBaseButton*                             CurrentSelectedButton;                                     // 0x0298(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UFortBaseButton*                             Context;                                                   // 0x029C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ShowFriends;                                               // 0x02A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                               ShowJournal;                                               // 0x02A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	unsigned char                                      UnknownData_9G07[0x2];                                     // 0x02A2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                QuestCount_Int;                                            // 0x02A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FText                                       FriendsButton_ToolTipText;                                 // 0x02A8(0x0018) ELEMENT_SIZE_MISMATCH (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TopLevel-TabControls.TopLevel-TabControls_C");
		return ptr;
	}



	class UWidget* Menu_ToolTipWidget();
	class UWidget* Friends_ToolTipWidget();
	class UWidget* Journal_ToolTipWidget();
	void GetTotalQuestCount(int* outQuestCount);
	void SetQuestCountIndicator();
	void InitializeFriendAndJournal();
	void SelectButtonAndMenuAnchor(class UFortBaseButton* Button, class UMenuAnchor* MenuAnchor, bool FocusMenu);
	class UWidget* OnGetJournal();
	void UpdateFriendButtonState(TEnumAsByte<FortniteUI_EFortUIFeatureState> FeatureState);
	void OpenMainMenu();
	void HandleMainMenuClose();
	void HandleMenuAnchorChanged(class UButtonIconText_C* Menu_Button, bool Is_Open);
	class UWidget* OnGetMainMenu();
	class UWidget* OnGetFriendsList();
	void OnHandleAction(struct FEventReply* Result, bool* bPassThrough);
	void ClearActiveTab();
	void Construct();
	void On_Social_Feature_Changed_Copy(TEnumAsByte<FortniteUI_EFortUIFeature> ChangedFeature, TEnumAsByte<FortniteUI_EFortUIFeatureState> NewState);
	void OnSocialUpdate(TArray<class UFortSocialItem*> SocialItems);
	void HandlePartyTransitionComplete(TEnumAsByte<FortniteGame_EFortPartyTransition> PartyTransition);
	void HandlePartyTransitionStarted(TEnumAsByte<FortniteGame_EFortPartyTransition> PartyTransition);
	void BndEvt___MenuAnchor__Main_Menu_K2Node_ComponentBoundEvent_871_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen);
	void BndEvt___Menu_Anchor__Friends_List_K2Node_ComponentBoundEvent_879_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen);
	void BndEvt___Button__Friends_K2Node_ComponentBoundEvent_1106_FortBaseButtonClicked__DelegateSignature(class UFortBaseButton* Button);
	void BndEvt___Button__Menu_K2Node_ComponentBoundEvent_1392_FortBaseButtonClicked__DelegateSignature(class UFortBaseButton* Button);
	void BndEvt___Button__Menu_K2Node_ComponentBoundEvent_1128_FortSelectedStateChanged__DelegateSignature(class UFortBaseButton* Button, bool SELECTED);
	void BndEvt___Button__Friends_K2Node_ComponentBoundEvent_1225_FortSelectedStateChanged__DelegateSignature(class UFortBaseButton* Button, bool SELECTED);
	void BndEvt___Menu_Anchor__Journal_K2Node_ComponentBoundEvent_256_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen);
	void BndEvt___Button_Journal_K2Node_ComponentBoundEvent_267_FortSelectedStateChanged__DelegateSignature(class UFortBaseButton* Button, bool SELECTED);
	void BndEvt___Button_Journal_K2Node_ComponentBoundEvent_281_FortBaseButtonClicked__DelegateSignature(class UFortBaseButton* Button);
	void HandleQuestUpdated();
	void HandleClientEvent_OpenQuestJournal(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent);
	void HandleClientEvent_OpenNewsScreen(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent);
	void ExecuteUbergraph_TopLevel_TabControls(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
