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

// Function GA_Explorer_Fragment.GA_Explorer_Fragment_C.ApplyStatScaling
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AB_BGA_Explorer_OutlanderFragmentBear_C* BearReference                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_Explorer_Fragment_C::ApplyStatScaling(class AB_BGA_Explorer_OutlanderFragmentBear_C* BearReference)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Explorer_Fragment.GA_Explorer_Fragment_C.ApplyStatScaling");

	UGA_Explorer_Fragment_C_ApplyStatScaling_Params params;
	params.BearReference = BearReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Explorer_Fragment.GA_Explorer_Fragment_C.DarkHackyMath
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*         HitTarget                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          SetByCallerValue               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_Explorer_Fragment_C::DarkHackyMath(class AFortPlayerPawn* HitTarget, float* SetByCallerValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Explorer_Fragment.GA_Explorer_Fragment_C.DarkHackyMath");

	UGA_Explorer_Fragment_C_DarkHackyMath_Params params;
	params.HitTarget = HitTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SetByCallerValue != nullptr)
		*SetByCallerValue = params.SetByCallerValue;

}


// Function GA_Explorer_Fragment.GA_Explorer_Fragment_C.K2_ShouldUseDecoTool
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FGameplayAbilityActorInfo ActorInfo                      (Parm, ContainsInstancedReference)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UGA_Explorer_Fragment_C::K2_ShouldUseDecoTool(const struct FGameplayAbilityActorInfo& ActorInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Explorer_Fragment.GA_Explorer_Fragment_C.K2_ShouldUseDecoTool");

	UGA_Explorer_Fragment_C_K2_ShouldUseDecoTool_Params params;
	params.ActorInfo = ActorInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GA_Explorer_Fragment.GA_Explorer_Fragment_C.SetupIconOverride
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UGA_Explorer_Fragment_C::SetupIconOverride()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Explorer_Fragment.GA_Explorer_Fragment_C.SetupIconOverride");

	UGA_Explorer_Fragment_C_SetupIconOverride_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GA_Explorer_Fragment.GA_Explorer_Fragment_C.K2_GetIconOverride
// (HasDefaults, BlueprintCallable, BlueprintEvent)
void UGA_Explorer_Fragment_C::K2_GetIconOverride()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Explorer_Fragment.GA_Explorer_Fragment_C.K2_GetIconOverride");

	UGA_Explorer_Fragment_C_K2_GetIconOverride_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Explorer_Fragment.GA_Explorer_Fragment_C.K2_CanActivateAbility
// (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAbilityActorInfo ActorInfo                      (Parm, ContainsInstancedReference)
// struct FGameplayTagContainer   RelevantTags                   (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UGA_Explorer_Fragment_C::K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayTagContainer* RelevantTags)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Explorer_Fragment.GA_Explorer_Fragment_C.K2_CanActivateAbility");

	UGA_Explorer_Fragment_C_K2_CanActivateAbility_Params params;
	params.ActorInfo = ActorInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RelevantTags != nullptr)
		*RelevantTags = params.RelevantTags;


	return params.ReturnValue;
}


