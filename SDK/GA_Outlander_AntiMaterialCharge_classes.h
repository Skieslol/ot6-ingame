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

// BlueprintGeneratedClass GA_Outlander_AntiMaterialCharge.GA_Outlander_AntiMaterialCharge_C
// 0x00E4 (FullSize[0x0824] - InheritedSize[0x0740])
class UGA_Outlander_AntiMaterialCharge_C : public UGAT_OutlanderActiveAbility_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0740(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                                EventActivation;                                           // 0x0744(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EventComplete;                                             // 0x074C(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FFortFeedbackHandle                         AntiMaterialDialogFeedback;                                // 0x0754(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EC_TargetBuildings;                                        // 0x0764(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EC_TargetPawns;                                            // 0x076C(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UAnimMontage*                                M_AntiMaterialCharge;                                      // 0x0774(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              MinTravelTime;                                             // 0x0778(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              MaxTravelTime;                                             // 0x077C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayAttribute                          OutlanderSubBuilding1;                                     // 0x0780(0x0004) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              UpgradeDistance;                                           // 0x0784(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              MinChargeUpTime;                                           // 0x0788(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UParticleSystemComponent*                    P_DustKickup_Active;                                       // 0x078C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              MaxChargeUpTime;                                           // 0x0790(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              ChargeUpTimeout;                                           // 0x0794(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              ChargeUpStartTime;                                         // 0x0798(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              ChargeFraction;                                            // 0x079C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UAudioComponent*                             ChargeUpAudioComp;                                         // 0x07A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundBase*                                  ChargeUpSoundCue;                                          // 0x07A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              ChargeUpAnimDuration;                                      // 0x07A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTagContainer                       TC_ChargedFist;                                            // 0x07AC(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_TravelTime;                                             // 0x07C4(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	TEnumAsByte<E_AntiMaterialCharge_State_E_AntiMaterialCharge_State> AntiMaterialChargeState;                                   // 0x07DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_MURP[0x3];                                     // 0x07DD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FollowThruTimeout;                                         // 0x07E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               KeyReleased;                                               // 0x07E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_8O1E[0x3];                                     // 0x07E5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              PitchInputScale;                                           // 0x07E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              YawInputScale;                                             // 0x07EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<struct FFortCharacterPartMontageInfo>       CharacterPartMontages;                                     // 0x07F0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              ChargePawnDamageMax;                                       // 0x07FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              ChargeBuildingDamageMax;                                   // 0x0800(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               WasCharged;                                                // 0x0804(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_1H8Q[0x3];                                     // 0x0805(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      GE_OutlanderChargeDamageBoost;                             // 0x0808(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTagContainer                       ImpactCueTags;                                             // 0x080C(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass GA_Outlander_AntiMaterialCharge.GA_Outlander_AntiMaterialCharge_C");
		return ptr;
	}



	void AddChargeDamage();
	void ToggleSteeringReduction(bool EnableSteeringReduction);
	void SetVariables();
	void CheckOverlappingActors(class AActor* Actor, bool* ShouldContinue);
	void Cancelled_FE8A18834C65F680DC37488D7FC06BC5(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Targeted_FE8A18834C65F680DC37488D7FC06BC5(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_63C876A84981C19273666E9674DB57B0(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Targeted_63C876A84981C19273666E9674DB57B0(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Completed_46A106FC46EA4689B0713182261BE9A8(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_46A106FC46EA4689B0713182261BE9A8(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_46A106FC46EA4689B0713182261BE9A8(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Completed_29EA705847CDF7F1457FB4B125B9704F(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_29EA705847CDF7F1457FB4B125B9704F(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_29EA705847CDF7F1457FB4B125B9704F(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Completed_BC1210B54390EF35DEFD88AE8F47FDE8(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_BC1210B54390EF35DEFD88AE8F47FDE8(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_BC1210B54390EF35DEFD88AE8F47FDE8(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void K2_ActivateAbility();
	void OverlapEvent(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void K2_OnEndAbility();
	void OnAbilityInputReleased();
	void ChargeUpState();
	void PunchMovementState();
	void FollowThruState();
	void ExecuteUbergraph_GA_Outlander_AntiMaterialCharge(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
