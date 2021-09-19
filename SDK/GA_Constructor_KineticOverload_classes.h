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

// BlueprintGeneratedClass GA_Constructor_KineticOverload.GA_Constructor_KineticOverload_C
// 0x0130 (FullSize[0x0870] - InheritedSize[0x0740])
class UGA_Constructor_KineticOverload_C : public UGAT_ConstructorTriggeredAbility_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0740(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                                EventActivation;                                           // 0x0744(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EventComplete;                                             // 0x074C(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      GE_KineticDamage;                                          // 0x0754(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FHitResult                                  HitActor;                                                  // 0x0758(0x0080) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FGameplayTagContainer                       TC_BeatDown;                                               // 0x07D8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      GE_BeatDown;                                               // 0x07F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTagContainer                       TC_KineticOverdrive;                                       // 0x07F4(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               KineticOverdrive;                                          // 0x080C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_S58K[0x3];                                     // 0x080D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     MainTargetLocation;                                        // 0x0810(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayAbilityTargetDataHandle            AOETargets;                                                // 0x081C(0x0014) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EC_AoeTarget;                                              // 0x0830(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_NiceAndSlow;                                            // 0x0838(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      GE_NiceAndSlowDamage;                                      // 0x0850(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTagContainer                       TC_BluntDamage;                                            // 0x0854(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AActor*                                      PrimaryTarget;                                             // 0x086C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass GA_Constructor_KineticOverload.GA_Constructor_KineticOverload_C");
		return ptr;
	}



	struct FTransform GetCustomAbilitySourceTransform();
	void HitTarget();
	bool K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& Payload);
	void Cancelled_AEF31BFB4F9F700D450DB3A243436FC5(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Targeted_AEF31BFB4F9F700D450DB3A243436FC5(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void AbilityTimeout();
	void ExecuteUbergraph_GA_Constructor_KineticOverload(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
