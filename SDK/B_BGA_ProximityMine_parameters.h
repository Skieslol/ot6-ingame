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

// Function B_BGA_ProximityMine.B_BGA_ProximityMine_C.VFX_SetTeamColors
struct AB_BGA_ProximityMine_C_VFX_SetTeamColors_Params
{
};

// Function B_BGA_ProximityMine.B_BGA_ProximityMine_C.AttachFX
struct AB_BGA_ProximityMine_C_AttachFX_Params
{
};

// Function B_BGA_ProximityMine.B_BGA_ProximityMine_C.DestroyFX
struct AB_BGA_ProximityMine_C_DestroyFX_Params
{
};

// Function B_BGA_ProximityMine.B_BGA_ProximityMine_C.OnRep_IsDead?
struct AB_BGA_ProximityMine_C_OnRep_IsDead__Params
{
};

// Function B_BGA_ProximityMine.B_BGA_ProximityMine_C.OnRep_bActivated
struct AB_BGA_ProximityMine_C_OnRep_bActivated_Params
{
};

// Function B_BGA_ProximityMine.B_BGA_ProximityMine_C.OnRep_IsPlaced
struct AB_BGA_ProximityMine_C_OnRep_IsPlaced_Params
{
};

// Function B_BGA_ProximityMine.B_BGA_ProximityMine_C.IsValidTarget
struct AB_BGA_ProximityMine_C_IsValidTarget_Params
{
	class UObject*                                     Object;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function B_BGA_ProximityMine.B_BGA_ProximityMine_C.UserConstructionScript
struct AB_BGA_ProximityMine_C_UserConstructionScript_Params
{
};

// Function B_BGA_ProximityMine.B_BGA_ProximityMine_C.Timeline_0__FinishedFunc
struct AB_BGA_ProximityMine_C_Timeline_0__FinishedFunc_Params
{
};

// Function B_BGA_ProximityMine.B_BGA_ProximityMine_C.Timeline_0__UpdateFunc
struct AB_BGA_ProximityMine_C_Timeline_0__UpdateFunc_Params
{
};

// Function B_BGA_ProximityMine.B_BGA_ProximityMine_C.Scale Rings Up__FinishedFunc
struct AB_BGA_ProximityMine_C_Scale_Rings_Up__FinishedFunc_Params
{
};

// Function B_BGA_ProximityMine.B_BGA_ProximityMine_C.Scale Rings Up__UpdateFunc
struct AB_BGA_ProximityMine_C_Scale_Rings_Up__UpdateFunc_Params
{
};

// Function B_BGA_ProximityMine.B_BGA_ProximityMine_C.Scale Ring In__FinishedFunc
struct AB_BGA_ProximityMine_C_Scale_Ring_In__FinishedFunc_Params
{
};

// Function B_BGA_ProximityMine.B_BGA_ProximityMine_C.Scale Ring In__UpdateFunc
struct AB_BGA_ProximityMine_C_Scale_Ring_In__UpdateFunc_Params
{
};

// Function B_BGA_ProximityMine.B_BGA_ProximityMine_C.ScaleDownAll__FinishedFunc
struct AB_BGA_ProximityMine_C_ScaleDownAll__FinishedFunc_Params
{
};

// Function B_BGA_ProximityMine.B_BGA_ProximityMine_C.ScaleDownAll__UpdateFunc
struct AB_BGA_ProximityMine_C_ScaleDownAll__UpdateFunc_Params
{
};

// Function B_BGA_ProximityMine.B_BGA_ProximityMine_C.SetProjectile
struct AB_BGA_ProximityMine_C_SetProjectile_Params
{
	float                                              Init_Speed;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Gravity;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Activation_Delay;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function B_BGA_ProximityMine.B_BGA_ProximityMine_C.ReceiveHit
struct AB_BGA_ProximityMine_C_ReceiveHit_Params
{
	class UPrimitiveComponent*                         MyComp;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AActor*                                      Other;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UPrimitiveComponent*                         OtherComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bSelfMoved;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     HitLocation;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     HitNormal;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     NormalImpulse;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  Hit;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function B_BGA_ProximityMine.B_BGA_ProximityMine_C.ReceiveBeginPlay
struct AB_BGA_ProximityMine_C_ReceiveBeginPlay_Params
{
};

// Function B_BGA_ProximityMine.B_BGA_ProximityMine_C.StopSpin
struct AB_BGA_ProximityMine_C_StopSpin_Params
{
};

// Function B_BGA_ProximityMine.B_BGA_ProximityMine_C.OnDamageServer
struct AB_BGA_ProximityMine_C_OnDamageServer_Params
{
	float                                              Damage;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayTagContainer                       DamageTags;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector                                     Momentum;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  HitInfo;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	class AController*                                 InstigatedBy;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AActor*                                      DamageCauser;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayEffectContextHandle                EffectContext;                                             // (Parm)
};

// Function B_BGA_ProximityMine.B_BGA_ProximityMine_C.DamageExplode
struct AB_BGA_ProximityMine_C_DamageExplode_Params
{
};

// Function B_BGA_ProximityMine.B_BGA_ProximityMine_C.StartSpin
struct AB_BGA_ProximityMine_C_StartSpin_Params
{
};

// Function B_BGA_ProximityMine.B_BGA_ProximityMine_C.GameplayCue.Abilities.Activation.Generic.proxymine
struct AB_BGA_ProximityMine_C_GameplayCue_Abilities_Activation_Generic_proxymine_Params
{
	TEnumAsByte<GameplayAbilities_EGameplayCueEvent>   EventType;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayCueParameters                      Parameters;                                                // (Parm)
};

// Function B_BGA_ProximityMine.B_BGA_ProximityMine_C.SetExplosion
struct AB_BGA_ProximityMine_C_SetExplosion_Params
{
	int                                                Explosion_Level;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Activation_Radius;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AFortPlayerPawn*                             PlayerPawn;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function B_BGA_ProximityMine.B_BGA_ProximityMine_C.BaseDied
struct AB_BGA_ProximityMine_C_BaseDied_Params
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

// Function B_BGA_ProximityMine.B_BGA_ProximityMine_C.BaseDestroyed
struct AB_BGA_ProximityMine_C_BaseDestroyed_Params
{
};

// Function B_BGA_ProximityMine.B_BGA_ProximityMine_C.BndEvt__S_HalfSphere_Collision_1_Unit_K2Node_ComponentBoundEvent_420_ComponentBeginOverlapSignature__DelegateSignature
struct AB_BGA_ProximityMine_C_BndEvt__S_HalfSphere_Collision_1_Unit_K2Node_ComponentBoundEvent_420_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UPrimitiveComponent*                         OtherComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                OtherBodyIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bFromSweep;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  SweepResult;                                               // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function B_BGA_ProximityMine.B_BGA_ProximityMine_C.Beacon Loop
struct AB_BGA_ProximityMine_C_Beacon_Loop_Params
{
};

// Function B_BGA_ProximityMine.B_BGA_ProximityMine_C.ExecuteUbergraph_B_BGA_ProximityMine
struct AB_BGA_ProximityMine_C_ExecuteUbergraph_B_BGA_ProximityMine_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
