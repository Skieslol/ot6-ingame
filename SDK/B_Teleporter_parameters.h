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

// Function B_Teleporter.B_Teleporter_C.InternalSetActive
struct AB_Teleporter_C_InternalSetActive_Params
{
	bool                                               bActive;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function B_Teleporter.B_Teleporter_C.TriggerRechargeInternal
struct AB_Teleporter_C_TriggerRechargeInternal_Params
{
};

// Function B_Teleporter.B_Teleporter_C.OnRep_TeleporterArrowColor
struct AB_Teleporter_C_OnRep_TeleporterArrowColor_Params
{
};

// Function B_Teleporter.B_Teleporter_C.OnRep_bRecharging
struct AB_Teleporter_C_OnRep_bRecharging_Params
{
};

// Function B_Teleporter.B_Teleporter_C.InitializeTeleporter
struct AB_Teleporter_C_InitializeTeleporter_Params
{
	float                                              NewMaxRange;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              NewRechargeDecay;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                                TeleporterArrowColor;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function B_Teleporter.B_Teleporter_C.SetShowGlow
struct AB_Teleporter_C_SetShowGlow_Params
{
	bool                                               Show;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function B_Teleporter.B_Teleporter_C.UpdateGlowVisuals
struct AB_Teleporter_C_UpdateGlowVisuals_Params
{
};

// Function B_Teleporter.B_Teleporter_C.OnRep_bBeingCarried
struct AB_Teleporter_C_OnRep_bBeingCarried_Params
{
};

// Function B_Teleporter.B_Teleporter_C.UpdateTargetTeleporterLocation
struct AB_Teleporter_C_UpdateTargetTeleporterLocation_Params
{
};

// Function B_Teleporter.B_Teleporter_C.IsAcceptablePositionForPlacement
struct AB_Teleporter_C_IsAcceptablePositionForPlacement_Params
{
	struct FVector                                     InLocation;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	struct FRotator                                    InRotation;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	class AFortDecoTool*                               DecoTool;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bIsCDO;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FText                                       OutFailureReason;                                          // (Parm, OutParm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function B_Teleporter.B_Teleporter_C.OnRep_TeleportCount
struct AB_Teleporter_C_OnRep_TeleportCount_Params
{
};

// Function B_Teleporter.B_Teleporter_C.TriggerRecharge
struct AB_Teleporter_C_TriggerRecharge_Params
{
};

// Function B_Teleporter.B_Teleporter_C.RechargeComplete
struct AB_Teleporter_C_RechargeComplete_Params
{
};

// Function B_Teleporter.B_Teleporter_C.OnRep_bTeleporterActive
struct AB_Teleporter_C_OnRep_bTeleporterActive_Params
{
};

// Function B_Teleporter.B_Teleporter_C.IsExclusivelyActive
struct AB_Teleporter_C_IsExclusivelyActive_Params
{
	bool                                               IsActive;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function B_Teleporter.B_Teleporter_C.UpdateTeleportersActive
struct AB_Teleporter_C_UpdateTeleportersActive_Params
{
};

// Function B_Teleporter.B_Teleporter_C.IsValidActorToTeleport
struct AB_Teleporter_C_IsValidActorToTeleport_Params
{
	class AActor*                                      ActorToTeleport;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ValidActor;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function B_Teleporter.B_Teleporter_C.BlueprintGetInteractionString
struct AB_Teleporter_C_BlueprintGetInteractionString_Params
{
	class AFortPawn*                                   InteractingPawn;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function B_Teleporter.B_Teleporter_C.BlueprintCanInteract
struct AB_Teleporter_C_BlueprintCanInteract_Params
{
	class AFortPawn*                                   InteractingPawn;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function B_Teleporter.B_Teleporter_C.TeleportToTarget
struct AB_Teleporter_C_TeleportToTarget_Params
{
	class AActor*                                      ActorToTeleport;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function B_Teleporter.B_Teleporter_C.SetTargetTeleporter
struct AB_Teleporter_C_SetTargetTeleporter_Params
{
	class AB_Teleporter_C*                             NewTarget;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function B_Teleporter.B_Teleporter_C.UserConstructionScript
struct AB_Teleporter_C_UserConstructionScript_Params
{
};

// Function B_Teleporter.B_Teleporter_C.RingSpeedUp__FinishedFunc
struct AB_Teleporter_C_RingSpeedUp__FinishedFunc_Params
{
};

// Function B_Teleporter.B_Teleporter_C.RingSpeedUp__UpdateFunc
struct AB_Teleporter_C_RingSpeedUp__UpdateFunc_Params
{
};

// Function B_Teleporter.B_Teleporter_C.GlowMaterialTransitionIn__FinishedFunc
struct AB_Teleporter_C_GlowMaterialTransitionIn__FinishedFunc_Params
{
};

// Function B_Teleporter.B_Teleporter_C.GlowMaterialTransitionIn__UpdateFunc
struct AB_Teleporter_C_GlowMaterialTransitionIn__UpdateFunc_Params
{
};

// Function B_Teleporter.B_Teleporter_C.GlowMaterialTransitionOut__FinishedFunc
struct AB_Teleporter_C_GlowMaterialTransitionOut__FinishedFunc_Params
{
};

// Function B_Teleporter.B_Teleporter_C.GlowMaterialTransitionOut__UpdateFunc
struct AB_Teleporter_C_GlowMaterialTransitionOut__UpdateFunc_Params
{
};

// Function B_Teleporter.B_Teleporter_C.LightrayFade__FinishedFunc
struct AB_Teleporter_C_LightrayFade__FinishedFunc_Params
{
};

// Function B_Teleporter.B_Teleporter_C.LightrayFade__UpdateFunc
struct AB_Teleporter_C_LightrayFade__UpdateFunc_Params
{
};

// Function B_Teleporter.B_Teleporter_C.RotateArrowTimeline__FinishedFunc
struct AB_Teleporter_C_RotateArrowTimeline__FinishedFunc_Params
{
};

// Function B_Teleporter.B_Teleporter_C.RotateArrowTimeline__UpdateFunc
struct AB_Teleporter_C_RotateArrowTimeline__UpdateFunc_Params
{
};

// Function B_Teleporter.B_Teleporter_C.ScaleLoadingRings__FinishedFunc
struct AB_Teleporter_C_ScaleLoadingRings__FinishedFunc_Params
{
};

// Function B_Teleporter.B_Teleporter_C.ScaleLoadingRings__UpdateFunc
struct AB_Teleporter_C_ScaleLoadingRings__UpdateFunc_Params
{
};

// Function B_Teleporter.B_Teleporter_C.PostProcessTL__FinishedFunc
struct AB_Teleporter_C_PostProcessTL__FinishedFunc_Params
{
};

// Function B_Teleporter.B_Teleporter_C.PostProcessTL__UpdateFunc
struct AB_Teleporter_C_PostProcessTL__UpdateFunc_Params
{
};

// Function B_Teleporter.B_Teleporter_C.BlueprintOnInteract
struct AB_Teleporter_C_BlueprintOnInteract_Params
{
	class AFortPawn*                                   InteractingPawn;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function B_Teleporter.B_Teleporter_C.OnComponentBeginOverlap_Event_1
struct AB_Teleporter_C_OnComponentBeginOverlap_Event_1_Params
{
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UPrimitiveComponent*                         OtherComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                OtherBodyIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bFromSweep;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  SweepResult;                                               // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function B_Teleporter.B_Teleporter_C.OnDeathServer
struct AB_Teleporter_C_OnDeathServer_Params
{
	float                                              Damage;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayTagContainer                       DamageTags;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector                                     Momentum;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  HitInfo;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	class AController*                                 InstigatedBy;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AActor*                                      DamageCauser;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayEffectContextHandle                EffectContext;                                             // (Parm)
};

// Function B_Teleporter.B_Teleporter_C.ReceiveDestroyed
struct AB_Teleporter_C_ReceiveDestroyed_Params
{
};

// Function B_Teleporter.B_Teleporter_C.OnActiveChanged
struct AB_Teleporter_C_OnActiveChanged_Params
{
};

// Function B_Teleporter.B_Teleporter_C.DirectionalRayActivate
struct AB_Teleporter_C_DirectionalRayActivate_Params
{
};

// Function B_Teleporter.B_Teleporter_C.DirectionalRayDeactivate
struct AB_Teleporter_C_DirectionalRayDeactivate_Params
{
};

// Function B_Teleporter.B_Teleporter_C.UpdateArrowDirection
struct AB_Teleporter_C_UpdateArrowDirection_Params
{
};

// Function B_Teleporter.B_Teleporter_C.OnRechargingChanged
struct AB_Teleporter_C_OnRechargingChanged_Params
{
};

// Function B_Teleporter.B_Teleporter_C.OnWorldReady
struct AB_Teleporter_C_OnWorldReady_Params
{
};

// Function B_Teleporter.B_Teleporter_C.OnDeathPlayEffects
struct AB_Teleporter_C_OnDeathPlayEffects_Params
{
	float                                              Damage;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayTagContainer                       DamageTags;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector                                     Momentum;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  HitInfo;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	class AFortPawn*                                   InstigatedBy;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AActor*                                      DamageCauser;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayEffectContextHandle                EffectContext;                                             // (Parm)
};

// Function B_Teleporter.B_Teleporter_C.ClientActorsTeleported
struct AB_Teleporter_C_ClientActorsTeleported_Params
{
	class AActor*                                      TeleportedActor;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function B_Teleporter.B_Teleporter_C.ExecuteUbergraph_B_Teleporter
struct AB_Teleporter_C_ExecuteUbergraph_B_Teleporter_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
