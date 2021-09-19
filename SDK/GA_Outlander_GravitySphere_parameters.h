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

// Function GA_Outlander_GravitySphere.GA_Outlander_GravitySphere_C.GetCustomAbilitySourceTransform
struct UGA_Outlander_GravitySphere_C_GetCustomAbilitySourceTransform_Params
{
	struct FTransform                                  ReturnValue;                                               // (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function GA_Outlander_GravitySphere.GA_Outlander_GravitySphere_C.DamageTargets
struct UGA_Outlander_GravitySphere_C_DamageTargets_Params
{
	struct FProjectileEventData                        ProjectileEventData;                                       // (Parm, ContainsInstancedReference)
};

// Function GA_Outlander_GravitySphere.GA_Outlander_GravitySphere_C.SetupCollector
struct UGA_Outlander_GravitySphere_C_SetupCollector_Params
{
	class UClass*                                      MatterCollector;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     SpawnLocation;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                                    ProjectileRotation;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              MatterSpeed;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              MatterGravity;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FFortGameplayEffectContainerSpec            TargetSpec;                                                // (Parm, OutParm)
};

// Function GA_Outlander_GravitySphere.GA_Outlander_GravitySphere_C.Destroyed_E1B7FD7947617E82F2B80E9DEA42A6E8
struct UGA_Outlander_GravitySphere_C_Destroyed_E1B7FD7947617E82F2B80E9DEA42A6E8_Params
{
	struct FProjectileEventData                        ProjectileData;                                            // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function GA_Outlander_GravitySphere.GA_Outlander_GravitySphere_C.Exploded_E1B7FD7947617E82F2B80E9DEA42A6E8
struct UGA_Outlander_GravitySphere_C_Exploded_E1B7FD7947617E82F2B80E9DEA42A6E8_Params
{
	struct FProjectileEventData                        ProjectileData;                                            // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function GA_Outlander_GravitySphere.GA_Outlander_GravitySphere_C.Stopped_E1B7FD7947617E82F2B80E9DEA42A6E8
struct UGA_Outlander_GravitySphere_C_Stopped_E1B7FD7947617E82F2B80E9DEA42A6E8_Params
{
	struct FProjectileEventData                        ProjectileData;                                            // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function GA_Outlander_GravitySphere.GA_Outlander_GravitySphere_C.Bounced_E1B7FD7947617E82F2B80E9DEA42A6E8
struct UGA_Outlander_GravitySphere_C_Bounced_E1B7FD7947617E82F2B80E9DEA42A6E8_Params
{
	struct FProjectileEventData                        ProjectileData;                                            // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function GA_Outlander_GravitySphere.GA_Outlander_GravitySphere_C.Touched_E1B7FD7947617E82F2B80E9DEA42A6E8
struct UGA_Outlander_GravitySphere_C_Touched_E1B7FD7947617E82F2B80E9DEA42A6E8_Params
{
	struct FProjectileEventData                        ProjectileData;                                            // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function GA_Outlander_GravitySphere.GA_Outlander_GravitySphere_C.Created_E1B7FD7947617E82F2B80E9DEA42A6E8
struct UGA_Outlander_GravitySphere_C_Created_E1B7FD7947617E82F2B80E9DEA42A6E8_Params
{
	struct FProjectileEventData                        ProjectileData;                                            // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function GA_Outlander_GravitySphere.GA_Outlander_GravitySphere_C.Completed_A8F6F5F8468ED284B63ADFA133F95943
struct UGA_Outlander_GravitySphere_C_Completed_A8F6F5F8468ED284B63ADFA133F95943_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                            // (Parm)
};

// Function GA_Outlander_GravitySphere.GA_Outlander_GravitySphere_C.Cancelled_A8F6F5F8468ED284B63ADFA133F95943
struct UGA_Outlander_GravitySphere_C_Cancelled_A8F6F5F8468ED284B63ADFA133F95943_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                            // (Parm)
};

// Function GA_Outlander_GravitySphere.GA_Outlander_GravitySphere_C.Triggered_A8F6F5F8468ED284B63ADFA133F95943
struct UGA_Outlander_GravitySphere_C_Triggered_A8F6F5F8468ED284B63ADFA133F95943_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                            // (Parm)
};

// Function GA_Outlander_GravitySphere.GA_Outlander_GravitySphere_C.K2_ActivateAbility
struct UGA_Outlander_GravitySphere_C_K2_ActivateAbility_Params
{
};

// Function GA_Outlander_GravitySphere.GA_Outlander_GravitySphere_C.ExecuteUbergraph_GA_Outlander_GravitySphere
struct UGA_Outlander_GravitySphere_C_ExecuteUbergraph_GA_Outlander_GravitySphere_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
