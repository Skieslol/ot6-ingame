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

// Function B_GoinCommandoWeapon.B_GoinCommandoWeapon_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AB_GoinCommandoWeapon_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_GoinCommandoWeapon.B_GoinCommandoWeapon_C.UserConstructionScript");

	AB_GoinCommandoWeapon_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_GoinCommandoWeapon.B_GoinCommandoWeapon_C.OnStartCharge
// (Event, Protected, BlueprintEvent)
void AB_GoinCommandoWeapon_C::OnStartCharge()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_GoinCommandoWeapon.B_GoinCommandoWeapon_C.OnStartCharge");

	AB_GoinCommandoWeapon_C_OnStartCharge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_GoinCommandoWeapon.B_GoinCommandoWeapon_C.OnEndCharge
// (Event, Protected, BlueprintEvent)
void AB_GoinCommandoWeapon_C::OnEndCharge()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_GoinCommandoWeapon.B_GoinCommandoWeapon_C.OnEndCharge");

	AB_GoinCommandoWeapon_C_OnEndCharge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_GoinCommandoWeapon.B_GoinCommandoWeapon_C.OnPlayWeaponFireFX
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bPersistentFire                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_GoinCommandoWeapon_C::OnPlayWeaponFireFX(bool bPersistentFire)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_GoinCommandoWeapon.B_GoinCommandoWeapon_C.OnPlayWeaponFireFX");

	AB_GoinCommandoWeapon_C_OnPlayWeaponFireFX_Params params;
	params.bPersistentFire = bPersistentFire;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_GoinCommandoWeapon.B_GoinCommandoWeapon_C.OnPlayImpactFX
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult              HitResult                      (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TEnumAsByte<Engine_EPhysicalSurface> ImpactPhysicalSurface          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UParticleSystemComponent* SpawnedPSC                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_GoinCommandoWeapon_C::OnPlayImpactFX(const struct FHitResult& HitResult, TEnumAsByte<Engine_EPhysicalSurface> ImpactPhysicalSurface, class UParticleSystemComponent* SpawnedPSC)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_GoinCommandoWeapon.B_GoinCommandoWeapon_C.OnPlayImpactFX");

	AB_GoinCommandoWeapon_C_OnPlayImpactFX_Params params;
	params.HitResult = HitResult;
	params.ImpactPhysicalSurface = ImpactPhysicalSurface;
	params.SpawnedPSC = SpawnedPSC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_GoinCommandoWeapon.B_GoinCommandoWeapon_C.SetUpgradeLevel
// (BlueprintCallable, BlueprintEvent)
void AB_GoinCommandoWeapon_C::SetUpgradeLevel()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_GoinCommandoWeapon.B_GoinCommandoWeapon_C.SetUpgradeLevel");

	AB_GoinCommandoWeapon_C_SetUpgradeLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_GoinCommandoWeapon.B_GoinCommandoWeapon_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void AB_GoinCommandoWeapon_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_GoinCommandoWeapon.B_GoinCommandoWeapon_C.ReceiveBeginPlay");

	AB_GoinCommandoWeapon_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_GoinCommandoWeapon.B_GoinCommandoWeapon_C.ExecuteUbergraph_B_GoinCommandoWeapon
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_GoinCommandoWeapon_C::ExecuteUbergraph_B_GoinCommandoWeapon(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_GoinCommandoWeapon.B_GoinCommandoWeapon_C.ExecuteUbergraph_B_GoinCommandoWeapon");

	AB_GoinCommandoWeapon_C_ExecuteUbergraph_B_GoinCommandoWeapon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
