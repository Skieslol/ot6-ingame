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

// WidgetBlueprintGeneratedClass Tooltip-Basic-S.Tooltip-Basic-S_C
// 0x0040 (FullSize[0x01F8] - InheritedSize[0x01B8])
class UTooltip_Basic_S_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x01B8(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                      _hr_;                                                      // 0x01BC(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UHorizontalBox*                              Body_HBox;                                                 // 0x01C0(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UHorizontalBox*                              Header_HBox;                                               // 0x01C4(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UImage*                                      Icon_Header;                                               // 0x01C8(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class USpacer*                                     Spacer_Header;                                             // 0x01CC(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class USpacer*                                     Spacer_Icon;                                               // 0x01D0(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UTextBlock*                                  Text_Body;                                                 // 0x01D4(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UTextBlock*                                  Text_Header;                                               // 0x01D8(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	struct FText                                       BodyText;                                                  // 0x01DC(0x0018) ELEMENT_SIZE_MISMATCH (Edit, BlueprintVisible, ExposeOnSpawn)
	struct FText                                       HeaderText;                                                // 0x01E8(0x0018) ELEMENT_SIZE_MISMATCH (Edit, BlueprintVisible, ExposeOnSpawn)
	class USlateBrushAsset*                            Icon_Brush;                                                // 0x01F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Tooltip-Basic-S.Tooltip-Basic-S_C");
		return ptr;
	}



	struct FSlateBrush Get_Icon_Brush();
	struct FText Get_Header_Text();
	struct FText Get_Body_Text();
	void Construct();
	void ExecuteUbergraph_Tooltip_Basic_S(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
