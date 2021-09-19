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

// WidgetBlueprintGeneratedClass TopLevelRibbon.TopLevelRibbon_C
// 0x003C (FullSize[0x0280] - InheritedSize[0x0244])
class UTopLevelRibbon_C : public UFortUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0244(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class UButtonIconText_C*                           _Button__Feedback;                                         // 0x0248(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UButtonIconText_C*                           _Button__Log_Out;                                          // 0x024C(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UButtonIconText_C*                           _Button__Options;                                          // 0x0250(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UButtonIconText_C*                           _Button__Quit;                                             // 0x0254(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UImage*                                      _Image__Switch_Action;                                     // 0x0258(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UVerticalBox*                                _Vertical_Box__FrontEnd_Options;                           // 0x025C(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class ULeaveButton_C*                              ButtonLeave;                                               // 0x0260(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UImage*                                      Image_235;                                                 // 0x0264(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UButtonIconText_C*                           News_Button;                                               // 0x0268(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UOutpost_CanEditPanel_C*                     Outpost_CanEditPanel;                                      // 0x026C(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UOverlay*                                    OutpostSettings_Overlay;                                   // 0x0270(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	struct FScriptMulticastDelegate                    OnClosed;                                                  // 0x0274(0x0010) ELEMENT_SIZE_MISMATCH (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TopLevelRibbon.TopLevelRibbon_C");
		return ptr;
	}



	void SetupButtons();
	void GetFrontEndOptionsVisibility(TEnumAsByte<UMG_ESlateVisibility>* Visibility);
	void BindDelegates();
	void ShowRateExperience();
	void ShowFeedback();
	void ShowGameOptions();
	void LeavePartyAndGame();
	void OnTimedOut_79E55F534B88358E4441C485A4E14D6E();
	void OnDeclined_79E55F534B88358E4441C485A4E14D6E();
	void OnConfirmed_79E55F534B88358E4441C485A4E14D6E();
	void OnTimedOut_5265A9FE464FA87840004EB001876A10();
	void OnDeclined_5265A9FE464FA87840004EB001876A10();
	void OnConfirmed_5265A9FE464FA87840004EB001876A10();
	void Construct();
	void BndEvt___Button__Feedback_K2Node_ComponentBoundEvent_1732_FortBaseButtonClicked__DelegateSignature(class UFortBaseButton* Button);
	void BndEvt___Button__Log_Out_K2Node_ComponentBoundEvent_2079_FortBaseButtonClicked__DelegateSignature(class UFortBaseButton* Button);
	void BndEvt___Button__Quit_K2Node_ComponentBoundEvent_2092_FortBaseButtonClicked__DelegateSignature(class UFortBaseButton* Button);
	void BndEvt__ButtonIconText_K2Node_ComponentBoundEvent_2469_FortBaseButtonClicked__DelegateSignature(class UFortBaseButton* Button);
	void OnLeaveClicked();
	void BndEvt__ButtonIconText_K2Node_ComponentBoundEvent_632_FortBaseButtonClicked__DelegateSignature(class UFortBaseButton* Button);
	void ExecuteUbergraph_TopLevelRibbon(int EntryPoint);
	void OnClosed__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
