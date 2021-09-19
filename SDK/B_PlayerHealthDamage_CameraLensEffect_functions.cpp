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

// Function B_PlayerHealthDamage_CameraLensEffect.B_PlayerHealthDamage_CameraLensEffect_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AB_PlayerHealthDamage_CameraLensEffect_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_PlayerHealthDamage_CameraLensEffect.B_PlayerHealthDamage_CameraLensEffect_C.UserConstructionScript");

	AB_PlayerHealthDamage_CameraLensEffect_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_PlayerHealthDamage_CameraLensEffect.B_PlayerHealthDamage_CameraLensEffect_C.PassParticle_Parameter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewParam                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           First_Hit                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_PlayerHealthDamage_CameraLensEffect_C::PassParticle_Parameter(float NewParam, bool First_Hit)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_PlayerHealthDamage_CameraLensEffect.B_PlayerHealthDamage_CameraLensEffect_C.PassParticle_Parameter");

	AB_PlayerHealthDamage_CameraLensEffect_C_PassParticle_Parameter_Params params;
	params.NewParam = NewParam;
	params.First_Hit = First_Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_PlayerHealthDamage_CameraLensEffect.B_PlayerHealthDamage_CameraLensEffect_C.ExecuteUbergraph_B_PlayerHealthDamage_CameraLensEffect
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_PlayerHealthDamage_CameraLensEffect_C::ExecuteUbergraph_B_PlayerHealthDamage_CameraLensEffect(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_PlayerHealthDamage_CameraLensEffect.B_PlayerHealthDamage_CameraLensEffect_C.ExecuteUbergraph_B_PlayerHealthDamage_CameraLensEffect");

	AB_PlayerHealthDamage_CameraLensEffect_C_ExecuteUbergraph_B_PlayerHealthDamage_CameraLensEffect_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
