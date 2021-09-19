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

// Function GA_Generic_BotTurret.GA_Generic_BotTurret_C.ApplyStatScaling
struct UGA_Generic_BotTurret_C_ApplyStatScaling_Params
{
	class AB_BGA_BotTurret_C*                          BotReference;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GA_Generic_BotTurret.GA_Generic_BotTurret_C.SetLevelUpgrades
struct UGA_Generic_BotTurret_C_SetLevelUpgrades_Params
{
};

// Function GA_Generic_BotTurret.GA_Generic_BotTurret_C.SetUpBot
struct UGA_Generic_BotTurret_C_SetUpBot_Params
{
	class AFortPlayerPawn*                             PlayerPawn;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     SpawnLocation;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                                    SpawnRotation;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UClass*                                      BGATurret;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GA_Generic_BotTurret.GA_Generic_BotTurret_C.Completed_3A74E5BE4F4D85991B8887A89A2350CB
struct UGA_Generic_BotTurret_C_Completed_3A74E5BE4F4D85991B8887A89A2350CB_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                            // (Parm)
};

// Function GA_Generic_BotTurret.GA_Generic_BotTurret_C.Cancelled_3A74E5BE4F4D85991B8887A89A2350CB
struct UGA_Generic_BotTurret_C_Cancelled_3A74E5BE4F4D85991B8887A89A2350CB_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                            // (Parm)
};

// Function GA_Generic_BotTurret.GA_Generic_BotTurret_C.Triggered_3A74E5BE4F4D85991B8887A89A2350CB
struct UGA_Generic_BotTurret_C_Triggered_3A74E5BE4F4D85991B8887A89A2350CB_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                            // (Parm)
};

// Function GA_Generic_BotTurret.GA_Generic_BotTurret_C.K2_ActivateAbility
struct UGA_Generic_BotTurret_C_K2_ActivateAbility_Params
{
};

// Function GA_Generic_BotTurret.GA_Generic_BotTurret_C.ExecuteUbergraph_GA_Generic_BotTurret
struct UGA_Generic_BotTurret_C_ExecuteUbergraph_GA_Generic_BotTurret_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
