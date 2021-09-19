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

// WidgetBlueprintGeneratedClass GadgetSelectTile.GadgetSelectTile_C
// 0x0008 (FullSize[0x0254] - InheritedSize[0x024C])
class UGadgetSelectTile_C : public UFortGridPickerTile
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x024C(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class UItem_C*                                     Item;                                                      // 0x0250(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GadgetSelectTile.GadgetSelectTile_C");
		return ptr;
	}



	void SetData(class UObject* InData);
	void BndEvt__Item_K2Node_ComponentBoundEvent_357_FortBaseButtonClicked__DelegateSignature(class UFortBaseButton* Button);
	void ExecuteUbergraph_GadgetSelectTile(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
