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

// WidgetBlueprintGeneratedClass ItemCooldownMeter.ItemCooldownMeter_C
// 0x0160 (FullSize[0x0318] - InheritedSize[0x01B8])
class UItemCooldownMeter_C : public UUserWidget
{
public:
	class UImage*                                      _Image__Backfill;                                          // 0x01B8(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UImage*                                      _Image__Overfill;                                          // 0x01BC(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class USizeBox*                                    _SizeBox_;                                                 // 0x01C0(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UTextBlock*                                  _Text__Clock;                                              // 0x01C4(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	struct FFortMultiSizeFont                          MultiSizeFont;                                             // 0x01C8(0x00F0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FFortMultiSizeMargin                        MultiSizeMargin;                                           // 0x02B8(0x0060) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ItemCooldownMeter.ItemCooldownMeter_C");
		return ptr;
	}



	int GetSecondsCorrectedMinutes(int Minutes, int Seconds);
	void Set_Cooldown(const struct FTimespan& Time_Left, float Percentage);
	void Update(TEnumAsByte<FortniteGame_EFortBrushSize> Brush_Size, const struct FTimespan& Time_Left, float Percentage);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
