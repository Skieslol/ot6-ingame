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

// Function GA_Commando_IfItBleeds.GA_Commando_IfItBleeds_C.K2_ShouldAbilityRespondToEvent
struct UGA_Commando_IfItBleeds_C_K2_ShouldAbilityRespondToEvent_Params
{
	struct FGameplayAbilityActorInfo                   ActorInfo;                                                 // (Parm, ContainsInstancedReference)
	struct FGameplayEventData                          Payload;                                                   // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function GA_Commando_IfItBleeds.GA_Commando_IfItBleeds_C.K2_ActivateAbilityFromEvent
struct UGA_Commando_IfItBleeds_C_K2_ActivateAbilityFromEvent_Params
{
	struct FGameplayEventData                          EventData;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GA_Commando_IfItBleeds.GA_Commando_IfItBleeds_C.ExecuteUbergraph_GA_Commando_IfItBleeds
struct UGA_Commando_IfItBleeds_C_ExecuteUbergraph_GA_Commando_IfItBleeds_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
