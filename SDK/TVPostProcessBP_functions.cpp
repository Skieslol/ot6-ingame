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

// Function TVPostProcessBP.TVPostProcessBP_C.RandomizeTheColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Use_Bluescreen                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          Probablility_modulator         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          Use_Flat_Blue                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          MaxColorPerChannelValue        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Control_replacement_alpha      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATVPostProcessBP_C::RandomizeTheColor(float Use_Bluescreen, float Probablility_modulator, float Use_Flat_Blue, float MaxColorPerChannelValue, bool Control_replacement_alpha)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TVPostProcessBP.TVPostProcessBP_C.RandomizeTheColor");

	ATVPostProcessBP_C_RandomizeTheColor_Params params;
	params.Use_Bluescreen = Use_Bluescreen;
	params.Probablility_modulator = Probablility_modulator;
	params.Use_Flat_Blue = Use_Flat_Blue;
	params.MaxColorPerChannelValue = MaxColorPerChannelValue;
	params.Control_replacement_alpha = Control_replacement_alpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TVPostProcessBP.TVPostProcessBP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ATVPostProcessBP_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TVPostProcessBP.TVPostProcessBP_C.UserConstructionScript");

	ATVPostProcessBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TVPostProcessBP.TVPostProcessBP_C.StartScreen__FinishedFunc
// (BlueprintEvent)
void ATVPostProcessBP_C::StartScreen__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TVPostProcessBP.TVPostProcessBP_C.StartScreen__FinishedFunc");

	ATVPostProcessBP_C_StartScreen__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TVPostProcessBP.TVPostProcessBP_C.StartScreen__UpdateFunc
// (BlueprintEvent)
void ATVPostProcessBP_C::StartScreen__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TVPostProcessBP.TVPostProcessBP_C.StartScreen__UpdateFunc");

	ATVPostProcessBP_C_StartScreen__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TVPostProcessBP.TVPostProcessBP_C.Switch to static__FinishedFunc
// (BlueprintEvent)
void ATVPostProcessBP_C::Switch_to_static__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TVPostProcessBP.TVPostProcessBP_C.Switch to static__FinishedFunc");

	ATVPostProcessBP_C_Switch_to_static__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TVPostProcessBP.TVPostProcessBP_C.Switch to static__UpdateFunc
// (BlueprintEvent)
void ATVPostProcessBP_C::Switch_to_static__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TVPostProcessBP.TVPostProcessBP_C.Switch to static__UpdateFunc");

	ATVPostProcessBP_C_Switch_to_static__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TVPostProcessBP.TVPostProcessBP_C.Switch between cameras__FinishedFunc
// (BlueprintEvent)
void ATVPostProcessBP_C::Switch_between_cameras__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TVPostProcessBP.TVPostProcessBP_C.Switch between cameras__FinishedFunc");

	ATVPostProcessBP_C_Switch_between_cameras__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TVPostProcessBP.TVPostProcessBP_C.Switch between cameras__UpdateFunc
// (BlueprintEvent)
void ATVPostProcessBP_C::Switch_between_cameras__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TVPostProcessBP.TVPostProcessBP_C.Switch between cameras__UpdateFunc");

	ATVPostProcessBP_C_Switch_between_cameras__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TVPostProcessBP.TVPostProcessBP_C.Switch between cameras__Switch Camera Position__EventFunc
// (BlueprintEvent)
void ATVPostProcessBP_C::Switch_between_cameras__Switch_Camera_Position__EventFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TVPostProcessBP.TVPostProcessBP_C.Switch between cameras__Switch Camera Position__EventFunc");

	ATVPostProcessBP_C_Switch_between_cameras__Switch_Camera_Position__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TVPostProcessBP.TVPostProcessBP_C.Show the troll__FinishedFunc
// (BlueprintEvent)
void ATVPostProcessBP_C::Show_the_troll__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TVPostProcessBP.TVPostProcessBP_C.Show the troll__FinishedFunc");

	ATVPostProcessBP_C_Show_the_troll__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TVPostProcessBP.TVPostProcessBP_C.Show the troll__UpdateFunc
