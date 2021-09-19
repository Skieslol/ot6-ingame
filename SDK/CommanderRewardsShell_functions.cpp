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

// Function CommanderRewardsShell.CommanderRewardsShell_C.CreateLevelBox
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InLevel                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           isFirstLevel                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UCommanderRewardsShell_C::CreateLevelBox(int InLevel, bool isFirstLevel)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CommanderRewardsShell.CommanderRewardsShell_C.CreateLevelBox");

	UCommanderRewardsShell_C_CreateLevelBox_Params params;
	params.InLevel = InLevel;
	params.isFirstLevel = isFirstLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CommanderRewardsShell.CommanderRewardsShell_C.Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UCommanderRewardsShell_C::Init()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CommanderRewardsShell.CommanderRewardsShell_C.Init");

	UCommanderRewardsShell_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CommanderRewardsShell.CommanderRewardsShell_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UCommanderRewardsShell_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CommanderRewardsShell.CommanderRewardsShell_C.Construct");

	UCommanderRewardsShell_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CommanderRewardsShell.CommanderRewardsShell_C.ExecuteUbergraph_CommanderRewardsShell
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UCommanderRewardsShell_C::ExecuteUbergraph_CommanderRewardsShell(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CommanderRewardsShell.CommanderRewardsShell_C.ExecuteUbergraph_CommanderRewardsShell");

	UCommanderRewardsShell_C_ExecuteUbergraph_CommanderRewardsShell_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
