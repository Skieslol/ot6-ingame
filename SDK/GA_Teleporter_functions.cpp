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

// Function GA_Teleporter.GA_Teleporter_C.GetSecondTeleporterSpawnLoc
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  FirstTeleporter                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform              SpawnTransform                 (Parm, OutParm, IsPlainOldData, NoDestructor)
void UGA_Teleporter_C::GetSecondTeleporterSpawnLoc(class AActor* FirstTeleporter, struct FTransform* SpawnTransform)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Teleporter.GA_Teleporter_C.GetSecondTeleporterSpawnLoc");

	UGA_Teleporter_C_GetSecondTeleporterSpawnLoc_Params params;
	params.FirstTeleporter = FirstTeleporter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SpawnTransform != nullptr)
		*SpawnTransform = params.SpawnTransform;

}


// Function GA_Teleporter.GA_Teleporter_C.InitPortalAndSpawnTargetTeleporter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AB_Teleporter_C*         NewTeleporter                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_Teleporter_C::InitPortalAndSpawnTargetTeleporter(class AB_Teleporter_C* NewTeleporter)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Teleporter.GA_Teleporter_C.InitPortalAndSpawnTargetTeleporter");

	UGA_Teleporter_C_InitPortalAndSpawnTargetTeleporter_Params params;
	params.NewTeleporter = NewTeleporter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Teleporter.GA_Teleporter_C.DestroyExistingPortalsForPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             Controller                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_Teleporter_C::DestroyExistingPortalsForPlayer(class AController* Controller)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Teleporter.GA_Teleporter_C.DestroyExistingPortalsForPlayer");

	UGA_Teleporter_C_DestroyExistingPortalsForPlayer_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Teleporter.GA_Teleporter_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
void UGA_Teleporter_C::K2_ActivateAbility()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Teleporter.GA_Teleporter_C.K2_ActivateAbility");

	UGA_Teleporter_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Teleporter.GA_Teleporter_C.ExecuteUbergraph_GA_Teleporter
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_Teleporter_C::ExecuteUbergraph_GA_Teleporter(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Teleporter.GA_Teleporter_C.ExecuteUbergraph_GA_Teleporter");

	UGA_Teleporter_C_ExecuteUbergraph_GA_Teleporter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
