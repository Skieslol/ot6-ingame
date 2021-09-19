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

// Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.OnRep_StoredHit
// (BlueprintCallable, BlueprintEvent)
void AB_Prj_Commando_FragGrenade_C::OnRep_StoredHit()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.OnRep_StoredHit");

	AB_Prj_Commando_FragGrenade_C_OnRep_StoredHit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AB_Prj_Commando_FragGrenade_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.UserConstructionScript");

	AB_Prj_Commando_FragGrenade_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.Prj_Rotation__FinishedFunc
// (BlueprintEvent)
void AB_Prj_Commando_FragGrenade_C::Prj_Rotation__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.Prj_Rotation__FinishedFunc");

	AB_Prj_Commando_FragGrenade_C_Prj_Rotation__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.Prj_Rotation__UpdateFunc
// (BlueprintEvent)
void AB_Prj_Commando_FragGrenade_C::Prj_Rotation__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.Prj_Rotation__UpdateFunc");

	AB_Prj_Commando_FragGrenade_C_Prj_Rotation__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void AB_Prj_Commando_FragGrenade_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.ReceiveBeginPlay");

	AB_Prj_Commando_FragGrenade_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.OnStop
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
void AB_Prj_Commando_FragGrenade_C::OnStop(const struct FHitResult& Hit)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.OnStop");

	AB_Prj_Commando_FragGrenade_C_OnStop_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.Stop_Rotation
// (BlueprintCallable, BlueprintEvent)
void AB_Prj_Commando_FragGrenade_C::Stop_Rotation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.Stop_Rotation");

	AB_Prj_Commando_FragGrenade_C_Stop_Rotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.OnExploded
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<class AActor*>          HitActors                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FHitResult>      HitResults                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
void AB_Prj_Commando_FragGrenade_C::OnExploded(TArray<class AActor*> HitActors, TArray<struct FHitResult> HitResults)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.OnExploded");

	AB_Prj_Commando_FragGrenade_C_OnExploded_Params params;
	params.HitActors = HitActors;
	params.HitResults = HitResults;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.ReceiveAnyDamage
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UDamageType*             DamageType                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AController*             InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_Prj_Commando_FragGrenade_C::ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.ReceiveAnyDamage");

	AB_Prj_Commando_FragGrenade_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.OnBounce
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
void AB_Prj_Commando_FragGrenade_C::OnBounce(const struct FHitResult& Hit)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.OnBounce");

	AB_Prj_Commando_FragGrenade_C_OnBounce_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.ExecuteUbergraph_B_Prj_Commando_FragGrenade
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_Prj_Commando_FragGrenade_C::ExecuteUbergraph_B_Prj_Commando_FragGrenade(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.ExecuteUbergraph_B_Prj_Commando_FragGrenade");

	AB_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
