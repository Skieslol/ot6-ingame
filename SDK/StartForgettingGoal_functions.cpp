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

// Function StartForgettingGoal.StartForgettingGoal_C.ReceiveExecute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                  OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UStartForgettingGoal_C::ReceiveExecute(class AActor* OwnerActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StartForgettingGoal.StartForgettingGoal_C.ReceiveExecute");

	UStartForgettingGoal_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StartForgettingGoal.StartForgettingGoal_C.ExecuteUbergraph_StartForgettingGoal
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UStartForgettingGoal_C::ExecuteUbergraph_StartForgettingGoal(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StartForgettingGoal.StartForgettingGoal_C.ExecuteUbergraph_StartForgettingGoal");

	UStartForgettingGoal_C_ExecuteUbergraph_StartForgettingGoal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
