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

// Function B_Prj_BotTurret.B_Prj_BotTurret_C.SetTeamColorVFX
struct AB_Prj_BotTurret_C_SetTeamColorVFX_Params
{
};

// Function B_Prj_BotTurret.B_Prj_BotTurret_C.OnRep_Bounce
struct AB_Prj_BotTurret_C_OnRep_Bounce_Params
{
};

// Function B_Prj_BotTurret.B_Prj_BotTurret_C.OnRep_ShouldBounce
struct AB_Prj_BotTurret_C_OnRep_ShouldBounce_Params
{
};

// Function B_Prj_BotTurret.B_Prj_BotTurret_C.UserConstructionScript
struct AB_Prj_BotTurret_C_UserConstructionScript_Params
{
};

// Function B_Prj_BotTurret.B_Prj_BotTurret_C.ReceiveBeginPlay
struct AB_Prj_BotTurret_C_ReceiveBeginPlay_Params
{
};

// Function B_Prj_BotTurret.B_Prj_BotTurret_C.ReceiveHit
struct AB_Prj_BotTurret_C_ReceiveHit_Params
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

// Function B_Prj_BotTurret.B_Prj_BotTurret_C.ReceiveActorBeginOverlap
struct AB_Prj_BotTurret_C_ReceiveActorBeginOverlap_Params
{
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function B_Prj_BotTurret.B_Prj_BotTurret_C.HitStaticMesh
struct AB_Prj_BotTurret_C_HitStaticMesh_Params
{
};

// Function B_Prj_BotTurret.B_Prj_BotTurret_C.Hit Pawn
struct AB_Prj_BotTurret_C_Hit_Pawn_Params
{
};

// Function B_Prj_BotTurret.B_Prj_BotTurret_C.OnExploded
struct AB_Prj_BotTurret_C_OnExploded_Params
{
	TArray<class AActor*>                              HitActors;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FHitResult>                          HitResults;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
};

// Function B_Prj_BotTurret.B_Prj_BotTurret_C.OnBounce
struct AB_Prj_BotTurret_C_OnBounce_Params
{
	struct FHitResult                                  Hit;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function B_Prj_BotTurret.B_Prj_BotTurret_C.ExecuteUbergraph_B_Prj_BotTurret
struct AB_Prj_BotTurret_C_ExecuteUbergraph_B_Prj_BotTurret_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
