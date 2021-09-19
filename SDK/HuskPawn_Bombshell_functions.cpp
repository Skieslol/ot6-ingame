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

// Function HuskPawn_Bombshell.HuskPawn_Bombshell_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AHuskPawn_Bombshell_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HuskPawn_Bombshell.HuskPawn_Bombshell_C.UserConstructionScript");

	AHuskPawn_Bombshell_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HuskPawn_Bombshell.HuskPawn_Bombshell_C.PawnUniqueIDSet
// (Event, Public, BlueprintEvent)
void AHuskPawn_Bombshell_C::PawnUniqueIDSet()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HuskPawn_Bombshell.HuskPawn_Bombshell_C.PawnUniqueIDSet");

	AHuskPawn_Bombshell_C_PawnUniqueIDSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HuskPawn_Bombshell.HuskPawn_Bombshell_C.OnDeathPlayEffects
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTagContainer   DamageTags                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                 Momentum                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult              HitInfo                        (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class AFortPawn*               InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayEffectContextHandle EffectContext                  (Parm)
void AHuskPawn_Bombshell_C::OnDeathPlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HuskPawn_Bombshell.HuskPawn_Bombshell_C.OnDeathPlayEffects");

	AHuskPawn_Bombshell_C_OnDeathPlayEffects_Params params;
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


// Function HuskPawn_Bombshell.HuskPawn_Bombshell_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void AHuskPawn_Bombshell_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HuskPawn_Bombshell.HuskPawn_Bombshell_C.ReceiveBeginPlay");

	AHuskPawn_Bombshell_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HuskPawn_Bombshell.HuskPawn_Bombshell_C.ExecuteUbergraph_HuskPawn_Bombshell
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHuskPawn_Bombshell_C::ExecuteUbergraph_HuskPawn_Bombshell(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HuskPawn_Bombshell.HuskPawn_Bombshell_C.ExecuteUbergraph_HuskPawn_Bombshell");

	AHuskPawn_Bombshell_C_ExecuteUbergraph_HuskPawn_Bombshell_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
