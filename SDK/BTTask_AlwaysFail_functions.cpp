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

// Function BTTask_AlwaysFail.BTTask_AlwaysFail_C.ReceiveExecute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                  OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBTTask_AlwaysFail_C::ReceiveExecute(class AActor* OwnerActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BTTask_AlwaysFail.BTTask_AlwaysFail_C.ReceiveExecute");

	UBTTask_AlwaysFail_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_AlwaysFail.BTTask_AlwaysFail_C.ExecuteUbergraph_BTTask_AlwaysFail
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBTTask_AlwaysFail_C::ExecuteUbergraph_BTTask_AlwaysFail(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BTTask_AlwaysFail.BTTask_AlwaysFail_C.ExecuteUbergraph_BTTask_AlwaysFail");

	UBTTask_AlwaysFail_C_ExecuteUbergraph_BTTask_AlwaysFail_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
