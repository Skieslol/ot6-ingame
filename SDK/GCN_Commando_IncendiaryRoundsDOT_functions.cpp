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

// Function GCN_Commando_IncendiaryRoundsDOT.GCN_Commando_IncendiaryRoundsDOT_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AGCN_Commando_IncendiaryRoundsDOT_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GCN_Commando_IncendiaryRoundsDOT.GCN_Commando_IncendiaryRoundsDOT_C.UserConstructionScript");

	AGCN_Commando_IncendiaryRoundsDOT_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GCN_Commando_IncendiaryRoundsDOT.GCN_Commando_IncendiaryRoundsDOT_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
void AGCN_Commando_IncendiaryRoundsDOT_C::ReceiveDestroyed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GCN_Commando_IncendiaryRoundsDOT.GCN_Commando_IncendiaryRoundsDOT_C.ReceiveDestroyed");

	AGCN_Commando_IncendiaryRoundsDOT_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GCN_Commando_IncendiaryRoundsDOT.GCN_Commando_IncendiaryRoundsDOT_C.ExecuteUbergraph_GCN_Commando_IncendiaryRoundsDOT
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AGCN_Commando_IncendiaryRoundsDOT_C::ExecuteUbergraph_GCN_Commando_IncendiaryRoundsDOT(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GCN_Commando_IncendiaryRoundsDOT.GCN_Commando_IncendiaryRoundsDOT_C.ExecuteUbergraph_GCN_Commando_IncendiaryRoundsDOT");

	AGCN_Commando_IncendiaryRoundsDOT_C_ExecuteUbergraph_GCN_Commando_IncendiaryRoundsDOT_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
