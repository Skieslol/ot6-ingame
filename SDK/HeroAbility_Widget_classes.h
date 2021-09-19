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

// WidgetBlueprintGeneratedClass HeroAbility_Widget.HeroAbility_Widget_C
// 0x0028 (FullSize[0x01E0] - InheritedSize[0x01B8])
class UHeroAbility_Widget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x01B8(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class UButtonIconText_C*                           _Button__Ability;                                          // 0x01BC(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UItemStackCounter_C*                         _StackCounter__Cost;                                       // 0x01C0(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	bool                                               Is_Active;                                                 // 0x01C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	unsigned char                                      UnknownData_D3VJ[0x3];                                     // 0x01C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UFortAbilityKit*                             Ability_Kit_Data;                                          // 0x01C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	int                                                Cost;                                                      // 0x01CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	int                                                INDEX;                                                     // 0x01D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FScriptMulticastDelegate                    OnAbilitySelected;                                         // 0x01D4(0x0010) ELEMENT_SIZE_MISMATCH (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HeroAbility_Widget.HeroAbility_Widget_C");
		return ptr;
	}



	void On_Ability_Selected(class UFortBaseButton* Ability_Button, bool SELECTED);
	void Update(class UFortAbilityKit* Ability_Kit, int Cost, bool Is_Active);
	class UWidget* Get_Ability_Kit_Tooltip();
	void Construct();
	void ExecuteUbergraph_HeroAbility_Widget(int EntryPoint);
	void OnAbilitySelected__DelegateSignature(int INDEX, bool SELECTED);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
