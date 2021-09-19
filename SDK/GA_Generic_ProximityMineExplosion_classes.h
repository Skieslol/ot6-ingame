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

// BlueprintGeneratedClass GA_Generic_ProximityMineExplosion.GA_Generic_ProximityMineExplosion_C
// 0x000C (FullSize[0x06E8] - InheritedSize[0x06DC])
class UGA_Generic_ProximityMineExplosion_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x06DC(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                                EC_Explosion;                                              // 0x06E0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass GA_Generic_ProximityMineExplosion.GA_Generic_ProximityMineExplosion_C");
		return ptr;
	}



	void Cancelled_8BEAB59F4207CD7783898D81D6492C18(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Targeted_8BEAB59F4207CD7783898D81D6492C18(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GA_Generic_ProximityMineExplosion(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
