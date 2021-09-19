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

// Function GA_SupplyDrop.GA_SupplyDrop_C.GetAttributeValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UGA_SupplyDrop_C::GetAttributeValue()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_SupplyDrop.GA_SupplyDrop_C.GetAttributeValue");

	UGA_SupplyDrop_C_GetAttributeValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_SupplyDrop.GA_SupplyDrop_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
void UGA_SupplyDrop_C::K2_ActivateAbility()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_SupplyDrop.GA_SupplyDrop_C.K2_ActivateAbility");

	UGA_SupplyDrop_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_SupplyDrop.GA_SupplyDrop_C.ExecuteUbergraph_GA_SupplyDrop
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_SupplyDrop_C::ExecuteUbergraph_GA_SupplyDrop(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_SupplyDrop.GA_SupplyDrop_C.ExecuteUbergraph_GA_SupplyDrop");

	UGA_SupplyDrop_C_ExecuteUbergraph_GA_SupplyDrop_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
