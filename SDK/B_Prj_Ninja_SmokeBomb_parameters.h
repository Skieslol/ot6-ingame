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

// Function B_Prj_Ninja_SmokeBomb.B_Prj_Ninja_SmokeBomb_C.UserConstructionScript
struct AB_Prj_Ninja_SmokeBomb_C_UserConstructionScript_Params
{
};

// Function B_Prj_Ninja_SmokeBomb.B_Prj_Ninja_SmokeBomb_C.ReceiveHit
struct AB_Prj_Ninja_SmokeBomb_C_ReceiveHit_Params
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

// Function B_Prj_Ninja_SmokeBomb.B_Prj_Ninja_SmokeBomb_C.OnExploded
struct AB_Prj_Ninja_SmokeBomb_C_OnExploded_Params
{
	TArray<class AActor*>                              HitActors;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FHitResult>                          HitResults;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
};

// Function B_Prj_Ninja_SmokeBomb.B_Prj_Ninja_SmokeBomb_C.ExecuteUbergraph_B_Prj_Ninja_SmokeBomb
struct AB_Prj_Ninja_SmokeBomb_C_ExecuteUbergraph_B_Prj_Ninja_SmokeBomb_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
