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

// GameplayAbilityBlueprintGeneratedClass GAB_GenericDeath.GAB_GenericDeath_C
// 0x00B4 (FullSize[0x0790] - InheritedSize[0x06DC])
class UGAB_GenericDeath_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x06DC(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class UAnimMontage*                                DeathMontage;                                              // 0x06E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FName                                       DeathMontageSectionName;                                   // 0x06E4(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                     DeathHitDirection;                                         // 0x06EC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FHitResult                                  DeathHitResult;                                            // 0x06F8(0x0080) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FGameplayTagContainer                       DamageTags;                                                // 0x0778(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("GameplayAbilityBlueprintGeneratedClass GAB_GenericDeath.GAB_GenericDeath_C");
		return ptr;
	}



	void InitializeDeathHitDirection(const struct FGameplayEventData& EventHitData);
	void OnCancelled_CD8A514040DDA2A4EF94DD913E1B01E4();
	void OnInterrupted_CD8A514040DDA2A4EF94DD913E1B01E4();
	void OnComplete_CD8A514040DDA2A4EF94DD913E1B01E4();
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void PickDeathMontageSection();
	void K2_OnEndAbility();
	void ExecuteUbergraph_GAB_GenericDeath(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
