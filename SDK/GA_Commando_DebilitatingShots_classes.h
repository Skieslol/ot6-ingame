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

// BlueprintGeneratedClass GA_Commando_DebilitatingShots.GA_Commando_DebilitatingShots_C
// 0x00E0 (FullSize[0x0820] - InheritedSize[0x0740])
class UGA_Commando_DebilitatingShots_C : public UGAT_CommandoTriggeredAbility_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0740(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                                TC_IsGun;                                                  // 0x0744(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EventActivation;                                           // 0x074C(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      GE_DebilitatingShots;                                      // 0x0754(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTag                                EventComplete;                                             // 0x0758(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EventDirectTrigger;                                        // 0x0760(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                StackCount;                                                // 0x0768(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int                                                DefaultStackCount;                                         // 0x076C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int                                                PerfectEngineeringStack;                                   // 0x0770(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayAbilityTargetDataHandle            TargetData;                                                // 0x0774(0x0014) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_LingeringPain;                                          // 0x0788(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_HackStackBreaker;                                       // 0x07A0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      GE_LingeringPain;                                          // 0x07B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTagContainer                       TC_Kneecapper;                                             // 0x07BC(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              DebuffValue;                                               // 0x07D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              DefaultValue;                                              // 0x07D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              KneecapperValue;                                           // 0x07DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              DebuffDuration;                                            // 0x07E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTagContainer                       TC_ApplyFatigue;                                           // 0x07E4(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      GE_CommandoFatigueInstant;                                 // 0x07FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTagContainer                       TC_IsAfflicted;                                            // 0x0800(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AFortPawn*                                   HitTargetPawn;                                             // 0x0818(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UClass*                                      GE_CommandoFatigueDuration;                                // 0x081C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass GA_Commando_DebilitatingShots.GA_Commando_DebilitatingShots_C");
		return ptr;
	}



	void SetupFatigue(struct FGameplayEffectSpecHandle* EffectspecOutInstant, struct FGameplayEffectSpecHandle* EffectspecOutDuration);
	void SetupAppliedEffect(float Duration, float Magnitude, int Stack_Count, const struct FGameplayEffectSpecHandle& EffectSpecHandle, struct FGameplayEffectSpecHandle* EffectspecHandleOut);
	void SetupGameplayEffect(class AActor* HitActor, const struct FGameplayTag& EventTag, class UObject* OptionalObject, struct FGameplayAbilityTargetDataHandle* Target_Data, class UClass** DebilitatingShots, int* Effect_Level, int* Stack_Count);
	bool K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& Payload);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GA_Commando_DebilitatingShots(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
