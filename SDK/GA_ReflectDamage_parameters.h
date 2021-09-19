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

// Function GA_ReflectDamage.GA_ReflectDamage_C.ReflectDamage
struct UGA_ReflectDamage_C_ReflectDamage_Params
{
	class UAbilitySystemComponent*                     OriginalDmgCauser;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UAbilitySystemComponent*                     OriginalDmgReceiver;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UAbilitySystemComponent*                     ReflectedDmgDealer;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              OriginalDmg;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayTagContainer                       OriginalDmgReceiverTags;                                   // (Parm)
	struct FGameplayTagContainer                       OriginalDmgCauserTags;                                     // (Parm)
};

// Function GA_ReflectDamage.GA_ReflectDamage_C.K2_ActivateAbilityFromEvent
struct UGA_ReflectDamage_C_K2_ActivateAbilityFromEvent_Params
{
	struct FGameplayEventData                          EventData;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GA_ReflectDamage.GA_ReflectDamage_C.ExecuteUbergraph_GA_ReflectDamage
struct UGA_ReflectDamage_C_ExecuteUbergraph_GA_ReflectDamage_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
