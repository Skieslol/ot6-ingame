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

// Function GA_Generic_BotTurret.GA_Generic_BotTurret_C.ApplyStatScaling
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AB_BGA_BotTurret_C*      BotReference                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_Generic_BotTurret_C::ApplyStatScaling(class AB_BGA_BotTurret_C* BotReference)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Generic_BotTurret.GA_Generic_BotTurret_C.ApplyStatScaling");

	UGA_Generic_BotTurret_C_ApplyStatScaling_Params params;
	params.BotReference = BotReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Generic_BotTurret.GA_Generic_BotTurret_C.SetLevelUpgrades
// (Public, BlueprintCallable, BlueprintEvent)
void UGA_Generic_BotTurret_C::SetLevelUpgrades()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Generic_BotTurret.GA_Generic_BotTurret_C.SetLevelUpgrades");

	UGA_Generic_BotTurret_C_SetLevelUpgrades_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Generic_BotTurret.GA_Generic_BotTurret_C.SetUpBot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*         PlayerPawn                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 SpawnLocation                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                SpawnRotation                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                  BGATurret                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_Generic_BotTurret_C::SetUpBot(class AFortPlayerPawn** PlayerPawn, struct FVector* SpawnLocation, struct FRotator* SpawnRotation, class UClass** BGATurret)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Generic_BotTurret.GA_Generic_BotTurret_C.SetUpBot");

	UGA_Generic_BotTurret_C_SetUpBot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayerPawn != nullptr)
		*PlayerPawn = params.PlayerPawn;
	if (SpawnLocation != nullptr)
		*SpawnLocation = params.SpawnLocation;
	if (SpawnRotation != nullptr)
		*SpawnRotation = params.SpawnRotation;
	if (BGATurret != nullptr)
		*BGATurret = params.BGATurret;

}


// Function GA_Generic_BotTurret.GA_Generic_BotTurret_C.Completed_3A74E5BE4F4D85991B8887A89A2350CB
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (Parm)
void UGA_Generic_BotTurret_C::Completed_3A74E5BE4F4D85991B8887A89A2350CB(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Generic_BotTurret.GA_Generic_BotTurret_C.Completed_3A74E5BE4F4D85991B8887A89A2350CB");

	UGA_Generic_BotTurret_C_Completed_3A74E5BE4F4D85991B8887A89A2350CB_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Generic_BotTurret.GA_Generic_BotTurret_C.Cancelled_3A74E5BE4F4D85991B8887A89A2350CB
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (Parm)
void UGA_Generic_BotTurret_C::Cancelled_3A74E5BE4F4D85991B8887A89A2350CB(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Generic_BotTurret.GA_Generic_BotTurret_C.Cancelled_3A74E5BE4F4D85991B8887A89A2350CB");

	UGA_Generic_BotTurret_C_Cancelled_3A74E5BE4F4D85991B8887A89A2350CB_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Generic_BotTurret.GA_Generic_BotTurret_C.Triggered_3A74E5BE4F4D85991B8887A89A2350CB
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (Parm)
void UGA_Generic_BotTurret_C::Triggered_3A74E5BE4F4D85991B8887A89A2350CB(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Generic_BotTurret.GA_Generic_BotTurret_C.Triggered_3A74E5BE4F4D85991B8887A89A2350CB");

	UGA_Generic_BotTurret_C_Triggered_3A74E5BE4F4D85991B8887A89A2350CB_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Generic_BotTurret.GA_Generic_BotTurret_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
void UGA_Generic_BotTurret_C::K2_ActivateAbility()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Generic_BotTurret.GA_Generic_BotTurret_C.K2_ActivateAbility");

	UGA_Generic_BotTurret_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Generic_BotTurret.GA_Generic_BotTurret_C.ExecuteUbergraph_GA_Generic_BotTurret
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_Generic_BotTurret_C::ExecuteUbergraph_GA_Generic_BotTurret(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Generic_BotTurret.GA_Generic_BotTurret_C.ExecuteUbergraph_GA_Generic_BotTurret");

	UGA_Generic_BotTurret_C_ExecuteUbergraph_GA_Generic_BotTurret_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
