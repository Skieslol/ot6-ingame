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

// Function B_PlayerHealthDamage_LensEffect_Direction.B_PlayerHealthDamage_LensEffect_Direction_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AB_PlayerHealthDamage_LensEffect_Direction_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_PlayerHealthDamage_LensEffect_Direction.B_PlayerHealthDamage_LensEffect_Direction_C.UserConstructionScript");

	AB_PlayerHealthDamage_LensEffect_Direction_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_PlayerHealthDamage_LensEffect_Direction.B_PlayerHealthDamage_LensEffect_Direction_C.PassParticle_Parameter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Health_Percent                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_PlayerHealthDamage_LensEffect_Direction_C::PassParticle_Parameter(float Health_Percent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_PlayerHealthDamage_LensEffect_Direction.B_PlayerHealthDamage_LensEffect_Direction_C.PassParticle_Parameter");

	AB_PlayerHealthDamage_LensEffect_Direction_C_PassParticle_Parameter_Params params;
	params.Health_Percent = Health_Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_PlayerHealthDamage_LensEffect_Direction.B_PlayerHealthDamage_LensEffect_Direction_C.ExecuteUbergraph_B_PlayerHealthDamage_LensEffect_Direction
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_PlayerHealthDamage_LensEffect_Direction_C::ExecuteUbergraph_B_PlayerHealthDamage_LensEffect_Direction(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_PlayerHealthDamage_LensEffect_Direction.B_PlayerHealthDamage_LensEffect_Direction_C.ExecuteUbergraph_B_PlayerHealthDamage_LensEffect_Direction");

	AB_PlayerHealthDamage_LensEffect_Direction_C_ExecuteUbergraph_B_PlayerHealthDamage_LensEffect_Direction_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
