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

// Function WeaponTooltipDPSWidget.WeaponTooltipDPSWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWeaponTooltipDPSWidget_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WeaponTooltipDPSWidget.WeaponTooltipDPSWidget_C.Construct");

	UWeaponTooltipDPSWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WeaponTooltipDPSWidget.WeaponTooltipDPSWidget_C.ExecuteUbergraph_WeaponTooltipDPSWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWeaponTooltipDPSWidget_C::ExecuteUbergraph_WeaponTooltipDPSWidget(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WeaponTooltipDPSWidget.WeaponTooltipDPSWidget_C.ExecuteUbergraph_WeaponTooltipDPSWidget");

	UWeaponTooltipDPSWidget_C_ExecuteUbergraph_WeaponTooltipDPSWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
