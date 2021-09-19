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

// Function GA_Ninja_TriggeredRunSpeed.GA_Ninja_TriggeredRunSpeed_C.ApplyRunTrails
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystem*         Emitter_Template               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class USceneComponent*         Scene_Component                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_Ninja_TriggeredRunSpeed_C::ApplyRunTrails(class UParticleSystem* Emitter_Template, class USceneComponent* Scene_Component)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Ninja_TriggeredRunSpeed.GA_Ninja_TriggeredRunSpeed_C.ApplyRunTrails");

	UGA_Ninja_TriggeredRunSpeed_C_ApplyRunTrails_Params params;
	params.Emitter_Template = Emitter_Template;
	params.Scene_Component = Scene_Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Ninja_TriggeredRunSpeed.GA_Ninja_TriggeredRunSpeed_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      EventData                      (ConstParm, Parm, OutParm, ReferenceParm)
void UGA_Ninja_TriggeredRunSpeed_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Ninja_TriggeredRunSpeed.GA_Ninja_TriggeredRunSpeed_C.K2_ActivateAbilityFromEvent");

	UGA_Ninja_TriggeredRunSpeed_C_K2_ActivateAbilityFromEvent_Params params;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Ninja_TriggeredRunSpeed.GA_Ninja_TriggeredRunSpeed_C.ExecuteUbergraph_GA_Ninja_TriggeredRunSpeed
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_Ninja_TriggeredRunSpeed_C::ExecuteUbergraph_GA_Ninja_TriggeredRunSpeed(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Ninja_TriggeredRunSpeed.GA_Ninja_TriggeredRunSpeed_C.ExecuteUbergraph_GA_Ninja_TriggeredRunSpeed");

	UGA_Ninja_TriggeredRunSpeed_C_ExecuteUbergraph_GA_Ninja_TriggeredRunSpeed_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
