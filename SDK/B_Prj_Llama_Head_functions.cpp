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

// Function B_Prj_Llama_Head.B_Prj_Llama_Head_C.SpawnBounceFX
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// struct FHitResult              HitResult                      (Parm, OutParm, ContainsInstancedReference)
// TEnumAsByte<Engine_EPhysicalSurface> SurfaceType                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                HitResultRotation              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_Prj_Llama_Head_C::SpawnBounceFX(struct FHitResult* Hit, struct FHitResult* HitResult, TEnumAsByte<Engine_EPhysicalSurface>* SurfaceType, struct FRotator* HitResultRotation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Prj_Llama_Head.B_Prj_Llama_Head_C.SpawnBounceFX");

	AB_Prj_Llama_Head_C_SpawnBounceFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Hit != nullptr)
		*Hit = params.Hit;
	if (HitResult != nullptr)
		*HitResult = params.HitResult;
	if (SurfaceType != nullptr)
		*SurfaceType = params.SurfaceType;
	if (HitResultRotation != nullptr)
		*HitResultRotation = params.HitResultRotation;

}


// Function B_Prj_Llama_Head.B_Prj_Llama_Head_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AB_Prj_Llama_Head_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Prj_Llama_Head.B_Prj_Llama_Head_C.UserConstructionScript");

	AB_Prj_Llama_Head_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Prj_Llama_Head.B_Prj_Llama_Head_C.OnBounce
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
void AB_Prj_Llama_Head_C::OnBounce(const struct FHitResult& Hit)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Prj_Llama_Head.B_Prj_Llama_Head_C.OnBounce");

	AB_Prj_Llama_Head_C_OnBounce_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Prj_Llama_Head.B_Prj_Llama_Head_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_Prj_Llama_Head_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Prj_Llama_Head.B_Prj_Llama_Head_C.ReceiveTick");

	AB_Prj_Llama_Head_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Prj_Llama_Head.B_Prj_Llama_Head_C.OnProjectileStop_Event_1
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult              ImpactResult                   (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
void AB_Prj_Llama_Head_C::OnProjectileStop_Event_1(const struct FHitResult& ImpactResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Prj_Llama_Head.B_Prj_Llama_Head_C.OnProjectileStop_Event_1");

	AB_Prj_Llama_Head_C_OnProjectileStop_Event_1_Params params;
	params.ImpactResult = ImpactResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Prj_Llama_Head.B_Prj_Llama_Head_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void AB_Prj_Llama_Head_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Prj_Llama_Head.B_Prj_Llama_Head_C.ReceiveBeginPlay");

	AB_Prj_Llama_Head_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Prj_Llama_Head.B_Prj_Llama_Head_C.ExecuteUbergraph_B_Prj_Llama_Head
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_Prj_Llama_Head_C::ExecuteUbergraph_B_Prj_Llama_Head(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Prj_Llama_Head.B_Prj_Llama_Head_C.ExecuteUbergraph_B_Prj_Llama_Head");

	AB_Prj_Llama_Head_C_ExecuteUbergraph_B_Prj_Llama_Head_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
