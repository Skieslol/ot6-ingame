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

// Function ProjectileHuskRanged.ProjectileHuskRanged_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AProjectileHuskRanged_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ProjectileHuskRanged.ProjectileHuskRanged_C.UserConstructionScript");

	AProjectileHuskRanged_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProjectileHuskRanged.ProjectileHuskRanged_C.ReceiveHit
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     MyComp                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                  Other                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           bSelfMoved                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 HitLocation                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 HitNormal                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 NormalImpulse                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
void AProjectileHuskRanged_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ProjectileHuskRanged.ProjectileHuskRanged_C.ReceiveHit");

	AProjectileHuskRanged_C_ReceiveHit_Params params;
	params.MyComp = MyComp;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.bSelfMoved = bSelfMoved;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProjectileHuskRanged.ProjectileHuskRanged_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void AProjectileHuskRanged_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ProjectileHuskRanged.ProjectileHuskRanged_C.ReceiveBeginPlay");

	AProjectileHuskRanged_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProjectileHuskRanged.ProjectileHuskRanged_C.ProjectileCheck
// (BlueprintCallable, BlueprintEvent)
void AProjectileHuskRanged_C::ProjectileCheck()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ProjectileHuskRanged.ProjectileHuskRanged_C.ProjectileCheck");

	AProjectileHuskRanged_C_ProjectileCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProjectileHuskRanged.ProjectileHuskRanged_C.StopHoming
// (BlueprintCallable, BlueprintEvent)
void AProjectileHuskRanged_C::StopHoming()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ProjectileHuskRanged.ProjectileHuskRanged_C.StopHoming");

	AProjectileHuskRanged_C_StopHoming_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProjectileHuskRanged.ProjectileHuskRanged_C.OnExploded
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<class AActor*>          HitActors                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FHitResult>      HitResults                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
void AProjectileHuskRanged_C::OnExploded(TArray<class AActor*> HitActors, TArray<struct FHitResult> HitResults)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ProjectileHuskRanged.ProjectileHuskRanged_C.OnExploded");

	AProjectileHuskRanged_C_OnExploded_Params params;
	params.HitActors = HitActors;
	params.HitResults = HitResults;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProjectileHuskRanged.ProjectileHuskRanged_C.ExecuteUbergraph_ProjectileHuskRanged
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AProjectileHuskRanged_C::ExecuteUbergraph_ProjectileHuskRanged(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ProjectileHuskRanged.ProjectileHuskRanged_C.ExecuteUbergraph_ProjectileHuskRanged");

	AProjectileHuskRanged_C_ExecuteUbergraph_ProjectileHuskRanged_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
