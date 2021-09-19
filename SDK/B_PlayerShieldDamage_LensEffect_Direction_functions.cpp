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

// Function B_PlayerShieldDamage_LensEffect_Direction.B_PlayerShieldDamage_LensEffect_Direction_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AB_PlayerShieldDamage_LensEffect_Direction_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_PlayerShieldDamage_LensEffect_Direction.B_PlayerShieldDamage_LensEffect_Direction_C.UserConstructionScript");

	AB_PlayerShieldDamage_LensEffect_Direction_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_PlayerShieldDamage_LensEffect_Direction.B_PlayerShieldDamage_LensEffect_Direction_C.PassParticle_Parameter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Shield_percent                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_PlayerShieldDamage_LensEffect_Direction_C::PassParticle_Parameter(float Shield_percent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_PlayerShieldDamage_LensEffect_Direction.B_PlayerShieldDamage_LensEffect_Direction_C.PassParticle_Parameter");

	AB_PlayerShieldDamage_LensEffect_Direction_C_PassParticle_Parameter_Params params;
	params.Shield_percent = Shield_percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_PlayerShieldDamage_LensEffect_Direction.B_PlayerShieldDamage_LensEffect_Direction_C.ExecuteUbergraph_B_PlayerShieldDamage_LensEffect_Direction
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_PlayerShieldDamage_LensEffect_Direction_C::ExecuteUbergraph_B_PlayerShieldDamage_LensEffect_Direction(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_PlayerShieldDamage_LensEffect_Direction.B_PlayerShieldDamage_LensEffect_Direction_C.ExecuteUbergraph_B_PlayerShieldDamage_LensEffect_Direction");

	AB_PlayerShieldDamage_LensEffect_Direction_C_ExecuteUbergraph_B_PlayerShieldDamage_LensEffect_Direction_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
