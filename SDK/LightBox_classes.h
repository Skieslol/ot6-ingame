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

// WidgetBlueprintGeneratedClass LightBox.LightBox_C
// 0x0024 (FullSize[0x0268] - InheritedSize[0x0244])
class ULightBox_C : public UFortUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0244(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            Fade_Out;                                                  // 0x0248(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UWidgetAnimation*                            Fade_In;                                                   // 0x024C(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UNamedSlot*                                  _Slot_CenterContent;                                       // 0x0250(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	bool                                               DestroyContentPostFadeOut;                                 // 0x0254(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_EQ9O[0x3];                                     // 0x0255(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UFortActionHandlerPanel*                     ContainedActionHandlerPanel;                               // 0x0258(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FScriptMulticastDelegate                    CenterContentCleared;                                      // 0x025C(0x0010) ELEMENT_SIZE_MISMATCH (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LightBox.LightBox_C");
		return ptr;
	}



	void OnPanelActivated();
	void EstablishContainedPanel(class UFortActionHandlerPanel* New_Panel);
	void AddActivePanelContent(class UFortActionHandlerPanel* ActionHandlerPanel, TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontal_Alignment, TEnumAsByte<SlateCore_EVerticalAlignment> InVertical_Alignment);
	void OnPanelDeactivated();
	void Construct();
	void Destruct();
	void OnFadeOutComplete();
	void ExecuteUbergraph_LightBox(int EntryPoint);
	void CenterContentCleared__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
