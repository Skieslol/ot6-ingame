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

// Function GAB_HuskBaseRadialMelee.GAB_HuskBaseRadialMelee_C.K2_CanActivateAbility
struct UGAB_HuskBaseRadialMelee_C_K2_CanActivateAbility_Params
{
	struct FGameplayAbilityActorInfo                   ActorInfo;                                                 // (Parm, ContainsInstancedReference)
	struct FGameplayTagContainer                       RelevantTags;                                              // (Parm, OutParm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function GAB_HuskBaseRadialMelee.GAB_HuskBaseRadialMelee_C.Completed_A0D25C0C4C9CDEEB0EB0018B3334307D
struct UGAB_HuskBaseRadialMelee_C_Completed_A0D25C0C4C9CDEEB0EB0018B3334307D_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                            // (Parm)
};

// Function GAB_HuskBaseRadialMelee.GAB_HuskBaseRadialMelee_C.Cancelled_A0D25C0C4C9CDEEB0EB0018B3334307D
struct UGAB_HuskBaseRadialMelee_C_Cancelled_A0D25C0C4C9CDEEB0EB0018B3334307D_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                            // (Parm)
};

// Function GAB_HuskBaseRadialMelee.GAB_HuskBaseRadialMelee_C.Triggered_A0D25C0C4C9CDEEB0EB0018B3334307D
struct UGAB_HuskBaseRadialMelee_C_Triggered_A0D25C0C4C9CDEEB0EB0018B3334307D_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                            // (Parm)
};

// Function GAB_HuskBaseRadialMelee.GAB_HuskBaseRadialMelee_C.K2_ActivateAbility
struct UGAB_HuskBaseRadialMelee_C_K2_ActivateAbility_Params
{
};

// Function GAB_HuskBaseRadialMelee.GAB_HuskBaseRadialMelee_C.ExecuteUbergraph_GAB_HuskBaseRadialMelee
struct UGAB_HuskBaseRadialMelee_C_ExecuteUbergraph_GAB_HuskBaseRadialMelee_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
