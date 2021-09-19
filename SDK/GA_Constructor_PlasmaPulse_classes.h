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

// BlueprintGeneratedClass GA_Constructor_PlasmaPulse.GA_Constructor_PlasmaPulse_C
// 0x0144 (FullSize[0x0820] - InheritedSize[0x06DC])
class UGA_Constructor_PlasmaPulse_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x06DC(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              Overdrive_Duration;                                        // 0x06E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              Default_Duration;                                          // 0x06E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              Pulse_Duration;                                            // 0x06E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayEventData                          EventData;                                                 // 0x06EC(0x0058) (Edit, BlueprintVisible, DisableEditOnInstance)
	class APlayerPawn_Constructor_C*                   ConstructorPawn;                                           // 0x0744(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTagContainer                       TC_PowerPulse;                                             // 0x0748(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      Prj_PlasmaPulse;                                           // 0x0760(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              PlasmaSpeed;                                               // 0x0764(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              PlasmaGravity;                                             // 0x0768(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTag                                EventActivation;                                           // 0x076C(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EventComplete;                                             // 0x0774(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class USoundBase*                                  MiniPulseCue;                                              // 0x077C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UClass*                                      Prj_MiniPulse;                                             // 0x0780(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                     Rotation_Direction;                                        // 0x0784(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              MiniPulseSpeed;                                            // 0x0790(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              MiniPulseGravity;                                          // 0x0794(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTag                                EC_PlasmaPulse;                                            // 0x0798(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EC_MiniPulse;                                              // 0x07A0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UAnimMontage*                                M_ThrowDown;                                               // 0x07A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              MinSpawnFloat;                                             // 0x07AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              MaxSpawnFloat;                                             // 0x07B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              SpeedMultiplier;                                           // 0x07B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              DefaultMinSpawn;                                           // 0x07B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              DefaultMaxSpawn;                                           // 0x07BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTagContainer                       TC_IFFCoding;                                              // 0x07C0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               IFFCoding;                                                 // 0x07D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_7YZ8[0x3];                                     // 0x07D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      GE_IFFCoding;                                              // 0x07DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTagContainer                       TC_PlasmaOverdrive;                                        // 0x07E0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              PlasmaOverdriveSpeedMult;                                  // 0x07F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTagContainer                       TC_BiometricResonence;                                     // 0x07FC(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               BiometricResonence;                                        // 0x0814(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_076P[0x3];                                     // 0x0815(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      GE_BiometricResonence;                                     // 0x0818(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              IFFCodePercent;                                            // 0x081C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass GA_Constructor_PlasmaPulse.GA_Constructor_PlasmaPulse_C");
		return ptr;
	}



	void DarkHackyMath(float* SetByCallerValue);
	void SpawnMiniPulses(const struct FVector& HitLocation, const struct FFortGameplayEffectContainerSpec& EffectContainerSpec, class AActor* ParentPulse);
	void SetupPlasmaPulse(class UAbilitySystemComponent* Ability_System_Component, struct FVector* Spawn_Location, struct FRotator* Spawn_Rotation, struct FFortGameplayEffectContainerSpec* Plasma_Explosion, struct FFortGameplayEffectContainerSpec* Mini_Explosion);
	void Destroyed_76104D9B4F6C3F61303653918697EC35(const struct FProjectileEventData& ProjectileData);
	void Exploded_76104D9B4F6C3F61303653918697EC35(const struct FProjectileEventData& ProjectileData);
	void Stopped_76104D9B4F6C3F61303653918697EC35(const struct FProjectileEventData& ProjectileData);
	void Bounced_76104D9B4F6C3F61303653918697EC35(const struct FProjectileEventData& ProjectileData);
	void Touched_76104D9B4F6C3F61303653918697EC35(const struct FProjectileEventData& ProjectileData);
	void Created_76104D9B4F6C3F61303653918697EC35(const struct FProjectileEventData& ProjectileData);
	void Completed_6AC3F9A4491B91FDE0457DAC0E8B468B(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_6AC3F9A4491B91FDE0457DAC0E8B468B(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_6AC3F9A4491B91FDE0457DAC0E8B468B(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_Constructor_PlasmaPulse(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
