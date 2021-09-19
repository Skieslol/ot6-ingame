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
// Parameters
//---------------------------------------------------------------------------

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.Melee_Effect_Color
struct APlayerPawn_Generic_C_Melee_Effect_Color_Params
{
	struct FVector                                     Melee_Color_Set;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.Setup FX Mesh Duplicates
struct APlayerPawn_Generic_C_Setup_FX_Mesh_Duplicates_Params
{
	class UMaterialInterface*                          Material_to_Apply;                                         // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	TArray<class UMaterialInstanceDynamic*>            Charm_MID_Array;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	class USkeletalMeshComponent*                      Charm_Mesh;                                                // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	TArray<class UMaterialInstanceDynamic*>            Head_MID_Array;                                            // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	class USkeletalMeshComponent*                      Head_Mesh;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	TArray<class UMaterialInstanceDynamic*>            Body_MID_Array;                                            // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	class USkeletalMeshComponent*                      Body_Mesh;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	int                                                Translucent_Sort_Order;                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.Create and Duplicate Effect Poseable Skeletal Mesh
struct APlayerPawn_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh_Params
{
	TEnumAsByte<FortniteGame_EFortCustomPartType>      BodyType;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UMaterialInterface*                          Material_to_Apply;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<class UMaterialInstanceDynamic*>            Empty_MID_Array;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                TranslucentSortPriority;                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UPoseableMeshComponent*                      PoseableMesh;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.ToggleShieldVisibility
struct APlayerPawn_Generic_C_ToggleShieldVisibility_Params
{
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.SlaveAMeshToTheBody
struct APlayerPawn_Generic_C_SlaveAMeshToTheBody_Params
{
	class USkeletalMeshComponent*                      Mesh;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class USkeletalMeshComponent*                      Master;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.SetShieldMids_InternalLoop
struct APlayerPawn_Generic_C_SetShieldMids_InternalLoop_Params
{
	float                                              Highlight_Cracks;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Set_Highlight_Cracks;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Push;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Set_Push;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<class UMaterialInstanceDynamic*>            NewParam1;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.SetShieldMids
struct APlayerPawn_Generic_C_SetShieldMids_Params
{
	float                                              Highlight_Cracks;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Set_Highlight_Cracks;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Push;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Set_Push;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.FindShieldOpacity
struct APlayerPawn_Generic_C_FindShieldOpacity_Params
{
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.Create and Duplicate Effect Skeletal Meshes Parent
struct APlayerPawn_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent_Params
{
	TEnumAsByte<FortniteGame_EFortCustomPartType>      BodyType;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class USkeletalMeshComponent*                      DuplicatedSkeletalMeshComponent;                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	class UMaterialInterface*                          Material_to_Apply;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<class UMaterialInstanceDynamic*>            Empty_MID_Array;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                TranslucentSortPriority;                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.UserConstructionScript
struct APlayerPawn_Generic_C_UserConstructionScript_Params
{
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.HealthSweep__FinishedFunc
struct APlayerPawn_Generic_C_HealthSweep__FinishedFunc_Params
{
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.HealthSweep__UpdateFunc
struct APlayerPawn_Generic_C_HealthSweep__UpdateFunc_Params
{
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.Shield Regen Timeline__FinishedFunc
struct APlayerPawn_Generic_C_Shield_Regen_Timeline__FinishedFunc_Params
{
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.Shield Regen Timeline__UpdateFunc
struct APlayerPawn_Generic_C_Shield_Regen_Timeline__UpdateFunc_Params
{
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.Shield_ShatterTimeline__FinishedFunc
struct APlayerPawn_Generic_C_Shield_ShatterTimeline__FinishedFunc_Params
{
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.Shield_ShatterTimeline__UpdateFunc
struct APlayerPawn_Generic_C_Shield_ShatterTimeline__UpdateFunc_Params
{
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.Shield_DamageTimeline__FinishedFunc
struct APlayerPawn_Generic_C_Shield_DamageTimeline__FinishedFunc_Params
{
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.Shield_DamageTimeline__UpdateFunc
struct APlayerPawn_Generic_C_Shield_DamageTimeline__UpdateFunc_Params
{
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.Full Shield Health__FinishedFunc
struct APlayerPawn_Generic_C_Full_Shield_Health__FinishedFunc_Params
{
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.Full Shield Health__UpdateFunc
struct APlayerPawn_Generic_C_Full_Shield_Health__UpdateFunc_Params
{
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.MeleeSwingRight
struct APlayerPawn_Generic_C_MeleeSwingRight_Params
{
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.MeleeSwingLeft
struct APlayerPawn_Generic_C_MeleeSwingLeft_Params
{
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnDamagePlayEffects
struct APlayerPawn_Generic_C_OnDamagePlayEffects_Params
{
	float                                              Damage;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayTagContainer                       DamageTags;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector                                     Momentum;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  HitInfo;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	class AFortPawn*                                   InstigatedBy;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AActor*                                      DamageCauser;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayEffectContextHandle                EffectContext;                                             // (Parm)
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnLanded
struct APlayerPawn_Generic_C_OnLanded_Params
{
	struct FHitResult                                  Hit;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.Distance
struct APlayerPawn_Generic_C_Distance_Params
{
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnDeathPlayEffects
struct APlayerPawn_Generic_C_OnDeathPlayEffects_Params
{
	float                                              Damage;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayTagContainer                       DamageTags;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector                                     Momentum;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  HitInfo;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	class AFortPawn*                                   InstigatedBy;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AActor*                                      DamageCauser;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayEffectContextHandle                EffectContext;                                             // (Parm)
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnWeaponEquipped
struct APlayerPawn_Generic_C_OnWeaponEquipped_Params
{
	class AFortWeapon*                                 NewWeapon;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AFortWeapon*                                 PrevWeapon;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.ReceiveTick
struct APlayerPawn_Generic_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.FootStepLeft
struct APlayerPawn_Generic_C_FootStepLeft_Params
{
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.FootStepRight
struct APlayerPawn_Generic_C_FootStepRight_Params
{
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnCharacterPartsReinitialized
struct APlayerPawn_Generic_C_OnCharacterPartsReinitialized_Params
{
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier1
struct APlayerPawn_Generic_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1_Params
{
	TEnumAsByte<GameplayAbilities_EGameplayCueEvent>   EventType;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayCueParameters                      Parameters;                                                // (Parm)
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier2
struct APlayerPawn_Generic_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2_Params
{
	TEnumAsByte<GameplayAbilities_EGameplayCueEvent>   EventType;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayCueParameters                      Parameters;                                                // (Parm)
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.SetFirstPersonCamera
struct APlayerPawn_Generic_C_SetFirstPersonCamera_Params
{
	bool                                               bNewUseFirstPersonCamera;                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.GameplayCue.GravitySphere
struct APlayerPawn_Generic_C_GameplayCue_GravitySphere_Params
{
	TEnumAsByte<GameplayAbilities_EGameplayCueEvent>   EventType;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayCueParameters                      Parameters;                                                // (Parm)
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.Ninja Dust FX
struct APlayerPawn_Generic_C_Ninja_Dust_FX_Params
{
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.InternalSetFirstPersonCamera
struct APlayerPawn_Generic_C_InternalSetFirstPersonCamera_Params
{
	bool                                               NewUseFirstPersonCamera;                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnLand_CE
struct APlayerPawn_Generic_C_OnLand_CE_Params
{
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.Test Adrenaline Rush
struct APlayerPawn_Generic_C_Test_Adrenaline_Rush_Params
{
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.GameplayCue.Generic.AdrenalineRush.PeriodicHeal
struct APlayerPawn_Generic_C_GameplayCue_Generic_AdrenalineRush_PeriodicHeal_Params
{
	TEnumAsByte<GameplayAbilities_EGameplayCueEvent>   EventType;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayCueParameters                      Parameters;                                                // (Parm)
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.GameplayCue.Generic.AdrenalineRush.DirectHeal
struct APlayerPawn_Generic_C_GameplayCue_Generic_AdrenalineRush_DirectHeal_Params
{
	TEnumAsByte<GameplayAbilities_EGameplayCueEvent>   EventType;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayCueParameters                      Parameters;                                                // (Parm)
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.GameplayCue.Damage.Shielded
struct APlayerPawn_Generic_C_GameplayCue_Damage_Shielded_Params
{
	TEnumAsByte<GameplayAbilities_EGameplayCueEvent>   EventType;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayCueParameters                      Parameters;                                                // (Parm)
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.GameplayCue.Shield.Destroyed
struct APlayerPawn_Generic_C_GameplayCue_Shield_Destroyed_Params
{
	TEnumAsByte<GameplayAbilities_EGameplayCueEvent>   EventType;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayCueParameters                      Parameters;                                                // (Parm)
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.GameplayCue.Shield.FullyCharged
struct APlayerPawn_Generic_C_GameplayCue_Shield_FullyCharged_Params
{
	TEnumAsByte<GameplayAbilities_EGameplayCueEvent>   EventType;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayCueParameters                      Parameters;                                                // (Parm)
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.GameplayCue.Shield.Reapplied
struct APlayerPawn_Generic_C_GameplayCue_Shield_Reapplied_Params
{
	TEnumAsByte<GameplayAbilities_EGameplayCueEvent>   EventType;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayCueParameters                      Parameters;                                                // (Parm)
};

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.ExecuteUbergraph_PlayerPawn_Generic
struct APlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
