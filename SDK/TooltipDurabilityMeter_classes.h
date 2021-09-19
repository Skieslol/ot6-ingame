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

// WidgetBlueprintGeneratedClass TooltipDurabilityMeter.TooltipDurabilityMeter_C
// 0x000C (FullSize[0x01C4] - InheritedSize[0x01B8])
class UTooltipDurabilityMeter_C : public UUserWidget
{
public:
	class UTextBlock*                                  _Text__DurabilityValue;                                    // 0x01B8(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UVerticalBox*                                _Vertical_Box__Durability;                                 // 0x01BC(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UItemDurabilityMeter_C*                      ItemDurabilityMeter;                                       // 0x01C0(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TooltipDurabilityMeter.TooltipDurabilityMeter_C");
		return ptr;
	}



	void Draw(float Normalized, float Current, float Max);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
