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

// BlueprintGeneratedClass GA_ReflectDamage_WithSource.GA_ReflectDamage_WithSource_C
// 0x0024 (FullSize[0x0700] - InheritedSize[0x06DC])
class UGA_ReflectDamage_WithSource_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x06DC(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                                ReflectedTag;                                              // 0x06E0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      DamageGE;                                                  // 0x06E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UAbilitySystemComponent*                     OriginalDamageInstigator;                                  // 0x06EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UAbilitySystemComponent*                     OriginalDamageTarget;                                      // 0x06F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class ABuildingGameplayActor*                      Base;                                                      // 0x06F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTag                                RequestReflectionTag;                                      // 0x06F8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass GA_ReflectDamage_WithSource.GA_ReflectDamage_WithSource_C");
		return ptr;
	}



	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GA_ReflectDamage_WithSource(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
