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

// Function ProjectileHuskLobber_Poison.ProjectileHuskLobber_Poison_C.Is Valid Damage Target
struct AProjectileHuskLobber_Poison_C_Is_Valid_Damage_Target_Params
{
	class AActor*                                      CollidingActor;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Is_Valid_Damage_Target;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AFortPawn*                                   Valid_Pawn;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ProjectileHuskLobber_Poison.ProjectileHuskLobber_Poison_C.UserConstructionScript
struct AProjectileHuskLobber_Poison_C_UserConstructionScript_Params
{
};

// Function ProjectileHuskLobber_Poison.ProjectileHuskLobber_Poison_C.Timeline_0__FinishedFunc
struct AProjectileHuskLobber_Poison_C_Timeline_0__FinishedFunc_Params
{
};

// Function ProjectileHuskLobber_Poison.ProjectileHuskLobber_Poison_C.Timeline_0__UpdateFunc
struct AProjectileHuskLobber_Poison_C_Timeline_0__UpdateFunc_Params
{
};

// Function ProjectileHuskLobber_Poison.ProjectileHuskLobber_Poison_C.ReceiveHit
struct AProjectileHuskLobber_Poison_C_ReceiveHit_Params
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

// Function ProjectileHuskLobber_Poison.ProjectileHuskLobber_Poison_C.EndCloud
struct AProjectileHuskLobber_Poison_C_EndCloud_Params
{
};

// Function ProjectileHuskLobber_Poison.ProjectileHuskLobber_Poison_C.BndEvt__PoisonArea_K2Node_ComponentBoundEvent_97_ComponentEndOverlapSignature__DelegateSignature
struct AProjectileHuskLobber_Poison_C_BndEvt__PoisonArea_K2Node_ComponentBoundEvent_97_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UPrimitiveComponent*                         OtherComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                OtherBodyIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ProjectileHuskLobber_Poison.ProjectileHuskLobber_Poison_C.ExecuteUbergraph_ProjectileHuskLobber_Poison
struct AProjectileHuskLobber_Poison_C_ExecuteUbergraph_ProjectileHuskLobber_Poison_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
