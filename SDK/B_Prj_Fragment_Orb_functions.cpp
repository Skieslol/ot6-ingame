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

// Function B_Prj_Fragment_Orb.B_Prj_Fragment_Orb_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AB_Prj_Fragment_Orb_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Prj_Fragment_Orb.B_Prj_Fragment_Orb_C.UserConstructionScript");

	AB_Prj_Fragment_Orb_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Prj_Fragment_Orb.B_Prj_Fragment_Orb_C.OnStop
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
void AB_Prj_Fragment_Orb_C::OnStop(const struct FHitResult& Hit)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Prj_Fragment_Orb.B_Prj_Fragment_Orb_C.OnStop");

	AB_Prj_Fragment_Orb_C_OnStop_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Prj_Fragment_Orb.B_Prj_Fragment_Orb_C.OnBounce
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
void AB_Prj_Fragment_Orb_C::OnBounce(const struct FHitResult& Hit)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Prj_Fragment_Orb.B_Prj_Fragment_Orb_C.OnBounce");

	AB_Prj_Fragment_Orb_C_OnBounce_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Prj_Fragment_Orb.B_Prj_Fragment_Orb_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void AB_Prj_Fragment_Orb_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Prj_Fragment_Orb.B_Prj_Fragment_Orb_C.ReceiveBeginPlay");

	AB_Prj_Fragment_Orb_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Prj_Fragment_Orb.B_Prj_Fragment_Orb_C.ExecuteUbergraph_B_Prj_Fragment_Orb
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_Prj_Fragment_Orb_C::ExecuteUbergraph_B_Prj_Fragment_Orb(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Prj_Fragment_Orb.B_Prj_Fragment_Orb_C.ExecuteUbergraph_B_Prj_Fragment_Orb");

	AB_Prj_Fragment_Orb_C_ExecuteUbergraph_B_Prj_Fragment_Orb_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
