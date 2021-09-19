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

// WidgetBlueprintGeneratedClass NewsScreenWidget.NewsScreenWidget_C
// 0x0020 (FullSize[0x0288] - InheritedSize[0x0268])
class UNewsScreenWidget_C : public UFortActionHandlerPanel
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0268(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class UButtonIconText_C*                           ButtonIconText;                                            // 0x026C(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UImage*                                      Image_2;                                                   // 0x0270(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UImage*                                      Image_9729;                                                // 0x0274(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UButtonIconText_C*                           NewsCloseButton;                                           // 0x0278(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UNewsEntry_C*                                NewsEntry;                                                 // 0x027C(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UNewsEntry_C*                                NewsEntry_23;                                              // 0x0280(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UNewsEntry_C*                                NewsEntry_30;                                              // 0x0284(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass NewsScreenWidget.NewsScreenWidget_C");
		return ptr;
	}



	void BndEvt__NewsCloseButton_K2Node_ComponentBoundEvent_44_FortBaseButtonClicked__DelegateSignature(class UFortBaseButton* Button);
	void BndEvt__ButtonIconText_K2Node_ComponentBoundEvent_580_FortBaseButtonClicked__DelegateSignature(class UFortBaseButton* Button);
	void ExecuteUbergraph_NewsScreenWidget(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