// Function GA_Explorer_Fragment.GA_Explorer_Fragment_C.SpecialtyFragment
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_ExplorerClassList_E_ExplorerClassList> ClassType                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_Explorer_Fragment_C::SpecialtyFragment(TEnumAsByte<E_ExplorerClassList_E_ExplorerClassList> ClassType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Explorer_Fragment.GA_Explorer_Fragment_C.SpecialtyFragment");

	UGA_Explorer_Fragment_C_SpecialtyFragment_Params params;
	params.ClassType = ClassType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Explorer_Fragment.GA_Explorer_Fragment_C.DefensiveFragment
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_ExplorerClassList_E_ExplorerClassList> ClassType                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayAbilityTargetDataHandle Target_Data                    (Parm)
// struct FGameplayTag            Application_Tag                (Parm)
void UGA_Explorer_Fragment_C::DefensiveFragment(TEnumAsByte<E_ExplorerClassList_E_ExplorerClassList> ClassType, const struct FGameplayAbilityTargetDataHandle& Target_Data, const struct FGameplayTag& Application_Tag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Explorer_Fragment.GA_Explorer_Fragment_C.DefensiveFragment");

	UGA_Explorer_Fragment_C_DefensiveFragment_Params params;
	params.ClassType = ClassType;
	params.Target_Data = Target_Data;
	params.Application_Tag = Application_Tag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Explorer_Fragment.GA_Explorer_Fragment_C.ClassSelection
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*         PlayerPawn                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerPawn*         ClassPawn                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TEnumAsByte<E_ExplorerClassList_E_ExplorerClassList> SelectedClass                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           EndAbility                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_Explorer_Fragment_C::ClassSelection(class AFortPlayerPawn* PlayerPawn, class AFortPlayerPawn** ClassPawn, TEnumAsByte<E_ExplorerClassList_E_ExplorerClassList>* SelectedClass, bool* EndAbility)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Explorer_Fragment.GA_Explorer_Fragment_C.ClassSelection");

	UGA_Explorer_Fragment_C_ClassSelection_Params params;
	params.PlayerPawn = PlayerPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ClassPawn != nullptr)
		*ClassPawn = params.ClassPawn;
	if (SelectedClass != nullptr)
		*SelectedClass = params.SelectedClass;
	if (EndAbility != nullptr)
		*EndAbility = params.EndAbility;

}


// Function GA_Explorer_Fragment.GA_Explorer_Fragment_C.ActivateFragment
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_ExplorerFragmentTypes_E_ExplorerFragmentTypes> FragmentType                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TEnumAsByte<E_ExplorerClassList_E_ExplorerClassList> ClassType                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag            ActivateEvent                  (Parm, OutParm)
// bool                           EndAbility                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_Explorer_Fragment_C::ActivateFragment(TEnumAsByte<E_ExplorerFragmentTypes_E_ExplorerFragmentTypes>* FragmentType, TEnumAsByte<E_ExplorerClassList_E_ExplorerClassList>* ClassType, struct FGameplayTag* ActivateEvent, bool* EndAbility)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Explorer_Fragment.GA_Explorer_Fragment_C.ActivateFragment");

	UGA_Explorer_Fragment_C_ActivateFragment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FragmentType != nullptr)
		*FragmentType = params.FragmentType;
	if (ClassType != nullptr)
		*ClassType = params.ClassType;
	if (ActivateEvent != nullptr)
		*ActivateEvent = params.ActivateEvent;
	if (EndAbility != nullptr)
		*EndAbility = params.EndAbility;

}


