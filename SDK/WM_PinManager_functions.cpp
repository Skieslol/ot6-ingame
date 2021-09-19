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

// Function WM_PinManager.WM_PinManager_C.CreateWorldMapPin
// (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            TheaterIndex                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AWorldMapPin*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
class AWorldMapPin* AWM_PinManager_C::CreateWorldMapPin(int TheaterIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WM_PinManager.WM_PinManager_C.CreateWorldMapPin");

	AWM_PinManager_C_CreateWorldMapPin_Params params;
	params.TheaterIndex = TheaterIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WM_PinManager.WM_PinManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AWM_PinManager_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WM_PinManager.WM_PinManager_C.UserConstructionScript");

	AWM_PinManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WM_PinManager.WM_PinManager_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void AWM_PinManager_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WM_PinManager.WM_PinManager_C.ReceiveBeginPlay");

	AWM_PinManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WM_PinManager.WM_PinManager_C.ExecuteUbergraph_WM_PinManager
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AWM_PinManager_C::ExecuteUbergraph_WM_PinManager(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WM_PinManager.WM_PinManager_C.ExecuteUbergraph_WM_PinManager");

	AWM_PinManager_C_ExecuteUbergraph_WM_PinManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
