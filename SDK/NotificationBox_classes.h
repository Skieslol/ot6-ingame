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

// WidgetBlueprintGeneratedClass NotificationBox.NotificationBox_C
// 0x0074 (FullSize[0x022C] - InheritedSize[0x01B8])
class UNotificationBox_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x01B8(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            _Anim__Outro;                                              // 0x01BC(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UWidgetAnimation*                            _Anim__Intro;                                              // 0x01C0(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UImage*                                      _Image__Icon;                                              // 0x01C4(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class USizeBox*                                    _Size_Box__Icon;                                           // 0x01C8(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UTextBlock*                                  _Text__Message;                                            // 0x01CC(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UTextBlock*                                  _Text__Title;                                              // 0x01D0(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UBorder*                                     Border;                                                    // 0x01D4(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UButtonIconText_C*                           Button_1;                                                  // 0x01D8(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UButtonIconText_C*                           Button_2;                                                  // 0x01DC(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UHorizontalBox*                              HorizontalBox;                                             // 0x01E0(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	struct FScriptMulticastDelegate                    OnConfirmed;                                               // 0x01E4(0x0010) ELEMENT_SIZE_MISMATCH (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnIgnored;                                                 // 0x01F0(0x0010) ELEMENT_SIZE_MISMATCH (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnMouseEntered;                                            // 0x01FC(0x0010) ELEMENT_SIZE_MISMATCH (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnMouseLeft;                                               // 0x0208(0x0010) ELEMENT_SIZE_MISMATCH (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnIntroComplete;                                           // 0x0214(0x0010) ELEMENT_SIZE_MISMATCH (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnOutroComplete;                                           // 0x0220(0x0010) ELEMENT_SIZE_MISMATCH (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass NotificationBox.NotificationBox_C");
		return ptr;
	}



	void HideMessage();
	void HideTitle();
	void ShowTitle(const struct FText& Title);
	void SetIcon(const struct FSlateBrush& Icon_Brush);
	void SetTitle(const struct FText& Title);
	void Outro();
	void Intro();
	void HideIgnoreButton();
	void HideAcceptButton();
	void ShowIgnoreButton(const struct FText& ButtonName);
	void ShowAcceptButton(const struct FText& ButtonName);
	void ShowMessage(const struct FText& Message);
	void Construct();
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void BndEvt__Button_1_K2Node_ComponentBoundEvent_490_FortBaseButtonClicked__DelegateSignature(class UFortBaseButton* Button);
	void BndEvt__Button_2_K2Node_ComponentBoundEvent_501_FortBaseButtonClicked__DelegateSignature(class UFortBaseButton* Button);
	void HandleIntroComplete();
	void HandleOutroComplete();
	void ExecuteUbergraph_NotificationBox(int EntryPoint);
	void OnOutroComplete__DelegateSignature();
	void OnIntroComplete__DelegateSignature();
	void OnMouseLeft__DelegateSignature();
	void OnMouseEntered__DelegateSignature();
	void OnIgnored__DelegateSignature();
	void OnConfirmed__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
