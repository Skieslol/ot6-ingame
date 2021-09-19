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

// WidgetBlueprintGeneratedClass NotificationWindow.NotificationWindow_C
// 0x0081 (FullSize[0x02C5] - InheritedSize[0x0244])
class UNotificationWindow_C : public UFortUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0244(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class UNotificationBox_C*                          NotificationBox;                                           // 0x0248(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UObject*                                     NewNotificationData;                                       // 0x024C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FScriptMulticastDelegate                    OnTimerComplete;                                           // 0x0250(0x0010) ELEMENT_SIZE_MISMATCH (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                              AnimationFinishedDelay;                                    // 0x025C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UObject*                                     FriendNotificationTemp;                                    // 0x0260(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               CurrentlyProcessingNotification;                           // 0x0264(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_Q2DK[0x3];                                     // 0x0265(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FFortDialogDescription                      CurrentNotification;                                       // 0x0268(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	class USoundBase*                                  Sound_Invite_Sent;                                         // 0x02B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundBase*                                  Sound_Invite_Received;                                     // 0x02BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundBase*                                  Sound_Invite_Accepted;                                     // 0x02C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               NewVar_1;                                                  // 0x02C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass NotificationWindow.NotificationWindow_C");
		return ptr;
	}



	void PlayFeedback(TEnumAsByte<FortniteUI_EFortDialogFeedbackType> FeedBackType);
	void TryConsumeNextNotification();
	void FinishHandlingNotification();
	void SetIgnoreButton(struct FText* InText);
	void SetAcceptButton(struct FText* InText);
	void SetMessage(struct FText* InText);
	void SetTitle(struct FText* InText);
	void RegisterNotificationHandler();
	void StartNotification(const struct FFortDialogDescription& NotificationDescription);
	void Construct();
	void BndEvt__NotificationBox_K2Node_ComponentBoundEvent_55_OnConfirmed__DelegateSignature();
	void NextAnimation();
	void BndEvt__NotificationBox_K2Node_ComponentBoundEvent_116_OnMouseEntered__DelegateSignature();
	void BndEvt__NotificationBox_K2Node_ComponentBoundEvent_141_OnMouseLeft__DelegateSignature();
	void BndEvt__NotificationBox_K2Node_ComponentBoundEvent_685_OnIntroComplete__DelegateSignature();
	void BndEvt__NotificationBox_K2Node_ComponentBoundEvent_694_OnOutroComplete__DelegateSignature();
	void HandleNotificationAvailable();
	void Destruct();
	void BndEvt__NotificationBox_K2Node_ComponentBoundEvent_558_OnIgnored__DelegateSignature();
	void ExecuteUbergraph_NotificationWindow(int EntryPoint);
	void OnTimerComplete__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
