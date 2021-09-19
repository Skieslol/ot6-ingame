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

// BlueprintGeneratedClass PlayerPawn_Generic.PlayerPawn_Generic_C
// 0x025C (FullSize[0x0F40] - InheritedSize[0x0CE4])
class APlayerPawn_Generic_C : public APlayerPawn_Generic_Parent_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0CE4(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                      Adrenaline_Rush_Charm;                                     // 0x0CE8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USkeletalMeshComponent*                      Adrenaline_Rush_Head;                                      // 0x0CEC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USkeletalMeshComponent*                      Adrenaline_Rush_Body;                                      // 0x0CF0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UParticleSystemComponent*                    P_GravitySphere_rightFoot_;                                // 0x0CF4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UParticleSystemComponent*                    P_GravitySphere_leftFoot_;                                 // 0x0CF8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USkeletalMeshComponent*                      Shield_CharmSkeletalMesh;                                  // 0x0CFC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USkeletalMeshComponent*                      Shield_HeadSkeletalMesh;                                   // 0x0D00(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USkeletalMeshComponent*                      Shield_BodySkeletalMesh;                                   // 0x0D04(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UParticleSystemComponent*                    Effect_Stun;                                               // 0x0D08(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        DistanceMesh;                                              // 0x0D0C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UParticleSystemComponent*                    Effect_Player_Walk_FX;                                     // 0x0D10(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UParticleSystemComponent*                    Effect_Player_Run_FX;                                      // 0x0D14(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        PlayerLightVolumetricConeMesh;                             // 0x0D18(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UAudioComponent*                             Sound_Player_Hit;                                          // 0x0D1C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UParticleSystemComponent*                    Effect_Player_landed;                                      // 0x0D20(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USpotLightComponent*                         PlayerLight;                                               // 0x0D24(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UPointLightComponent*                        PlayerLight1;                                              // 0x0D28(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	float                                              Full_Shield_Health_Push_6222ABB047B8F22E3C9FC983BD70CEA6;  // 0x0D2C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Full_Shield_Health_Impact_6222ABB047B8F22E3C9FC983BD70CEA6; // 0x0D30(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ETimelineDirection>             Full_Shield_Health__Direction_6222ABB047B8F22E3C9FC983BD70CEA6; // 0x0D34(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_L54R[0x3];                                     // 0x0D35(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Full_Shield_Health;                                        // 0x0D38(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Shield_DamageTimeline_Impact_6DC09F024CD096186AE1389FB8061E30; // 0x0D3C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ETimelineDirection>             Shield_DamageTimeline__Direction_6DC09F024CD096186AE1389FB8061E30; // 0x0D40(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_XLE3[0x3];                                     // 0x0D41(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Shield_DamageTimeline;                                     // 0x0D44(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Shield_Regen_Timeline_Opacity_3DC9958C47D4CEFA60E68699D92BA374; // 0x0D48(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Shield_Regen_Timeline_Push_3DC9958C47D4CEFA60E68699D92BA374; // 0x0D4C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ETimelineDirection>             Shield_Regen_Timeline__Direction_3DC9958C47D4CEFA60E68699D92BA374; // 0x0D50(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_KICY[0x3];                                     // 0x0D51(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Shield_Regen_Timeline;                                     // 0x0D54(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Shield_ShatterTimeline_Push_F3223F2D4A6B8642F950B0A15F8C6699; // 0x0D58(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Shield_ShatterTimeline_Opacity_F3223F2D4A6B8642F950B0A15F8C6699; // 0x0D5C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Shield_ShatterTimeline_HighlightCracks_F3223F2D4A6B8642F950B0A15F8C6699; // 0x0D60(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ETimelineDirection>             Shield_ShatterTimeline__Direction_F3223F2D4A6B8642F950B0A15F8C6699; // 0x0D64(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_1Z4Z[0x3];                                     // 0x0D65(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Shield_ShatterTimeline;                                    // 0x0D68(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              HealthSweep_SafetyOpacity_2A96303441845D0EAAAB1EB68183F8A8; // 0x0D6C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              HealthSweep_Sweep_2A96303441845D0EAAAB1EB68183F8A8;        // 0x0D70(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ETimelineDirection>             HealthSweep__Direction_2A96303441845D0EAAAB1EB68183F8A8;   // 0x0D74(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_SE9A[0x3];                                     // 0x0D75(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          HealthSweep;                                               // 0x0D78(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UClass*                                      ScreenEffect_PlayerHealthDamageDirection;                  // 0x0D7C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor)
	class UClass*                                      ScreenEffect_PlayerHealthDamage;                           // 0x0D80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UClass*                                      ScreenEffect_PlayerShieldDamageDirection;                  // 0x0D84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UClass*                                      ScreenEffect_PlayerShieldDamage;                           // 0x0D88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UClass*                                      HitByHuskProjectileClass;                                  // 0x0D8C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class USoundBase*                                  HitByHuskRangedSound;                                      // 0x0D90(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class USoundBase*                                  HitByHuskMeleeSound;                                       // 0x0D94(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UMaterialInstanceDynamic*                    PlayerLightVolumetricConeMeshMID;                          // 0x0D98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UParticleSystem*                             P_PlayerHealthDamage;                                      // 0x0D9C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UParticleSystem*                             P_PlayerShieldDamage;                                      // 0x0DA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UAnimMontage*                                SoulSuckVictimMontage;                                     // 0x0DA4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UMaterialInterface*                          WeaponMaterialOverride;                                    // 0x0DA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              PlayerSpeed;                                               // 0x0DAC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              Run_Dust_Activate_Speed;                                   // 0x0DB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              Walk_Dust_Activate_Speed;                                  // 0x0DB4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              Walk_Dust_Reset_Speed;                                     // 0x0DB8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                     PreviousVelocityVector;                                    // 0x0DBC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               CanSpawnRunKickupFX_;                                      // 0x0DC8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               CanSpawnWalkKickupFX_;                                     // 0x0DC9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               CanSpawnDustLandFX_;                                       // 0x0DCA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_CRWJ[0x1];                                     // 0x0DCB(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UParticleSystem*                             Effect_Player_WalkSplash;                                  // 0x0DCC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UParticleSystem*                             Effect_Player_RunSplash;                                   // 0x0DD0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UParticleSystem*                             Effect_Player_WalkDust_P;                                  // 0x0DD4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UParticleSystem*                             Effect_Player_RunDust_P;                                   // 0x0DD8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsInWater;                                                 // 0x0DDC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_RN07[0x3];                                     // 0x0DDD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRotator                                    RunWalkDustRotation;                                       // 0x0DE0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsNinjaInShadowStance_;                                    // 0x0DEC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ROK9[0x3];                                     // 0x0DED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTagContainer                       GameplayTagsForHitByHuskMeleeSound;                        // 0x0DF0(0x0018) (Edit, BlueprintVisible)
	class UMaterialInterface*                          Adrenaline_Material;                                       // 0x0E08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<class UMaterialInstanceDynamic*>            AdrenalineRush_HeadAnimatingMIDS;                          // 0x0E0C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>            AdrenalineRush_BodyAnimatingMIDS;                          // 0x0E18(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FLinearColor                                Adrenaline_Rush_Color_Outer_Direct;                        // 0x0E24(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Adrenaline_Rush_Color_Inner_Direct;                        // 0x0E34(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Adrenaline_Rush_Color_Outer_Periodic;                      // 0x0E44(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Adrenaline_Rush_Color_Inner_Periodic;                      // 0x0E54(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              Adrenaline_Rush_WPO_Offset;                                // 0x0E64(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UParticleSystemComponent*                    P_AdrenalineRushSparklesRunning;                           // 0x0E68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInterface*                          Shield_Material;                                           // 0x0E6C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<class UMaterialInstanceDynamic*>            BodyShieldMIDArray;                                        // 0x0E70(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>            HeadShieldMIDArray;                                        // 0x0E7C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               Shield_Active;                                             // 0x0E88(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_YDS1[0x3];                                     // 0x0E89(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                WaterCounter;                                              // 0x0E8C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              DefaultShieldOpacity;                                      // 0x0E90(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              Tick_Delta_Seconds;                                        // 0x0E94(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              Shield_Damage_Wave_Animation;                              // 0x0E98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              Overall_Shield_Damage_Wave_Animation_Length;               // 0x0E9C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              size;                                                      // 0x0EA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Dying;                                                     // 0x0EA4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               CanRippleAgain;                                            // 0x0EA5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_SMXB[0x2];                                     // 0x0EA6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundBase*                                  Sound_Shield_Impact;                                       // 0x0EA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundBase*                                  Sound_Shield_Destroyed;                                    // 0x0EAC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundBase*                                  Sound_Shield_FullyCharged;                                 // 0x0EB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundBase*                                  Sound_Shield_StartRecharge;                                // 0x0EB4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              Shield_Shatter_Opacity;                                    // 0x0EB8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              Regen_Opacity;                                             // 0x0EBC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              Damage_Opacity;                                            // 0x0EC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              Default_Shield_opacity;                                    // 0x0EC4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              Shield_PushMinValue;                                       // 0x0EC8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ShieldVisible_Hit;                                         // 0x0ECC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ShieldVisible_Recover;                                     // 0x0ECD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ShieldVisible_Shatter;                                     // 0x0ECE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ShieldVisible_FullHealth;                                  // 0x0ECF(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              Fully_Regened_Shield_health_Opacity;                       // 0x0ED0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTagContainer                       TC_GameplayCueDamageShielded;                              // 0x0ED4(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               LatestDamageIsShieldDamage;                                // 0x0EEC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_S045[0x3];                                     // 0x0EED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Damage_Taken;                                              // 0x0EF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              Last_Shield_Damage_Time;                                   // 0x0EF4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USkeletalMeshComponent*                      NewVar_1;                                                  // 0x0EF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<class UMaterialInstanceDynamic*>            TempArray;                                                 // 0x0EFC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UPoseableMeshComponent*                      NewVar_2;                                                  // 0x0F08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USkeletalMesh*                               Pawn__Charm_Skeletal_Mesh;                                 // 0x0F0C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<class UMaterialInstanceDynamic*>            CharmShieldMIDArray;                                       // 0x0F10(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               BodyValid;                                                 // 0x0F1C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               BackpackValid;                                             // 0x0F1D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               HatValid;                                                  // 0x0F1E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               FaceValid;                                                 // 0x0F1F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               CharmValid;                                                // 0x0F20(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               HeadValid;                                                 // 0x0F21(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_30RU[0x2];                                     // 0x0F22(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UMaterialInstanceDynamic*>            AdrenalineRush_CharmAnimatingMIDS;                         // 0x0F24(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>            Adrenaline_Rush_MID_Collection;                            // 0x0F30(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UMaterialInterface*                          NewVar_3;                                                  // 0x0F3C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass PlayerPawn_Generic.PlayerPawn_Generic_C");
		return ptr;
	}



	void Melee_Effect_Color(struct FVector* Melee_Color_Set);
	void Setup_FX_Mesh_Duplicates(class UMaterialInterface** Material_to_Apply, TArray<class UMaterialInstanceDynamic*>* Charm_MID_Array, class USkeletalMeshComponent** Charm_Mesh, TArray<class UMaterialInstanceDynamic*>* Head_MID_Array, class USkeletalMeshComponent** Head_Mesh, TArray<class UMaterialInstanceDynamic*>* Body_MID_Array, class USkeletalMeshComponent** Body_Mesh, int Translucent_Sort_Order);
	void Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh(TEnumAsByte<FortniteGame_EFortCustomPartType> BodyType, class UMaterialInterface* Material_to_Apply, TArray<class UMaterialInstanceDynamic*>* Empty_MID_Array, int TranslucentSortPriority, class UPoseableMeshComponent** PoseableMesh);
	void ToggleShieldVisibility();
	void SlaveAMeshToTheBody(class USkeletalMeshComponent* Mesh, class USkeletalMeshComponent* Master);
	void SetShieldMids_InternalLoop(float Highlight_Cracks, bool Set_Highlight_Cracks, float Push, bool Set_Push, TArray<class UMaterialInstanceDynamic*>* NewParam1);
	void SetShieldMids(float Highlight_Cracks, bool Set_Highlight_Cracks, float Push, bool Set_Push);
	void FindShieldOpacity();
	void Create_and_Duplicate_Effect_Skeletal_Meshes_Parent(TEnumAsByte<FortniteGame_EFortCustomPartType> BodyType, class USkeletalMeshComponent** DuplicatedSkeletalMeshComponent, class UMaterialInterface* Material_to_Apply, TArray<class UMaterialInstanceDynamic*>* Empty_MID_Array, int TranslucentSortPriority);
	void UserConstructionScript();
	void HealthSweep__FinishedFunc();
	void HealthSweep__UpdateFunc();
	void Shield_Regen_Timeline__FinishedFunc();
	void Shield_Regen_Timeline__UpdateFunc();
	void Shield_ShatterTimeline__FinishedFunc();
	void Shield_ShatterTimeline__UpdateFunc();
	void Shield_DamageTimeline__FinishedFunc();
	void Shield_DamageTimeline__UpdateFunc();
	void Full_Shield_Health__FinishedFunc();
	void Full_Shield_Health__UpdateFunc();
	void MeleeSwingRight();
	void MeleeSwingLeft();
	void OnDamagePlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void OnLanded(const struct FHitResult& Hit);
	void Distance();
	void OnDeathPlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void OnWeaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);
	void ReceiveTick(float DeltaSeconds);
	void FootStepLeft();
	void FootStepRight();
	void OnCharacterPartsReinitialized();
	void GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1(TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2(TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void SetFirstPersonCamera(bool bNewUseFirstPersonCamera);
	void GameplayCue_GravitySphere(TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void Ninja_Dust_FX();
	void InternalSetFirstPersonCamera(bool NewUseFirstPersonCamera);
	void OnLand_CE();
	void Test_Adrenaline_Rush();
	void GameplayCue_Generic_AdrenalineRush_PeriodicHeal(TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Generic_AdrenalineRush_DirectHeal(TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Damage_Shielded(TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Shield_Destroyed(TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Shield_FullyCharged(TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Shield_Reapplied(TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void ExecuteUbergraph_PlayerPawn_Generic(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
