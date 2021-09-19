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

// Function BTTask_AlwaysSuccess.BTTask_AlwaysSuccess_C.ReceiveExecute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                  OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBTTask_AlwaysSuccess_C::ReceiveExecute(class AActor* OwnerActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BTTask_AlwaysSuccess.BTTask_AlwaysSuccess_C.ReceiveExecute");

	UBTTask_AlwaysSuccess_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_AlwaysSuccess.BTTask_AlwaysSuccess_C.ExecuteUbergraph_BTTask_AlwaysSuccess
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBTTask_AlwaysSuccess_C::ExecuteUbergraph_BTTask_AlwaysSuccess(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BTTask_AlwaysSuccess.BTTask_AlwaysSuccess_C.ExecuteUbergraph_BTTask_AlwaysSuccess");

	UBTTask_AlwaysSuccess_C_ExecuteUbergraph_BTTask_AlwaysSuccess_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
