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

// Function GA_Ninja_DragonSlash.GA_Ninja_DragonSlash_C.SetWeaponVisibility
struct UGA_Ninja_DragonSlash_C_SetWeaponVisibility_Params
{
	bool                                               Ability_Active;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GA_Ninja_DragonSlash.GA_Ninja_DragonSlash_C.SetupCollision
struct UGA_Ninja_DragonSlash_C_SetupCollision_Params
{
	class APlayerPawn_Ninja_C*                         Ninja_Pawn;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GA_Ninja_DragonSlash.GA_Ninja_DragonSlash_C.SetupAbility
struct UGA_Ninja_DragonSlash_C_SetupAbility_Params
{
};

// Function GA_Ninja_DragonSlash.GA_Ninja_DragonSlash_C.ApplyDamageToTarget
struct UGA_Ninja_DragonSlash_C_ApplyDamageToTarget_Params
{
	class AActor*                                      Hit_Actor;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class APlayerPawn_Ninja_C*                         Ninja_Pawn;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GA_Ninja_DragonSlash.GA_Ninja_DragonSlash_C.Completed_28380CAC46B6057F2BF9DFAD8C7B8F2A
struct UGA_Ninja_DragonSlash_C_Completed_28380CAC46B6057F2BF9DFAD8C7B8F2A_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                            // (Parm)
};

// Function GA_Ninja_DragonSlash.GA_Ninja_DragonSlash_C.Cancelled_28380CAC46B6057F2BF9DFAD8C7B8F2A
struct UGA_Ninja_DragonSlash_C_Cancelled_28380CAC46B6057F2BF9DFAD8C7B8F2A_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                            // (Parm)
};

// Function GA_Ninja_DragonSlash.GA_Ninja_DragonSlash_C.Triggered_28380CAC46B6057F2BF9DFAD8C7B8F2A
struct UGA_Ninja_DragonSlash_C_Triggered_28380CAC46B6057F2BF9DFAD8C7B8F2A_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                            // (Parm)
};

// Function GA_Ninja_DragonSlash.GA_Ninja_DragonSlash_C.OnFinish_9B08D05C4E0F86CA462DDE9A829D7C13
struct UGA_Ninja_DragonSlash_C_OnFinish_9B08D05C4E0F86CA462DDE9A829D7C13_Params
{
};

// Function GA_Ninja_DragonSlash.GA_Ninja_DragonSlash_C.OnFinish_5E00AB5343CB83D80843BE94EC51F21E
struct UGA_Ninja_DragonSlash_C_OnFinish_5E00AB5343CB83D80843BE94EC51F21E_Params
{
};

// Function GA_Ninja_DragonSlash.GA_Ninja_DragonSlash_C.K2_ActivateAbility
struct UGA_Ninja_DragonSlash_C_K2_ActivateAbility_Params
{
};

// Function GA_Ninja_DragonSlash.GA_Ninja_DragonSlash_C.K2_OnEndAbility
struct UGA_Ninja_DragonSlash_C_K2_OnEndAbility_Params
{
};

// Function GA_Ninja_DragonSlash.GA_Ninja_DragonSlash_C.OverlapActors
struct UGA_Ninja_DragonSlash_C_OverlapActors_Params
{
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UPrimitiveComponent*                         OtherComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                OtherBodyIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bFromSweep;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  SweepResult;                                               // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function GA_Ninja_DragonSlash.GA_Ninja_DragonSlash_C.BeginAOETrail
struct UGA_Ninja_DragonSlash_C_BeginAOETrail_Params
{
};

// Function GA_Ninja_DragonSlash.GA_Ninja_DragonSlash_C.TrySpawnAOETrail
struct UGA_Ninja_DragonSlash_C_TrySpawnAOETrail_Params
{
};

// Function GA_Ninja_DragonSlash.GA_Ninja_DragonSlash_C.ExecuteUbergraph_GA_Ninja_DragonSlash
struct UGA_Ninja_DragonSlash_C_ExecuteUbergraph_GA_Ninja_DragonSlash_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
