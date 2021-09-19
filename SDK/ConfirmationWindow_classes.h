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

// WidgetBlueprintGeneratedClass ConfirmationWindow.ConfirmationWindow_C
// 0x001D (FullSize[0x02D5] - InheritedSize[0x02B8])
class UConfirmationWindow_C : public UFortConfirmationWindow
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02B8(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                                AdditionalContentBox;                                      // 0x02BC(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UHorizontalBox*                              Button_Area;                                               // 0x02C0(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UButtonIconText_C*                           Button_Confirm;                                            // 0x02C4(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UButtonIconText_C*                           Button_Decline;                                            // 0x02C8(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UTextBlock*                                  HeaderText;                                                // 0x02CC(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UTextBlock*                                  MessageText;                                               // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	unsigned char                                      ConfirmationType;                                          // 0x02D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ConfirmationWindow.ConfirmationWindow_C");
		return ptr;
	}



	void OnHandleAction(struct FEventReply* Result, bool* bPassThrough);
	void HandleTimedOut();
	void UpdateTimer(float Display_Time);
	void UpdateButton(class UButtonIconText_C* Button, const struct FText& TEXT);
	void OnShow();
	void OnKill();
	void BndEvt__Button_Confirm_K2Node_ComponentBoundEvent_940_FortBaseButtonClicked__DelegateSignature(class UFortBaseButton* Button);
	void BndEvt__Button_Decline_K2Node_ComponentBoundEvent_951_FortBaseButtonClicked__DelegateSignature(class UFortBaseButton* Button);
	void ExecuteUbergraph_ConfirmationWindow(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
