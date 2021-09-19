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

// WidgetBlueprintGeneratedClass GadgetSelectButton.GadgetSelectButton_C
// 0x0039 (FullSize[0x01F1] - InheritedSize[0x01B8])
class UGadgetSelectButton_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x01B8(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class USizeBox*                                    Box;                                                       // 0x01BC(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UWidgetSwitcher*                             Content_Switcher;                                          // 0x01C0(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UImage*                                      EmptySlot;                                                 // 0x01C4(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UItem_C*                                     Item;                                                      // 0x01C8(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UImage*                                      Locked;                                                    // 0x01CC(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UFortGridPickerButton*                       Picker;                                                    // 0x01D0(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	struct FScriptMulticastDelegate                    GadgetSelected;                                            // 0x01D4(0x0010) ELEMENT_SIZE_MISMATCH (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UFortWorldItem*                              Gadget;                                                    // 0x01E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<class UFortWorldItem*>                      AvailableGadgets;                                          // 0x01E4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               Constructed;                                               // 0x01F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GadgetSelectButton.GadgetSelectButton_C");
		return ptr;
	}



	struct FEventReply On_EmptySlot_MouseButtonDown_1(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent);
	struct FEventReply On_Locked_MouseButtonDown_1(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent);
	class UWidget* Get_EmptySlot_ToolTipWidget_1();
	class UWidget* Get_Locked_ToolTipWidget_1();
	void InternalInit();
	void Init(class UFortWorldItem* Gadget, TArray<class UFortWorldItem*>* AvailableGadgets);
	void Construct();
	void BndEvt__Picker_K2Node_ComponentBoundEvent_30_GridPickerTileEvent__DelegateSignature(class UObject* Data, class UFortGridPickerTile* Tile);
	void BndEvt__Item_K2Node_ComponentBoundEvent_56_FortBaseButtonClicked__DelegateSignature(class UFortBaseButton* Button);
	void ExecuteUbergraph_GadgetSelectButton(int EntryPoint);
	void GadgetSelected__DelegateSignature(class UFortWorldItem* Gadget);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
