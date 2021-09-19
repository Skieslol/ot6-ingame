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

// Function GA_Commando_FragGrenade.GA_Commando_FragGrenade_C.KeepOut
struct UGA_Commando_FragGrenade_C_KeepOut_Params
{
	struct FProjectileEventData                        Projectile_Data;                                           // (Parm, ContainsInstancedReference)
};

// Function GA_Commando_FragGrenade.GA_Commando_FragGrenade_C.PerfectEngineering
struct UGA_Commando_FragGrenade_C_PerfectEngineering_Params
{
	struct FProjectileEventData                        Projectile_Data;                                           // (Parm, ContainsInstancedReference)
};

// Function GA_Commando_FragGrenade.GA_Commando_FragGrenade_C.ActivateClusterBombs
struct UGA_Commando_FragGrenade_C_ActivateClusterBombs_Params
{
	struct FProjectileEventData                        Projectile_Data;                                           // (Parm, ContainsInstancedReference)
};

// Function GA_Commando_FragGrenade.GA_Commando_FragGrenade_C.ThrowGrenade
struct UGA_Commando_FragGrenade_C_ThrowGrenade_Params
{
	class UAbilitySystemComponent*                     AbilitySystemComponent;                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UClass*                                      Base_Grenade;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Spawn_Location;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                                    Spawn_Rotation;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Projectile_Speed;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Projectile_Gravity;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FFortGameplayEffectContainerSpec            Explosion_Gameplay_Spec;                                   // (Parm, OutParm)
};

// Function GA_Commando_FragGrenade.GA_Commando_FragGrenade_C.Destroyed_A0715E3447A5D46682E46A89960E35AA
struct UGA_Commando_FragGrenade_C_Destroyed_A0715E3447A5D46682E46A89960E35AA_Params
{
	struct FProjectileEventData                        ProjectileData;                                            // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function GA_Commando_FragGrenade.GA_Commando_FragGrenade_C.Exploded_A0715E3447A5D46682E46A89960E35AA
struct UGA_Commando_FragGrenade_C_Exploded_A0715E3447A5D46682E46A89960E35AA_Params
{
	struct FProjectileEventData                        ProjectileData;                                            // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function GA_Commando_FragGrenade.GA_Commando_FragGrenade_C.Stopped_A0715E3447A5D46682E46A89960E35AA
struct UGA_Commando_FragGrenade_C_Stopped_A0715E3447A5D46682E46A89960E35AA_Params
{
	struct FProjectileEventData                        ProjectileData;                                            // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function GA_Commando_FragGrenade.GA_Commando_FragGrenade_C.Bounced_A0715E3447A5D46682E46A89960E35AA
struct UGA_Commando_FragGrenade_C_Bounced_A0715E3447A5D46682E46A89960E35AA_Params
{
	struct FProjectileEventData                        ProjectileData;                                            // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function GA_Commando_FragGrenade.GA_Commando_FragGrenade_C.Touched_A0715E3447A5D46682E46A89960E35AA
struct UGA_Commando_FragGrenade_C_Touched_A0715E3447A5D46682E46A89960E35AA_Params
{
	struct FProjectileEventData                        ProjectileData;                                            // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function GA_Commando_FragGrenade.GA_Commando_FragGrenade_C.Created_A0715E3447A5D46682E46A89960E35AA
struct UGA_Commando_FragGrenade_C_Created_A0715E3447A5D46682E46A89960E35AA_Params
{
	struct FProjectileEventData                        ProjectileData;                                            // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function GA_Commando_FragGrenade.GA_Commando_FragGrenade_C.Completed_DE7AD8FA464F26E37AC20281DAD7839E
struct UGA_Commando_FragGrenade_C_Completed_DE7AD8FA464F26E37AC20281DAD7839E_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                            // (Parm)
};

// Function GA_Commando_FragGrenade.GA_Commando_FragGrenade_C.Cancelled_DE7AD8FA464F26E37AC20281DAD7839E
struct UGA_Commando_FragGrenade_C_Cancelled_DE7AD8FA464F26E37AC20281DAD7839E_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                            // (Parm)
};

// Function GA_Commando_FragGrenade.GA_Commando_FragGrenade_C.Triggered_DE7AD8FA464F26E37AC20281DAD7839E
struct UGA_Commando_FragGrenade_C_Triggered_DE7AD8FA464F26E37AC20281DAD7839E_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                            // (Parm)
};

// Function GA_Commando_FragGrenade.GA_Commando_FragGrenade_C.OnFinish_978FA3324D06E995EB838282AB600A46
struct UGA_Commando_FragGrenade_C_OnFinish_978FA3324D06E995EB838282AB600A46_Params
{
};

// Function GA_Commando_FragGrenade.GA_Commando_FragGrenade_C.K2_ActivateAbility
struct UGA_Commando_FragGrenade_C_K2_ActivateAbility_Params
{
};

// Function GA_Commando_FragGrenade.GA_Commando_FragGrenade_C.ExecuteUbergraph_GA_Commando_FragGrenade
struct UGA_Commando_FragGrenade_C_ExecuteUbergraph_GA_Commando_FragGrenade_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
