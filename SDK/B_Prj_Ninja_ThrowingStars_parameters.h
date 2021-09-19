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

// Function B_Prj_Ninja_ThrowingStars.B_Prj_Ninja_ThrowingStars_C.OnRep_Piercing
struct AB_Prj_Ninja_ThrowingStars_C_OnRep_Piercing_Params
{
};

// Function B_Prj_Ninja_ThrowingStars.B_Prj_Ninja_ThrowingStars_C.OnRep_HitLocation
struct AB_Prj_Ninja_ThrowingStars_C_OnRep_HitLocation_Params
{
};

// Function B_Prj_Ninja_ThrowingStars.B_Prj_Ninja_ThrowingStars_C.UserConstructionScript
struct AB_Prj_Ninja_ThrowingStars_C_UserConstructionScript_Params
{
};

// Function B_Prj_Ninja_ThrowingStars.B_Prj_Ninja_ThrowingStars_C.ReceiveHit
struct AB_Prj_Ninja_ThrowingStars_C_ReceiveHit_Params
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

// Function B_Prj_Ninja_ThrowingStars.B_Prj_Ninja_ThrowingStars_C.OnExploded
struct AB_Prj_Ninja_ThrowingStars_C_OnExploded_Params
{
	TArray<class AActor*>                              HitActors;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FHitResult>                          HitResults;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
};

// Function B_Prj_Ninja_ThrowingStars.B_Prj_Ninja_ThrowingStars_C.SetHoming
struct AB_Prj_Ninja_ThrowingStars_C_SetHoming_Params
{
};

// Function B_Prj_Ninja_ThrowingStars.B_Prj_Ninja_ThrowingStars_C.HomeTargetDied
struct AB_Prj_Ninja_ThrowingStars_C_HomeTargetDied_Params
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

// Function B_Prj_Ninja_ThrowingStars.B_Prj_Ninja_ThrowingStars_C.ShouldPierce
struct AB_Prj_Ninja_ThrowingStars_C_ShouldPierce_Params
{
};

// Function B_Prj_Ninja_ThrowingStars.B_Prj_Ninja_ThrowingStars_C.BndEvt__CollisionBox_K2Node_ComponentBoundEvent_30_ComponentBeginOverlapSignature__DelegateSignature
struct AB_Prj_Ninja_ThrowingStars_C_BndEvt__CollisionBox_K2Node_ComponentBoundEvent_30_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UPrimitiveComponent*                         OtherComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                OtherBodyIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bFromSweep;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  SweepResult;                                               // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function B_Prj_Ninja_ThrowingStars.B_Prj_Ninja_ThrowingStars_C.ExecuteUbergraph_B_Prj_Ninja_ThrowingStars
struct AB_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
