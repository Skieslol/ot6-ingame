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

// WidgetBlueprintGeneratedClass HeroCoreAbility_Widget.HeroCoreAbility_Widget_C
// 0x0014 (FullSize[0x01CC] - InheritedSize[0x01B8])
class UHeroCoreAbility_Widget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x01B8(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                      _Image__Frame;                                             // 0x01BC(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UImage*                                      _Image__Icon;                                              // 0x01C0(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	bool                                               Is_Unlocked;                                               // 0x01C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	unsigned char                                      UnknownData_QC2K[0x3];                                     // 0x01C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UFortAbilityKit*                             Ability_Kit_Data;                                          // 0x01C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HeroCoreAbility_Widget.HeroCoreAbility_Widget_C");
		return ptr;
	}



	void Invalid_Data();
	void Update(class UFortAbilityKit* Ability_Kit, bool Is_Unlocked);
	class UWidget* Get_Ability_Kit_Tooltip();
	void Construct();
	void ExecuteUbergraph_HeroCoreAbility_Widget(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
