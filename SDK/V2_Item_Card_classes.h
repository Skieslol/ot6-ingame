﻿#pragma once

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

// WidgetBlueprintGeneratedClass V2_Item_Card.V2_Item_Card_C
// 0x0046 (FullSize[0x01FE] - InheritedSize[0x01B8])
class UV2_Item_Card_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x01B8(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            Scale;                                                     // 0x01BC(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UWidgetAnimation*                            FlyUp;                                                     // 0x01C0(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UWidgetAnimation*                            FlyUpand_Down;                                             // 0x01C4(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UWidgetAnimation*                            Flydown;                                                   // 0x01C8(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UWidgetAnimation*                            Reset;                                                     // 0x01CC(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UTextBlock*                                  Bonus_Text;                                                // 0x01D0(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UImage*                                      Card;                                                      // 0x01D4(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UScaleBox*                                   Card_ScaleBox;                                             // 0x01D8(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UImage*                                      Foil_Image;                                                // 0x01DC(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UImage*                                      Image_253;                                                 // 0x01E0(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class USizeBox*                                    StackCounter;                                              // 0x01E4(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UTextBlock*                                  StackCounterText;                                          // 0x01E8(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UV2_ItemCardFront_C*                         V2_ItemCardFront;                                          // 0x01EC(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	struct FCard                                       CardData;                                                  // 0x01F0(0x000C) (Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                               bIsOn3DCard;                                               // 0x01FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bIsFront;                                                  // 0x01FD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass V2_Item_Card.V2_Item_Card_C");
		return ptr;
	}



	void Draw_Card();
	class UWidget* Get_CardOverlay_ToolTipWidget_2();
	void ShowCardBack();
	void ShowCardFront();
	void Initialize_Card(const struct FCard& inCard, bool isOn3DCard, bool isFront);
	void Construct();
	void OnFortStoreStateChanged(TEnumAsByte<FortniteUI_EFortStoreState> NewStoreState);
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void ExecuteUbergraph_V2_Item_Card(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
