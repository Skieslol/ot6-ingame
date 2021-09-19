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

// Function ProjectileHuskLobber.ProjectileHuskLobber_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AProjectileHuskLobber_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ProjectileHuskLobber.ProjectileHuskLobber_C.UserConstructionScript");

	AProjectileHuskLobber_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProjectileHuskLobber.ProjectileHuskLobber_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
void AProjectileHuskLobber_C::Timeline_0__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ProjectileHuskLobber.ProjectileHuskLobber_C.Timeline_0__FinishedFunc");

	AProjectileHuskLobber_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProjectileHuskLobber.ProjectileHuskLobber_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
void AProjectileHuskLobber_C::Timeline_0__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ProjectileHuskLobber.ProjectileHuskLobber_C.Timeline_0__UpdateFunc");

	AProjectileHuskLobber_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProjectileHuskLobber.ProjectileHuskLobber_C.ReceiveHit
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
void AProjectileHuskLobber_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ProjectileHuskLobber.ProjectileHuskLobber_C.ReceiveHit");

	AProjectileHuskLobber_C_ReceiveHit_Params params;
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


// Function ProjectileHuskLobber.ProjectileHuskLobber_C.ExecuteUbergraph_ProjectileHuskLobber
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AProjectileHuskLobber_C::ExecuteUbergraph_ProjectileHuskLobber(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ProjectileHuskLobber.ProjectileHuskLobber_C.ExecuteUbergraph_ProjectileHuskLobber");

	AProjectileHuskLobber_C_ExecuteUbergraph_ProjectileHuskLobber_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
