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

// Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.OnRep_StoredHit
struct AB_Prj_Commando_FragGrenade_C_OnRep_StoredHit_Params
{
};

// Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.UserConstructionScript
struct AB_Prj_Commando_FragGrenade_C_UserConstructionScript_Params
{
};

// Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.Prj_Rotation__FinishedFunc
struct AB_Prj_Commando_FragGrenade_C_Prj_Rotation__FinishedFunc_Params
{
};

// Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.Prj_Rotation__UpdateFunc
struct AB_Prj_Commando_FragGrenade_C_Prj_Rotation__UpdateFunc_Params
{
};

// Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.ReceiveBeginPlay
struct AB_Prj_Commando_FragGrenade_C_ReceiveBeginPlay_Params
{
};

// Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.OnStop
struct AB_Prj_Commando_FragGrenade_C_OnStop_Params
{
	struct FHitResult                                  Hit;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.Stop_Rotation
struct AB_Prj_Commando_FragGrenade_C_Stop_Rotation_Params
{
};

// Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.OnExploded
struct AB_Prj_Commando_FragGrenade_C_OnExploded_Params
{
	TArray<class AActor*>                              HitActors;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FHitResult>                          HitResults;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
};

// Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.ReceiveAnyDamage
struct AB_Prj_Commando_FragGrenade_C_ReceiveAnyDamage_Params
{
	float                                              Damage;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UDamageType*                                 DamageType;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AController*                                 InstigatedBy;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AActor*                                      DamageCauser;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.OnBounce
struct AB_Prj_Commando_FragGrenade_C_OnBounce_Params
{
	struct FHitResult                                  Hit;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.ExecuteUbergraph_B_Prj_Commando_FragGrenade
struct AB_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
