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

// WidgetBlueprintGeneratedClass ButtonIconText.ButtonIconText_C
// 0x00AC (FullSize[0x07E8] - InheritedSize[0x073C])
class UButtonIconText_C : public UFortBaseButton
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x073C(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                              ContentHBox;                                               // 0x0740(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UImage*                                      Icon;                                                      // 0x0744(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UOverlay*                                    IconOverlay;                                               // 0x0748(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UImage*                                      Shadow;                                                    // 0x074C(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class USizeBox*                                    SizeBox;                                                   // 0x0750(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UTextBlock*                                  TextBlock;                                                 // 0x0754(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	struct FText                                       DisplayText;                                               // 0x0758(0x0018) ELEMENT_SIZE_MISMATCH (Edit, BlueprintVisible, Config, ExposeOnSpawn)
	struct FSlateBrush                                 IconBrush;                                                 // 0x0764(0x0074) (Edit, BlueprintVisible, Config, ExposeOnSpawn)
	bool                                               HasIcon;                                                   // 0x07D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               HasText;                                                   // 0x07D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TEnumAsByte<Slate_ETextJustify>                    Content_Align;                                             // 0x07DA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_8A0N[0x1];                                     // 0x07DB(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    On_Mouse_Hovered_Changed;                                  // 0x07DC(0x0010) ELEMENT_SIZE_MISMATCH (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ButtonIconText.ButtonIconText_C");
		return ptr;
	}



	void Set_Alignment(TEnumAsByte<Slate_ETextJustify> Align);
	void Update_Size_Box();
	struct FSlateColor Get_Primary_Color();
	struct FLinearColor Get_Secondary_Color();
	void Update_Padding();
	void Set_Icon(const struct FSlateBrush& InBrush, bool RefreshPadding);
	void Set_Text(const struct FText& InText, bool RefreshPadding);
	void PreConstruct(bool IsDesignTime);
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void ExecuteUbergraph_ButtonIconText(int EntryPoint);
	void On_Mouse_Hovered_Changed__DelegateSignature(bool Is_Hovered);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
