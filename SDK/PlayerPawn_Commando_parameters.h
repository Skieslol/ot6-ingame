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

// Function PlayerPawn_Commando.PlayerPawn_Commando_C.UserConstructionScript
struct APlayerPawn_Commando_C_UserConstructionScript_Params
{
};

// Function PlayerPawn_Commando.PlayerPawn_Commando_C.GameplayCue.Abilities.Applied.Commando.IncendiaryRounds
struct APlayerPawn_Commando_C_GameplayCue_Abilities_Applied_Commando_IncendiaryRounds_Params
{
	TEnumAsByte<GameplayAbilities_EGameplayCueEvent>   EventType;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayCueParameters                      Parameters;                                                // (Parm)
};

// Function PlayerPawn_Commando.PlayerPawn_Commando_C.GameplayCue.Abilities.Applied.Commando.MakeItRain
struct APlayerPawn_Commando_C_GameplayCue_Abilities_Applied_Commando_MakeItRain_Params
{
	TEnumAsByte<GameplayAbilities_EGameplayCueEvent>   EventType;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayCueParameters                      Parameters;                                                // (Parm)
};

// Function PlayerPawn_Commando.PlayerPawn_Commando_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier1
struct APlayerPawn_Commando_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1_Params
{
	TEnumAsByte<GameplayAbilities_EGameplayCueEvent>   EventType;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayCueParameters                      Parameters;                                                // (Parm)
};

// Function PlayerPawn_Commando.PlayerPawn_Commando_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier2
struct APlayerPawn_Commando_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2_Params
{
	TEnumAsByte<GameplayAbilities_EGameplayCueEvent>   EventType;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayCueParameters                      Parameters;                                                // (Parm)
};

// Function PlayerPawn_Commando.PlayerPawn_Commando_C.ReceivePossessed
struct APlayerPawn_Commando_C_ReceivePossessed_Params
{
	class AController*                                 NewController;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PlayerPawn_Commando.PlayerPawn_Commando_C.GameplayCue.Abilities.Activation.Commando.Shockwave
struct APlayerPawn_Commando_C_GameplayCue_Abilities_Activation_Commando_Shockwave_Params
{
	TEnumAsByte<GameplayAbilities_EGameplayCueEvent>   EventType;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayCueParameters                      Parameters;                                                // (Parm)
};

// Function PlayerPawn_Commando.PlayerPawn_Commando_C.ExecuteUbergraph_PlayerPawn_Commando
struct APlayerPawn_Commando_C_ExecuteUbergraph_PlayerPawn_Commando_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
