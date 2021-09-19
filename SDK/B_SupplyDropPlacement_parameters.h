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

// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.Landed
struct AB_SupplyDropPlacement_C_Landed_Params
{
};

// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.OnRep_bIsLooted
struct AB_SupplyDropPlacement_C_OnRep_bIsLooted_Params
{
};

// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.IsAcceptablePositionForPlacement
struct AB_SupplyDropPlacement_C_IsAcceptablePositionForPlacement_Params
{
	struct FVector                                     InLocation;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	struct FRotator                                    InRotation;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	class AFortDecoTool*                               DecoTool;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bIsCDO;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FText                                       OutFailureReason;                                          // (Parm, OutParm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.SetMatOnLevel
struct AB_SupplyDropPlacement_C_SetMatOnLevel_Params
{
};

// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.UpdateLocation
struct AB_SupplyDropPlacement_C_UpdateLocation_Params
{
	float                                              Time;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.BlueprintCanInteract
struct AB_SupplyDropPlacement_C_BlueprintCanInteract_Params
{
	class AFortPawn*                                   InteractingPawn;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.TurnOnInteract
struct AB_SupplyDropPlacement_C_TurnOnInteract_Params
{
};

// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.SpawnLoot
struct AB_SupplyDropPlacement_C_SpawnLoot_Params
{
};

// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.UserConstructionScript
struct AB_SupplyDropPlacement_C_UserConstructionScript_Params
{
};

// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.Timeline_0__FinishedFunc
struct AB_SupplyDropPlacement_C_Timeline_0__FinishedFunc_Params
{
};

// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.Timeline_0__UpdateFunc
struct AB_SupplyDropPlacement_C_Timeline_0__UpdateFunc_Params
{
};

// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.Timeline_0__StartTrail__EventFunc
struct AB_SupplyDropPlacement_C_Timeline_0__StartTrail__EventFunc_Params
{
};

// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.Timeline_0__Impact__EventFunc
struct AB_SupplyDropPlacement_C_Timeline_0__Impact__EventFunc_Params
{
};

// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.ReceiveBeginPlay
struct AB_SupplyDropPlacement_C_ReceiveBeginPlay_Params
{
};

// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.BlueprintOnInteract
struct AB_SupplyDropPlacement_C_BlueprintOnInteract_Params
{
	class AFortPawn*                                   InteractingPawn;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.SelfDestruct
struct AB_SupplyDropPlacement_C_SelfDestruct_Params
{
};

// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.OnDeathServer
struct AB_SupplyDropPlacement_C_OnDeathServer_Params
{
	float                                              Damage;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayTagContainer                       DamageTags;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector                                     Momentum;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  HitInfo;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	class AController*                                 InstigatedBy;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AActor*                                      DamageCauser;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayEffectContextHandle                EffectContext;                                             // (Parm)
};

// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.ExecuteUbergraph_B_SupplyDropPlacement
struct AB_SupplyDropPlacement_C_ExecuteUbergraph_B_SupplyDropPlacement_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
