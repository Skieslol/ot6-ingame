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

// BlueprintGeneratedClass GA_Commando_FragGrenade.GA_Commando_FragGrenade_C
// 0x01A4 (FullSize[0x0880] - InheritedSize[0x06DC])
class UGA_Commando_FragGrenade_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x06DC(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayEventData                          EventData;                                                 // 0x06E0(0x0058) (Edit, BlueprintVisible, DisableEditOnInstance)
	class APlayerPawn_Commando_C*                      Commando_Pawn;                                             // 0x0738(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTag                                EventActivation;                                           // 0x073C(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EventComplete;                                             // 0x0744(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      Prj_Grenade;                                               // 0x074C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              GrenadeSpeed;                                              // 0x0750(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              Gravity;                                                   // 0x0754(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundBase*                                  GrenadeSound;                                              // 0x0758(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UClass*                                      GE_GrenadeDamage;                                          // 0x075C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTagContainer                       TC_ClusterBombs;                                           // 0x0760(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                MaxClusterGrenades;                                        // 0x0778(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UClass*                                      Prj_Cluster;                                               // 0x077C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              ClusterSpeedMax;                                           // 0x0780(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTagContainer                       TC_BiggerIsBetter;                                         // 0x0784(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EC_DefaultExplosion;                                       // 0x079C(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EC_IncreasedRadius;                                        // 0x07A4(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FFortGameplayEffectContainerSpec            EC_ReturnedEffect;                                         // 0x07AC(0x0064) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              ExplosionRadius;                                           // 0x0810(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTagContainer                       TC_PerfectEngineering;                                     // 0x0814(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EventApplyDebilitatingShots;                               // 0x082C(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              Verticle_Throw;                                            // 0x0834(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              ClusterMinPitch;                                           // 0x0838(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              ClusterMaxPitch;                                           // 0x083C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTag                                EC_ClusterExplosion;                                       // 0x0840(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              ClusterSpeedMin;                                           // 0x0848(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FFortFeedbackHandle                         GrenadeDialogFeedback;                                     // 0x084C(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_KeepOut;                                                // 0x085C(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EC_BurningGround;                                          // 0x0874(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      AOE_KeepOut;                                               // 0x087C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass GA_Commando_FragGrenade.GA_Commando_FragGrenade_C");
		return ptr;
	}



	void KeepOut(const struct FProjectileEventData& Projectile_Data);
	void PerfectEngineering(const struct FProjectileEventData& Projectile_Data);
	void ActivateClusterBombs(const struct FProjectileEventData& Projectile_Data);
	void ThrowGrenade(class UAbilitySystemComponent* AbilitySystemComponent, class UClass** Base_Grenade, struct FVector* Spawn_Location, struct FRotator* Spawn_Rotation, float* Projectile_Speed, float* Projectile_Gravity, struct FFortGameplayEffectContainerSpec* Explosion_Gameplay_Spec);
	void Destroyed_A0715E3447A5D46682E46A89960E35AA(const struct FProjectileEventData& ProjectileData);
	void Exploded_A0715E3447A5D46682E46A89960E35AA(const struct FProjectileEventData& ProjectileData);
	void Stopped_A0715E3447A5D46682E46A89960E35AA(const struct FProjectileEventData& ProjectileData);
	void Bounced_A0715E3447A5D46682E46A89960E35AA(const struct FProjectileEventData& ProjectileData);
	void Touched_A0715E3447A5D46682E46A89960E35AA(const struct FProjectileEventData& ProjectileData);
	void Created_A0715E3447A5D46682E46A89960E35AA(const struct FProjectileEventData& ProjectileData);
	void Completed_DE7AD8FA464F26E37AC20281DAD7839E(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_DE7AD8FA464F26E37AC20281DAD7839E(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_DE7AD8FA464F26E37AC20281DAD7839E(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void OnFinish_978FA3324D06E995EB838282AB600A46();
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_Commando_FragGrenade(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
