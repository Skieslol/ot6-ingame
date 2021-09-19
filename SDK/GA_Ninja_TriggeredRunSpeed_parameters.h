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

// Function GA_Ninja_TriggeredRunSpeed.GA_Ninja_TriggeredRunSpeed_C.ApplyRunTrails
struct UGA_Ninja_TriggeredRunSpeed_C_ApplyRunTrails_Params
{
	class UParticleSystem*                             Emitter_Template;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class USceneComponent*                             Scene_Component;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GA_Ninja_TriggeredRunSpeed.GA_Ninja_TriggeredRunSpeed_C.K2_ActivateAbilityFromEvent
struct UGA_Ninja_TriggeredRunSpeed_C_K2_ActivateAbilityFromEvent_Params
{
	struct FGameplayEventData                          EventData;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GA_Ninja_TriggeredRunSpeed.GA_Ninja_TriggeredRunSpeed_C.ExecuteUbergraph_GA_Ninja_TriggeredRunSpeed
struct UGA_Ninja_TriggeredRunSpeed_C_ExecuteUbergraph_GA_Ninja_TriggeredRunSpeed_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
