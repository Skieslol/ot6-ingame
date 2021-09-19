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

// BlueprintGeneratedClass GA_Commando_Shockwave.GA_Commando_Shockwave_C
// 0x0121 (FullSize[0x07FD] - InheritedSize[0x06DC])
class UGA_Commando_Shockwave_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x06DC(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayEventData                          EventData;                                                 // 0x06E0(0x0058) (Edit, BlueprintVisible, DisableEditOnInstance)
	class APlayerPawn_Commando_C*                      Commando_Pawn;                                             // 0x0738(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTag                                Event_Activation;                                          // 0x073C(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                Event_Complete;                                            // 0x0744(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UAnimMontage*                                M_ShockwaveAnim;                                           // 0x074C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTag                                EC_AppliedEffect;                                          // 0x0750(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_ShouldKnockback;                                        // 0x0758(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EC_BasicRadius;                                            // 0x0770(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EC_UpgradeRadius;                                          // 0x0778(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_ApplyVulnerability;                                     // 0x0780(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               ShouldApplyVulnerability;                                  // 0x0798(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_S7FK[0x3];                                     // 0x0799(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      GE_ShockwaveVulnerability;                                 // 0x079C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              VulnerableDuration;                                        // 0x07A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              VulnerableAmount;                                          // 0x07A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayEffectSpecHandle                   VulnerabilitySpec;                                         // 0x07A8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_PerfectEngineering;                                     // 0x07B4(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              Perfect_Engineering_Upgrade;                               // 0x07CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTagContainer                       TC_ShockAndAwe;                                            // 0x07D0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayEffectSpecHandle                   Slow_Spec;                                                 // 0x07E8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              Slow_Duration;                                             // 0x07F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UClass*                                      GE_ShockwaveSlow;                                          // 0x07F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ShouldSlow;                                                // 0x07FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass GA_Commando_Shockwave.GA_Commando_Shockwave_C");
		return ptr;
	}



	void SetupVariables();
	void Completed_60F6207840ECA0EA5707139982AC6691(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_60F6207840ECA0EA5707139982AC6691(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_60F6207840ECA0EA5707139982AC6691(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_F7C7341E49C6B93C7D967988C9C4848C(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Targeted_F7C7341E49C6B93C7D967988C9C4848C(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_Commando_Shockwave(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
