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

// Function B_Prj_Ninja_ThrowingStars.B_Prj_Ninja_ThrowingStars_C.OnRep_Piercing
// (BlueprintCallable, BlueprintEvent)
void AB_Prj_Ninja_ThrowingStars_C::OnRep_Piercing()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Prj_Ninja_ThrowingStars.B_Prj_Ninja_ThrowingStars_C.OnRep_Piercing");

	AB_Prj_Ninja_ThrowingStars_C_OnRep_Piercing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Prj_Ninja_ThrowingStars.B_Prj_Ninja_ThrowingStars_C.OnRep_HitLocation
// (BlueprintCallable, BlueprintEvent)
void AB_Prj_Ninja_ThrowingStars_C::OnRep_HitLocation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Prj_Ninja_ThrowingStars.B_Prj_Ninja_ThrowingStars_C.OnRep_HitLocation");

	AB_Prj_Ninja_ThrowingStars_C_OnRep_HitLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Prj_Ninja_ThrowingStars.B_Prj_Ninja_ThrowingStars_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AB_Prj_Ninja_ThrowingStars_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Prj_Ninja_ThrowingStars.B_Prj_Ninja_ThrowingStars_C.UserConstructionScript");

	AB_Prj_Ninja_ThrowingStars_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Prj_Ninja_ThrowingStars.B_Prj_Ninja_ThrowingStars_C.ReceiveHit
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
void AB_Prj_Ninja_ThrowingStars_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Prj_Ninja_ThrowingStars.B_Prj_Ninja_ThrowingStars_C.ReceiveHit");

	AB_Prj_Ninja_ThrowingStars_C_ReceiveHit_Params params;
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


// Function B_Prj_Ninja_ThrowingStars.B_Prj_Ninja_ThrowingStars_C.OnExploded
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<class AActor*>          HitActors                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FHitResult>      HitResults                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
void AB_Prj_Ninja_ThrowingStars_C::OnExploded(TArray<class AActor*> HitActors, TArray<struct FHitResult> HitResults)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Prj_Ninja_ThrowingStars.B_Prj_Ninja_ThrowingStars_C.OnExploded");

	AB_Prj_Ninja_ThrowingStars_C_OnExploded_Params params;
	params.HitActors = HitActors;
	params.HitResults = HitResults;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Prj_Ninja_ThrowingStars.B_Prj_Ninja_ThrowingStars_C.SetHoming
// (BlueprintCallable, BlueprintEvent)
void AB_Prj_Ninja_ThrowingStars_C::SetHoming()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Prj_Ninja_ThrowingStars.B_Prj_Ninja_ThrowingStars_C.SetHoming");

	AB_Prj_Ninja_ThrowingStars_C_SetHoming_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Prj_Ninja_ThrowingStars.B_Prj_Ninja_ThrowingStars_C.HomeTargetDied
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamagedActor                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AController*             InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 HitLocation                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPrimitiveComponent*     FHitComponent                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 Momentum                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_Prj_Ninja_ThrowingStars_C::HomeTargetDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Prj_Ninja_ThrowingStars.B_Prj_Ninja_ThrowingStars_C.HomeTargetDied");

	AB_Prj_Ninja_ThrowingStars_C_HomeTargetDied_Params params;
	params.DamagedActor = DamagedActor;
	params.Damage = Damage;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.HitLocation = HitLocation;
	params.FHitComponent = FHitComponent;
	params.BoneName = BoneName;
	params.Momentum = Momentum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Prj_Ninja_ThrowingStars.B_Prj_Ninja_ThrowingStars_C.ShouldPierce
// (BlueprintCallable, BlueprintEvent)
void AB_Prj_Ninja_ThrowingStars_C::ShouldPierce()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Prj_Ninja_ThrowingStars.B_Prj_Ninja_ThrowingStars_C.ShouldPierce");

	AB_Prj_Ninja_ThrowingStars_C_ShouldPierce_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Prj_Ninja_ThrowingStars.B_Prj_Ninja_ThrowingStars_C.BndEvt__CollisionBox_K2Node_ComponentBoundEvent_30_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
void AB_Prj_Ninja_ThrowingStars_C::BndEvt__CollisionBox_K2Node_ComponentBoundEvent_30_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Prj_Ninja_ThrowingStars.B_Prj_Ninja_ThrowingStars_C.BndEvt__CollisionBox_K2Node_ComponentBoundEvent_30_ComponentBeginOverlapSignature__DelegateSignature");

	AB_Prj_Ninja_ThrowingStars_C_BndEvt__CollisionBox_K2Node_ComponentBoundEvent_30_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Prj_Ninja_ThrowingStars.B_Prj_Ninja_ThrowingStars_C.ExecuteUbergraph_B_Prj_Ninja_ThrowingStars
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_Prj_Ninja_ThrowingStars_C::ExecuteUbergraph_B_Prj_Ninja_ThrowingStars(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Prj_Ninja_ThrowingStars.B_Prj_Ninja_ThrowingStars_C.ExecuteUbergraph_B_Prj_Ninja_ThrowingStars");

	AB_Prj_Ninja_ThrowingStars_C_ExecuteUbergraph_B_Prj_Ninja_ThrowingStars_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
