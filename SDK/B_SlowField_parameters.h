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

// Function B_SlowField.B_SlowField_C.SetTeamColorsVFX
struct AB_SlowField_C_SetTeamColorsVFX_Params
{
};

// Function B_SlowField.B_SlowField_C.OnRep_IsDeployed
struct AB_SlowField_C_OnRep_IsDeployed_Params
{
};

// Function B_SlowField.B_SlowField_C.UserConstructionScript
struct AB_SlowField_C_UserConstructionScript_Params
{
};

// Function B_SlowField.B_SlowField_C.SlowPP__FinishedFunc
struct AB_SlowField_C_SlowPP__FinishedFunc_Params
{
};

// Function B_SlowField.B_SlowField_C.SlowPP__UpdateFunc
struct AB_SlowField_C_SlowPP__UpdateFunc_Params
{
};

// Function B_SlowField.B_SlowField_C.Audio Powerdown__FinishedFunc
struct AB_SlowField_C_Audio_Powerdown__FinishedFunc_Params
{
};

// Function B_SlowField.B_SlowField_C.Audio Powerdown__UpdateFunc
struct AB_SlowField_C_Audio_Powerdown__UpdateFunc_Params
{
};

// Function B_SlowField.B_SlowField_C.MaterializeCylinder__FinishedFunc
struct AB_SlowField_C_MaterializeCylinder__FinishedFunc_Params
{
};

// Function B_SlowField.B_SlowField_C.MaterializeCylinder__UpdateFunc
struct AB_SlowField_C_MaterializeCylinder__UpdateFunc_Params
{
};

// Function B_SlowField.B_SlowField_C.OnDeathPlayEffects
struct AB_SlowField_C_OnDeathPlayEffects_Params
{
	float                                              Damage;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayTagContainer                       DamageTags;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector                                     Momentum;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  HitInfo;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	class AFortPawn*                                   InstigatedBy;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AActor*                                      DamageCauser;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayEffectContextHandle                EffectContext;                                             // (Parm)
};

// Function B_SlowField.B_SlowField_C.BndEvt__SlowFieldOverlapCylinder_K2Node_ComponentBoundEvent_233_ComponentBeginOverlapSignature__DelegateSignature
struct AB_SlowField_C_BndEvt__SlowFieldOverlapCylinder_K2Node_ComponentBoundEvent_233_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UPrimitiveComponent*                         OtherComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                OtherBodyIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bFromSweep;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  SweepResult;                                               // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function B_SlowField.B_SlowField_C.BndEvt__SlowFieldOverlapCylinder_K2Node_ComponentBoundEvent_242_ComponentEndOverlapSignature__DelegateSignature
struct AB_SlowField_C_BndEvt__SlowFieldOverlapCylinder_K2Node_ComponentBoundEvent_242_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UPrimitiveComponent*                         OtherComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                OtherBodyIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function B_SlowField.B_SlowField_C.PP_Activate
struct AB_SlowField_C_PP_Activate_Params
{
};

// Function B_SlowField.B_SlowField_C.PP_Deactivate
struct AB_SlowField_C_PP_Deactivate_Params
{
};

// Function B_SlowField.B_SlowField_C.PassInfo
struct AB_SlowField_C_PassInfo_Params
{
	float                                              Height;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Radius;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Activation_Delay;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function B_SlowField.B_SlowField_C.Beacon Loop
struct AB_SlowField_C_Beacon_Loop_Params
{
};

// Function B_SlowField.B_SlowField_C.BndEvt__ProjMovementComp_K2Node_ComponentBoundEvent_228_OnProjectileBounceDelegate__DelegateSignature
struct AB_SlowField_C_BndEvt__ProjMovementComp_K2Node_ComponentBoundEvent_228_OnProjectileBounceDelegate__DelegateSignature_Params
{
	struct FHitResult                                  ImpactResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	struct FVector                                     ImpactVelocity;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
};

// Function B_SlowField.B_SlowField_C.OnLocalPlayerDeath
struct AB_SlowField_C_OnLocalPlayerDeath_Params
{
	class AActor*                                      DeadActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Damage;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AFortPawn*                                   InstigatedBy;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     HitLocation;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AActor*                                      DamageCauser;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function B_SlowField.B_SlowField_C.ExecuteUbergraph_B_SlowField
struct AB_SlowField_C_ExecuteUbergraph_B_SlowField_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
