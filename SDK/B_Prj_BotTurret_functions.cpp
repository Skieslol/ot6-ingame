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

// Function B_Prj_BotTurret.B_Prj_BotTurret_C.SetTeamColorVFX
// (Public, BlueprintCallable, BlueprintEvent)
void AB_Prj_BotTurret_C::SetTeamColorVFX()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Prj_BotTurret.B_Prj_BotTurret_C.SetTeamColorVFX");

	AB_Prj_BotTurret_C_SetTeamColorVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Prj_BotTurret.B_Prj_BotTurret_C.OnRep_Bounce
// (BlueprintCallable, BlueprintEvent)
void AB_Prj_BotTurret_C::OnRep_Bounce()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Prj_BotTurret.B_Prj_BotTurret_C.OnRep_Bounce");

	AB_Prj_BotTurret_C_OnRep_Bounce_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Prj_BotTurret.B_Prj_BotTurret_C.OnRep_ShouldBounce
// (BlueprintCallable, BlueprintEvent)
void AB_Prj_BotTurret_C::OnRep_ShouldBounce()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Prj_BotTurret.B_Prj_BotTurret_C.OnRep_ShouldBounce");

	AB_Prj_BotTurret_C_OnRep_ShouldBounce_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Prj_BotTurret.B_Prj_BotTurret_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AB_Prj_BotTurret_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Prj_BotTurret.B_Prj_BotTurret_C.UserConstructionScript");

	AB_Prj_BotTurret_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Prj_BotTurret.B_Prj_BotTurret_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void AB_Prj_BotTurret_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Prj_BotTurret.B_Prj_BotTurret_C.ReceiveBeginPlay");

	AB_Prj_BotTurret_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Prj_BotTurret.B_Prj_BotTurret_C.ReceiveHit
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
void AB_Prj_BotTurret_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Prj_BotTurret.B_Prj_BotTurret_C.ReceiveHit");

	AB_Prj_BotTurret_C_ReceiveHit_Params params;
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


// Function B_Prj_BotTurret.B_Prj_BotTurret_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_Prj_BotTurret_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Prj_BotTurret.B_Prj_BotTurret_C.ReceiveActorBeginOverlap");

	AB_Prj_BotTurret_C_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Prj_BotTurret.B_Prj_BotTurret_C.HitStaticMesh
// (BlueprintCallable, BlueprintEvent)
void AB_Prj_BotTurret_C::HitStaticMesh()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Prj_BotTurret.B_Prj_BotTurret_C.HitStaticMesh");

	AB_Prj_BotTurret_C_HitStaticMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Prj_BotTurret.B_Prj_BotTurret_C.Hit Pawn
// (BlueprintCallable, BlueprintEvent)
void AB_Prj_BotTurret_C::Hit_Pawn()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Prj_BotTurret.B_Prj_BotTurret_C.Hit Pawn");

	AB_Prj_BotTurret_C_Hit_Pawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Prj_BotTurret.B_Prj_BotTurret_C.OnExploded
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<class AActor*>          HitActors                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FHitResult>      HitResults                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
void AB_Prj_BotTurret_C::OnExploded(TArray<class AActor*> HitActors, TArray<struct FHitResult> HitResults)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Prj_BotTurret.B_Prj_BotTurret_C.OnExploded");

	AB_Prj_BotTurret_C_OnExploded_Params params;
	params.HitActors = HitActors;
	params.HitResults = HitResults;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Prj_BotTurret.B_Prj_BotTurret_C.OnBounce
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
void AB_Prj_BotTurret_C::OnBounce(const struct FHitResult& Hit)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Prj_BotTurret.B_Prj_BotTurret_C.OnBounce");

	AB_Prj_BotTurret_C_OnBounce_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Prj_BotTurret.B_Prj_BotTurret_C.ExecuteUbergraph_B_Prj_BotTurret
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_Prj_BotTurret_C::ExecuteUbergraph_B_Prj_BotTurret(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Prj_BotTurret.B_Prj_BotTurret_C.ExecuteUbergraph_B_Prj_BotTurret");

	AB_Prj_BotTurret_C_ExecuteUbergraph_B_Prj_BotTurret_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
