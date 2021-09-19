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

// Function GA_CommandoFlakVest.GA_CommandoFlakVest_C.K2_ShouldAbilityRespondToEvent
struct UGA_CommandoFlakVest_C_K2_ShouldAbilityRespondToEvent_Params
{
	struct FGameplayAbilityActorInfo                   ActorInfo;                                                 // (Parm, ContainsInstancedReference)
	struct FGameplayEventData                          Payload;                                                   // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function GA_CommandoFlakVest.GA_CommandoFlakVest_C.K2_ActivateAbilityFromEvent
struct UGA_CommandoFlakVest_C_K2_ActivateAbilityFromEvent_Params
{
	struct FGameplayEventData                          EventData;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GA_CommandoFlakVest.GA_CommandoFlakVest_C.ReApplyShield
struct UGA_CommandoFlakVest_C_ReApplyShield_Params
{
};

// Function GA_CommandoFlakVest.GA_CommandoFlakVest_C.ExecuteUbergraph_GA_CommandoFlakVest
struct UGA_CommandoFlakVest_C_ExecuteUbergraph_GA_CommandoFlakVest_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
