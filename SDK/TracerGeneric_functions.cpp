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

// Function TracerGeneric.TracerGeneric_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ATracerGeneric_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TracerGeneric.TracerGeneric_C.UserConstructionScript");

	ATracerGeneric_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TracerGeneric.TracerGeneric_C.OnInitTracerDistance
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          Distance                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATracerGeneric_C::OnInitTracerDistance(float Distance)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TracerGeneric.TracerGeneric_C.OnInitTracerDistance");

	ATracerGeneric_C_OnInitTracerDistance_Params params;
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TracerGeneric.TracerGeneric_C.ExecuteUbergraph_TracerGeneric
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATracerGeneric_C::ExecuteUbergraph_TracerGeneric(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TracerGeneric.TracerGeneric_C.ExecuteUbergraph_TracerGeneric");

	ATracerGeneric_C_ExecuteUbergraph_TracerGeneric_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
