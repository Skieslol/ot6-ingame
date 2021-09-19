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

// WidgetBlueprintGeneratedClass ItemDurabilityMeter.ItemDurabilityMeter_C
// 0x0028 (FullSize[0x01E0] - InheritedSize[0x01B8])
class UItemDurabilityMeter_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x01B8(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                      _Image__Backfill;                                          // 0x01BC(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UImage*                                      _Image__Overfill;                                          // 0x01C0(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class USizeBox*                                    Size_Box;                                                  // 0x01C4(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	float                                              DefaultPadding;                                            // 0x01C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              MinimumFillHeight;                                         // 0x01CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Backfill_Color;                                            // 0x01D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ItemDurabilityMeter.ItemDurabilityMeter_C");
		return ptr;
	}



	void Set_Backfill_Color(const struct FLinearColor& Backfill_Color);
	void Set_Durability(float Durability);
	void Update(const struct FVector2D& Draw_Size, float Durability);
	void Construct();
	void ExecuteUbergraph_ItemDurabilityMeter(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
