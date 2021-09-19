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

// Function GA_Outlander_KeenEyes.GA_Outlander_KeenEyes_C.Setup Post Fades
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Activating__T__Or_Deactivating__F_ (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_Outlander_KeenEyes_C::Setup_Post_Fades(bool Activating__T__Or_Deactivating__F_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Outlander_KeenEyes.GA_Outlander_KeenEyes_C.Setup Post Fades");

	UGA_Outlander_KeenEyes_C_Setup_Post_Fades_Params params;
	params.Activating__T__Or_Deactivating__F_ = Activating__T__Or_Deactivating__F_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Outlander_KeenEyes.GA_Outlander_KeenEyes_C.Activate Deactivate Outline Post Process
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Outline_Weight                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_Outlander_KeenEyes_C::Activate_Deactivate_Outline_Post_Process(float Outline_Weight)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Outlander_KeenEyes.GA_Outlander_KeenEyes_C.Activate Deactivate Outline Post Process");

	UGA_Outlander_KeenEyes_C_Activate_Deactivate_Outline_Post_Process_Params params;
	params.Outline_Weight = Outline_Weight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Outlander_KeenEyes.GA_Outlander_KeenEyes_C.Deactivate Keen Eye Particles as Objects Leave the Overlap Region
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABuildingContainer*      Building_Container             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPawn*               Fort_Pawn                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Fort_Pawn_True_Building_container_False (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_Outlander_KeenEyes_C::Deactivate_Keen_Eye_Particles_as_Objects_Leave_the_Overlap_Region(class ABuildingContainer* Building_Container, class AFortPawn* Fort_Pawn, bool Fort_Pawn_True_Building_container_False)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Outlander_KeenEyes.GA_Outlander_KeenEyes_C.Deactivate Keen Eye Particles as Objects Leave the Overlap Region");

	UGA_Outlander_KeenEyes_C_Deactivate_Keen_Eye_Particles_as_Objects_Leave_the_Overlap_Region_Params params;
	params.Building_Container = Building_Container;
	params.Fort_Pawn = Fort_Pawn;
	params.Fort_Pawn_True_Building_container_False = Fort_Pawn_True_Building_container_False;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Outlander_KeenEyes.GA_Outlander_KeenEyes_C.Set Or Remove Keen Eyes Custom Depth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*               Character_Mesh                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Render_CustomDepth             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_Outlander_KeenEyes_C::Set_Or_Remove_Keen_Eyes_Custom_Depth(class AFortPawn* Character_Mesh, bool Render_CustomDepth)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Outlander_KeenEyes.GA_Outlander_KeenEyes_C.Set Or Remove Keen Eyes Custom Depth");

	UGA_Outlander_KeenEyes_C_Set_Or_Remove_Keen_Eyes_Custom_Depth_Params params;
	params.Character_Mesh = Character_Mesh;
	params.Render_CustomDepth = Render_CustomDepth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Outlander_KeenEyes.GA_Outlander_KeenEyes_C.GetNearbyLoot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  NewIncomingActor               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_Outlander_KeenEyes_C::GetNearbyLoot(class AActor* NewIncomingActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Outlander_KeenEyes.GA_Outlander_KeenEyes_C.GetNearbyLoot");

	UGA_Outlander_KeenEyes_C_GetNearbyLoot_Params params;
	params.NewIncomingActor = NewIncomingActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Outlander_KeenEyes.GA_Outlander_KeenEyes_C.PulseKeenEyes
// (BlueprintCallable, BlueprintEvent)
void UGA_Outlander_KeenEyes_C::PulseKeenEyes()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Outlander_KeenEyes.GA_Outlander_KeenEyes_C.PulseKeenEyes");

	UGA_Outlander_KeenEyes_C_PulseKeenEyes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Outlander_KeenEyes.GA_Outlander_KeenEyes_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      EventData                      (ConstParm, Parm, OutParm, ReferenceParm)
void UGA_Outlander_KeenEyes_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Outlander_KeenEyes.GA_Outlander_KeenEyes_C.K2_ActivateAbilityFromEvent");

	UGA_Outlander_KeenEyes_C_K2_ActivateAbilityFromEvent_Params params;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Outlander_KeenEyes.GA_Outlander_KeenEyes_C.OverlapTreasure
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
void UGA_Outlander_KeenEyes_C::OverlapTreasure(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Outlander_KeenEyes.GA_Outlander_KeenEyes_C.OverlapTreasure");

	UGA_Outlander_KeenEyes_C_OverlapTreasure_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Outlander_KeenEyes.GA_Outlander_KeenEyes_C.EndOverlap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_Outlander_KeenEyes_C::EndOverlap(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Outlander_KeenEyes.GA_Outlander_KeenEyes_C.EndOverlap");

	UGA_Outlander_KeenEyes_C_EndOverlap_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Outlander_KeenEyes.GA_Outlander_KeenEyes_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
void UGA_Outlander_KeenEyes_C::K2_OnEndAbility()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Outlander_KeenEyes.GA_Outlander_KeenEyes_C.K2_OnEndAbility");

	UGA_Outlander_KeenEyes_C_K2_OnEndAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Outlander_KeenEyes.GA_Outlander_KeenEyes_C.TestTurnOffKeenEyes
// (BlueprintCallable, BlueprintEvent)
void UGA_Outlander_KeenEyes_C::TestTurnOffKeenEyes()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Outlander_KeenEyes.GA_Outlander_KeenEyes_C.TestTurnOffKeenEyes");

	UGA_Outlander_KeenEyes_C_TestTurnOffKeenEyes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GA_Outlander_KeenEyes.GA_Outlander_KeenEyes_C.ExecuteUbergraph_GA_Outlander_KeenEyes
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGA_Outlander_KeenEyes_C::ExecuteUbergraph_GA_Outlander_KeenEyes(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GA_Outlander_KeenEyes.GA_Outlander_KeenEyes_C.ExecuteUbergraph_GA_Outlander_KeenEyes");

	UGA_Outlander_KeenEyes_C_ExecuteUbergraph_GA_Outlander_KeenEyes_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
