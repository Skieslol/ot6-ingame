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

// Function B_Rift_Portals.B_Rift_Portals_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AB_Rift_Portals_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Rift_Portals.B_Rift_Portals_C.UserConstructionScript");

	AB_Rift_Portals_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Rift_Portals.B_Rift_Portals_C.Color__FinishedFunc
// (BlueprintEvent)
void AB_Rift_Portals_C::Color__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Rift_Portals.B_Rift_Portals_C.Color__FinishedFunc");

	AB_Rift_Portals_C_Color__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Rift_Portals.B_Rift_Portals_C.Color__UpdateFunc
// (BlueprintEvent)
void AB_Rift_Portals_C::Color__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Rift_Portals.B_Rift_Portals_C.Color__UpdateFunc");

	AB_Rift_Portals_C_Color__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Rift_Portals.B_Rift_Portals_C.OnPlaced
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void AB_Rift_Portals_C::OnPlaced()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Rift_Portals.B_Rift_Portals_C.OnPlaced");

	AB_Rift_Portals_C_OnPlaced_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Rift_Portals.B_Rift_Portals_C.OnRemoved
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void AB_Rift_Portals_C::OnRemoved()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Rift_Portals.B_Rift_Portals_C.OnRemoved");

	AB_Rift_Portals_C_OnRemoved_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Rift_Portals.B_Rift_Portals_C.OnSpawnAI
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void AB_Rift_Portals_C::OnSpawnAI()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Rift_Portals.B_Rift_Portals_C.OnSpawnAI");

	AB_Rift_Portals_C_OnSpawnAI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Rift_Portals.B_Rift_Portals_C.Lightning Impact Event
// (BlueprintCallable, BlueprintEvent)
void AB_Rift_Portals_C::Lightning_Impact_Event()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Rift_Portals.B_Rift_Portals_C.Lightning Impact Event");

	AB_Rift_Portals_C_Lightning_Impact_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Rift_Portals.B_Rift_Portals_C.OnActivated
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void AB_Rift_Portals_C::OnActivated()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Rift_Portals.B_Rift_Portals_C.OnActivated");

	AB_Rift_Portals_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Rift_Portals.B_Rift_Portals_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_Rift_Portals_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Rift_Portals.B_Rift_Portals_C.ReceiveEndPlay");

	AB_Rift_Portals_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Rift_Portals.B_Rift_Portals_C.ExecuteUbergraph_B_Rift_Portals
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_Rift_Portals_C::ExecuteUbergraph_B_Rift_Portals(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Rift_Portals.B_Rift_Portals_C.ExecuteUbergraph_B_Rift_Portals");

	AB_Rift_Portals_C_ExecuteUbergraph_B_Rift_Portals_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
