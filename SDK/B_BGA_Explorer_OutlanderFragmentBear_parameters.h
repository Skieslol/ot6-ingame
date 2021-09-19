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

// Function B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C.OnRep_TargetPawnToTrack
struct AB_BGA_Explorer_OutlanderFragmentBear_C_OnRep_TargetPawnToTrack_Params
{
};

// Function B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C.ToggleFireCue
struct AB_BGA_Explorer_OutlanderFragmentBear_C_ToggleFireCue_Params
{
	bool                                               bEnable;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C.Is Pawn Inside Pitch Limits
struct AB_BGA_Explorer_OutlanderFragmentBear_C_Is_Pawn_Inside_Pitch_Limits_Params
{
	class AFortPawn*                                   Pawn;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bInsidePitchLimits;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C.IsValidTarget
struct AB_BGA_Explorer_OutlanderFragmentBear_C_IsValidTarget_Params
{
	class AFortPawn*                                   PotentialTarget;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bIncludeSimpleRangeCheck;                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bIncludeFiringLimitCheck;                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bIncludeObstructionCheck;                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bValidTarget;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C.OnPotentialTargetUntouched
struct AB_BGA_Explorer_OutlanderFragmentBear_C_OnPotentialTargetUntouched_Params
{
	class AFortPawn*                                   UntouchedPotentialTarget;                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C.OnNewPotentialTargetTouched
struct AB_BGA_Explorer_OutlanderFragmentBear_C_OnNewPotentialTargetTouched_Params
{
	class AFortPawn*                                   PotentialTargetPawn;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C.ShouldFire
struct AB_BGA_Explorer_OutlanderFragmentBear_C_ShouldFire_Params
{
	bool                                               ShouldFire;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C.ClearTargetAcquisitionTimer
struct AB_BGA_Explorer_OutlanderFragmentBear_C_ClearTargetAcquisitionTimer_Params
{
};

// Function B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C.ClearFiringTimer
struct AB_BGA_Explorer_OutlanderFragmentBear_C_ClearFiringTimer_Params
{
};

// Function B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C.SpawnImpactEffects
struct AB_BGA_Explorer_OutlanderFragmentBear_C_SpawnImpactEffects_Params
{
	struct FVector                                     HitLocation;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C.SpawnTracer
struct AB_BGA_Explorer_OutlanderFragmentBear_C_SpawnTracer_Params
{
	struct FVector                                     HitLocation;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bLeftTracer;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C.UpdateRotation
struct AB_BGA_Explorer_OutlanderFragmentBear_C_UpdateRotation_Params
{
	class AActor*                                      LookAtActor;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              DeltaSeconds;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C.SetTargetAcquisitionTimer
struct AB_BGA_Explorer_OutlanderFragmentBear_C_SetTargetAcquisitionTimer_Params
{
};

// Function B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C.SetFiringTimer
struct AB_BGA_Explorer_OutlanderFragmentBear_C_SetFiringTimer_Params
{
};

// Function B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C.AttemptFire
struct AB_BGA_Explorer_OutlanderFragmentBear_C_AttemptFire_Params
{
};

// Function B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C.AttemptAcquireTarget
struct AB_BGA_Explorer_OutlanderFragmentBear_C_AttemptAcquireTarget_Params
{
};

// Function B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C.GetTargetingSourceTransform
struct AB_BGA_Explorer_OutlanderFragmentBear_C_GetTargetingSourceTransform_Params
{
	TEnumAsByte<FortniteGame_EFortAbilityTargetingSource> Source;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FTransform                                  ReturnValue;                                               // (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C.UserConstructionScript
struct AB_BGA_Explorer_OutlanderFragmentBear_C_UserConstructionScript_Params
{
};

// Function B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C.ReceiveBeginPlay
struct AB_BGA_Explorer_OutlanderFragmentBear_C_ReceiveBeginPlay_Params
{
};

// Function B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C.GameplayCue.Impact.Physical
struct AB_BGA_Explorer_OutlanderFragmentBear_C_GameplayCue_Impact_Physical_Params
{
	TEnumAsByte<GameplayAbilities_EGameplayCueEvent>   EventType;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayCueParameters                      Parameters;                                                // (Parm)
};

// Function B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C.ReceiveTick
struct AB_BGA_Explorer_OutlanderFragmentBear_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C.OnDeathPlayEffects
struct AB_BGA_Explorer_OutlanderFragmentBear_C_OnDeathPlayEffects_Params
{
	float                                              Damage;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayTagContainer                       DamageTags;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector                                     Momentum;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  HitInfo;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	class AFortPawn*                                   InstigatedBy;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AActor*                                      DamageCauser;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayEffectContextHandle                EffectContext;                                             // (Parm)
};

// Function B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C.OnDeathServer
struct AB_BGA_Explorer_OutlanderFragmentBear_C_OnDeathServer_Params
{
	float                                              Damage;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayTagContainer                       DamageTags;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector                                     Momentum;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  HitInfo;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	class AController*                                 InstigatedBy;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AActor*                                      DamageCauser;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayEffectContextHandle                EffectContext;                                             // (Parm)
};

// Function B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C.BndEvt__SightRadiusSphereComponent_K2Node_ComponentBoundEvent_271_ComponentBeginOverlapSignature__DelegateSignature
struct AB_BGA_Explorer_OutlanderFragmentBear_C_BndEvt__SightRadiusSphereComponent_K2Node_ComponentBoundEvent_271_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UPrimitiveComponent*                         OtherComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                OtherBodyIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bFromSweep;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  SweepResult;                                               // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C.BndEvt__SightRadiusSphereComponent_K2Node_ComponentBoundEvent_275_ComponentEndOverlapSignature__DelegateSignature
struct AB_BGA_Explorer_OutlanderFragmentBear_C_BndEvt__SightRadiusSphereComponent_K2Node_ComponentBoundEvent_275_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UPrimitiveComponent*                         OtherComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                OtherBodyIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C.KilledTargetPawn
struct AB_BGA_Explorer_OutlanderFragmentBear_C_KilledTargetPawn_Params
{
};

// Function B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C.GameplayCue.Weapons.Activation
struct AB_BGA_Explorer_OutlanderFragmentBear_C_GameplayCue_Weapons_Activation_Params
{
	TEnumAsByte<GameplayAbilities_EGameplayCueEvent>   EventType;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayCueParameters                      Parameters;                                                // (Parm)
};

// Function B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C.SetTargetPawn
struct AB_BGA_Explorer_OutlanderFragmentBear_C_SetTargetPawn_Params
{
	class AFortPawn*                                   NewTargetPawn;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C.OnTargetPawnDied
struct AB_BGA_Explorer_OutlanderFragmentBear_C_OnTargetPawnDied_Params
{
	class AActor*                                      DamagedActor;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Damage;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AController*                                 InstigatedBy;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AActor*                                      DamageCauser;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     HitLocation;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UPrimitiveComponent*                         FHitComponent;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FName                                       BoneName;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Momentum;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C.Bearricade
struct AB_BGA_Explorer_OutlanderFragmentBear_C_Bearricade_Params
{
};

// Function B_BGA_Explorer_OutlanderFragmentBear.B_BGA_Explorer_OutlanderFragmentBear_C.ExecuteUbergraph_B_BGA_Explorer_OutlanderFragmentBear
struct AB_BGA_Explorer_OutlanderFragmentBear_C_ExecuteUbergraph_B_BGA_Explorer_OutlanderFragmentBear_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
