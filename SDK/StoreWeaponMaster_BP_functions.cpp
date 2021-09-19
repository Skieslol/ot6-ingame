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

// Function StoreWeaponMaster_BP.StoreWeaponMaster_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AStoreWeaponMaster_BP_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StoreWeaponMaster_BP.StoreWeaponMaster_BP_C.UserConstructionScript");

	AStoreWeaponMaster_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StoreWeaponMaster_BP.StoreWeaponMaster_BP_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void AStoreWeaponMaster_BP_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StoreWeaponMaster_BP.StoreWeaponMaster_BP_C.ReceiveBeginPlay");

	AStoreWeaponMaster_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StoreWeaponMaster_BP.StoreWeaponMaster_BP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AStoreWeaponMaster_BP_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StoreWeaponMaster_BP.StoreWeaponMaster_BP_C.ReceiveTick");

	AStoreWeaponMaster_BP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StoreWeaponMaster_BP.StoreWeaponMaster_BP_C.ExecuteUbergraph_StoreWeaponMaster_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AStoreWeaponMaster_BP_C::ExecuteUbergraph_StoreWeaponMaster_BP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StoreWeaponMaster_BP.StoreWeaponMaster_BP_C.ExecuteUbergraph_StoreWeaponMaster_BP");

	AStoreWeaponMaster_BP_C_ExecuteUbergraph_StoreWeaponMaster_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
