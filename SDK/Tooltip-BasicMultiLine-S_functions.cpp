﻿// Name: Fortnite, Version: OT-6_5

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

// Function Tooltip-BasicMultiLine-S.Tooltip-BasicMultiLine-S_C.Get Icon Brush
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FSlateBrush UTooltip_BasicMultiLine_S_C::Get_Icon_Brush()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Tooltip-BasicMultiLine-S.Tooltip-BasicMultiLine-S_C.Get Icon Brush");

	UTooltip_BasicMultiLine_S_C_Get_Icon_Brush_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Tooltip-BasicMultiLine-S.Tooltip-BasicMultiLine-S_C.Get Header Text
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UTooltip_BasicMultiLine_S_C::Get_Header_Text()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Tooltip-BasicMultiLine-S.Tooltip-BasicMultiLine-S_C.Get Header Text");

	UTooltip_BasicMultiLine_S_C_Get_Header_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Tooltip-BasicMultiLine-S.Tooltip-BasicMultiLine-S_C.Get Body Text
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UTooltip_BasicMultiLine_S_C::Get_Body_Text()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Tooltip-BasicMultiLine-S.Tooltip-BasicMultiLine-S_C.Get Body Text");

	UTooltip_BasicMultiLine_S_C_Get_Body_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Tooltip-BasicMultiLine-S.Tooltip-BasicMultiLine-S_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTooltip_BasicMultiLine_S_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Tooltip-BasicMultiLine-S.Tooltip-BasicMultiLine-S_C.Construct");

	UTooltip_BasicMultiLine_S_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Tooltip-BasicMultiLine-S.Tooltip-BasicMultiLine-S_C.ExecuteUbergraph_Tooltip-BasicMultiLine-S
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTooltip_BasicMultiLine_S_C::ExecuteUbergraph_Tooltip_BasicMultiLine_S(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Tooltip-BasicMultiLine-S.Tooltip-BasicMultiLine-S_C.ExecuteUbergraph_Tooltip-BasicMultiLine-S");

	UTooltip_BasicMultiLine_S_C_ExecuteUbergraph_Tooltip_BasicMultiLine_S_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
