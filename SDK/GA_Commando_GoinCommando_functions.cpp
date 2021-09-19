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

// Function GA_Commando_GoinCommando.GA_Commando_GoinCommando_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
void UGA_Commando_GoinCommando_C::K2_ActivateAbility()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Commando_GoinCommando.GA_Commando_GoinCommando_C.K2_ActivateAbility");

	UGA_Commando_GoinCommando_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Commando_GoinCommando.GA_Commando_GoinCommando_C.ExecuteUbergraph_GA_Commando_GoinCommando
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_Commando_GoinCommando_C::ExecuteUbergraph_GA_Commando_GoinCommando(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Commando_GoinCommando.GA_Commando_GoinCommando_C.ExecuteUbergraph_GA_Commando_GoinCommando");

	UGA_Commando_GoinCommando_C_ExecuteUbergraph_GA_Commando_GoinCommando_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
