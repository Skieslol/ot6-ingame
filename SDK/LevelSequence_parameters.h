#pragma once

// Name: Fortnite, Version: OT-6_5


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function LevelSequence.LevelSequencePlayer.Stop
struct ULevelSequencePlayer_Stop_Params
{
};

// Function LevelSequence.LevelSequencePlayer.SetPlayRate
struct ULevelSequencePlayer_SetPlayRate_Params
{
	float                                              PlayRate;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LevelSequence.LevelSequencePlayer.SetPlaybackRange
struct ULevelSequencePlayer_SetPlaybackRange_Params
{
	float                                              NewStartTime;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NewEndTime;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LevelSequence.LevelSequencePlayer.SetPlaybackPosition
struct ULevelSequencePlayer_SetPlaybackPosition_Params
{
	float                                              NewPlaybackPosition;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LevelSequence.LevelSequencePlayer.PlayLooping
struct ULevelSequencePlayer_PlayLooping_Params
{
	int                                                NumLoops;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LevelSequence.LevelSequencePlayer.Play
struct ULevelSequencePlayer_Play_Params
{
};

// Function LevelSequence.LevelSequencePlayer.Pause
struct ULevelSequencePlayer_Pause_Params
{
};

// Function LevelSequence.LevelSequencePlayer.IsPlaying
struct ULevelSequencePlayer_IsPlaying_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function LevelSequence.LevelSequencePlayer.GetPlayRate
struct ULevelSequencePlayer_GetPlayRate_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LevelSequence.LevelSequencePlayer.GetPlaybackPosition
struct ULevelSequencePlayer_GetPlaybackPosition_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LevelSequence.LevelSequencePlayer.GetLength
struct ULevelSequencePlayer_GetLength_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LevelSequence.LevelSequencePlayer.CreateLevelSequencePlayer
struct ULevelSequencePlayer_CreateLevelSequencePlayer_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULevelSequence*                              LevelSequence;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLevelSequencePlaybackSettings              Settings;                                                  // (Parm, NativeAccessSpecifierPublic)
	class ULevelSequencePlayer*                        ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function LevelSequence.LevelSequenceActor.SetSequence
struct ALevelSequenceActor_SetSequence_Params
{
	class ULevelSequence*                              InSequence;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
