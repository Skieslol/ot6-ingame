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

// Function B_BGA_BotTurret.B_BGA_BotTurret_C.OnRep_Left_Right_Gun
struct AB_BGA_BotTurret_C_OnRep_Left_Right_Gun_Params
{
};

// Function B_BGA_BotTurret.B_BGA_BotTurret_C.SetTeamColorsVFX
struct AB_BGA_BotTurret_C_SetTeamColorsVFX_Params
{
};

// Function B_BGA_BotTurret.B_BGA_BotTurret_C.UpdateScannerRay
struct AB_BGA_BotTurret_C_UpdateScannerRay_Params
{
};

// Function B_BGA_BotTurret.B_BGA_BotTurret_C.AttemptAcquireTarget
struct AB_BGA_BotTurret_C_AttemptAcquireTarget_Params
{
};

// Function B_BGA_BotTurret.B_BGA_BotTurret_C.SetFiringTimer
struct AB_BGA_BotTurret_C_SetFiringTimer_Params
{
};

// Function B_BGA_BotTurret.B_BGA_BotTurret_C.OnPotentialTargetUntouched
struct AB_BGA_BotTurret_C_OnPotentialTargetUntouched_Params
{
	class AFortPawn*                                   UntouchedPotentialTarget;                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function B_BGA_BotTurret.B_BGA_BotTurret_C.ClearFiringTimer
struct AB_BGA_BotTurret_C_ClearFiringTimer_Params
{
};

// Function B_BGA_BotTurret.B_BGA_BotTurret_C.ClearTargetAcquisitionTimer
struct AB_BGA_BotTurret_C_ClearTargetAcquisitionTimer_Params
{
};

// Function B_BGA_BotTurret.B_BGA_BotTurret_C.SetTargetAcquisitionTimer
struct AB_BGA_BotTurret_C_SetTargetAcquisitionTimer_Params
{
};

// Function B_BGA_BotTurret.B_BGA_BotTurret_C.SetTrackingTarget
struct AB_BGA_BotTurret_C_SetTrackingTarget_Params
{
	class AFortPawn*                                   Target;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function B_BGA_BotTurret.B_BGA_BotTurret_C.IsValidTarget
struct AB_BGA_BotTurret_C_IsValidTarget_Params
{
	class AFortPawn*                                   PotentialTarget;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IncludeSimpleRangeCheck;                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IncludeFireLimitCheck;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IncludeObstructionCheck;                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ValidTarget;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function B_BGA_BotTurret.B_BGA_BotTurret_C.OnNewPotentialTargetTouched
struct AB_BGA_BotTurret_C_OnNewPotentialTargetTouched_Params
{
	class AFortPawn*                                   PotentialTargetPawn;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function B_BGA_BotTurret.B_BGA_BotTurret_C.Perform_Bot_Rotation
struct AB_BGA_BotTurret_C_Perform_Bot_Rotation_Params
{
	class AActor*                                      LookAtActor;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function B_BGA_BotTurret.B_BGA_BotTurret_C.OnRep_NewVar0
struct AB_BGA_BotTurret_C_OnRep_NewVar0_Params
{
};

// Function B_BGA_BotTurret.B_BGA_BotTurret_C.OnRep_ShootingGun
struct AB_BGA_BotTurret_C_OnRep_ShootingGun_Params
{
};

// Function B_BGA_BotTurret.B_BGA_BotTurret_C.OnRep_Target_Location
struct AB_BGA_BotTurret_C_OnRep_Target_Location_Params
{
};

// Function B_BGA_BotTurret.B_BGA_BotTurret_C.UserConstructionScript
struct AB_BGA_BotTurret_C_UserConstructionScript_Params
{
};

// Function B_BGA_BotTurret.B_BGA_BotTurret_C.Timeline_0__FinishedFunc
struct AB_BGA_BotTurret_C_Timeline_0__FinishedFunc_Params
{
};

// Function B_BGA_BotTurret.B_BGA_BotTurret_C.Timeline_0__UpdateFunc
struct AB_BGA_BotTurret_C_Timeline_0__UpdateFunc_Params
{
};

// Function B_BGA_BotTurret.B_BGA_BotTurret_C.Timeline_2__FinishedFunc
struct AB_BGA_BotTurret_C_Timeline_2__FinishedFunc_Params
{
};

// Function B_BGA_BotTurret.B_BGA_BotTurret_C.Timeline_2__UpdateFunc
struct AB_BGA_BotTurret_C_Timeline_2__UpdateFunc_Params
{
};

// Function B_BGA_BotTurret.B_BGA_BotTurret_C.ReceiveBeginPlay
struct AB_BGA_BotTurret_C_ReceiveBeginPlay_Params
{
};

// Function B_BGA_BotTurret.B_BGA_BotTurret_C.PassBotInfo
struct AB_BGA_BotTurret_C_PassBotInfo_Params
{
	float                                              WarmupTime;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              BotDuration;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              FireRate;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Radius;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function B_BGA_BotTurret.B_BGA_BotTurret_C.Bot_Explode
struct AB_BGA_BotTurret_C_Bot_Explode_Params
{
};

// Function B_BGA_BotTurret.B_BGA_BotTurret_C.OnDamageServer
struct AB_BGA_BotTurret_C_OnDamageServer_Params
{
	float                                              Damage;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayTagContainer                       DamageTags;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector                                     Momentum;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  HitInfo;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	class AController*                                 InstigatedBy;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AActor*                                      DamageCauser;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayEffectContextHandle                EffectContext;                                             // (Parm)
};

// Function B_BGA_BotTurret.B_BGA_BotTurret_C.ReceiveTick
struct AB_BGA_BotTurret_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function B_BGA_BotTurret.B_BGA_BotTurret_C.BndEvt__Sphere_ViewRadius_Collision_K2Node_ComponentBoundEvent_276_ComponentBeginOverlapSignature__DelegateSignature
struct AB_BGA_BotTurret_C_BndEvt__Sphere_ViewRadius_Collision_K2Node_ComponentBoundEvent_276_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UPrimitiveComponent*                         OtherComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                OtherBodyIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bFromSweep;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  SweepResult;                                               // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function B_BGA_BotTurret.B_BGA_BotTurret_C.BndEvt__Sphere_ViewRadius_Collision_K2Node_ComponentBoundEvent_439_ComponentEndOverlapSignature__DelegateSignature
struct AB_BGA_BotTurret_C_BndEvt__Sphere_ViewRadius_Collision_K2Node_ComponentBoundEvent_439_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UPrimitiveComponent*                         OtherComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                OtherBodyIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function B_BGA_BotTurret.B_BGA_BotTurret_C.OnDeathServer
struct AB_BGA_BotTurret_C_OnDeathServer_Params
{
	float                                              Damage;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayTagContainer                       DamageTags;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector                                     Momentum;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  HitInfo;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	class AController*                                 InstigatedBy;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AActor*                                      DamageCauser;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayEffectContextHandle                EffectContext;                                             // (Parm)
};

// Function B_BGA_BotTurret.B_BGA_BotTurret_C.AttemptFire
struct AB_BGA_BotTurret_C_AttemptFire_Params
{
};

// Function B_BGA_BotTurret.B_BGA_BotTurret_C.ExecuteUbergraph_B_BGA_BotTurret
struct AB_BGA_BotTurret_C_ExecuteUbergraph_B_BGA_BotTurret_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
