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

// Function GA_Ninja_Assassination.GA_Ninja_Assassination_C.ApplyStack
struct UGA_Ninja_Assassination_C_ApplyStack_Params
{
	class APlayerPawn_Ninja_C*                         NinjaPawn;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GA_Ninja_Assassination.GA_Ninja_Assassination_C.K2_ShouldAbilityRespondToEvent
struct UGA_Ninja_Assassination_C_K2_ShouldAbilityRespondToEvent_Params
{
	struct FGameplayAbilityActorInfo                   ActorInfo;                                                 // (Parm, ContainsInstancedReference)
	struct FGameplayEventData                          Payload;                                                   // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function GA_Ninja_Assassination.GA_Ninja_Assassination_C.K2_ActivateAbility
struct UGA_Ninja_Assassination_C_K2_ActivateAbility_Params
{
};

// Function GA_Ninja_Assassination.GA_Ninja_Assassination_C.ExecuteUbergraph_GA_Ninja_Assassination
struct UGA_Ninja_Assassination_C_ExecuteUbergraph_GA_Ninja_Assassination_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
