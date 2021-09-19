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

// WidgetBlueprintGeneratedClass ErrorDialogBP.ErrorDialogBP_C
// 0x001C (FullSize[0x0290] - InheritedSize[0x0274])
class UErrorDialogBP_C : public UFortErrorDialog
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0274(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            exit_animation;                                            // 0x0278(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UWidgetAnimation*                            enter_animation;                                           // 0x027C(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UImage*                                      Background_Bar;                                            // 0x0280(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UButtonIconText_C*                           ButtonIconText;                                            // 0x0284(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UTextBlock*                                  HeaderText;                                                // 0x0288(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UVerticalBox*                                MessageList;                                               // 0x028C(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ErrorDialogBP.ErrorDialogBP_C");
		return ptr;
	}



	void KillErrorsDisplayed();
	void OnHandleAction(struct FEventReply* Result, bool* bPassThrough);
	void Deactivate();
	void BindDelegates();
	void Construct();
	void OnRebuildDialog(int NewIndex);
	void PartyContextBasicError(const struct FText& Message, const struct FString& ErrorCode);
	void OnNetworkError(const struct FText& NetworkErrorMessage);
	void BndEvt__ButtonIconText_K2Node_ComponentBoundEvent_264_FortBaseButtonClicked__DelegateSignature(class UFortBaseButton* Button);
	void ExecuteUbergraph_ErrorDialogBP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
