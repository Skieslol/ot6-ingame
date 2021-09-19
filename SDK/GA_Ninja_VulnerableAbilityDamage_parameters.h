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

// Function GA_Ninja_VulnerableAbilityDamage.GA_Ninja_VulnerableAbilityDamage_C.K2_ShouldAbilityRespondToEvent
struct UGA_Ninja_VulnerableAbilityDamage_C_K2_ShouldAbilityRespondToEvent_Params
{
	struct FGameplayAbilityActorInfo                   ActorInfo;                                                 // (Parm, ContainsInstancedReference)
	struct FGameplayEventData                          Payload;                                                   // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function GA_Ninja_VulnerableAbilityDamage.GA_Ninja_VulnerableAbilityDamage_C.K2_ActivateAbilityFromEvent
struct UGA_Ninja_VulnerableAbilityDamage_C_K2_ActivateAbilityFromEvent_Params
{
	struct FGameplayEventData                          EventData;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GA_Ninja_VulnerableAbilityDamage.GA_Ninja_VulnerableAbilityDamage_C.ExecuteUbergraph_GA_Ninja_VulnerableAbilityDamage
struct UGA_Ninja_VulnerableAbilityDamage_C_ExecuteUbergraph_GA_Ninja_VulnerableAbilityDamage_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
