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

// Function MusicManager.MusicManager_C.ResetMusicBools
struct AMusicManager_C_ResetMusicBools_Params
{
};

// Function MusicManager.MusicManager_C.UserConstructionScript
struct AMusicManager_C_UserConstructionScript_Params
{
};

// Function MusicManager.MusicManager_C.OnDayPhaseChanged
struct AMusicManager_C_OnDayPhaseChanged_Params
{
	TEnumAsByte<FortniteGame_EFortDayPhase>            CurrentDayPhase;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<FortniteGame_EFortDayPhase>            PreviousDayPhase;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bAtCreation;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function MusicManager.MusicManager_C.OnUpdateMusic
struct AMusicManager_C_OnUpdateMusic_Params
{
};

// Function MusicManager.MusicManager_C.PlayDefaultMusic
struct AMusicManager_C_PlayDefaultMusic_Params
{
};

// Function MusicManager.MusicManager_C.ReceiveBeginPlay
struct AMusicManager_C_ReceiveBeginPlay_Params
{
};

// Function MusicManager.MusicManager_C.ExecuteUbergraph_MusicManager
struct AMusicManager_C_ExecuteUbergraph_MusicManager_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
