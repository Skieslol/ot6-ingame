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

// Function GA_Commando_NoTimeToBleed.GA_Commando_NoTimeToBleed_C.ApplyHeal
struct UGA_Commando_NoTimeToBleed_C_ApplyHeal_Params
{
	class APlayerPawn_Commando_C*                      CommandoPawn;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AActor*                                      Actor;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GA_Commando_NoTimeToBleed.GA_Commando_NoTimeToBleed_C.K2_ShouldAbilityRespondToEvent
struct UGA_Commando_NoTimeToBleed_C_K2_ShouldAbilityRespondToEvent_Params
{
	struct FGameplayAbilityActorInfo                   ActorInfo;                                                 // (Parm, ContainsInstancedReference)
	struct FGameplayEventData                          Payload;                                                   // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function GA_Commando_NoTimeToBleed.GA_Commando_NoTimeToBleed_C.K2_ActivateAbilityFromEvent
struct UGA_Commando_NoTimeToBleed_C_K2_ActivateAbilityFromEvent_Params
{
	struct FGameplayEventData                          EventData;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GA_Commando_NoTimeToBleed.GA_Commando_NoTimeToBleed_C.ExecuteUbergraph_GA_Commando_NoTimeToBleed
struct UGA_Commando_NoTimeToBleed_C_ExecuteUbergraph_GA_Commando_NoTimeToBleed_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
