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

// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.OnRep_OnPlayerBuiltFloor
struct APlayerPawn_Outlander_C_OnRep_OnPlayerBuiltFloor_Params
{
};

// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.UserConstructionScript
struct APlayerPawn_Outlander_C_UserConstructionScript_Params
{
};

// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.Phase Shift Activation Timeline__FinishedFunc
struct APlayerPawn_Outlander_C_Phase_Shift_Activation_Timeline__FinishedFunc_Params
{
};

// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.Phase Shift Activation Timeline__UpdateFunc
struct APlayerPawn_Outlander_C_Phase_Shift_Activation_Timeline__UpdateFunc_Params
{
};

// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.PhaseShiftHitSweep__FinishedFunc
struct APlayerPawn_Outlander_C_PhaseShiftHitSweep__FinishedFunc_Params
{
};

// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.PhaseShiftHitSweep__UpdateFunc
struct APlayerPawn_Outlander_C_PhaseShiftHitSweep__UpdateFunc_Params
{
};

// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.GameplayCue.Explorer.Fragment
struct APlayerPawn_Outlander_C_GameplayCue_Explorer_Fragment_Params
{
	TEnumAsByte<GameplayAbilities_EGameplayCueEvent>   EventType;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayCueParameters                      Parameters;                                                // (Parm)
};

// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.GameplayCue.Outlander.InTheZone.FX
struct APlayerPawn_Outlander_C_GameplayCue_Outlander_InTheZone_FX_Params
{
	TEnumAsByte<GameplayAbilities_EGameplayCueEvent>   EventType;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayCueParameters                      Parameters;                                                // (Parm)
};

// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.OnBaseChanged
struct APlayerPawn_Outlander_C_OnBaseChanged_Params
{
	class AActor*                                      NewBase;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.ReceivePossessed
struct APlayerPawn_Outlander_C_ReceivePossessed_Params
{
	class AController*                                 NewController;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.GameplayCue.Explorer.Fragment.Offense.PickupFX
struct APlayerPawn_Outlander_C_GameplayCue_Explorer_Fragment_Offense_PickupFX_Params
{
	TEnumAsByte<GameplayAbilities_EGameplayCueEvent>   EventType;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayCueParameters                      Parameters;                                                // (Parm)
};

// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.GameplayCue.Explorer.Fragment.Defense.PickupFX
struct APlayerPawn_Outlander_C_GameplayCue_Explorer_Fragment_Defense_PickupFX_Params
{
	TEnumAsByte<GameplayAbilities_EGameplayCueEvent>   EventType;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayCueParameters                      Parameters;                                                // (Parm)
};

// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.GameplayCue.Explorer.Fragment.Specialty.PickupFX
struct APlayerPawn_Outlander_C_GameplayCue_Explorer_Fragment_Specialty_PickupFX_Params
{
	TEnumAsByte<GameplayAbilities_EGameplayCueEvent>   EventType;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayCueParameters                      Parameters;                                                // (Parm)
};

// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.WithinReachOfTreasure
struct APlayerPawn_Outlander_C_WithinReachOfTreasure_Params
{
	struct FLinearColor                                VSpawnColor;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Activate;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier1
struct APlayerPawn_Outlander_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1_Params
{
	TEnumAsByte<GameplayAbilities_EGameplayCueEvent>   EventType;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayCueParameters                      Parameters;                                                // (Parm)
};

// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier2
struct APlayerPawn_Outlander_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2_Params
{
	TEnumAsByte<GameplayAbilities_EGameplayCueEvent>   EventType;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayCueParameters                      Parameters;                                                // (Parm)
};

// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.GameplayCue.Outlander.PhaseShift.AppliedFX
struct APlayerPawn_Outlander_C_GameplayCue_Outlander_PhaseShift_AppliedFX_Params
{
	TEnumAsByte<GameplayAbilities_EGameplayCueEvent>   EventType;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayCueParameters                      Parameters;                                                // (Parm)
};

// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.RefreshIcons
struct APlayerPawn_Outlander_C_RefreshIcons_Params
{
};

// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.OnCharacterPartsReinitialized
struct APlayerPawn_Outlander_C_OnCharacterPartsReinitialized_Params
{
};

// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.OnDamagePlayEffects
struct APlayerPawn_Outlander_C_OnDamagePlayEffects_Params
{
	float                                              Damage;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayTagContainer                       DamageTags;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector                                     Momentum;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  HitInfo;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	class AFortPawn*                                   InstigatedBy;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AActor*                                      DamageCauser;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayEffectContextHandle                EffectContext;                                             // (Parm)
};

// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.EventOnDamagePlayFX
struct APlayerPawn_Outlander_C_EventOnDamagePlayFX_Params
{
};

// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.GameplayCue.Outlander.KnockKnock
struct APlayerPawn_Outlander_C_GameplayCue_Outlander_KnockKnock_Params
{
	TEnumAsByte<GameplayAbilities_EGameplayCueEvent>   EventType;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayCueParameters                      Parameters;                                                // (Parm)
};

// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.GameplayCue.Abilities.Activation.Outlander.AntiMaterialCharge
struct APlayerPawn_Outlander_C_GameplayCue_Abilities_Activation_Outlander_AntiMaterialCharge_Params
{
	TEnumAsByte<GameplayAbilities_EGameplayCueEvent>   EventType;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayCueParameters                      Parameters;                                                // (Parm)
};

// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.GameplayCue.Abilities.Activation.Outlander.AntiMaterialChargeThruster
struct APlayerPawn_Outlander_C_GameplayCue_Abilities_Activation_Outlander_AntiMaterialChargeThruster_Params
{
	TEnumAsByte<GameplayAbilities_EGameplayCueEvent>   EventType;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayCueParameters                      Parameters;                                                // (Parm)
};

// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.GameplayCue.Abilities.Activation.Outlander.AntiMaterialChargeChargeUp
struct APlayerPawn_Outlander_C_GameplayCue_Abilities_Activation_Outlander_AntiMaterialChargeChargeUp_Params
{
	TEnumAsByte<GameplayAbilities_EGameplayCueEvent>   EventType;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayCueParameters                      Parameters;                                                // (Parm)
};

// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.GameplayCue.Abilities.Activation.Outlander.AntiMaterialChargeImpact
struct APlayerPawn_Outlander_C_GameplayCue_Abilities_Activation_Outlander_AntiMaterialChargeImpact_Params
{
	TEnumAsByte<GameplayAbilities_EGameplayCueEvent>   EventType;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayCueParameters                      Parameters;                                                // (Parm)
};

// Function PlayerPawn_Outlander.PlayerPawn_Outlander_C.ExecuteUbergraph_PlayerPawn_Outlander
struct APlayerPawn_Outlander_C_ExecuteUbergraph_PlayerPawn_Outlander_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
