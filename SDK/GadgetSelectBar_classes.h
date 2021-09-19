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

// WidgetBlueprintGeneratedClass GadgetSelectBar.GadgetSelectBar_C
// 0x0028 (FullSize[0x026C] - InheritedSize[0x0244])
class UGadgetSelectBar_C : public UFortUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0244(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                     Border;                                                    // 0x0248(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UGadgetSelectButton_C*                       GadgetItem1;                                               // 0x024C(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UGadgetSelectButton_C*                       GadgetItem2;                                               // 0x0250(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	TArray<class UFortWorldItem*>                      GadgetList;                                                // 0x0254(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UFortWorldItem*>                      SlottedGadgets;                                            // 0x0260(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GadgetSelectBar.GadgetSelectBar_C");
		return ptr;
	}



	void SetShown(bool bShown);
	void BindDelegates();
	void SelectGadget(class UFortWorldItem* Item, int Slot);
	void InitGadget(class UGadgetSelectButton_C* Item_Widget, int Slot_Index);
	void InitBar();
	void Init();
	void Construct();
	void BndEvt__GadgetItem2_K2Node_ComponentBoundEvent_957_GadgetSelected__DelegateSignature(class UFortWorldItem* Gadget);
	void BndEvt__GadgetItem1_K2Node_ComponentBoundEvent_960_GadgetSelected__DelegateSignature(class UFortWorldItem* Gadget);
	void HandleAccountInfoChanged(const struct FFortPrivateAccountInfo& NewInfo);
	void HandleLobbyStarted();
	void HandleHomebaseInventoryUpdated();
	void ExecuteUbergraph_GadgetSelectBar(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
