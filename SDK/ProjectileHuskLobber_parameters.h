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

// Function ProjectileHuskLobber.ProjectileHuskLobber_C.UserConstructionScript
struct AProjectileHuskLobber_C_UserConstructionScript_Params
{
};

// Function ProjectileHuskLobber.ProjectileHuskLobber_C.Timeline_0__FinishedFunc
struct AProjectileHuskLobber_C_Timeline_0__FinishedFunc_Params
{
};

// Function ProjectileHuskLobber.ProjectileHuskLobber_C.Timeline_0__UpdateFunc
struct AProjectileHuskLobber_C_Timeline_0__UpdateFunc_Params
{
};

// Function ProjectileHuskLobber.ProjectileHuskLobber_C.ReceiveHit
struct AProjectileHuskLobber_C_ReceiveHit_Params
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

// Function ProjectileHuskLobber.ProjectileHuskLobber_C.ExecuteUbergraph_ProjectileHuskLobber
struct AProjectileHuskLobber_C_ExecuteUbergraph_ProjectileHuskLobber_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
