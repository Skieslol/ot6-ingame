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

// Function AbilityDecoTool_SupplyDrop.AbilityDecoTool_SupplyDrop_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AAbilityDecoTool_SupplyDrop_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AbilityDecoTool_SupplyDrop.AbilityDecoTool_SupplyDrop_C.UserConstructionScript");

	AAbilityDecoTool_SupplyDrop_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AbilityDecoTool_SupplyDrop.AbilityDecoTool_SupplyDrop_C.BPPressSecondaryFire
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortDecoHelper*         FortDecoHelper                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AAbilityDecoTool_SupplyDrop_C::BPPressSecondaryFire(class AFortDecoHelper* FortDecoHelper)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AbilityDecoTool_SupplyDrop.AbilityDecoTool_SupplyDrop_C.BPPressSecondaryFire");

	AAbilityDecoTool_SupplyDrop_C_BPPressSecondaryFire_Params params;
	params.FortDecoHelper = FortDecoHelper;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AbilityDecoTool_SupplyDrop.AbilityDecoTool_SupplyDrop_C.ExecuteUbergraph_AbilityDecoTool_SupplyDrop
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AAbilityDecoTool_SupplyDrop_C::ExecuteUbergraph_AbilityDecoTool_SupplyDrop(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AbilityDecoTool_SupplyDrop.AbilityDecoTool_SupplyDrop_C.ExecuteUbergraph_AbilityDecoTool_SupplyDrop");

	AAbilityDecoTool_SupplyDrop_C_ExecuteUbergraph_AbilityDecoTool_SupplyDrop_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
