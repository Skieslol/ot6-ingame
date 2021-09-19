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

// Function GA_Outlander_KnockKnock.GA_Outlander_KnockKnock_C.OtherTargetting
struct UGA_Outlander_KnockKnock_C_OtherTargetting_Params
{
};

// Function GA_Outlander_KnockKnock.GA_Outlander_KnockKnock_C.GetCustomAbilitySourceTransform
struct UGA_Outlander_KnockKnock_C_GetCustomAbilitySourceTransform_Params
{
	struct FTransform                                  ReturnValue;                                               // (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function GA_Outlander_KnockKnock.GA_Outlander_KnockKnock_C.K2_ShouldAbilityRespondToEvent
struct UGA_Outlander_KnockKnock_C_K2_ShouldAbilityRespondToEvent_Params
{
	struct FGameplayAbilityActorInfo                   ActorInfo;                                                 // (Parm, ContainsInstancedReference)
	struct FGameplayEventData                          Payload;                                                   // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function GA_Outlander_KnockKnock.GA_Outlander_KnockKnock_C.Cancelled_8217F61642070692A0A818BB146A36B8
struct UGA_Outlander_KnockKnock_C_Cancelled_8217F61642070692A0A818BB146A36B8_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                            // (Parm)
};

// Function GA_Outlander_KnockKnock.GA_Outlander_KnockKnock_C.Targeted_8217F61642070692A0A818BB146A36B8
struct UGA_Outlander_KnockKnock_C_Targeted_8217F61642070692A0A818BB146A36B8_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                            // (Parm)
};

// Function GA_Outlander_KnockKnock.GA_Outlander_KnockKnock_C.K2_ActivateAbilityFromEvent
struct UGA_Outlander_KnockKnock_C_K2_ActivateAbilityFromEvent_Params
{
	struct FGameplayEventData                          EventData;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GA_Outlander_KnockKnock.GA_Outlander_KnockKnock_C.ExecuteUbergraph_GA_Outlander_KnockKnock
struct UGA_Outlander_KnockKnock_C_ExecuteUbergraph_GA_Outlander_KnockKnock_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
