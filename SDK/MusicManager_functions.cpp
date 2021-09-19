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

// Function MusicManager.MusicManager_C.ResetMusicBools
// (Protected, BlueprintCallable, BlueprintEvent)
void AMusicManager_C::ResetMusicBools()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MusicManager.MusicManager_C.ResetMusicBools");

	AMusicManager_C_ResetMusicBools_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MusicManager.MusicManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AMusicManager_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MusicManager.MusicManager_C.UserConstructionScript");

	AMusicManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MusicManager.MusicManager_C.OnDayPhaseChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<FortniteGame_EFortDayPhase> CurrentDayPhase                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TEnumAsByte<FortniteGame_EFortDayPhase> PreviousDayPhase               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           bAtCreation                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMusicManager_C::OnDayPhaseChanged(TEnumAsByte<FortniteGame_EFortDayPhase> CurrentDayPhase, TEnumAsByte<FortniteGame_EFortDayPhase> PreviousDayPhase, bool bAtCreation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MusicManager.MusicManager_C.OnDayPhaseChanged");

	AMusicManager_C_OnDayPhaseChanged_Params params;
	params.CurrentDayPhase = CurrentDayPhase;
	params.PreviousDayPhase = PreviousDayPhase;
	params.bAtCreation = bAtCreation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MusicManager.MusicManager_C.OnUpdateMusic
// (BlueprintCallable, BlueprintEvent)
void AMusicManager_C::OnUpdateMusic()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MusicManager.MusicManager_C.OnUpdateMusic");

	AMusicManager_C_OnUpdateMusic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MusicManager.MusicManager_C.PlayDefaultMusic
// (BlueprintCallable, BlueprintEvent)
void AMusicManager_C::PlayDefaultMusic()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MusicManager.MusicManager_C.PlayDefaultMusic");

	AMusicManager_C_PlayDefaultMusic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MusicManager.MusicManager_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void AMusicManager_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MusicManager.MusicManager_C.ReceiveBeginPlay");

	AMusicManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MusicManager.MusicManager_C.ExecuteUbergraph_MusicManager
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMusicManager_C::ExecuteUbergraph_MusicManager(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MusicManager.MusicManager_C.ExecuteUbergraph_MusicManager");

	AMusicManager_C_ExecuteUbergraph_MusicManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
