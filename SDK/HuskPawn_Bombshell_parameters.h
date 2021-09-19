﻿#pragma once

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

// Function HuskPawn_Bombshell.HuskPawn_Bombshell_C.UserConstructionScript
struct AHuskPawn_Bombshell_C_UserConstructionScript_Params
{
};

// Function HuskPawn_Bombshell.HuskPawn_Bombshell_C.PawnUniqueIDSet
struct AHuskPawn_Bombshell_C_PawnUniqueIDSet_Params
{
};

// Function HuskPawn_Bombshell.HuskPawn_Bombshell_C.OnDeathPlayEffects
struct AHuskPawn_Bombshell_C_OnDeathPlayEffects_Params
{
	float                                              Damage;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayTagContainer                       DamageTags;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector                                     Momentum;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  HitInfo;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	class AFortPawn*                                   InstigatedBy;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AActor*                                      DamageCauser;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayEffectContextHandle                EffectContext;                                             // (Parm)
};

// Function HuskPawn_Bombshell.HuskPawn_Bombshell_C.ReceiveBeginPlay
struct AHuskPawn_Bombshell_C_ReceiveBeginPlay_Params
{
};

// Function HuskPawn_Bombshell.HuskPawn_Bombshell_C.ExecuteUbergraph_HuskPawn_Bombshell
struct AHuskPawn_Bombshell_C_ExecuteUbergraph_HuskPawn_Bombshell_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
