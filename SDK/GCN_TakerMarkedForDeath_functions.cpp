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

// Function GCN_TakerMarkedForDeath.GCN_TakerMarkedForDeath_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AGCN_TakerMarkedForDeath_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GCN_TakerMarkedForDeath.GCN_TakerMarkedForDeath_C.UserConstructionScript");

	AGCN_TakerMarkedForDeath_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GCN_TakerMarkedForDeath.GCN_TakerMarkedForDeath_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void AGCN_TakerMarkedForDeath_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GCN_TakerMarkedForDeath.GCN_TakerMarkedForDeath_C.ReceiveBeginPlay");

	AGCN_TakerMarkedForDeath_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GCN_TakerMarkedForDeath.GCN_TakerMarkedForDeath_C.SoulSuckCheck
// (BlueprintCallable, BlueprintEvent)
void AGCN_TakerMarkedForDeath_C::SoulSuckCheck()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GCN_TakerMarkedForDeath.GCN_TakerMarkedForDeath_C.SoulSuckCheck");

	AGCN_TakerMarkedForDeath_C_SoulSuckCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GCN_TakerMarkedForDeath.GCN_TakerMarkedForDeath_C.ExecuteUbergraph_GCN_TakerMarkedForDeath
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AGCN_TakerMarkedForDeath_C::ExecuteUbergraph_GCN_TakerMarkedForDeath(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GCN_TakerMarkedForDeath.GCN_TakerMarkedForDeath_C.ExecuteUbergraph_GCN_TakerMarkedForDeath");

	AGCN_TakerMarkedForDeath_C_ExecuteUbergraph_GCN_TakerMarkedForDeath_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
