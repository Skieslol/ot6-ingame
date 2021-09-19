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

// Function Prop_Explorer_OutlanderFragment_Llama.Prop_Explorer_OutlanderFragment_Llama_C.ShowHideModels
struct AProp_Explorer_OutlanderFragment_Llama_C_ShowHideModels_Params
{
	bool                                               Show_SkeletalMesh;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Prop_Explorer_OutlanderFragment_Llama.Prop_Explorer_OutlanderFragment_Llama_C.OnRep_KillParticle
struct AProp_Explorer_OutlanderFragment_Llama_C_OnRep_KillParticle_Params
{
};

// Function Prop_Explorer_OutlanderFragment_Llama.Prop_Explorer_OutlanderFragment_Llama_C.Llama_Lifespan_Expired
struct AProp_Explorer_OutlanderFragment_Llama_C_Llama_Lifespan_Expired_Params
{
};

// Function Prop_Explorer_OutlanderFragment_Llama.Prop_Explorer_OutlanderFragment_Llama_C.CreateAndAttachEyes
struct AProp_Explorer_OutlanderFragment_Llama_C_CreateAndAttachEyes_Params
{
	class USkeletalMeshComponent*                      Skeletal_Mesh;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Prop_Explorer_OutlanderFragment_Llama.Prop_Explorer_OutlanderFragment_Llama_C.SpawnHeadProjectile
struct AProp_Explorer_OutlanderFragment_Llama_C_SpawnHeadProjectile_Params
{
	class USkeletalMeshComponent*                      SkeletalMesh;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Prop_Explorer_OutlanderFragment_Llama.Prop_Explorer_OutlanderFragment_Llama_C.SetupDiamonds
struct AProp_Explorer_OutlanderFragment_Llama_C_SetupDiamonds_Params
{
};

// Function Prop_Explorer_OutlanderFragment_Llama.Prop_Explorer_OutlanderFragment_Llama_C.Spawn Death Ingrediants
struct AProp_Explorer_OutlanderFragment_Llama_C_Spawn_Death_Ingrediants_Params
{
};

// Function Prop_Explorer_OutlanderFragment_Llama.Prop_Explorer_OutlanderFragment_Llama_C.SpawnRareCrystals
struct AProp_Explorer_OutlanderFragment_Llama_C_SpawnRareCrystals_Params
{
};

// Function Prop_Explorer_OutlanderFragment_Llama.Prop_Explorer_OutlanderFragment_Llama_C.ConvertDamageToResources
struct AProp_Explorer_OutlanderFragment_Llama_C_ConvertDamageToResources_Params
{
	float                                              Dealt_Damage;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Damage_Threshold;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Spawn_Threshold;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                MaxSpawnGroups;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                AmountSpawnGroups;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UFortWorldItemDefinition*                    SpawnItem;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                CurrentSpawned;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              CarryOverDamage;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              DamageRemainder;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                AmountSpawned;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               FinishedSpawning;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Prop_Explorer_OutlanderFragment_Llama.Prop_Explorer_OutlanderFragment_Llama_C.RollIngrediants
struct AProp_Explorer_OutlanderFragment_Llama_C_RollIngrediants_Params
{
	class UFortIngredientItemDefinition*               SpawnItem;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Prop_Explorer_OutlanderFragment_Llama.Prop_Explorer_OutlanderFragment_Llama_C.RollCrystalType
struct AProp_Explorer_OutlanderFragment_Llama_C_RollCrystalType_Params
{
	class UFortWorldItemDefinition*                    RareCrystal;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Prop_Explorer_OutlanderFragment_Llama.Prop_Explorer_OutlanderFragment_Llama_C.UserConstructionScript
struct AProp_Explorer_OutlanderFragment_Llama_C_UserConstructionScript_Params
{
};

// Function Prop_Explorer_OutlanderFragment_Llama.Prop_Explorer_OutlanderFragment_Llama_C.Timeline_0__FinishedFunc
struct AProp_Explorer_OutlanderFragment_Llama_C_Timeline_0__FinishedFunc_Params
{
};

// Function Prop_Explorer_OutlanderFragment_Llama.Prop_Explorer_OutlanderFragment_Llama_C.Timeline_0__UpdateFunc
struct AProp_Explorer_OutlanderFragment_Llama_C_Timeline_0__UpdateFunc_Params
{
};

// Function Prop_Explorer_OutlanderFragment_Llama.Prop_Explorer_OutlanderFragment_Llama_C.ReceiveBeginPlay
struct AProp_Explorer_OutlanderFragment_Llama_C_ReceiveBeginPlay_Params
{
};

// Function Prop_Explorer_OutlanderFragment_Llama.Prop_Explorer_OutlanderFragment_Llama_C.OnDamageServer
struct AProp_Explorer_OutlanderFragment_Llama_C_OnDamageServer_Params
{
	float                                              Damage;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayTagContainer                       DamageTags;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector                                     Momentum;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  HitInfo;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	class AController*                                 InstigatedBy;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AActor*                                      DamageCauser;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayEffectContextHandle                EffectContext;                                             // (Parm)
};

// Function Prop_Explorer_OutlanderFragment_Llama.Prop_Explorer_OutlanderFragment_Llama_C.OnDeathServer
struct AProp_Explorer_OutlanderFragment_Llama_C_OnDeathServer_Params
{
	float                                              Damage;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayTagContainer                       DamageTags;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector                                     Momentum;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  HitInfo;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	class AController*                                 InstigatedBy;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AActor*                                      DamageCauser;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayEffectContextHandle                EffectContext;                                             // (Parm)
};

// Function Prop_Explorer_OutlanderFragment_Llama.Prop_Explorer_OutlanderFragment_Llama_C.DefaultLlama
struct AProp_Explorer_OutlanderFragment_Llama_C_DefaultLlama_Params
{
};

// Function Prop_Explorer_OutlanderFragment_Llama.Prop_Explorer_OutlanderFragment_Llama_C.DiamondsLlama
struct AProp_Explorer_OutlanderFragment_Llama_C_DiamondsLlama_Params
{
};

// Function Prop_Explorer_OutlanderFragment_Llama.Prop_Explorer_OutlanderFragment_Llama_C.OnDamagePlayEffects
struct AProp_Explorer_OutlanderFragment_Llama_C_OnDamagePlayEffects_Params
{
	float                                              Damage;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayTagContainer                       DamageTags;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector                                     Momentum;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  HitInfo;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	class AFortPawn*                                   InstigatedBy;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AActor*                                      DamageCauser;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayEffectContextHandle                EffectContext;                                             // (Parm)
};

// Function Prop_Explorer_OutlanderFragment_Llama.Prop_Explorer_OutlanderFragment_Llama_C.OnDeathPlayEffects
struct AProp_Explorer_OutlanderFragment_Llama_C_OnDeathPlayEffects_Params
{
	float                                              Damage;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayTagContainer                       DamageTags;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector                                     Momentum;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  HitInfo;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	class AFortPawn*                                   InstigatedBy;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AActor*                                      DamageCauser;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayEffectContextHandle                EffectContext;                                             // (Parm)
};

// Function Prop_Explorer_OutlanderFragment_Llama.Prop_Explorer_OutlanderFragment_Llama_C.OnBounceAnimationUpdate
struct AProp_Explorer_OutlanderFragment_Llama_C_OnBounceAnimationUpdate_Params
{
	struct FFortBounceData                             Data;                                                      // (Parm)
};

// Function Prop_Explorer_OutlanderFragment_Llama.Prop_Explorer_OutlanderFragment_Llama_C.TheHeadWasSpawnedOnTheServerCallback
struct AProp_Explorer_OutlanderFragment_Llama_C_TheHeadWasSpawnedOnTheServerCallback_Params
{
};

// Function Prop_Explorer_OutlanderFragment_Llama.Prop_Explorer_OutlanderFragment_Llama_C.LlamaDeathMontageIsComplete
struct AProp_Explorer_OutlanderFragment_Llama_C_LlamaDeathMontageIsComplete_Params
{
};

// Function Prop_Explorer_OutlanderFragment_Llama.Prop_Explorer_OutlanderFragment_Llama_C.The First Llama Death Animation is Finished
struct AProp_Explorer_OutlanderFragment_Llama_C_The_First_Llama_Death_Animation_is_Finished_Params
{
};

// Function Prop_Explorer_OutlanderFragment_Llama.Prop_Explorer_OutlanderFragment_Llama_C.ExecuteUbergraph_Prop_Explorer_OutlanderFragment_Llama
struct AProp_Explorer_OutlanderFragment_Llama_C_ExecuteUbergraph_Prop_Explorer_OutlanderFragment_Llama_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
