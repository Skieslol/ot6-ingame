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

// Function GA_Constructor_PlasmaPulse.GA_Constructor_PlasmaPulse_C.DarkHackyMath
struct UGA_Constructor_PlasmaPulse_C_DarkHackyMath_Params
{
	float                                              SetByCallerValue;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GA_Constructor_PlasmaPulse.GA_Constructor_PlasmaPulse_C.SpawnMiniPulses
struct UGA_Constructor_PlasmaPulse_C_SpawnMiniPulses_Params
{
	struct FVector                                     HitLocation;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FFortGameplayEffectContainerSpec            EffectContainerSpec;                                       // (Parm)
	class AActor*                                      ParentPulse;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GA_Constructor_PlasmaPulse.GA_Constructor_PlasmaPulse_C.SetupPlasmaPulse
struct UGA_Constructor_PlasmaPulse_C_SetupPlasmaPulse_Params
{
	class UAbilitySystemComponent*                     Ability_System_Component;                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Spawn_Location;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                                    Spawn_Rotation;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FFortGameplayEffectContainerSpec            Plasma_Explosion;                                          // (Parm, OutParm)
	struct FFortGameplayEffectContainerSpec            Mini_Explosion;                                            // (Parm, OutParm)
};

// Function GA_Constructor_PlasmaPulse.GA_Constructor_PlasmaPulse_C.Destroyed_76104D9B4F6C3F61303653918697EC35
struct UGA_Constructor_PlasmaPulse_C_Destroyed_76104D9B4F6C3F61303653918697EC35_Params
{
	struct FProjectileEventData                        ProjectileData;                                            // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function GA_Constructor_PlasmaPulse.GA_Constructor_PlasmaPulse_C.Exploded_76104D9B4F6C3F61303653918697EC35
struct UGA_Constructor_PlasmaPulse_C_Exploded_76104D9B4F6C3F61303653918697EC35_Params
{
	struct FProjectileEventData                        ProjectileData;                                            // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function GA_Constructor_PlasmaPulse.GA_Constructor_PlasmaPulse_C.Stopped_76104D9B4F6C3F61303653918697EC35
struct UGA_Constructor_PlasmaPulse_C_Stopped_76104D9B4F6C3F61303653918697EC35_Params
{
	struct FProjectileEventData                        ProjectileData;                                            // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function GA_Constructor_PlasmaPulse.GA_Constructor_PlasmaPulse_C.Bounced_76104D9B4F6C3F61303653918697EC35
struct UGA_Constructor_PlasmaPulse_C_Bounced_76104D9B4F6C3F61303653918697EC35_Params
{
	struct FProjectileEventData                        ProjectileData;                                            // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function GA_Constructor_PlasmaPulse.GA_Constructor_PlasmaPulse_C.Touched_76104D9B4F6C3F61303653918697EC35
struct UGA_Constructor_PlasmaPulse_C_Touched_76104D9B4F6C3F61303653918697EC35_Params
{
	struct FProjectileEventData                        ProjectileData;                                            // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function GA_Constructor_PlasmaPulse.GA_Constructor_PlasmaPulse_C.Created_76104D9B4F6C3F61303653918697EC35
struct UGA_Constructor_PlasmaPulse_C_Created_76104D9B4F6C3F61303653918697EC35_Params
{
	struct FProjectileEventData                        ProjectileData;                                            // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function GA_Constructor_PlasmaPulse.GA_Constructor_PlasmaPulse_C.Completed_6AC3F9A4491B91FDE0457DAC0E8B468B
struct UGA_Constructor_PlasmaPulse_C_Completed_6AC3F9A4491B91FDE0457DAC0E8B468B_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                            // (Parm)
};

// Function GA_Constructor_PlasmaPulse.GA_Constructor_PlasmaPulse_C.Cancelled_6AC3F9A4491B91FDE0457DAC0E8B468B
struct UGA_Constructor_PlasmaPulse_C_Cancelled_6AC3F9A4491B91FDE0457DAC0E8B468B_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                            // (Parm)
};

// Function GA_Constructor_PlasmaPulse.GA_Constructor_PlasmaPulse_C.Triggered_6AC3F9A4491B91FDE0457DAC0E8B468B
struct UGA_Constructor_PlasmaPulse_C_Triggered_6AC3F9A4491B91FDE0457DAC0E8B468B_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                            // (Parm)
};

// Function GA_Constructor_PlasmaPulse.GA_Constructor_PlasmaPulse_C.K2_ActivateAbility
struct UGA_Constructor_PlasmaPulse_C_K2_ActivateAbility_Params
{
};

// Function GA_Constructor_PlasmaPulse.GA_Constructor_PlasmaPulse_C.ExecuteUbergraph_GA_Constructor_PlasmaPulse
struct UGA_Constructor_PlasmaPulse_C_ExecuteUbergraph_GA_Constructor_PlasmaPulse_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
