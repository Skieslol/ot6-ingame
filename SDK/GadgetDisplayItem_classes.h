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

// WidgetBlueprintGeneratedClass GadgetDisplayItem.GadgetDisplayItem_C
// 0x000C (FullSize[0x01C4] - InheritedSize[0x01B8])
class UGadgetDisplayItem_C : public UUserWidget
{
public:
	class UWidgetSwitcher*                             ContentSwitcher;                                           // 0x01B8(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UImage*                                      Image_233;                                                 // 0x01BC(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UItem_C*                                     Item;                                                      // 0x01C0(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GadgetDisplayItem.GadgetDisplayItem_C");
		return ptr;
	}



	void SetGadgetItemData(class UFortItem* GadgetItem);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
