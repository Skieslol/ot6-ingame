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

// WidgetBlueprintGeneratedClass UIManager.UIManager_C
// 0x0044 (FullSize[0x0394] - InheritedSize[0x0350])
class UUIManager_C : public UFortUIManagerWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0350(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class ULightBox_C*                                 _LightBox__Modal;                                          // 0x0354(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UButton*                                     CancelCurrencyStore_Button;                                // 0x0358(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UConfirmationWindow_C*                       ConfirmationWindow;                                        // 0x035C(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UErrorDialogBP_C*                            Error_Dialog;                                              // 0x0360(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UImage*                                      Image_584;                                                 // 0x0364(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UNotificationWindow_C*                       NotificationWindow;                                        // 0x0368(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UPopupFrame_C*                               PopupFrame;                                                // 0x036C(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UNamedSlot*                                  State_Content_Layer;                                       // 0x0370(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UCircularThrobber*                           Throbber;                                                  // 0x0374(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UTutorialOverlay_C*                          TutorialOverlay;                                           // 0x0378(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UNamedSlot*                                  Web_Layer;                                                 // 0x037C(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UBorder*                                     WebContent;                                                // 0x0380(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UFortActionHandlerPanel*                     ModalWidget;                                               // 0x0384(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<struct FModalQueueEntry>                    ModalQueue;                                                // 0x0388(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UIManager.UIManager_C");
		return ptr;
	}



	void HandleModalContentCleared();
	bool IsStateContentChildShowing();
	void DismissPurchaseWidget();
	void DisplayPurchaseWidget(class UWidget* Web_Widget, const struct FString& OfferId);
	void BindDelegates();
	void ShowNextModalWidget();
	void QueueActionPanelInModalLayer(class UFortActionHandlerPanel* InActionHandlerPanel, TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment, TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment);
	void ClearModalLayer();
	void ClearLayers();
	void ShowActionPanelInModalLayer(class UFortActionHandlerPanel* InActionHandlerPanel, TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment, TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment);
	void DisplayOKButtonConfirmation(struct FText* Header, struct FText* Message);
	void Construct();
	void KillConfirmation();
	void UpdateStateWidgetContent(class UFortUIStateWidget* StateWidget);
	void OnShowConfirmation(const struct FFortDialogDescription& Description);
	void DisplayStateContent(bool bDisplay);
	void OnStateStarted();
	void Destruct();
	void BndEvt__CancelCurrencyStore_Button_K2Node_ComponentBoundEvent_489_OnButtonClickedEvent__DelegateSignature();
	void DisplayErrorDialog(const struct FFortErrorInfo& Info);
	void ExecuteUbergraph_UIManager(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
