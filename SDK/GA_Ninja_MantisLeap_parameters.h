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

// Function GA_Ninja_MantisLeap.GA_Ninja_MantisLeap_C.SetJumpHeight
struct UGA_Ninja_MantisLeap_C_SetJumpHeight_Params
{
	class APlayerPawn_Ninja_C*                         Ninja_Pawn;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AFortPlayerPawn*                             Ninja_Pawn_Out;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Jump_Height;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GA_Ninja_MantisLeap.GA_Ninja_MantisLeap_C.K2_ShouldAbilityRespondToEvent
struct UGA_Ninja_MantisLeap_C_K2_ShouldAbilityRespondToEvent_Params
{
	struct FGameplayAbilityActorInfo                   ActorInfo;                                                 // (Parm, ContainsInstancedReference)
	struct FGameplayEventData                          Payload;                                                   // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function GA_Ninja_MantisLeap.GA_Ninja_MantisLeap_C.Cancelled_023C704A4687994EABB842B14222FB9B
struct UGA_Ninja_MantisLeap_C_Cancelled_023C704A4687994EABB842B14222FB9B_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                            // (Parm)
};

// Function GA_Ninja_MantisLeap.GA_Ninja_MantisLeap_C.Targeted_023C704A4687994EABB842B14222FB9B
struct UGA_Ninja_MantisLeap_C_Targeted_023C704A4687994EABB842B14222FB9B_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                            // (Parm)
};

// Function GA_Ninja_MantisLeap.GA_Ninja_MantisLeap_C.K2_ActivateAbilityFromEvent
struct UGA_Ninja_MantisLeap_C_K2_ActivateAbilityFromEvent_Params
{
	struct FGameplayEventData                          EventData;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GA_Ninja_MantisLeap.GA_Ninja_MantisLeap_C.OnPawnLanded_Event_1
struct UGA_Ninja_MantisLeap_C_OnPawnLanded_Event_1_Params
{
	struct FHitResult                                  Hit;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function GA_Ninja_MantisLeap.GA_Ninja_MantisLeap_C.ExecuteUbergraph_GA_Ninja_MantisLeap
struct UGA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
