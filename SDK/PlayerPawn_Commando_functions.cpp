// Name: Fortnite, Version: OT-6_5

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function PlayerPawn_Commando.PlayerPawn_Commando_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void APlayerPawn_Commando_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Commando.PlayerPawn_Commando_C.UserConstructionScript");

	APlayerPawn_Commando_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerPawn_Commando.PlayerPawn_Commando_C.GameplayCue.Abilities.Applied.Commando.IncendiaryRounds
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayCueParameters  Parameters                     (Parm)
void APlayerPawn_Commando_C::GameplayCue_Abilities_Applied_Commando_IncendiaryRounds(TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Commando.PlayerPawn_Commando_C.GameplayCue.Abilities.Applied.Commando.IncendiaryRounds");

	APlayerPawn_Commando_C_GameplayCue_Abilities_Applied_Commando_IncendiaryRounds_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerPawn_Commando.PlayerPawn_Commando_C.GameplayCue.Abilities.Applied.Commando.MakeItRain
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayCueParameters  Parameters                     (Parm)
void APlayerPawn_Commando_C::GameplayCue_Abilities_Applied_Commando_MakeItRain(TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Commando.PlayerPawn_Commando_C.GameplayCue.Abilities.Applied.Commando.MakeItRain");

	APlayerPawn_Commando_C_GameplayCue_Abilities_Applied_Commando_MakeItRain_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerPawn_Commando.PlayerPawn_Commando_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayCueParameters  Parameters                     (Parm)
void APlayerPawn_Commando_C::GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1(TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Commando.PlayerPawn_Commando_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier1");

	APlayerPawn_Commando_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerPawn_Commando.PlayerPawn_Commando_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayCueParameters  Parameters                     (Parm)
void APlayerPawn_Commando_C::GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2(TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Commando.PlayerPawn_Commando_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier2");

	APlayerPawn_Commando_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerPawn_Commando.PlayerPawn_Commando_C.ReceivePossessed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController*             NewController                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APlayerPawn_Commando_C::ReceivePossessed(class AController* NewController)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Commando.PlayerPawn_Commando_C.ReceivePossessed");

	APlayerPawn_Commando_C_ReceivePossessed_Params params;
	params.NewController = NewController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerPawn_Commando.PlayerPawn_Commando_C.GameplayCue.Abilities.Activation.Commando.Shockwave
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayCueParameters  Parameters                     (Parm)
void APlayerPawn_Commando_C::GameplayCue_Abilities_Activation_Commando_Shockwave(TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Commando.PlayerPawn_Commando_C.GameplayCue.Abilities.Activation.Commando.Shockwave");

	APlayerPawn_Commando_C_GameplayCue_Abilities_Activation_Commando_Shockwave_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerPawn_Commando.PlayerPawn_Commando_C.ExecuteUbergraph_PlayerPawn_Commando
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APlayerPawn_Commando_C::ExecuteUbergraph_PlayerPawn_Commando(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Commando.PlayerPawn_Commando_C.ExecuteUbergraph_PlayerPawn_Commando");

	APlayerPawn_Commando_C_ExecuteUbergraph_PlayerPawn_Commando_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