// (BlueprintEvent)
void ATVPostProcessBP_C::Show_the_troll__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TVPostProcessBP.TVPostProcessBP_C.Show the troll__UpdateFunc");

	ATVPostProcessBP_C_Show_the_troll__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TVPostProcessBP.TVPostProcessBP_C.Switch to live__FinishedFunc
// (BlueprintEvent)
void ATVPostProcessBP_C::Switch_to_live__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TVPostProcessBP.TVPostProcessBP_C.Switch to live__FinishedFunc");

	ATVPostProcessBP_C_Switch_to_live__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TVPostProcessBP.TVPostProcessBP_C.Switch to live__UpdateFunc
// (BlueprintEvent)
void ATVPostProcessBP_C::Switch_to_live__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TVPostProcessBP.TVPostProcessBP_C.Switch to live__UpdateFunc");

	ATVPostProcessBP_C_Switch_to_live__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TVPostProcessBP.TVPostProcessBP_C.FadeOut__FinishedFunc
// (BlueprintEvent)
void ATVPostProcessBP_C::FadeOut__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TVPostProcessBP.TVPostProcessBP_C.FadeOut__FinishedFunc");

	ATVPostProcessBP_C_FadeOut__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TVPostProcessBP.TVPostProcessBP_C.FadeOut__UpdateFunc
// (BlueprintEvent)
void ATVPostProcessBP_C::FadeOut__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TVPostProcessBP.TVPostProcessBP_C.FadeOut__UpdateFunc");

	ATVPostProcessBP_C_FadeOut__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TVPostProcessBP.TVPostProcessBP_C.Camera_StartTheMonitor_Text_Timeline__FinishedFunc
// (BlueprintEvent)
void ATVPostProcessBP_C::Camera_StartTheMonitor_Text_Timeline__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TVPostProcessBP.TVPostProcessBP_C.Camera_StartTheMonitor_Text_Timeline__FinishedFunc");

	ATVPostProcessBP_C_Camera_StartTheMonitor_Text_Timeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TVPostProcessBP.TVPostProcessBP_C.Camera_StartTheMonitor_Text_Timeline__UpdateFunc
// (BlueprintEvent)
void ATVPostProcessBP_C::Camera_StartTheMonitor_Text_Timeline__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TVPostProcessBP.TVPostProcessBP_C.Camera_StartTheMonitor_Text_Timeline__UpdateFunc");

	ATVPostProcessBP_C_Camera_StartTheMonitor_Text_Timeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TVPostProcessBP.TVPostProcessBP_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
void ATVPostProcessBP_C::Timeline_0__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TVPostProcessBP.TVPostProcessBP_C.Timeline_0__FinishedFunc");

	ATVPostProcessBP_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TVPostProcessBP.TVPostProcessBP_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
void ATVPostProcessBP_C::Timeline_0__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TVPostProcessBP.TVPostProcessBP_C.Timeline_0__UpdateFunc");

	ATVPostProcessBP_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TVPostProcessBP.TVPostProcessBP_C.Timeline_0__Switch Camera Position__EventFunc
// (BlueprintEvent)
void ATVPostProcessBP_C::Timeline_0__Switch_Camera_Position__EventFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TVPostProcessBP.TVPostProcessBP_C.Timeline_0__Switch Camera Position__EventFunc");

	ATVPostProcessBP_C_Timeline_0__Switch_Camera_Position__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TVPostProcessBP.TVPostProcessBP_C.Jitter Timeline__FinishedFunc
// (BlueprintEvent)
void ATVPostProcessBP_C::Jitter_Timeline__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TVPostProcessBP.TVPostProcessBP_C.Jitter Timeline__FinishedFunc");

	ATVPostProcessBP_C_Jitter_Timeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TVPostProcessBP.TVPostProcessBP_C.Jitter Timeline__UpdateFunc
// (BlueprintEvent)
void ATVPostProcessBP_C::Jitter_Timeline__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TVPostProcessBP.TVPostProcessBP_C.Jitter Timeline__UpdateFunc");

	ATVPostProcessBP_C_Jitter_Timeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TVPostProcessBP.TVPostProcessBP_C.Jitter Timeline__Switch Camera Position__EventFunc
