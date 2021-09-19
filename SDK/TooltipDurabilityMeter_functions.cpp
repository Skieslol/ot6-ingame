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

// Function TooltipDurabilityMeter.TooltipDurabilityMeter_C.Draw
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Normalized                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          Current                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          Max                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTooltipDurabilityMeter_C::Draw(float Normalized, float Current, float Max)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TooltipDurabilityMeter.TooltipDurabilityMeter_C.Draw");

	UTooltipDurabilityMeter_C_Draw_Params params;
	params.Normalized = Normalized;
	params.Current = Current;
	params.Max = Max;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
