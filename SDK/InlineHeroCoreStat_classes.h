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

// WidgetBlueprintGeneratedClass InlineHeroCoreStat.InlineHeroCoreStat_C
// 0x03DC (FullSize[0x0594] - InheritedSize[0x01B8])
class UInlineHeroCoreStat_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x01B8(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                      ImageStatIcon;                                             // 0x01BC(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UImage*                                      ImageStatShadow;                                           // 0x01C0(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UTextBlock*                                  TextStatValue;                                             // 0x01C4(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	struct FHeroCoreStat                               Data;                                                      // 0x01C8(0x02D4) (Edit, BlueprintVisible, ExposeOnSpawn)
	TEnumAsByte<FortniteGame_EFortBrushSize>           Brush_Size;                                                // 0x049C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	unsigned char                                      UnknownData_UDWW[0x3];                                     // 0x049D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Value;                                                     // 0x04A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	struct FFortMultiSizeFont                          Font;                                                      // 0x04A4(0x00F0) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass InlineHeroCoreStat.InlineHeroCoreStat_C");
		return ptr;
	}



	class UWidget* Get_Tooltip_Widget();
	void Update(const struct FHeroCoreStat& Data, float Value, TEnumAsByte<FortniteGame_EFortBrushSize> Brush_Size);
	void Construct();
	void ExecuteUbergraph_InlineHeroCoreStat(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
