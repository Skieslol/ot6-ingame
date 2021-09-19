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

// Function LevelSequence.LevelSequencePlayer.Stop
// (Final, Native, Public, BlueprintCallable)
void ULevelSequencePlayer::Stop()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequencePlayer.Stop");

	ULevelSequencePlayer_Stop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LevelSequence.LevelSequencePlayer.SetPlayRate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          PlayRate                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULevelSequencePlayer::SetPlayRate(float PlayRate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequencePlayer.SetPlayRate");

	ULevelSequencePlayer_SetPlayRate_Params params;
	params.PlayRate = PlayRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LevelSequence.LevelSequencePlayer.SetPlaybackRange
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          NewStartTime                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                          NewEndTime                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULevelSequencePlayer::SetPlaybackRange(float NewStartTime, float NewEndTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequencePlayer.SetPlaybackRange");

	ULevelSequencePlayer_SetPlaybackRange_Params params;
	params.NewStartTime = NewStartTime;
	params.NewEndTime = NewEndTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LevelSequence.LevelSequencePlayer.SetPlaybackPosition
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          NewPlaybackPosition            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULevelSequencePlayer::SetPlaybackPosition(float NewPlaybackPosition)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequencePlayer.SetPlaybackPosition");

	ULevelSequencePlayer_SetPlaybackPosition_Params params;
	params.NewPlaybackPosition = NewPlaybackPosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LevelSequence.LevelSequencePlayer.PlayLooping
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ULevelSequencePlayer::PlayLooping(int NumLoops)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequencePlayer.PlayLooping");

	ULevelSequencePlayer_PlayLooping_Params params;
	params.NumLoops = NumLoops;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LevelSequence.LevelSequencePlayer.Play
// (Final, Native, Public, BlueprintCallable)
void ULevelSequencePlayer::Play()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequencePlayer.Play");

	ULevelSequencePlayer_Play_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LevelSequence.LevelSequencePlayer.Pause
// (Final, Native, Public, BlueprintCallable)
void ULevelSequencePlayer::Pause()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequencePlayer.Pause");

	ULevelSequencePlayer_Pause_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LevelSequence.LevelSequencePlayer.IsPlaying
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
bool ULevelSequencePlayer::IsPlaying()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequencePlayer.IsPlaying");

	ULevelSequencePlayer_IsPlaying_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function LevelSequence.LevelSequencePlayer.GetPlayRate
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float ULevelSequencePlayer::GetPlayRate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequencePlayer.GetPlayRate");

	ULevelSequencePlayer_GetPlayRate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function LevelSequence.LevelSequencePlayer.GetPlaybackPosition
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float ULevelSequencePlayer::GetPlaybackPosition()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequencePlayer.GetPlaybackPosition");

	ULevelSequencePlayer_GetPlaybackPosition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function LevelSequence.LevelSequencePlayer.GetLength
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float ULevelSequencePlayer::GetLength()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequencePlayer.GetLength");

	ULevelSequencePlayer_GetLength_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function LevelSequence.LevelSequencePlayer.CreateLevelSequencePlayer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULevelSequence*          LevelSequence                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLevelSequencePlaybackSettings Settings                       (Parm, NativeAccessSpecifierPublic)
// class ULevelSequencePlayer*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULevelSequencePlayer* ULevelSequencePlayer::STATIC_CreateLevelSequencePlayer(class UObject* WorldContextObject, class ULevelSequence* LevelSequence, const struct FLevelSequencePlaybackSettings& Settings)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequencePlayer.CreateLevelSequencePlayer");

	ULevelSequencePlayer_CreateLevelSequencePlayer_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LevelSequence = LevelSequence;
	params.Settings = Settings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function LevelSequence.LevelSequenceActor.SetSequence
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ULevelSequence*          InSequence                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ALevelSequenceActor::SetSequence(class ULevelSequence* InSequence)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LevelSequence.LevelSequenceActor.SetSequence");

	ALevelSequenceActor_SetSequence_Params params;
	params.InSequence = InSequence;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
