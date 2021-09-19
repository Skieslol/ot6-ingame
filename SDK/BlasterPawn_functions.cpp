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

// Function BlasterPawn.BlasterPawn_C.OnRep_HeadEffectStatus
// (BlueprintCallable, BlueprintEvent)
void ABlasterPawn_C::OnRep_HeadEffectStatus()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BlasterPawn.BlasterPawn_C.OnRep_HeadEffectStatus");

	ABlasterPawn_C_OnRep_HeadEffectStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BlasterPawn.BlasterPawn_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABlasterPawn_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BlasterPawn.BlasterPawn_C.UserConstructionScript");

	ABlasterPawn_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BlasterPawn.BlasterPawn_C.OnDeathServer
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTagContainer   DamageTags                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                 Momentum                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult              HitInfo                        (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class AController*             InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayEffectContextHandle EffectContext                  (Parm)
void ABlasterPawn_C::OnDeathServer(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BlasterPawn.BlasterPawn_C.OnDeathServer");

	ABlasterPawn_C_OnDeathServer_Params params;
	params.Damage = Damage;
	params.DamageTags = DamageTags;
	params.Momentum = Momentum;
	params.HitInfo = HitInfo;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.EffectContext = EffectContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BlasterPawn.BlasterPawn_C.GameplayCue.Impact.Physical.Energy
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayCueParameters  Parameters                     (Parm)
void ABlasterPawn_C::GameplayCue_Impact_Physical_Energy(TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BlasterPawn.BlasterPawn_C.GameplayCue.Impact.Physical.Energy");

	ABlasterPawn_C_GameplayCue_Impact_Physical_Energy_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BlasterPawn.BlasterPawn_C.ExecuteUbergraph_BlasterPawn
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABlasterPawn_C::ExecuteUbergraph_BlasterPawn(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BlasterPawn.BlasterPawn_C.ExecuteUbergraph_BlasterPawn");

	ABlasterPawn_C_ExecuteUbergraph_BlasterPawn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
