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

// Function GA_Ninja_ThrowingStars.GA_Ninja_ThrowingStars_C.SetupVariables
// (Public, BlueprintCallable, BlueprintEvent)
void UGA_Ninja_ThrowingStars_C::SetupVariables()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Ninja_ThrowingStars.GA_Ninja_ThrowingStars_C.SetupVariables");

	UGA_Ninja_ThrowingStars_C_SetupVariables_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Ninja_ThrowingStars.GA_Ninja_ThrowingStars_C.ThrowCascade
// (Public, BlueprintCallable, BlueprintEvent)
void UGA_Ninja_ThrowingStars_C::ThrowCascade()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Ninja_ThrowingStars.GA_Ninja_ThrowingStars_C.ThrowCascade");

	UGA_Ninja_ThrowingStars_C_ThrowCascade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Ninja_ThrowingStars.GA_Ninja_ThrowingStars_C.ThrowAdditionalStars
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UGA_Ninja_ThrowingStars_C::ThrowAdditionalStars()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Ninja_ThrowingStars.GA_Ninja_ThrowingStars_C.ThrowAdditionalStars");

	UGA_Ninja_ThrowingStars_C_ThrowAdditionalStars_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Ninja_ThrowingStars.GA_Ninja_ThrowingStars_C.Throw Lv3 Stars
// (Public, BlueprintCallable, BlueprintEvent)
void UGA_Ninja_ThrowingStars_C::Throw_Lv3_Stars()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Ninja_ThrowingStars.GA_Ninja_ThrowingStars_C.Throw Lv3 Stars");

	UGA_Ninja_ThrowingStars_C_Throw_Lv3_Stars_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Ninja_ThrowingStars.GA_Ninja_ThrowingStars_C.Thow Lv2 Stars
// (Public, BlueprintCallable, BlueprintEvent)
void UGA_Ninja_ThrowingStars_C::Thow_Lv2_Stars()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Ninja_ThrowingStars.GA_Ninja_ThrowingStars_C.Thow Lv2 Stars");

	UGA_Ninja_ThrowingStars_C_Thow_Lv2_Stars_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Ninja_ThrowingStars.GA_Ninja_ThrowingStars_C.ThrowBasicStars
// (Public, BlueprintCallable, BlueprintEvent)
void UGA_Ninja_ThrowingStars_C::ThrowBasicStars()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Ninja_ThrowingStars.GA_Ninja_ThrowingStars_C.ThrowBasicStars");

	UGA_Ninja_ThrowingStars_C_ThrowBasicStars_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Ninja_ThrowingStars.GA_Ninja_ThrowingStars_C.SpawnThrowingStar
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Transform_Offset               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          Horizontal_Spread              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                  Homing_Target                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_Ninja_ThrowingStars_C::SpawnThrowingStar(const struct FVector& Transform_Offset, float Horizontal_Spread, class AActor* Homing_Target)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Ninja_ThrowingStars.GA_Ninja_ThrowingStars_C.SpawnThrowingStar");

	UGA_Ninja_ThrowingStars_C_SpawnThrowingStar_Params params;
	params.Transform_Offset = Transform_Offset;
	params.Horizontal_Spread = Horizontal_Spread;
	params.Homing_Target = Homing_Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Ninja_ThrowingStars.GA_Ninja_ThrowingStars_C.Cancelled_F7576E764ABBFFFBF1A6BE95A742E0A6
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (Parm)
void UGA_Ninja_ThrowingStars_C::Cancelled_F7576E764ABBFFFBF1A6BE95A742E0A6(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Ninja_ThrowingStars.GA_Ninja_ThrowingStars_C.Cancelled_F7576E764ABBFFFBF1A6BE95A742E0A6");

	UGA_Ninja_ThrowingStars_C_Cancelled_F7576E764ABBFFFBF1A6BE95A742E0A6_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Ninja_ThrowingStars.GA_Ninja_ThrowingStars_C.Targeted_F7576E764ABBFFFBF1A6BE95A742E0A6
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (Parm)
void UGA_Ninja_ThrowingStars_C::Targeted_F7576E764ABBFFFBF1A6BE95A742E0A6(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Ninja_ThrowingStars.GA_Ninja_ThrowingStars_C.Targeted_F7576E764ABBFFFBF1A6BE95A742E0A6");

	UGA_Ninja_ThrowingStars_C_Targeted_F7576E764ABBFFFBF1A6BE95A742E0A6_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Ninja_ThrowingStars.GA_Ninja_ThrowingStars_C.Completed_6FEC3EAA4C7675A1295702BBAE17678C
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (Parm)
void UGA_Ninja_ThrowingStars_C::Completed_6FEC3EAA4C7675A1295702BBAE17678C(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Ninja_ThrowingStars.GA_Ninja_ThrowingStars_C.Completed_6FEC3EAA4C7675A1295702BBAE17678C");

	UGA_Ninja_ThrowingStars_C_Completed_6FEC3EAA4C7675A1295702BBAE17678C_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Ninja_ThrowingStars.GA_Ninja_ThrowingStars_C.Cancelled_6FEC3EAA4C7675A1295702BBAE17678C
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (Parm)
void UGA_Ninja_ThrowingStars_C::Cancelled_6FEC3EAA4C7675A1295702BBAE17678C(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Ninja_ThrowingStars.GA_Ninja_ThrowingStars_C.Cancelled_6FEC3EAA4C7675A1295702BBAE17678C");

	UGA_Ninja_ThrowingStars_C_Cancelled_6FEC3EAA4C7675A1295702BBAE17678C_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Ninja_ThrowingStars.GA_Ninja_ThrowingStars_C.Triggered_6FEC3EAA4C7675A1295702BBAE17678C
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (Parm)
void UGA_Ninja_ThrowingStars_C::Triggered_6FEC3EAA4C7675A1295702BBAE17678C(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Ninja_ThrowingStars.GA_Ninja_ThrowingStars_C.Triggered_6FEC3EAA4C7675A1295702BBAE17678C");

	UGA_Ninja_ThrowingStars_C_Triggered_6FEC3EAA4C7675A1295702BBAE17678C_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Ninja_ThrowingStars.GA_Ninja_ThrowingStars_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
void UGA_Ninja_ThrowingStars_C::K2_ActivateAbility()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Ninja_ThrowingStars.GA_Ninja_ThrowingStars_C.K2_ActivateAbility");

	UGA_Ninja_ThrowingStars_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Ninja_ThrowingStars.GA_Ninja_ThrowingStars_C.ExecuteUbergraph_GA_Ninja_ThrowingStars
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_Ninja_ThrowingStars_C::ExecuteUbergraph_GA_Ninja_ThrowingStars(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Ninja_ThrowingStars.GA_Ninja_ThrowingStars_C.ExecuteUbergraph_GA_Ninja_ThrowingStars");

	UGA_Ninja_ThrowingStars_C_ExecuteUbergraph_GA_Ninja_ThrowingStars_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
