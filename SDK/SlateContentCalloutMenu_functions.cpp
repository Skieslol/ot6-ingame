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

// Function SlateContentCalloutMenu.SlateContentCalloutMenu_C.Get Size Box
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USizeBox*                Size_Box                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void USlateContentCalloutMenu_C::Get_Size_Box(class USizeBox** Size_Box)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SlateContentCalloutMenu.SlateContentCalloutMenu_C.Get Size Box");

	USlateContentCalloutMenu_C_Get_Size_Box_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Size_Box != nullptr)
		*Size_Box = params.Size_Box;

}


// Function SlateContentCalloutMenu.SlateContentCalloutMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void USlateContentCalloutMenu_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SlateContentCalloutMenu.SlateContentCalloutMenu_C.Construct");

	USlateContentCalloutMenu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SlateContentCalloutMenu.SlateContentCalloutMenu_C.ExecuteUbergraph_SlateContentCalloutMenu
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void USlateContentCalloutMenu_C::ExecuteUbergraph_SlateContentCalloutMenu(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SlateContentCalloutMenu.SlateContentCalloutMenu_C.ExecuteUbergraph_SlateContentCalloutMenu");

	USlateContentCalloutMenu_C_ExecuteUbergraph_SlateContentCalloutMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