// Function GA_Explorer_Fragment.GA_Explorer_Fragment_C.OffensiveFragment
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_ExplorerClassList_E_ExplorerClassList> ClassType                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayAbilityTargetDataHandle TargetData                     (Parm)
void UGA_Explorer_Fragment_C::OffensiveFragment(TEnumAsByte<E_ExplorerClassList_E_ExplorerClassList> ClassType, const struct FGameplayAbilityTargetDataHandle& TargetData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Explorer_Fragment.GA_Explorer_Fragment_C.OffensiveFragment");

	UGA_Explorer_Fragment_C_OffensiveFragment_Params params;
	params.ClassType = ClassType;
	params.TargetData = TargetData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Explorer_Fragment.GA_Explorer_Fragment_C.Cancelled_AB9C57344D21682887FAA6B895FA1C6D
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (Parm)
void UGA_Explorer_Fragment_C::Cancelled_AB9C57344D21682887FAA6B895FA1C6D(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Explorer_Fragment.GA_Explorer_Fragment_C.Cancelled_AB9C57344D21682887FAA6B895FA1C6D");

	UGA_Explorer_Fragment_C_Cancelled_AB9C57344D21682887FAA6B895FA1C6D_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Explorer_Fragment.GA_Explorer_Fragment_C.Targeted_AB9C57344D21682887FAA6B895FA1C6D
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (Parm)
void UGA_Explorer_Fragment_C::Targeted_AB9C57344D21682887FAA6B895FA1C6D(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Explorer_Fragment.GA_Explorer_Fragment_C.Targeted_AB9C57344D21682887FAA6B895FA1C6D");

	UGA_Explorer_Fragment_C_Targeted_AB9C57344D21682887FAA6B895FA1C6D_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Explorer_Fragment.GA_Explorer_Fragment_C.Cancelled_0DCC89D649F1683B5F78AC9AEEA4CBBB
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (Parm)
void UGA_Explorer_Fragment_C::Cancelled_0DCC89D649F1683B5F78AC9AEEA4CBBB(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Explorer_Fragment.GA_Explorer_Fragment_C.Cancelled_0DCC89D649F1683B5F78AC9AEEA4CBBB");

	UGA_Explorer_Fragment_C_Cancelled_0DCC89D649F1683B5F78AC9AEEA4CBBB_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Explorer_Fragment.GA_Explorer_Fragment_C.Targeted_0DCC89D649F1683B5F78AC9AEEA4CBBB
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (Parm)
void UGA_Explorer_Fragment_C::Targeted_0DCC89D649F1683B5F78AC9AEEA4CBBB(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Explorer_Fragment.GA_Explorer_Fragment_C.Targeted_0DCC89D649F1683B5F78AC9AEEA4CBBB");

	UGA_Explorer_Fragment_C_Targeted_0DCC89D649F1683B5F78AC9AEEA4CBBB_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Explorer_Fragment.GA_Explorer_Fragment_C.Cancelled_D9A99A8E430AA4101B325597D2C21C37
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (Parm)
void UGA_Explorer_Fragment_C::Cancelled_D9A99A8E430AA4101B325597D2C21C37(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Explorer_Fragment.GA_Explorer_Fragment_C.Cancelled_D9A99A8E430AA4101B325597D2C21C37");

	UGA_Explorer_Fragment_C_Cancelled_D9A99A8E430AA4101B325597D2C21C37_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Explorer_Fragment.GA_Explorer_Fragment_C.Targeted_D9A99A8E430AA4101B325597D2C21C37
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (Parm)
void UGA_Explorer_Fragment_C::Targeted_D9A99A8E430AA4101B325597D2C21C37(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Explorer_Fragment.GA_Explorer_Fragment_C.Targeted_D9A99A8E430AA4101B325597D2C21C37");

	UGA_Explorer_Fragment_C_Targeted_D9A99A8E430AA4101B325597D2C21C37_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Explorer_Fragment.GA_Explorer_Fragment_C.OnCancelled_AEBC8CA9454DB4A76A8336BD4EE30254
// (BlueprintCallable, BlueprintEvent)
void UGA_Explorer_Fragment_C::OnCancelled_AEBC8CA9454DB4A76A8336BD4EE30254()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Explorer_Fragment.GA_Explorer_Fragment_C.OnCancelled_AEBC8CA9454DB4A76A8336BD4EE30254");

	UGA_Explorer_Fragment_C_OnCancelled_AEBC8CA9454DB4A76A8336BD4EE30254_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Explorer_Fragment.GA_Explorer_Fragment_C.OnInterrupted_AEBC8CA9454DB4A76A8336BD4EE30254
// (BlueprintCallable, BlueprintEvent)
void UGA_Explorer_Fragment_C::OnInterrupted_AEBC8CA9454DB4A76A8336BD4EE30254()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Explorer_Fragment.GA_Explorer_Fragment_C.OnInterrupted_AEBC8CA9454DB4A76A8336BD4EE30254");

	UGA_Explorer_Fragment_C_OnInterrupted_AEBC8CA9454DB4A76A8336BD4EE30254_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Explorer_Fragment.GA_Explorer_Fragment_C.OnComplete_AEBC8CA9454DB4A76A8336BD4EE30254
// (BlueprintCallable, BlueprintEvent)
void UGA_Explorer_Fragment_C::OnComplete_AEBC8CA9454DB4A76A8336BD4EE30254()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Explorer_Fragment.GA_Explorer_Fragment_C.OnComplete_AEBC8CA9454DB4A76A8336BD4EE30254");

	UGA_Explorer_Fragment_C_OnComplete_AEBC8CA9454DB4A76A8336BD4EE30254_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Explorer_Fragment.GA_Explorer_Fragment_C.Destroyed_56D0E8B74E6D3560ABB4BF82A5A31928
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData    ProjectileData                 (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
void UGA_Explorer_Fragment_C::Destroyed_56D0E8B74E6D3560ABB4BF82A5A31928(const struct FProjectileEventData& ProjectileData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Explorer_Fragment.GA_Explorer_Fragment_C.Destroyed_56D0E8B74E6D3560ABB4BF82A5A31928");

	UGA_Explorer_Fragment_C_Destroyed_56D0E8B74E6D3560ABB4BF82A5A31928_Params params;
	params.ProjectileData = ProjectileData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Explorer_Fragment.GA_Explorer_Fragment_C.Exploded_56D0E8B74E6D3560ABB4BF82A5A31928
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData    ProjectileData                 (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
void UGA_Explorer_Fragment_C::Exploded_56D0E8B74E6D3560ABB4BF82A5A31928(const struct FProjectileEventData& ProjectileData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Explorer_Fragment.GA_Explorer_Fragment_C.Exploded_56D0E8B74E6D3560ABB4BF82A5A31928");

	UGA_Explorer_Fragment_C_Exploded_56D0E8B74E6D3560ABB4BF82A5A31928_Params params;
	params.ProjectileData = ProjectileData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Explorer_Fragment.GA_Explorer_Fragment_C.Stopped_56D0E8B74E6D3560ABB4BF82A5A31928
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData    ProjectileData                 (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
void UGA_Explorer_Fragment_C::Stopped_56D0E8B74E6D3560ABB4BF82A5A31928(const struct FProjectileEventData& ProjectileData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Explorer_Fragment.GA_Explorer_Fragment_C.Stopped_56D0E8B74E6D3560ABB4BF82A5A31928");

	UGA_Explorer_Fragment_C_Stopped_56D0E8B74E6D3560ABB4BF82A5A31928_Params params;
	params.ProjectileData = ProjectileData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Explorer_Fragment.GA_Explorer_Fragment_C.Bounced_56D0E8B74E6D3560ABB4BF82A5A31928
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData    ProjectileData                 (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
void UGA_Explorer_Fragment_C::Bounced_56D0E8B74E6D3560ABB4BF82A5A31928(const struct FProjectileEventData& ProjectileData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Explorer_Fragment.GA_Explorer_Fragment_C.Bounced_56D0E8B74E6D3560ABB4BF82A5A31928");

	UGA_Explorer_Fragment_C_Bounced_56D0E8B74E6D3560ABB4BF82A5A31928_Params params;
	params.ProjectileData = ProjectileData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Explorer_Fragment.GA_Explorer_Fragment_C.Touched_56D0E8B74E6D3560ABB4BF82A5A31928
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData    ProjectileData                 (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
void UGA_Explorer_Fragment_C::Touched_56D0E8B74E6D3560ABB4BF82A5A31928(const struct FProjectileEventData& ProjectileData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Explorer_Fragment.GA_Explorer_Fragment_C.Touched_56D0E8B74E6D3560ABB4BF82A5A31928");

	UGA_Explorer_Fragment_C_Touched_56D0E8B74E6D3560ABB4BF82A5A31928_Params params;
	params.ProjectileData = ProjectileData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Explorer_Fragment.GA_Explorer_Fragment_C.Created_56D0E8B74E6D3560ABB4BF82A5A31928
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData    ProjectileData                 (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
void UGA_Explorer_Fragment_C::Created_56D0E8B74E6D3560ABB4BF82A5A31928(const struct FProjectileEventData& ProjectileData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Explorer_Fragment.GA_Explorer_Fragment_C.Created_56D0E8B74E6D3560ABB4BF82A5A31928");

	UGA_Explorer_Fragment_C_Created_56D0E8B74E6D3560ABB4BF82A5A31928_Params params;
	params.ProjectileData = ProjectileData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Explorer_Fragment.GA_Explorer_Fragment_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
void UGA_Explorer_Fragment_C::K2_ActivateAbility()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Explorer_Fragment.GA_Explorer_Fragment_C.K2_ActivateAbility");

	UGA_Explorer_Fragment_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Explorer_Fragment.GA_Explorer_Fragment_C.ExecuteUbergraph_GA_Explorer_Fragment
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_Explorer_Fragment_C::ExecuteUbergraph_GA_Explorer_Fragment(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Explorer_Fragment.GA_Explorer_Fragment_C.ExecuteUbergraph_GA_Explorer_Fragment");

	UGA_Explorer_Fragment_C_ExecuteUbergraph_GA_Explorer_Fragment_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
