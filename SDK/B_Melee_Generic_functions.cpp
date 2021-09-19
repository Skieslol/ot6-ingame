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

// Function B_Melee_Generic.B_Melee_Generic_C.Melee_Effect_Color
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Melee_Color_Set                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_Melee_Generic_C::Melee_Effect_Color(struct FVector* Melee_Color_Set)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Melee_Generic.B_Melee_Generic_C.Melee_Effect_Color");

	AB_Melee_Generic_C_Melee_Effect_Color_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Melee_Color_Set != nullptr)
		*Melee_Color_Set = params.Melee_Color_Set;

}


// Function B_Melee_Generic.B_Melee_Generic_C.SetWpnRarity
// (Public, BlueprintCallable, BlueprintEvent)
void AB_Melee_Generic_C::SetWpnRarity()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Melee_Generic.B_Melee_Generic_C.SetWpnRarity");

	AB_Melee_Generic_C_SetWpnRarity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Melee_Generic.B_Melee_Generic_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AB_Melee_Generic_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Melee_Generic.B_Melee_Generic_C.UserConstructionScript");

	AB_Melee_Generic_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Melee_Generic.B_Melee_Generic_C.MeleeSwingRight
// (BlueprintCallable, BlueprintEvent)
void AB_Melee_Generic_C::MeleeSwingRight()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Melee_Generic.B_Melee_Generic_C.MeleeSwingRight");

	AB_Melee_Generic_C_MeleeSwingRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Melee_Generic.B_Melee_Generic_C.MeleeSwingLeft
// (BlueprintCallable, BlueprintEvent)
void AB_Melee_Generic_C::MeleeSwingLeft()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Melee_Generic.B_Melee_Generic_C.MeleeSwingLeft");

	AB_Melee_Generic_C_MeleeSwingLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Melee_Generic.B_Melee_Generic_C.FootStepLeft
// (Public, BlueprintCallable, BlueprintEvent)
void AB_Melee_Generic_C::FootStepLeft()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Melee_Generic.B_Melee_Generic_C.FootStepLeft");

	AB_Melee_Generic_C_FootStepLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Melee_Generic.B_Melee_Generic_C.FootStepRight
// (Public, BlueprintCallable, BlueprintEvent)
void AB_Melee_Generic_C::FootStepRight()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Melee_Generic.B_Melee_Generic_C.FootStepRight");

	AB_Melee_Generic_C_FootStepRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Melee_Generic.B_Melee_Generic_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void AB_Melee_Generic_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Melee_Generic.B_Melee_Generic_C.ReceiveBeginPlay");

	AB_Melee_Generic_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Melee_Generic.B_Melee_Generic_C.OnPlayWeaponFireFX
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bPersistentFire                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_Melee_Generic_C::OnPlayWeaponFireFX(bool bPersistentFire)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Melee_Generic.B_Melee_Generic_C.OnPlayWeaponFireFX");

	AB_Melee_Generic_C_OnPlayWeaponFireFX_Params params;
	params.bPersistentFire = bPersistentFire;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Melee_Generic.B_Melee_Generic_C.PlayRClickImpacts
// (BlueprintCallable, BlueprintEvent)
void AB_Melee_Generic_C::PlayRClickImpacts()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Melee_Generic.B_Melee_Generic_C.PlayRClickImpacts");

	AB_Melee_Generic_C_PlayRClickImpacts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Melee_Generic.B_Melee_Generic_C.ExecuteUbergraph_B_Melee_Generic
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_Melee_Generic_C::ExecuteUbergraph_B_Melee_Generic(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Melee_Generic.B_Melee_Generic_C.ExecuteUbergraph_B_Melee_Generic");

	AB_Melee_Generic_C_ExecuteUbergraph_B_Melee_Generic_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