// (BlueprintEvent)
void ATVPostProcessBP_C::Jitter_Timeline__Switch_Camera_Position__EventFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TVPostProcessBP.TVPostProcessBP_C.Jitter Timeline__Switch Camera Position__EventFunc");

	ATVPostProcessBP_C_Jitter_Timeline__Switch_Camera_Position__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TVPostProcessBP.TVPostProcessBP_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void ATVPostProcessBP_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TVPostProcessBP.TVPostProcessBP_C.ReceiveBeginPlay");

	ATVPostProcessBP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TVPostProcessBP.TVPostProcessBP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATVPostProcessBP_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TVPostProcessBP.TVPostProcessBP_C.ReceiveTick");

	ATVPostProcessBP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TVPostProcessBP.TVPostProcessBP_C.Camera_TransitionToLiveVideo
// (BlueprintCallable, BlueprintEvent)
void ATVPostProcessBP_C::Camera_TransitionToLiveVideo()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TVPostProcessBP.TVPostProcessBP_C.Camera_TransitionToLiveVideo");

	ATVPostProcessBP_C_Camera_TransitionToLiveVideo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TVPostProcessBP.TVPostProcessBP_C.Camera_SwitchBetweenLocations
// (BlueprintCallable, BlueprintEvent)
void ATVPostProcessBP_C::Camera_SwitchBetweenLocations()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TVPostProcessBP.TVPostProcessBP_C.Camera_SwitchBetweenLocations");

	ATVPostProcessBP_C_Camera_SwitchBetweenLocations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TVPostProcessBP.TVPostProcessBP_C.Camera_InitializePost
// (BlueprintCallable, BlueprintEvent)
void ATVPostProcessBP_C::Camera_InitializePost()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TVPostProcessBP.TVPostProcessBP_C.Camera_InitializePost");

	ATVPostProcessBP_C_Camera_InitializePost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TVPostProcessBP.TVPostProcessBP_C.Camera_TriggerTheTroll
// (BlueprintCallable, BlueprintEvent)
void ATVPostProcessBP_C::Camera_TriggerTheTroll()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TVPostProcessBP.TVPostProcessBP_C.Camera_TriggerTheTroll");

	ATVPostProcessBP_C_Camera_TriggerTheTroll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TVPostProcessBP.TVPostProcessBP_C.Camera_TransitionToLiveStatic
// (BlueprintCallable, BlueprintEvent)
void ATVPostProcessBP_C::Camera_TransitionToLiveStatic()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TVPostProcessBP.TVPostProcessBP_C.Camera_TransitionToLiveStatic");

	ATVPostProcessBP_C_Camera_TransitionToLiveStatic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TVPostProcessBP.TVPostProcessBP_C.Camera_TurnOffThePostProcess
// (BlueprintCallable, BlueprintEvent)
void ATVPostProcessBP_C::Camera_TurnOffThePostProcess()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TVPostProcessBP.TVPostProcessBP_C.Camera_TurnOffThePostProcess");

	ATVPostProcessBP_C_Camera_TurnOffThePostProcess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TVPostProcessBP.TVPostProcessBP_C.Camera_DebugEvents
// (BlueprintCallable, BlueprintEvent)
void ATVPostProcessBP_C::Camera_DebugEvents()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TVPostProcessBP.TVPostProcessBP_C.Camera_DebugEvents");

	ATVPostProcessBP_C_Camera_DebugEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TVPostProcessBP.TVPostProcessBP_C.Camera_StartTheMonitor_Text
// (BlueprintCallable, BlueprintEvent)
void ATVPostProcessBP_C::Camera_StartTheMonitor_Text()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TVPostProcessBP.TVPostProcessBP_C.Camera_StartTheMonitor_Text");

	ATVPostProcessBP_C_Camera_StartTheMonitor_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TVPostProcessBP.TVPostProcessBP_C.Camera_DosTextFinished
