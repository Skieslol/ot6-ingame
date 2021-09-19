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

// Function GA_Ninja_SmokeBomb.GA_Ninja_SmokeBomb_C.ThrowSmokeBomb
struct UGA_Ninja_SmokeBomb_C_ThrowSmokeBomb_Params
{
	class APlayerPawn_Ninja_C*                         Requestor;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Location;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                                    Rotation;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FFortGameplayEffectContainerSpec            EffectSpec;                                                // (Parm, OutParm)
};

// Function GA_Ninja_SmokeBomb.GA_Ninja_SmokeBomb_C.Completed_3644944049E84BE80D314DBC53F664CB
struct UGA_Ninja_SmokeBomb_C_Completed_3644944049E84BE80D314DBC53F664CB_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                            // (Parm)
};

// Function GA_Ninja_SmokeBomb.GA_Ninja_SmokeBomb_C.Cancelled_3644944049E84BE80D314DBC53F664CB
struct UGA_Ninja_SmokeBomb_C_Cancelled_3644944049E84BE80D314DBC53F664CB_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                            // (Parm)
};

// Function GA_Ninja_SmokeBomb.GA_Ninja_SmokeBomb_C.Triggered_3644944049E84BE80D314DBC53F664CB
struct UGA_Ninja_SmokeBomb_C_Triggered_3644944049E84BE80D314DBC53F664CB_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                            // (Parm)
};

// Function GA_Ninja_SmokeBomb.GA_Ninja_SmokeBomb_C.Destroyed_4C7C12404F5C962CA59DD49973166CB9
struct UGA_Ninja_SmokeBomb_C_Destroyed_4C7C12404F5C962CA59DD49973166CB9_Params
{
	struct FProjectileEventData                        ProjectileData;                                            // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function GA_Ninja_SmokeBomb.GA_Ninja_SmokeBomb_C.Exploded_4C7C12404F5C962CA59DD49973166CB9
struct UGA_Ninja_SmokeBomb_C_Exploded_4C7C12404F5C962CA59DD49973166CB9_Params
{
	struct FProjectileEventData                        ProjectileData;                                            // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function GA_Ninja_SmokeBomb.GA_Ninja_SmokeBomb_C.Stopped_4C7C12404F5C962CA59DD49973166CB9
struct UGA_Ninja_SmokeBomb_C_Stopped_4C7C12404F5C962CA59DD49973166CB9_Params
{
	struct FProjectileEventData                        ProjectileData;                                            // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function GA_Ninja_SmokeBomb.GA_Ninja_SmokeBomb_C.Bounced_4C7C12404F5C962CA59DD49973166CB9
struct UGA_Ninja_SmokeBomb_C_Bounced_4C7C12404F5C962CA59DD49973166CB9_Params
{
	struct FProjectileEventData                        ProjectileData;                                            // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function GA_Ninja_SmokeBomb.GA_Ninja_SmokeBomb_C.Touched_4C7C12404F5C962CA59DD49973166CB9
struct UGA_Ninja_SmokeBomb_C_Touched_4C7C12404F5C962CA59DD49973166CB9_Params
{
	struct FProjectileEventData                        ProjectileData;                                            // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function GA_Ninja_SmokeBomb.GA_Ninja_SmokeBomb_C.Created_4C7C12404F5C962CA59DD49973166CB9
struct UGA_Ninja_SmokeBomb_C_Created_4C7C12404F5C962CA59DD49973166CB9_Params
{
	struct FProjectileEventData                        ProjectileData;                                            // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function GA_Ninja_SmokeBomb.GA_Ninja_SmokeBomb_C.K2_ActivateAbility
struct UGA_Ninja_SmokeBomb_C_K2_ActivateAbility_Params
{
};

// Function GA_Ninja_SmokeBomb.GA_Ninja_SmokeBomb_C.ExecuteUbergraph_GA_Ninja_SmokeBomb
struct UGA_Ninja_SmokeBomb_C_ExecuteUbergraph_GA_Ninja_SmokeBomb_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
