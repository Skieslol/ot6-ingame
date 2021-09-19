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

// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.VFX_RedistributePointsAlongSpline_TOTD
struct APlayerPawn_Ninja_C_VFX_RedistributePointsAlongSpline_TOTD_Params
{
};

// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.VFX_CreateMIDs_TOTD
struct APlayerPawn_Ninja_C_VFX_CreateMIDs_TOTD_Params
{
};

// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.VFX_DestroySplines_TOTD
struct APlayerPawn_Ninja_C_VFX_DestroySplines_TOTD_Params
{
};

// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.VFX_AddSplinePointAndMesh_TOTD
struct APlayerPawn_Ninja_C_VFX_AddSplinePointAndMesh_TOTD_Params
{
};

// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.VFX_UpdateSplinePoints_TOTD
struct APlayerPawn_Ninja_C_VFX_UpdateSplinePoints_TOTD_Params
{
};

// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.VFX_InitializeSpline_TOTD
struct APlayerPawn_Ninja_C_VFX_InitializeSpline_TOTD_Params
{
};

// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.CreateAndAttachDuplicateEffectSkeletalMeshes
struct APlayerPawn_Ninja_C_CreateAndAttachDuplicateEffectSkeletalMeshes_Params
{
	TEnumAsByte<FortniteGame_EFortCustomPartType>      BodyType;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class USkeletalMeshComponent*                      DuplicatedSkeletalMeshComponent;                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	class UMaterialInterface*                          Material_to_Apply;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<class UMaterialInstanceDynamic*>            Empty_MID_Array;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                TranslucentSortPriority;                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.UserConstructionScript
struct APlayerPawn_Ninja_C_UserConstructionScript_Params
{
};

// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.Animate Ninja ShadowStance Dissolve__FinishedFunc
struct APlayerPawn_Ninja_C_Animate_Ninja_ShadowStance_Dissolve__FinishedFunc_Params
{
};

// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.Animate Ninja ShadowStance Dissolve__UpdateFunc
struct APlayerPawn_Ninja_C_Animate_Ninja_ShadowStance_Dissolve__UpdateFunc_Params
{
};

// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.FadeRibbonTOTD__FinishedFunc
struct APlayerPawn_Ninja_C_FadeRibbonTOTD__FinishedFunc_Params
{
};

// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.FadeRibbonTOTD__UpdateFunc
struct APlayerPawn_Ninja_C_FadeRibbonTOTD__UpdateFunc_Params
{
};

// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.GameplayCue.Ninja.SmokeBomb.ImpactFX
struct APlayerPawn_Ninja_C_GameplayCue_Ninja_SmokeBomb_ImpactFX_Params
{
	TEnumAsByte<GameplayAbilities_EGameplayCueEvent>   EventType;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayCueParameters                      Parameters;                                                // (Parm)
};

// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.OnLanded
struct APlayerPawn_Ninja_C_OnLanded_Params
{
	struct FHitResult                                  Hit;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.GameplayCue.Abilities.Activation.Ninja.ShadowStance
struct APlayerPawn_Ninja_C_GameplayCue_Abilities_Activation_Ninja_ShadowStance_Params
{
	TEnumAsByte<GameplayAbilities_EGameplayCueEvent>   EventType;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayCueParameters                      Parameters;                                                // (Parm)
};

// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.GameplayCue.Ninja.Assassination.ActiveFX
struct APlayerPawn_Ninja_C_GameplayCue_Ninja_Assassination_ActiveFX_Params
{
	TEnumAsByte<GameplayAbilities_EGameplayCueEvent>   EventType;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayCueParameters                      Parameters;                                                // (Parm)
};

// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.GameplayCue.Ninja.DimMak.ActiveFX
struct APlayerPawn_Ninja_C_GameplayCue_Ninja_DimMak_ActiveFX_Params
{
	TEnumAsByte<GameplayAbilities_EGameplayCueEvent>   EventType;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayCueParameters                      Parameters;                                                // (Parm)
};

// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.GameplayCue.Ninja.MantisLeap.ActivationFX
struct APlayerPawn_Ninja_C_GameplayCue_Ninja_MantisLeap_ActivationFX_Params
{
	TEnumAsByte<GameplayAbilities_EGameplayCueEvent>   EventType;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayCueParameters                      Parameters;                                                // (Parm)
};

// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.OnWeaponEquipped
struct APlayerPawn_Ninja_C_OnWeaponEquipped_Params
{
	class AFortWeapon*                                 NewWeapon;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AFortWeapon*                                 PrevWeapon;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.UpdateWeaponShadowStance
struct APlayerPawn_Ninja_C_UpdateWeaponShadowStance_Params
{
};

// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.DragonSlashActivatedOrDeactivated
struct APlayerPawn_Ninja_C_DragonSlashActivatedOrDeactivated_Params
{
	bool                                               Active_;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.ReceiveBeginPlay
struct APlayerPawn_Ninja_C_ReceiveBeginPlay_Params
{
};

// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.Toggle Shadow Stance
struct APlayerPawn_Ninja_C_Toggle_Shadow_Stance_Params
{
};

// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.OnCharacterPartsReinitialized
struct APlayerPawn_Ninja_C_OnCharacterPartsReinitialized_Params
{
};

// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier1
struct APlayerPawn_Ninja_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1_Params
{
	TEnumAsByte<GameplayAbilities_EGameplayCueEvent>   EventType;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayCueParameters                      Parameters;                                                // (Parm)
};

// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier2
struct APlayerPawn_Ninja_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2_Params
{
	TEnumAsByte<GameplayAbilities_EGameplayCueEvent>   EventType;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayCueParameters                      Parameters;                                                // (Parm)
};

// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.TailOfDragonStart
struct APlayerPawn_Ninja_C_TailOfDragonStart_Params
{
	float                                              AoeCloudTimeToLive;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.TailOfDragonEnd
struct APlayerPawn_Ninja_C_TailOfDragonEnd_Params
{
};

// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.ReceiveTick
struct APlayerPawn_Ninja_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.TOTDTimerExpired
struct APlayerPawn_Ninja_C_TOTDTimerExpired_Params
{
};

// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.GameplayCue.Ninja.MantisLeap.MantisStrikeFX
struct APlayerPawn_Ninja_C_GameplayCue_Ninja_MantisLeap_MantisStrikeFX_Params
{
	TEnumAsByte<GameplayAbilities_EGameplayCueEvent>   EventType;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayCueParameters                      Parameters;                                                // (Parm)
};

// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.ExecuteUbergraph_PlayerPawn_Ninja
struct APlayerPawn_Ninja_C_ExecuteUbergraph_PlayerPawn_Ninja_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
