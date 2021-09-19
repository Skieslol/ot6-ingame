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

// Function GAB_GenericApplyFullBodyHit.GAB_GenericApplyFullBodyHit_C.K2_CanActivateAbility
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityActorInfo ActorInfo                      (Parm, ContainsInstancedReference)
// struct FGameplayTagContainer   RelevantTags                   (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UGAB_GenericApplyFullBodyHit_C::K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayTagContainer* RelevantTags)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GAB_GenericApplyFullBodyHit.GAB_GenericApplyFullBodyHit_C.K2_CanActivateAbility");

	UGAB_GenericApplyFullBodyHit_C_K2_CanActivateAbility_Params params;
	params.ActorInfo = ActorInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RelevantTags != nullptr)
		*RelevantTags = params.RelevantTags;


	return params.ReturnValue;
}


// Function GAB_GenericApplyFullBodyHit.GAB_GenericApplyFullBodyHit_C.OnCancelled_25E5E66442E815EB40A6DB8205FE0D98
// (BlueprintCallable, BlueprintEvent)
void UGAB_GenericApplyFullBodyHit_C::OnCancelled_25E5E66442E815EB40A6DB8205FE0D98()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GAB_GenericApplyFullBodyHit.GAB_GenericApplyFullBodyHit_C.OnCancelled_25E5E66442E815EB40A6DB8205FE0D98");

	UGAB_GenericApplyFullBodyHit_C_OnCancelled_25E5E66442E815EB40A6DB8205FE0D98_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GAB_GenericApplyFullBodyHit.GAB_GenericApplyFullBodyHit_C.OnInterrupted_25E5E66442E815EB40A6DB8205FE0D98
// (BlueprintCallable, BlueprintEvent)
void UGAB_GenericApplyFullBodyHit_C::OnInterrupted_25E5E66442E815EB40A6DB8205FE0D98()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GAB_GenericApplyFullBodyHit.GAB_GenericApplyFullBodyHit_C.OnInterrupted_25E5E66442E815EB40A6DB8205FE0D98");

	UGAB_GenericApplyFullBodyHit_C_OnInterrupted_25E5E66442E815EB40A6DB8205FE0D98_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GAB_GenericApplyFullBodyHit.GAB_GenericApplyFullBodyHit_C.OnComplete_25E5E66442E815EB40A6DB8205FE0D98
// (BlueprintCallable, BlueprintEvent)
void UGAB_GenericApplyFullBodyHit_C::OnComplete_25E5E66442E815EB40A6DB8205FE0D98()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GAB_GenericApplyFullBodyHit.GAB_GenericApplyFullBodyHit_C.OnComplete_25E5E66442E815EB40A6DB8205FE0D98");

	UGAB_GenericApplyFullBodyHit_C_OnComplete_25E5E66442E815EB40A6DB8205FE0D98_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GAB_GenericApplyFullBodyHit.GAB_GenericApplyFullBodyHit_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
void UGAB_GenericApplyFullBodyHit_C::K2_OnEndAbility()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GAB_GenericApplyFullBodyHit.GAB_GenericApplyFullBodyHit_C.K2_OnEndAbility");

	UGAB_GenericApplyFullBodyHit_C_K2_OnEndAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GAB_GenericApplyFullBodyHit.GAB_GenericApplyFullBodyHit_C.OnHitPawn
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  SelfActor                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 NormalImpulse                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
void UGAB_GenericApplyFullBodyHit_C::OnHitPawn(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GAB_GenericApplyFullBodyHit.GAB_GenericApplyFullBodyHit_C.OnHitPawn");

	UGAB_GenericApplyFullBodyHit_C_OnHitPawn_Params params;
	params.SelfActor = SelfActor;
	params.OtherActor = OtherActor;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GAB_GenericApplyFullBodyHit.GAB_GenericApplyFullBodyHit_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      EventData                      (ConstParm, Parm, OutParm, ReferenceParm)
void UGAB_GenericApplyFullBodyHit_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GAB_GenericApplyFullBodyHit.GAB_GenericApplyFullBodyHit_C.K2_ActivateAbilityFromEvent");

	UGAB_GenericApplyFullBodyHit_C_K2_ActivateAbilityFromEvent_Params params;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GAB_GenericApplyFullBodyHit.GAB_GenericApplyFullBodyHit_C.PickFullBodyHitMontageSection
// (BlueprintCallable, BlueprintEvent)
void UGAB_GenericApplyFullBodyHit_C::PickFullBodyHitMontageSection()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GAB_GenericApplyFullBodyHit.GAB_GenericApplyFullBodyHit_C.PickFullBodyHitMontageSection");

	UGAB_GenericApplyFullBodyHit_C_PickFullBodyHitMontageSection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GAB_GenericApplyFullBodyHit.GAB_GenericApplyFullBodyHit_C.ApplyPushMomentum
// (BlueprintCallable, BlueprintEvent)
void UGAB_GenericApplyFullBodyHit_C::ApplyPushMomentum()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GAB_GenericApplyFullBodyHit.GAB_GenericApplyFullBodyHit_C.ApplyPushMomentum");

	UGAB_GenericApplyFullBodyHit_C_ApplyPushMomentum_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GAB_GenericApplyFullBodyHit.GAB_GenericApplyFullBodyHit_C.ExecuteUbergraph_GAB_GenericApplyFullBodyHit
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGAB_GenericApplyFullBodyHit_C::ExecuteUbergraph_GAB_GenericApplyFullBodyHit(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GAB_GenericApplyFullBodyHit.GAB_GenericApplyFullBodyHit_C.ExecuteUbergraph_GAB_GenericApplyFullBodyHit");

	UGAB_GenericApplyFullBodyHit_C_ExecuteUbergraph_GAB_GenericApplyFullBodyHit_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
