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

// WidgetBlueprintGeneratedClass V2_ItemCardFront.V2_ItemCardFront_C
// 0x0031 (FullSize[0x01E9] - InheritedSize[0x01B8])
class UV2_ItemCardFront_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x01B8(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class UScaleBox*                                   Card_ScaleBox;                                             // 0x01BC(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UTextBlock*                                  Item_Textfield;                                            // 0x01C0(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UItem_C*                                     Item_Widget2;                                              // 0x01C4(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UBorder*                                     Mask;                                                      // 0x01C8(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UBorder*                                     NamePlate_Border;                                          // 0x01CC(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UTextBlock*                                  Rarity_Textfield;                                          // 0x01D0(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class USizeBox*                                    StackCounter;                                              // 0x01D4(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UTextBlock*                                  StackCounterText;                                          // 0x01D8(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	struct FCard                                       CardData;                                                  // 0x01DC(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance)
	TEnumAsByte<FortniteGame_EFortRarity>              CurrentRarity;                                             // 0x01E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass V2_ItemCardFront.V2_ItemCardFront_C");
		return ptr;
	}



	class UWidget* Get_CardOverlay_ToolTipWidget_2();
	void Draw_Card();
	void Initialize_Card(const struct FCard& inCard);
	void Construct();
	void OnFortStoreStateChanged(TEnumAsByte<FortniteUI_EFortStoreState> NewStoreState);
	void ExecuteUbergraph_V2_ItemCardFront(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
