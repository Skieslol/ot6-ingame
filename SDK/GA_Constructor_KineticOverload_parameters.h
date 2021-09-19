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

// Function GA_Constructor_KineticOverload.GA_Constructor_KineticOverload_C.GetCustomAbilitySourceTransform
struct UGA_Constructor_KineticOverload_C_GetCustomAbilitySourceTransform_Params
{
	struct FTransform                                  ReturnValue;                                               // (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function GA_Constructor_KineticOverload.GA_Constructor_KineticOverload_C.HitTarget
struct UGA_Constructor_KineticOverload_C_HitTarget_Params
{
};

// Function GA_Constructor_KineticOverload.GA_Constructor_KineticOverload_C.K2_ShouldAbilityRespondToEvent
struct UGA_Constructor_KineticOverload_C_K2_ShouldAbilityRespondToEvent_Params
{
	struct FGameplayAbilityActorInfo                   ActorInfo;                                                 // (Parm, ContainsInstancedReference)
	struct FGameplayEventData                          Payload;                                                   // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function GA_Constructor_KineticOverload.GA_Constructor_KineticOverload_C.Cancelled_AEF31BFB4F9F700D450DB3A243436FC5
struct UGA_Constructor_KineticOverload_C_Cancelled_AEF31BFB4F9F700D450DB3A243436FC5_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                            // (Parm)
};

// Function GA_Constructor_KineticOverload.GA_Constructor_KineticOverload_C.Targeted_AEF31BFB4F9F700D450DB3A243436FC5
struct UGA_Constructor_KineticOverload_C_Targeted_AEF31BFB4F9F700D450DB3A243436FC5_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                            // (Parm)
};

// Function GA_Constructor_KineticOverload.GA_Constructor_KineticOverload_C.K2_ActivateAbilityFromEvent
struct UGA_Constructor_KineticOverload_C_K2_ActivateAbilityFromEvent_Params
{
	struct FGameplayEventData                          EventData;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GA_Constructor_KineticOverload.GA_Constructor_KineticOverload_C.AbilityTimeout
struct UGA_Constructor_KineticOverload_C_AbilityTimeout_Params
{
};

// Function GA_Constructor_KineticOverload.GA_Constructor_KineticOverload_C.ExecuteUbergraph_GA_Constructor_KineticOverload
struct UGA_Constructor_KineticOverload_C_ExecuteUbergraph_GA_Constructor_KineticOverload_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
