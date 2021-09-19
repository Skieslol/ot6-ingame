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

// Function Tooltip-CoreStat.Tooltip-CoreStat_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHeroCoreStat           Data                           (Parm)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTooltip_CoreStat_C::Update(const struct FHeroCoreStat& Data, float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Tooltip-CoreStat.Tooltip-CoreStat_C.Update");

	UTooltip_CoreStat_C_Update_Params params;
	params.Data = Data;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Tooltip-CoreStat.Tooltip-CoreStat_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTooltip_CoreStat_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Tooltip-CoreStat.Tooltip-CoreStat_C.Construct");

	UTooltip_CoreStat_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Tooltip-CoreStat.Tooltip-CoreStat_C.ExecuteUbergraph_Tooltip-CoreStat
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTooltip_CoreStat_C::ExecuteUbergraph_Tooltip_CoreStat(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Tooltip-CoreStat.Tooltip-CoreStat_C.ExecuteUbergraph_Tooltip-CoreStat");

	UTooltip_CoreStat_C_ExecuteUbergraph_Tooltip_CoreStat_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
