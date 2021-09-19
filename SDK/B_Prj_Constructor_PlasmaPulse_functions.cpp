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

// Function B_Prj_Constructor_PlasmaPulse.B_Prj_Constructor_PlasmaPulse_C.OnRep_Explode
// (HasDefaults, BlueprintCallable, BlueprintEvent)
void AB_Prj_Constructor_PlasmaPulse_C::OnRep_Explode()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Prj_Constructor_PlasmaPulse.B_Prj_Constructor_PlasmaPulse_C.OnRep_Explode");

	AB_Prj_Constructor_PlasmaPulse_C_OnRep_Explode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Prj_Constructor_PlasmaPulse.B_Prj_Constructor_PlasmaPulse_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AB_Prj_Constructor_PlasmaPulse_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Prj_Constructor_PlasmaPulse.B_Prj_Constructor_PlasmaPulse_C.UserConstructionScript");

	AB_Prj_Constructor_PlasmaPulse_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Prj_Constructor_PlasmaPulse.B_Prj_Constructor_PlasmaPulse_C.FlashShield
// (Public, BlueprintCallable, BlueprintEvent)
void AB_Prj_Constructor_PlasmaPulse_C::FlashShield()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Prj_Constructor_PlasmaPulse.B_Prj_Constructor_PlasmaPulse_C.FlashShield");

	AB_Prj_Constructor_PlasmaPulse_C_FlashShield_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Prj_Constructor_PlasmaPulse.B_Prj_Constructor_PlasmaPulse_C.OnStop
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
void AB_Prj_Constructor_PlasmaPulse_C::OnStop(const struct FHitResult& Hit)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Prj_Constructor_PlasmaPulse.B_Prj_Constructor_PlasmaPulse_C.OnStop");

	AB_Prj_Constructor_PlasmaPulse_C_OnStop_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Prj_Constructor_PlasmaPulse.B_Prj_Constructor_PlasmaPulse_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void AB_Prj_Constructor_PlasmaPulse_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Prj_Constructor_PlasmaPulse.B_Prj_Constructor_PlasmaPulse_C.ReceiveBeginPlay");

	AB_Prj_Constructor_PlasmaPulse_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Prj_Constructor_PlasmaPulse.B_Prj_Constructor_PlasmaPulse_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_Prj_Constructor_PlasmaPulse_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Prj_Constructor_PlasmaPulse.B_Prj_Constructor_PlasmaPulse_C.ReceiveEndPlay");

	AB_Prj_Constructor_PlasmaPulse_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Prj_Constructor_PlasmaPulse.B_Prj_Constructor_PlasmaPulse_C.OnBounce
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
void AB_Prj_Constructor_PlasmaPulse_C::OnBounce(const struct FHitResult& Hit)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Prj_Constructor_PlasmaPulse.B_Prj_Constructor_PlasmaPulse_C.OnBounce");

	AB_Prj_Constructor_PlasmaPulse_C_OnBounce_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Prj_Constructor_PlasmaPulse.B_Prj_Constructor_PlasmaPulse_C.AttachedObj_Died
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
void AB_Prj_Constructor_PlasmaPulse_C::AttachedObj_Died(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Prj_Constructor_PlasmaPulse.B_Prj_Constructor_PlasmaPulse_C.AttachedObj_Died");

	AB_Prj_Constructor_PlasmaPulse_C_AttachedObj_Died_Params params;
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


// Function B_Prj_Constructor_PlasmaPulse.B_Prj_Constructor_PlasmaPulse_C.BaseDestroyed
// (BlueprintCallable, BlueprintEvent)
void AB_Prj_Constructor_PlasmaPulse_C::BaseDestroyed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Prj_Constructor_PlasmaPulse.B_Prj_Constructor_PlasmaPulse_C.BaseDestroyed");

	AB_Prj_Constructor_PlasmaPulse_C_BaseDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Prj_Constructor_PlasmaPulse.B_Prj_Constructor_PlasmaPulse_C.ExecuteUbergraph_B_Prj_Constructor_PlasmaPulse
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_Prj_Constructor_PlasmaPulse_C::ExecuteUbergraph_B_Prj_Constructor_PlasmaPulse(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Prj_Constructor_PlasmaPulse.B_Prj_Constructor_PlasmaPulse_C.ExecuteUbergraph_B_Prj_Constructor_PlasmaPulse");

	AB_Prj_Constructor_PlasmaPulse_C_ExecuteUbergraph_B_Prj_Constructor_PlasmaPulse_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
