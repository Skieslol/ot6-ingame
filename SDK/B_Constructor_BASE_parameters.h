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

// Function B_Constructor_BASE.B_Constructor_BASE_C.BaseSelfApplyGameplaySpec
struct AB_Constructor_BASE_C_BaseSelfApplyGameplaySpec_Params
{
	struct FGameplayEffectSpecHandle                   GE_Spec;                                                   // (Parm)
};

// Function B_Constructor_BASE.B_Constructor_BASE_C.SetBaseVisualGlow
struct AB_Constructor_BASE_C_SetBaseVisualGlow_Params
{
};

// Function B_Constructor_BASE.B_Constructor_BASE_C.SetDamageMultiplier
struct AB_Constructor_BASE_C_SetDamageMultiplier_Params
{
};

// Function B_Constructor_BASE.B_Constructor_BASE_C.OnRep_CollectResources
struct AB_Constructor_BASE_C_OnRep_CollectResources_Params
{
};

// Function B_Constructor_BASE.B_Constructor_BASE_C.BlueprintGetInteractionString
struct AB_Constructor_BASE_C_BlueprintGetInteractionString_Params
{
	class AFortPawn*                                   InteractingPawn;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function B_Constructor_BASE.B_Constructor_BASE_C.AddResourceToStack
struct AB_Constructor_BASE_C_AddResourceToStack_Params
{
	struct FStructRecyclingResource                    RecyclingResource;                                         // (Parm)
	int                                                AmountToSpawn;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UFortWorldItemDefinition*                    Stored_Resource;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FStructRecyclingResource                    SetValue;                                                  // (Parm, OutParm)
};

// Function B_Constructor_BASE.B_Constructor_BASE_C.SpawnResourceForRecycling
struct AB_Constructor_BASE_C_SpawnResourceForRecycling_Params
{
	class UFortWorldItemDefinition*                    ItemDefinition;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                AmountToSpawn;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<FortniteGame_EFortResourceType>        ResourceType;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function B_Constructor_BASE.B_Constructor_BASE_C.BlueprintCanInteract
struct AB_Constructor_BASE_C_BlueprintCanInteract_Params
{
	class AFortPawn*                                   InteractingPawn;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function B_Constructor_BASE.B_Constructor_BASE_C.AddGEToBaseArray
struct AB_Constructor_BASE_C_AddGEToBaseArray_Params
{
	TArray<struct FBASEGameplayEffect>                 BaseArray;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UClass*                                      GameplayEffect;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                LevelOverride;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function B_Constructor_BASE.B_Constructor_BASE_C.OnRep_NumbPlayersNearBase
struct AB_Constructor_BASE_C_OnRep_NumbPlayersNearBase_Params
{
};

// Function B_Constructor_BASE.B_Constructor_BASE_C.OnRep_BaseIsPlaced
struct AB_Constructor_BASE_C_OnRep_BaseIsPlaced_Params
{
};

// Function B_Constructor_BASE.B_Constructor_BASE_C.RecycleResources
struct AB_Constructor_BASE_C_RecycleResources_Params
{
};

// Function B_Constructor_BASE.B_Constructor_BASE_C.SetupHostileEffects
struct AB_Constructor_BASE_C_SetupHostileEffects_Params
{
	class UAbilitySystemComponent*                     AbilitySystemComponent;                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct FBASEGameplayEffect>                 HostileEffects;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function B_Constructor_BASE.B_Constructor_BASE_C.SetupFriendlyEffects
struct AB_Constructor_BASE_C_SetupFriendlyEffects_Params
{
	class UAbilitySystemComponent*                     AbilitySystemComponent;                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct FBASEGameplayEffect>                 FriendlyEffects;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function B_Constructor_BASE.B_Constructor_BASE_C.SetupBuildingEffects
struct AB_Constructor_BASE_C_SetupBuildingEffects_Params
{
	class UAbilitySystemComponent*                     AbilitySystemComponent;                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct FBASEGameplayEffect>                 BuildingEffects;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function B_Constructor_BASE.B_Constructor_BASE_C.Setup Base Effect Array
struct AB_Constructor_BASE_C_Setup_Base_Effect_Array_Params
{
	class UAbilitySystemComponent*                     Instigator_Ability_System;                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct FBASEGameplayEffect>                 BASEBuildingEffects;                                       // (Parm, OutParm, ZeroConstructor)
	TArray<struct FBASEGameplayEffect>                 BASEFriendlyEffects;                                       // (Parm, OutParm, ZeroConstructor)
	TArray<struct FBASEGameplayEffect>                 BASEHostileEffects;                                        // (Parm, OutParm, ZeroConstructor)
};

// Function B_Constructor_BASE.B_Constructor_BASE_C.SetupBaseDefaultValues
struct AB_Constructor_BASE_C_SetupBaseDefaultValues_Params
{
	class UAbilitySystemComponent*                     Ability_System_Component;                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                NodesToAffect;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function B_Constructor_BASE.B_Constructor_BASE_C.UserConstructionScript
struct AB_Constructor_BASE_C_UserConstructionScript_Params
{
};

// Function B_Constructor_BASE.B_Constructor_BASE_C.OnPlaced
struct AB_Constructor_BASE_C_OnPlaced_Params
{
	class UAbilitySystemComponent*                     InstigatorAbilitySystemComponent;                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function B_Constructor_BASE.B_Constructor_BASE_C.Recycling
struct AB_Constructor_BASE_C_Recycling_Params
{
};

// Function B_Constructor_BASE.B_Constructor_BASE_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_264_ComponentBeginOverlapSignature__DelegateSignature
struct AB_Constructor_BASE_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_264_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UPrimitiveComponent*                         OtherComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                OtherBodyIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bFromSweep;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  SweepResult;                                               // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function B_Constructor_BASE.B_Constructor_BASE_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_267_ComponentEndOverlapSignature__DelegateSignature
struct AB_Constructor_BASE_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_267_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UPrimitiveComponent*                         OtherComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                OtherBodyIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function B_Constructor_BASE.B_Constructor_BASE_C.AnimateLegs
struct AB_Constructor_BASE_C_AnimateLegs_Params
{
	bool                                               LegsUp;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function B_Constructor_BASE.B_Constructor_BASE_C.StartBuildingActorVisuals
struct AB_Constructor_BASE_C_StartBuildingActorVisuals_Params
{
	class ABuildingSMActor*                            BuildingActor;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UStaticMeshComponent*                        EffectMeshComp;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function B_Constructor_BASE.B_Constructor_BASE_C.StopBuildingActorVisuals
struct AB_Constructor_BASE_C_StopBuildingActorVisuals_Params
{
	class ABuildingSMActor*                            BuildingActor;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UStaticMeshComponent*                        EffectMeshComp;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function B_Constructor_BASE.B_Constructor_BASE_C.BlueprintOnInteract
struct AB_Constructor_BASE_C_BlueprintOnInteract_Params
{
	class AFortPawn*                                   InteractingPawn;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function B_Constructor_BASE.B_Constructor_BASE_C.GetDamageAmp
struct AB_Constructor_BASE_C_GetDamageAmp_Params
{
};

// Function B_Constructor_BASE.B_Constructor_BASE_C.ResourcesCreated
struct AB_Constructor_BASE_C_ResourcesCreated_Params
{
};

// Function B_Constructor_BASE.B_Constructor_BASE_C.ExecuteUbergraph_B_Constructor_BASE
struct AB_Constructor_BASE_C_ExecuteUbergraph_B_Constructor_BASE_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
