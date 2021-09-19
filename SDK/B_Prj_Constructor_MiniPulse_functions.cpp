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

// Function B_Prj_Constructor_MiniPulse.B_Prj_Constructor_MiniPulse_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AB_Prj_Constructor_MiniPulse_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Prj_Constructor_MiniPulse.B_Prj_Constructor_MiniPulse_C.UserConstructionScript");

	AB_Prj_Constructor_MiniPulse_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Prj_Constructor_MiniPulse.B_Prj_Constructor_MiniPulse_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void AB_Prj_Constructor_MiniPulse_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Prj_Constructor_MiniPulse.B_Prj_Constructor_MiniPulse_C.ReceiveBeginPlay");

	AB_Prj_Constructor_MiniPulse_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Prj_Constructor_MiniPulse.B_Prj_Constructor_MiniPulse_C.OnBounce
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
void AB_Prj_Constructor_MiniPulse_C::OnBounce(const struct FHitResult& Hit)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Prj_Constructor_MiniPulse.B_Prj_Constructor_MiniPulse_C.OnBounce");

	AB_Prj_Constructor_MiniPulse_C_OnBounce_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Prj_Constructor_MiniPulse.B_Prj_Constructor_MiniPulse_C.OnExploded
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<class AActor*>          HitActors                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FHitResult>      HitResults                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
void AB_Prj_Constructor_MiniPulse_C::OnExploded(TArray<class AActor*> HitActors, TArray<struct FHitResult> HitResults)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Prj_Constructor_MiniPulse.B_Prj_Constructor_MiniPulse_C.OnExploded");

	AB_Prj_Constructor_MiniPulse_C_OnExploded_Params params;
	params.HitActors = HitActors;
	params.HitResults = HitResults;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Prj_Constructor_MiniPulse.B_Prj_Constructor_MiniPulse_C.ExecuteUbergraph_B_Prj_Constructor_MiniPulse
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_Prj_Constructor_MiniPulse_C::ExecuteUbergraph_B_Prj_Constructor_MiniPulse(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Prj_Constructor_MiniPulse.B_Prj_Constructor_MiniPulse_C.ExecuteUbergraph_B_Prj_Constructor_MiniPulse");

	AB_Prj_Constructor_MiniPulse_C_ExecuteUbergraph_B_Prj_Constructor_MiniPulse_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
