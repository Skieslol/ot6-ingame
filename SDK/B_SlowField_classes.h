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

// BlueprintGeneratedClass B_SlowField.B_SlowField_C
// 0x018D (FullSize[0x0615] - InheritedSize[0x0488])
class AB_SlowField_C : public ABuildingGameplayActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0488(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    P_Slowfield_Beacon_01;                                     // 0x048C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UAudioComponent*                             WarmUp_Warrning_AudioComponent;                            // 0x0490(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UParticleSystemComponent*                    P_Slowfield_ActivateRays_01;                               // 0x0494(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UPostProcessComponent*                       SlowPostProcess;                                           // 0x0498(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UAudioComponent*                             SlowFieldAudioComponent;                                   // 0x049C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        SlowFieldOverlapCylinder;                                  // 0x04A0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USkeletalMeshComponent*                      SlowFieldGeneratorMesh;                                    // 0x04A4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UBoxComponent*                               ProjCollision;                                             // 0x04A8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UProjectileMovementComponent*                ProjMovementComp;                                          // 0x04AC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	float                                              Audio_Powerdown_PitchCurve_C8D7334746A8A7EB557C1CBA73016E49; // 0x04B0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ETimelineDirection>             Audio_Powerdown__Direction_C8D7334746A8A7EB557C1CBA73016E49; // 0x04B4(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_OCNW[0x3];                                     // 0x04B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Audio_Powerdown;                                           // 0x04B8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              MaterializeCylinder_OffsetOnZ_A2EB343B46944EB7215B3BB14FDAA3D5; // 0x04BC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              MaterializeCylinder_Fresnel_A2EB343B46944EB7215B3BB14FDAA3D5; // 0x04C0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              MaterializeCylinder_ActivateLERP_A2EB343B46944EB7215B3BB14FDAA3D5; // 0x04C4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              MaterializeCylinder_Materialize_A2EB343B46944EB7215B3BB14FDAA3D5; // 0x04C8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ETimelineDirection>             MaterializeCylinder__Direction_A2EB343B46944EB7215B3BB14FDAA3D5; // 0x04CC(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_NNNZ[0x3];                                     // 0x04CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          MaterializeCylinder;                                       // 0x04D0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              SlowPP_PP_Weight_5E23169C446B32FE34B254B7E75DB7B4;         // 0x04D4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ETimelineDirection>             SlowPP__Direction_5E23169C446B32FE34B254B7E75DB7B4;        // 0x04D8(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_2972[0x3];                                     // 0x04D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          SlowPP;                                                    // 0x04DC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UParticleSystem*                             DeathEffects;                                              // 0x04E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsDeployed;                                                // 0x04E4(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	unsigned char                                      UnknownData_6H0K[0x3];                                     // 0x04E5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundBase*                                  DeploymentSound;                                           // 0x04E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundBase*                                  DeactivateSound;                                           // 0x04EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UClass*                                      InsideSlowFieldGE;                                         // 0x04F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UClass*                                      SlowGE;                                                    // 0x04F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              ProjectileSpeedMultiplier;                                 // 0x04F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTag                                SlowTag;                                                   // 0x04FC(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              Radius;                                                    // 0x0504(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	float                                              Height;                                                    // 0x0508(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                               AffectsTeammates;                                          // 0x050C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_TAAN[0x3];                                     // 0x050D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInstanceDynamic*                    SlowFieldOverlapMID;                                       // 0x0510(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              HeightOffsetZ;                                             // 0x0514(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              Activation_Delay;                                          // 0x0518(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	float                                              Refraction_Strength_Active;                                // 0x051C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              Emissive_Boost_Active;                                     // 0x0520(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              Fresnel_Opacity_Active;                                    // 0x0524(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              Fresnel_Opacity_Inactive;                                  // 0x0528(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              Fresnel_Exponent_Active;                                   // 0x052C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              Rays_Activate_Size_Y;                                      // 0x0530(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              Rays_Activate_Size_Z;                                      // 0x0534(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              Transition_In__seconds_;                                   // 0x0538(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               InWarmup;                                                  // 0x053C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_4BR2[0x3];                                     // 0x053D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Beacon_Final_Speed;                                        // 0x0540(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              Beacon_Start_Speed;                                        // 0x0544(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              Beacon_Speedup_Play_Speed;                                 // 0x0548(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              Beacon_Speedup_Play_Speed_Chip_OffTime;                    // 0x054C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Beacon_Can_Play_;                                          // 0x0550(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_23QR[0x3];                                     // 0x0551(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLinearColor                                Activate_Rays_Color__Friendly_;                            // 0x0554(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Activate_Rays_Color__Enemy_;                               // 0x0564(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Activate_Rays_Core_Color__Friendly_;                       // 0x0574(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Activate_Rays_Core_Color__Enemy_;                          // 0x0584(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Beacon_Core_Color__Friendly_;                              // 0x0594(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Beacon_Core_Color__Enemy_;                                 // 0x05A4(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Beacon_Streak_Color__Friendly_;                            // 0x05B4(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Beacon_Streak_Color__Enemy_;                               // 0x05C4(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Slowfield_Inner_Color__Friendly_;                          // 0x05D4(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Slowfield_Inner_Color__Enemy_;                             // 0x05E4(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Slowfield_PP_Color__Friendly_;                             // 0x05F4(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Slowfield_PP_Color__Enemy_;                                // 0x0604(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               LocalPostProcessOn;                                        // 0x0614(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass B_SlowField.B_SlowField_C");
		return ptr;
	}



	void SetTeamColorsVFX();
	void OnRep_IsDeployed();
	void UserConstructionScript();
	void SlowPP__FinishedFunc();
	void SlowPP__UpdateFunc();
	void Audio_Powerdown__FinishedFunc();
	void Audio_Powerdown__UpdateFunc();
	void MaterializeCylinder__FinishedFunc();
	void MaterializeCylinder__UpdateFunc();
	void OnDeathPlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void BndEvt__SlowFieldOverlapCylinder_K2Node_ComponentBoundEvent_233_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__SlowFieldOverlapCylinder_K2Node_ComponentBoundEvent_242_ComponentEndOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void PP_Activate();
	void PP_Deactivate();
	void PassInfo(float Height, float Radius, float Activation_Delay);
	void Beacon_Loop();
	void BndEvt__ProjMovementComp_K2Node_ComponentBoundEvent_228_OnProjectileBounceDelegate__DelegateSignature(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity);
	void OnLocalPlayerDeath(class AActor* DeadActor, float Damage, class AFortPawn* InstigatedBy, const struct FVector& HitLocation, class AActor* DamageCauser);
	void ExecuteUbergraph_B_SlowField(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
