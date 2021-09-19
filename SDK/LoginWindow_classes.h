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

// WidgetBlueprintGeneratedClass LoginWindow.LoginWindow_C
// 0x0060 (FullSize[0x02CC] - InheritedSize[0x026C])
class ULoginWindow_C : public UFortLoginWindow
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x026C(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            TestAnimation;                                             // 0x0270(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UBasicStrokeBox_C*                           BasicStrokeBox;                                            // 0x0274(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UTextBlock*                                  BuildWatermark;                                            // 0x0278(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UEditableText*                               Email;                                                     // 0x027C(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UCanvasPanel*                                ErrorPanel;                                                // 0x0280(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UImage*                                      hr;                                                        // 0x0284(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UButtonIconText_C*                           Login_Button;                                              // 0x0288(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UWidgetSwitcher*                             Login_State_View_Switcher;                                 // 0x028C(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UTextBlock*                                  LoginResultText;                                           // 0x0290(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UTextBlock*                                  LoginStatusText;                                           // 0x0294(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UImage*                                      Logo;                                                      // 0x0298(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UEditableText*                               Password;                                                  // 0x029C(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UCheckBox*                                   RememberCheckbox;                                          // 0x02A0(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UTextBlock*                                  RememberLabel;                                             // 0x02A4(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UVersionInfo_C*                              VersionInfo;                                               // 0x02A8(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	bool                                               CanLogin;                                                  // 0x02AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_17PL[0x3];                                     // 0x02AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundBase*                                  Sound_Login_Error;                                         // 0x02B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundBase*                                  Sound_Login_Click;                                         // 0x02B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundBase*                                  Sound_Logging_In;                                          // 0x02B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundBase*                                  Sound_Login_Success;                                       // 0x02BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<struct FText>                               StatusUpdates;                                             // 0x02C0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LoginWindow.LoginWindow_C");
		return ptr;
	}



	void RunInitialBenchmark();
	void Update_Watermark();
	void SetEditingFocus();
	void Show_Login_Result_Error(const struct FText& In_Text);
	void Set_Login_Permission(bool Login_Enabled);
	void Check_Login_Permission();
	void RequestLogin();
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void OnTimedOut_D5FE647942DB4B7E21D74DBFFFE496C7();
	void OnDeclined_D5FE647942DB4B7E21D74DBFFFE496C7();
	void OnConfirmed_D5FE647942DB4B7E21D74DBFFFE496C7();
	void Construct();
	void OnLoginStatusChanged(TEnumAsByte<FortniteUI_EUILoginStatus> NewStatus, const struct FText& InMessage);
	void BndEvt__Password_K2Node_ComponentBoundEvent_13_OnEditableTextCommittedEvent__DelegateSignature(const struct FText& TEXT, TEnumAsByte<SlateCore_ETextCommit> CommitMethod);
	void BndEvt__Email_K2Node_ComponentBoundEvent_36_OnEditableTextCommittedEvent__DelegateSignature(const struct FText& TEXT, TEnumAsByte<SlateCore_ETextCommit> CommitMethod);
	void BndEvt__Email_K2Node_ComponentBoundEvent_54_OnEditableTextChangedEvent__DelegateSignature(const struct FText& TEXT);
	void BndEvt__Password_K2Node_ComponentBoundEvent_60_OnEditableTextChangedEvent__DelegateSignature(const struct FText& TEXT);
	void OnQueryFortBackendVersionComplete(const struct FFortBackendVersion& FortBackendVersion);
	void BndEvt__Login_Button_K2Node_ComponentBoundEvent_437_FortBaseButtonClicked__DelegateSignature(class UFortBaseButton* Button);
	void ExecuteUbergraph_LoginWindow(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
