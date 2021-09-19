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

// WidgetBlueprintGeneratedClass Tooltip-CoreStat.Tooltip-CoreStat_C
// 0x02F0 (FullSize[0x04A8] - InheritedSize[0x01B8])
class UTooltip_CoreStat_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x01B8(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                      ImageStatIcon;                                             // 0x01BC(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UImage*                                      ImageStatShadow;                                           // 0x01C0(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UTextBlock*                                  TextStatDesc;                                              // 0x01C4(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UTextBlock*                                  TextStatLabel;                                             // 0x01C8(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UTextBlock*                                  TextStatValue;                                             // 0x01CC(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	struct FHeroCoreStat                               Data;                                                      // 0x01D0(0x02D4) (Edit, BlueprintVisible, ExposeOnSpawn)
	float                                              Value;                                                     // 0x04A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Tooltip-CoreStat.Tooltip-CoreStat_C");
		return ptr;
	}



	void Update(const struct FHeroCoreStat& Data, float Value);
	void Construct();
	void ExecuteUbergraph_Tooltip_CoreStat(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
