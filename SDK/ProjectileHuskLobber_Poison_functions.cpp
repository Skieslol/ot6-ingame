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

// Function ProjectileHuskLobber_Poison.ProjectileHuskLobber_Poison_C.Is Valid Damage Target
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  CollidingActor                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Is_Valid_Damage_Target         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPawn*               Valid_Pawn                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AProjectileHuskLobber_Poison_C::Is_Valid_Damage_Target(class AActor* CollidingActor, bool* Is_Valid_Damage_Target, class AFortPawn** Valid_Pawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ProjectileHuskLobber_Poison.ProjectileHuskLobber_Poison_C.Is Valid Damage Target");

	AProjectileHuskLobber_Poison_C_Is_Valid_Damage_Target_Params params;
	params.CollidingActor = CollidingActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Is_Valid_Damage_Target != nullptr)
		*Is_Valid_Damage_Target = params.Is_Valid_Damage_Target;
	if (Valid_Pawn != nullptr)
		*Valid_Pawn = params.Valid_Pawn;

}


// Function ProjectileHuskLobber_Poison.ProjectileHuskLobber_Poison_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AProjectileHuskLobber_Poison_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ProjectileHuskLobber_Poison.ProjectileHuskLobber_Poison_C.UserConstructionScript");

	AProjectileHuskLobber_Poison_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProjectileHuskLobber_Poison.ProjectileHuskLobber_Poison_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
void AProjectileHuskLobber_Poison_C::Timeline_0__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ProjectileHuskLobber_Poison.ProjectileHuskLobber_Poison_C.Timeline_0__FinishedFunc");

	AProjectileHuskLobber_Poison_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProjectileHuskLobber_Poison.ProjectileHuskLobber_Poison_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
void AProjectileHuskLobber_Poison_C::Timeline_0__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ProjectileHuskLobber_Poison.ProjectileHuskLobber_Poison_C.Timeline_0__UpdateFunc");

	AProjectileHuskLobber_Poison_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProjectileHuskLobber_Poison.ProjectileHuskLobber_Poison_C.ReceiveHit
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
void AProjectileHuskLobber_Poison_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ProjectileHuskLobber_Poison.ProjectileHuskLobber_Poison_C.ReceiveHit");

	AProjectileHuskLobber_Poison_C_ReceiveHit_Params params;
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


// Function ProjectileHuskLobber_Poison.ProjectileHuskLobber_Poison_C.EndCloud
// (BlueprintCallable, BlueprintEvent)
void AProjectileHuskLobber_Poison_C::EndCloud()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ProjectileHuskLobber_Poison.ProjectileHuskLobber_Poison_C.EndCloud");

	AProjectileHuskLobber_Poison_C_EndCloud_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProjectileHuskLobber_Poison.ProjectileHuskLobber_Poison_C.BndEvt__PoisonArea_K2Node_ComponentBoundEvent_97_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AProjectileHuskLobber_Poison_C::BndEvt__PoisonArea_K2Node_ComponentBoundEvent_97_ComponentEndOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ProjectileHuskLobber_Poison.ProjectileHuskLobber_Poison_C.BndEvt__PoisonArea_K2Node_ComponentBoundEvent_97_ComponentEndOverlapSignature__DelegateSignature");

	AProjectileHuskLobber_Poison_C_BndEvt__PoisonArea_K2Node_ComponentBoundEvent_97_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProjectileHuskLobber_Poison.ProjectileHuskLobber_Poison_C.ExecuteUbergraph_ProjectileHuskLobber_Poison
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AProjectileHuskLobber_Poison_C::ExecuteUbergraph_ProjectileHuskLobber_Poison(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ProjectileHuskLobber_Poison.ProjectileHuskLobber_Poison_C.ExecuteUbergraph_ProjectileHuskLobber_Poison");

	AProjectileHuskLobber_Poison_C_ExecuteUbergraph_ProjectileHuskLobber_Poison_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