// (BlueprintCallable, BlueprintEvent)
void ATVPostProcessBP_C::Camera_DosTextFinished()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TVPostProcessBP.TVPostProcessBP_C.Camera_DosTextFinished");

	ATVPostProcessBP_C_Camera_DosTextFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TVPostProcessBP.TVPostProcessBP_C.Camera_ReturningPlayerInitializeWithLiveVideo
// (BlueprintCallable, BlueprintEvent)
void ATVPostProcessBP_C::Camera_ReturningPlayerInitializeWithLiveVideo()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TVPostProcessBP.TVPostProcessBP_C.Camera_ReturningPlayerInitializeWithLiveVideo");

	ATVPostProcessBP_C_Camera_ReturningPlayerInitializeWithLiveVideo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TVPostProcessBP.TVPostProcessBP_C.Camera_SwitchBetweenLocations_AfterPostProcessDisappears
// (BlueprintCallable, BlueprintEvent)
void ATVPostProcessBP_C::Camera_SwitchBetweenLocations_AfterPostProcessDisappears()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TVPostProcessBP.TVPostProcessBP_C.Camera_SwitchBetweenLocations_AfterPostProcessDisappears");

	ATVPostProcessBP_C_Camera_SwitchBetweenLocations_AfterPostProcessDisappears_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TVPostProcessBP.TVPostProcessBP_C.Camera_LoadAndWait
// (BlueprintCallable, BlueprintEvent)
void ATVPostProcessBP_C::Camera_LoadAndWait()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TVPostProcessBP.TVPostProcessBP_C.Camera_LoadAndWait");

	ATVPostProcessBP_C_Camera_LoadAndWait_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TVPostProcessBP.TVPostProcessBP_C.Camera_Sequence_Start_StaticWhoomp
// (BlueprintCallable, BlueprintEvent)
void ATVPostProcessBP_C::Camera_Sequence_Start_StaticWhoomp()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TVPostProcessBP.TVPostProcessBP_C.Camera_Sequence_Start_StaticWhoomp");

	ATVPostProcessBP_C_Camera_Sequence_Start_StaticWhoomp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TVPostProcessBP.TVPostProcessBP_C.WriteOutLoading
// (BlueprintCallable, BlueprintEvent)
void ATVPostProcessBP_C::WriteOutLoading()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TVPostProcessBP.TVPostProcessBP_C.WriteOutLoading");

	ATVPostProcessBP_C_WriteOutLoading_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TVPostProcessBP.TVPostProcessBP_C.SequenceFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 SequenceName                   (Parm, ZeroConstructor)
void ATVPostProcessBP_C::SequenceFinished(const struct FString& SequenceName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TVPostProcessBP.TVPostProcessBP_C.SequenceFinished");

	ATVPostProcessBP_C_SequenceFinished_Params params;
	params.SequenceName = SequenceName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TVPostProcessBP.TVPostProcessBP_C.Camera_DisableEffects
// (BlueprintCallable, BlueprintEvent)
void ATVPostProcessBP_C::Camera_DisableEffects()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TVPostProcessBP.TVPostProcessBP_C.Camera_DisableEffects");

	ATVPostProcessBP_C_Camera_DisableEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TVPostProcessBP.TVPostProcessBP_C.FastForwardPostProcess
// (BlueprintCallable, BlueprintEvent)
void ATVPostProcessBP_C::FastForwardPostProcess()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TVPostProcessBP.TVPostProcessBP_C.FastForwardPostProcess");

	ATVPostProcessBP_C_FastForwardPostProcess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TVPostProcessBP.TVPostProcessBP_C.JitterTheScreen
// (BlueprintCallable, BlueprintEvent)
void ATVPostProcessBP_C::JitterTheScreen()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TVPostProcessBP.TVPostProcessBP_C.JitterTheScreen");

	ATVPostProcessBP_C_JitterTheScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TVPostProcessBP.TVPostProcessBP_C.ExecuteUbergraph_TVPostProcessBP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATVPostProcessBP_C::ExecuteUbergraph_TVPostProcessBP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TVPostProcessBP.TVPostProcessBP_C.ExecuteUbergraph_TVPostProcessBP");

	ATVPostProcessBP_C_ExecuteUbergraph_TVPostProcessBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
