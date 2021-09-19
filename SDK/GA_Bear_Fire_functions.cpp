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

// Function GA_Bear_Fire.GA_Bear_Fire_C.Cancelled_0B48E8B547027954C37AA1BF4D77BE31
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (Parm)
void UGA_Bear_Fire_C::Cancelled_0B48E8B547027954C37AA1BF4D77BE31(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Bear_Fire.GA_Bear_Fire_C.Cancelled_0B48E8B547027954C37AA1BF4D77BE31");

	UGA_Bear_Fire_C_Cancelled_0B48E8B547027954C37AA1BF4D77BE31_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Bear_Fire.GA_Bear_Fire_C.Targeted_0B48E8B547027954C37AA1BF4D77BE31
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (Parm)
void UGA_Bear_Fire_C::Targeted_0B48E8B547027954C37AA1BF4D77BE31(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Bear_Fire.GA_Bear_Fire_C.Targeted_0B48E8B547027954C37AA1BF4D77BE31");

	UGA_Bear_Fire_C_Targeted_0B48E8B547027954C37AA1BF4D77BE31_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Bear_Fire.GA_Bear_Fire_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
void UGA_Bear_Fire_C::K2_ActivateAbility()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Bear_Fire.GA_Bear_Fire_C.K2_ActivateAbility");

	UGA_Bear_Fire_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Bear_Fire.GA_Bear_Fire_C.ExecuteUbergraph_GA_Bear_Fire
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_Bear_Fire_C::ExecuteUbergraph_GA_Bear_Fire(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Bear_Fire.GA_Bear_Fire_C.ExecuteUbergraph_GA_Bear_Fire");

	UGA_Bear_Fire_C_ExecuteUbergraph_GA_Bear_Fire_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
