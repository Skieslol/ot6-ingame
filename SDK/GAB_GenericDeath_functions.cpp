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

// Function GAB_GenericDeath.GAB_GenericDeath_C.InitializeDeathHitDirection
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      EventHitData                   (Parm)
void UGAB_GenericDeath_C::InitializeDeathHitDirection(const struct FGameplayEventData& EventHitData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GAB_GenericDeath.GAB_GenericDeath_C.InitializeDeathHitDirection");

	UGAB_GenericDeath_C_InitializeDeathHitDirection_Params params;
	params.EventHitData = EventHitData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GAB_GenericDeath.GAB_GenericDeath_C.OnCancelled_CD8A514040DDA2A4EF94DD913E1B01E4
// (BlueprintCallable, BlueprintEvent)
void UGAB_GenericDeath_C::OnCancelled_CD8A514040DDA2A4EF94DD913E1B01E4()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GAB_GenericDeath.GAB_GenericDeath_C.OnCancelled_CD8A514040DDA2A4EF94DD913E1B01E4");

	UGAB_GenericDeath_C_OnCancelled_CD8A514040DDA2A4EF94DD913E1B01E4_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GAB_GenericDeath.GAB_GenericDeath_C.OnInterrupted_CD8A514040DDA2A4EF94DD913E1B01E4
// (BlueprintCallable, BlueprintEvent)
void UGAB_GenericDeath_C::OnInterrupted_CD8A514040DDA2A4EF94DD913E1B01E4()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GAB_GenericDeath.GAB_GenericDeath_C.OnInterrupted_CD8A514040DDA2A4EF94DD913E1B01E4");

	UGAB_GenericDeath_C_OnInterrupted_CD8A514040DDA2A4EF94DD913E1B01E4_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GAB_GenericDeath.GAB_GenericDeath_C.OnComplete_CD8A514040DDA2A4EF94DD913E1B01E4
// (BlueprintCallable, BlueprintEvent)
void UGAB_GenericDeath_C::OnComplete_CD8A514040DDA2A4EF94DD913E1B01E4()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GAB_GenericDeath.GAB_GenericDeath_C.OnComplete_CD8A514040DDA2A4EF94DD913E1B01E4");

	UGAB_GenericDeath_C_OnComplete_CD8A514040DDA2A4EF94DD913E1B01E4_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GAB_GenericDeath.GAB_GenericDeath_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      EventData                      (ConstParm, Parm, OutParm, ReferenceParm)
void UGAB_GenericDeath_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GAB_GenericDeath.GAB_GenericDeath_C.K2_ActivateAbilityFromEvent");

	UGAB_GenericDeath_C_K2_ActivateAbilityFromEvent_Params params;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GAB_GenericDeath.GAB_GenericDeath_C.PickDeathMontageSection
// (BlueprintCallable, BlueprintEvent)
void UGAB_GenericDeath_C::PickDeathMontageSection()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GAB_GenericDeath.GAB_GenericDeath_C.PickDeathMontageSection");

	UGAB_GenericDeath_C_PickDeathMontageSection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GAB_GenericDeath.GAB_GenericDeath_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
void UGAB_GenericDeath_C::K2_OnEndAbility()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GAB_GenericDeath.GAB_GenericDeath_C.K2_OnEndAbility");

	UGAB_GenericDeath_C_K2_OnEndAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GAB_GenericDeath.GAB_GenericDeath_C.ExecuteUbergraph_GAB_GenericDeath
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGAB_GenericDeath_C::ExecuteUbergraph_GAB_GenericDeath(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GAB_GenericDeath.GAB_GenericDeath_C.ExecuteUbergraph_GAB_GenericDeath");

	UGAB_GenericDeath_C_ExecuteUbergraph_GAB_GenericDeath_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
