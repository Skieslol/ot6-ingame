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

// WidgetBlueprintGeneratedClass TooltipStatWrapper.TooltipStatWrapper_C
// 0x0039 (FullSize[0x01F1] - InheritedSize[0x01B8])
class UTooltipStatWrapper_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x01B8(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                              Container_HBox;                                            // 0x01BC(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UImage*                                      PreviewHighlight_Image;                                    // 0x01C0(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UTooltipStatWidget_C*                        Stat_Widget;                                               // 0x01C4(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UBorder*                                     Upgrade_Border;                                            // 0x01C8(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UImage*                                      Upgrade_Image;                                             // 0x01CC(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	bool                                               ShowAsPreview;                                             // 0x01D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	unsigned char                                      UnknownData_BZ1N[0x3];                                     // 0x01D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTooltipStat                                inTooltipData;                                             // 0x01D4(0x001C) (Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                               inHoverEnabled;                                            // 0x01F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TooltipStatWrapper.TooltipStatWrapper_C");
		return ptr;
	}



	void ShowUpgradeArrow(TEnumAsByte<UMG_ESlateVisibility> InVisibility);
	void Construct();
	void ExecuteUbergraph_TooltipStatWrapper(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
