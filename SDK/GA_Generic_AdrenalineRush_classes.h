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

// BlueprintGeneratedClass GA_Generic_AdrenalineRush.GA_Generic_AdrenalineRush_C
// 0x0134 (FullSize[0x0810] - InheritedSize[0x06DC])
class UGA_Generic_AdrenalineRush_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x06DC(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayEventData                          EventData;                                                 // 0x06E0(0x0058) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AFortPlayerPawn*                             Fort_Player_Pawn;                                          // 0x0738(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTag                                EventActivate;                                             // 0x073C(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FFortGameplayAbilityMontageInfo             Montage_Info;                                              // 0x0744(0x0044) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      AdrenalineRushInsta;                                       // 0x0788(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              HealthPercentInstant;                                      // 0x078C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<class AActor*>                              HitActors;                                                 // 0x0790(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               IsAOE;                                                     // 0x079C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsHOT;                                                     // 0x079D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsPurge;                                                   // 0x079E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_AdrenalineRushAOE_E_AdrenalineRushAOE> AOEValue;                                                  // 0x079F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_AdrenalineRushDuration_E_AdrenalineRushDuration> DurationValue;                                             // 0x07A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ZPX0[0x3];                                     // 0x07A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTag                                TargetRule;                                                // 0x07A4(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              HOTDuration;                                               // 0x07AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTag                                Target_AOE1;                                               // 0x07B0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                Target_AOE2;                                               // 0x07B8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                Target_AOE3;                                               // 0x07C0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayAttribute                          HospitalSubBuilding3;                                      // 0x07C8(0x0004) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              BasicHOTDuration;                                          // 0x07CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              Upgrade1HOTDuration;                                       // 0x07D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              Upgrade2HOTDuration;                                       // 0x07D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              InstaHealthUpgrade1;                                       // 0x07D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              InstaHealthUpgrade2;                                       // 0x07DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              InstaHealthUpgrade3;                                       // 0x07E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UClass*                                      AdrenalineRushHOT;                                         // 0x07E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTagContainer                       TC_GameplayNegative;                                       // 0x07E8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                Upgrade_Level;                                             // 0x0800(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UClass*                                      AdrenalineRushProjectile;                                  // 0x0804(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              InstantHealAmount;                                         // 0x0808(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              HOTHealAmount;                                             // 0x080C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass GA_Generic_AdrenalineRush.GA_Generic_AdrenalineRush_C");
		return ptr;
	}



	void SpawnVisuals();
	void ApplyGadgetEffects(const struct FGameplayAbilityTargetDataHandle& TargetData);
	void SetupVariable_Upgrades();
	void Cancelled_96CD2D2546A5DCD7B7C14BBA26232864(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Targeted_96CD2D2546A5DCD7B7C14BBA26232864(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_Generic_AdrenalineRush(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
