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

// Function GA_Trap_FloorLauncher.GA_Trap_FloorLauncher_C.OnApplied_A7A2BC074785D273036EA19D186AC748
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Target                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayEffectSpecHandle SpecHandle                     (Parm)
// struct FActiveGameplayEffectHandle ActiveHandle                   (Parm)
void UGA_Trap_FloorLauncher_C::OnApplied_A7A2BC074785D273036EA19D186AC748(class AActor* Target, const struct FGameplayEffectSpecHandle& SpecHandle, const struct FActiveGameplayEffectHandle& ActiveHandle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Trap_FloorLauncher.GA_Trap_FloorLauncher_C.OnApplied_A7A2BC074785D273036EA19D186AC748");

	UGA_Trap_FloorLauncher_C_OnApplied_A7A2BC074785D273036EA19D186AC748_Params params;
	params.Target = Target;
	params.SpecHandle = SpecHandle;
	params.ActiveHandle = ActiveHandle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Trap_FloorLauncher.GA_Trap_FloorLauncher_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
void UGA_Trap_FloorLauncher_C::K2_ActivateAbility()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Trap_FloorLauncher.GA_Trap_FloorLauncher_C.K2_ActivateAbility");

	UGA_Trap_FloorLauncher_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Trap_FloorLauncher.GA_Trap_FloorLauncher_C.ExecuteUbergraph_GA_Trap_FloorLauncher
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_Trap_FloorLauncher_C::ExecuteUbergraph_GA_Trap_FloorLauncher(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Trap_FloorLauncher.GA_Trap_FloorLauncher_C.ExecuteUbergraph_GA_Trap_FloorLauncher");

	UGA_Trap_FloorLauncher_C_ExecuteUbergraph_GA_Trap_FloorLauncher_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
