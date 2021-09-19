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

// Function GA_Generic_Banner.GA_Generic_Banner_C.SetupLevelVarsInternal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAbilitySystemComponent* AbilitySystemComponent         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_Generic_Banner_C::SetupLevelVarsInternal(class UAbilitySystemComponent* AbilitySystemComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Generic_Banner.GA_Generic_Banner_C.SetupLevelVarsInternal");

	UGA_Generic_Banner_C_SetupLevelVarsInternal_Params params;
	params.AbilitySystemComponent = AbilitySystemComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Generic_Banner.GA_Generic_Banner_C.GetCustomAbilitySourceTransform
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
struct FTransform UGA_Generic_Banner_C::GetCustomAbilitySourceTransform()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Generic_Banner.GA_Generic_Banner_C.GetCustomAbilitySourceTransform");

	UGA_Generic_Banner_C_GetCustomAbilitySourceTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GA_Generic_Banner.GA_Generic_Banner_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
void UGA_Generic_Banner_C::Initialize()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Generic_Banner.GA_Generic_Banner_C.Initialize");

	UGA_Generic_Banner_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Generic_Banner.GA_Generic_Banner_C.SetupLevelVars
// (Public, BlueprintCallable, BlueprintEvent)
void UGA_Generic_Banner_C::SetupLevelVars()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Generic_Banner.GA_Generic_Banner_C.SetupLevelVars");

	UGA_Generic_Banner_C_SetupLevelVars_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Generic_Banner.GA_Generic_Banner_C.BuildingRepairWave
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          RepairWaveRadius               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_Generic_Banner_C::BuildingRepairWave(float RepairWaveRadius)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Generic_Banner.GA_Generic_Banner_C.BuildingRepairWave");

	UGA_Generic_Banner_C_BuildingRepairWave_Params params;
	params.RepairWaveRadius = RepairWaveRadius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Generic_Banner.GA_Generic_Banner_C.Completed_B223ACB541DAF6B70FE5BCB12C3C66E1
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (Parm)
void UGA_Generic_Banner_C::Completed_B223ACB541DAF6B70FE5BCB12C3C66E1(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Generic_Banner.GA_Generic_Banner_C.Completed_B223ACB541DAF6B70FE5BCB12C3C66E1");

	UGA_Generic_Banner_C_Completed_B223ACB541DAF6B70FE5BCB12C3C66E1_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Generic_Banner.GA_Generic_Banner_C.Cancelled_B223ACB541DAF6B70FE5BCB12C3C66E1
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (Parm)
void UGA_Generic_Banner_C::Cancelled_B223ACB541DAF6B70FE5BCB12C3C66E1(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Generic_Banner.GA_Generic_Banner_C.Cancelled_B223ACB541DAF6B70FE5BCB12C3C66E1");

	UGA_Generic_Banner_C_Cancelled_B223ACB541DAF6B70FE5BCB12C3C66E1_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Generic_Banner.GA_Generic_Banner_C.Triggered_B223ACB541DAF6B70FE5BCB12C3C66E1
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (Parm)
void UGA_Generic_Banner_C::Triggered_B223ACB541DAF6B70FE5BCB12C3C66E1(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Generic_Banner.GA_Generic_Banner_C.Triggered_B223ACB541DAF6B70FE5BCB12C3C66E1");

	UGA_Generic_Banner_C_Triggered_B223ACB541DAF6B70FE5BCB12C3C66E1_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Generic_Banner.GA_Generic_Banner_C.Cancelled_3D9DDD20491DEED5A55268A060EC3B66
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (Parm)
void UGA_Generic_Banner_C::Cancelled_3D9DDD20491DEED5A55268A060EC3B66(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Generic_Banner.GA_Generic_Banner_C.Cancelled_3D9DDD20491DEED5A55268A060EC3B66");

	UGA_Generic_Banner_C_Cancelled_3D9DDD20491DEED5A55268A060EC3B66_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Generic_Banner.GA_Generic_Banner_C.Targeted_3D9DDD20491DEED5A55268A060EC3B66
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (Parm)
void UGA_Generic_Banner_C::Targeted_3D9DDD20491DEED5A55268A060EC3B66(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Generic_Banner.GA_Generic_Banner_C.Targeted_3D9DDD20491DEED5A55268A060EC3B66");

	UGA_Generic_Banner_C_Targeted_3D9DDD20491DEED5A55268A060EC3B66_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Generic_Banner.GA_Generic_Banner_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
void UGA_Generic_Banner_C::K2_ActivateAbility()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Generic_Banner.GA_Generic_Banner_C.K2_ActivateAbility");

	UGA_Generic_Banner_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Generic_Banner.GA_Generic_Banner_C.DoBuildingRepair
// (BlueprintCallable, BlueprintEvent)
void UGA_Generic_Banner_C::DoBuildingRepair()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Generic_Banner.GA_Generic_Banner_C.DoBuildingRepair");

	UGA_Generic_Banner_C_DoBuildingRepair_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Generic_Banner.GA_Generic_Banner_C.ExecuteUbergraph_GA_Generic_Banner
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_Generic_Banner_C::ExecuteUbergraph_GA_Generic_Banner(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Generic_Banner.GA_Generic_Banner_C.ExecuteUbergraph_GA_Generic_Banner");

	UGA_Generic_Banner_C_ExecuteUbergraph_GA_Generic_Banner_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
