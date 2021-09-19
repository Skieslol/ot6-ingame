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

// WidgetBlueprintGeneratedClass HeroTrait_Widget.HeroTrait_Widget_C
// 0x0040 (FullSize[0x01F8] - InheritedSize[0x01B8])
class UHeroTrait_Widget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x01B8(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class UHeroAbility_Widget_C*                       _Ability__1;                                               // 0x01BC(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UHeroAbility_Widget_C*                       _Ability__2;                                               // 0x01C0(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UHeroAbility_Widget_C*                       _Ability__3;                                               // 0x01C4(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UHeroAbility_Widget_C*                       _Ability__4;                                               // 0x01C8(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UHeroAbility_Widget_C*                       _Ability__5;                                               // 0x01CC(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UImage*                                      _Image__Trait_Base;                                        // 0x01D0(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UImage*                                      _Image__Trait_Icon;                                        // 0x01D4(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor)
	class UFortTrait*                                  Trait_Data;                                                // 0x01D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	int                                                Trait_Index;                                               // 0x01DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	TArray<class UHeroAbility_Widget_C*>               Ability_Widgets;                                           // 0x01E0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnRequestSetTraitDepth;                                    // 0x01EC(0x0010) ELEMENT_SIZE_MISMATCH (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HeroTrait_Widget.HeroTrait_Widget_C");
		return ptr;
	}



	void Refresh();
	void On_Ability_Selected(int INDEX, bool SELECTED);
	class UWidget* Get_Primary_Trait_Tooltip();
	void Update(class UFortTrait* Trait, int INDEX);
	void Construct();
	void ExecuteUbergraph_HeroTrait_Widget(int EntryPoint);
	void OnRequestSetTraitDepth__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
