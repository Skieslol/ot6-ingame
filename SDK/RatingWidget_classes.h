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

// WidgetBlueprintGeneratedClass RatingWidget.RatingWidget_C
// 0x0B08 (FullSize[0x1244] - InheritedSize[0x073C])
class URatingWidget_C : public UFortBaseButton
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x073C(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                      _Image__RatingIcon;                                        // 0x0740(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class USizeBox*                                    _SizeBox_;                                                 // 0x0744(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UTextBlock*                                  _Text__RatingValue;                                        // 0x0748(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UHorizontalBox*                              HorizontalBox;                                             // 0x074C(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	int                                                RatingValue;                                               // 0x0750(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	struct FFortMultiSizeBrush                         Icon_Sum;                                                  // 0x0754(0x02B8) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FFortMultiSizeBrush                         Icon_Team;                                                 // 0x0A0C(0x02B8) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FFortMultiSizeBrush                         Icon_Default;                                              // 0x0CC4(0x02B8) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FFortMultiSizeBrush                         Icon;                                                      // 0x0F7C(0x02B8) (Edit, BlueprintVisible, DisableEditOnInstance)
	TEnumAsByte<RatingDisplayStyle_ERatingDisplayStyle> Display_Style;                                             // 0x1234(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	unsigned char                                      UnknownData_169F[0x3];                                     // 0x1235(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UFortButtonStyle*                            Style_Sum;                                                 // 0x1238(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UFortButtonStyle*                            Style_Team;                                                // 0x123C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UFortButtonStyle*                            Style_Default;                                             // 0x1240(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass RatingWidget.RatingWidget_C");
		return ptr;
	}



	void Redraw();
	void Set_Display_Style(TEnumAsByte<RatingDisplayStyle_ERatingDisplayStyle> New_Style);
	void Set_Padding();
	void Set_Size_Box(class USizeBox* Size_Box);
	void Set_Icon(const struct FFortMultiSizeBrush& Icon_Brush);
	void Set_Rating_Value(int Rating);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_RatingWidget(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
