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

// Function B_Post_Banner_Impact.B_Post_Banner_Impact_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AB_Post_Banner_Impact_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Post_Banner_Impact.B_Post_Banner_Impact_C.UserConstructionScript");

	AB_Post_Banner_Impact_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Post_Banner_Impact.B_Post_Banner_Impact_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
void AB_Post_Banner_Impact_C::Timeline_0__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Post_Banner_Impact.B_Post_Banner_Impact_C.Timeline_0__FinishedFunc");

	AB_Post_Banner_Impact_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Post_Banner_Impact.B_Post_Banner_Impact_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
void AB_Post_Banner_Impact_C::Timeline_0__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Post_Banner_Impact.B_Post_Banner_Impact_C.Timeline_0__UpdateFunc");

	AB_Post_Banner_Impact_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Post_Banner_Impact.B_Post_Banner_Impact_C.SpawnPostFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          PostFX_BoxScaleDyn             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 PostFX_CamShakeLoc             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           PostFX_UseCamShake             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          PostFX_DeactivateDelay         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_Post_Banner_Impact_C::SpawnPostFX(float PostFX_BoxScaleDyn, const struct FVector& PostFX_CamShakeLoc, bool PostFX_UseCamShake, float PostFX_DeactivateDelay)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Post_Banner_Impact.B_Post_Banner_Impact_C.SpawnPostFX");

	AB_Post_Banner_Impact_C_SpawnPostFX_Params params;
	params.PostFX_BoxScaleDyn = PostFX_BoxScaleDyn;
	params.PostFX_CamShakeLoc = PostFX_CamShakeLoc;
	params.PostFX_UseCamShake = PostFX_UseCamShake;
	params.PostFX_DeactivateDelay = PostFX_DeactivateDelay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Post_Banner_Impact.B_Post_Banner_Impact_C.ExecuteUbergraph_B_Post_Banner_Impact
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_Post_Banner_Impact_C::ExecuteUbergraph_B_Post_Banner_Impact(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Post_Banner_Impact.B_Post_Banner_Impact_C.ExecuteUbergraph_B_Post_Banner_Impact");

	AB_Post_Banner_Impact_C_ExecuteUbergraph_B_Post_Banner_Impact_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
