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

// Function GA_Commando_DebilitatingShots.GA_Commando_DebilitatingShots_C.SetupFatigue
struct UGA_Commando_DebilitatingShots_C_SetupFatigue_Params
{
	struct FGameplayEffectSpecHandle                   EffectspecOutInstant;                                      // (Parm, OutParm)
	struct FGameplayEffectSpecHandle                   EffectspecOutDuration;                                     // (Parm, OutParm)
};

// Function GA_Commando_DebilitatingShots.GA_Commando_DebilitatingShots_C.SetupAppliedEffect
struct UGA_Commando_DebilitatingShots_C_SetupAppliedEffect_Params
{
	float                                              Duration;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Magnitude;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                Stack_Count;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayEffectSpecHandle                   EffectSpecHandle;                                          // (Parm)
	struct FGameplayEffectSpecHandle                   EffectspecHandleOut;                                       // (Parm, OutParm)
};

// Function GA_Commando_DebilitatingShots.GA_Commando_DebilitatingShots_C.SetupGameplayEffect
struct UGA_Commando_DebilitatingShots_C_SetupGameplayEffect_Params
{
	class AActor*                                      HitActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayTag                                EventTag;                                                  // (Parm)
	class UObject*                                     OptionalObject;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayAbilityTargetDataHandle            Target_Data;                                               // (Parm, OutParm)
	class UClass*                                      DebilitatingShots;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                Effect_Level;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                Stack_Count;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GA_Commando_DebilitatingShots.GA_Commando_DebilitatingShots_C.K2_ShouldAbilityRespondToEvent
struct UGA_Commando_DebilitatingShots_C_K2_ShouldAbilityRespondToEvent_Params
{
	struct FGameplayAbilityActorInfo                   ActorInfo;                                                 // (Parm, ContainsInstancedReference)
	struct FGameplayEventData                          Payload;                                                   // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function GA_Commando_DebilitatingShots.GA_Commando_DebilitatingShots_C.K2_ActivateAbilityFromEvent
struct UGA_Commando_DebilitatingShots_C_K2_ActivateAbilityFromEvent_Params
{
	struct FGameplayEventData                          EventData;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GA_Commando_DebilitatingShots.GA_Commando_DebilitatingShots_C.ExecuteUbergraph_GA_Commando_DebilitatingShots
struct UGA_Commando_DebilitatingShots_C_ExecuteUbergraph_GA_Commando_DebilitatingShots_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
