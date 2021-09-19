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

// Function WriteOutTextToTheScreen.WriteOutTextToTheScreen_C.Line
struct AWriteOutTextToTheScreen_C_Line_Params
{
};

// Function WriteOutTextToTheScreen.WriteOutTextToTheScreen_C.UserConstructionScript
struct AWriteOutTextToTheScreen_C_UserConstructionScript_Params
{
};

// Function WriteOutTextToTheScreen.WriteOutTextToTheScreen_C.ReceiveTick
struct AWriteOutTextToTheScreen_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WriteOutTextToTheScreen.WriteOutTextToTheScreen_C.WriteOutText
struct AWriteOutTextToTheScreen_C_WriteOutText_Params
{
	struct FString                                     String;                                                    // (Parm, ZeroConstructor)
	float                                              TimePerCharacter;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                Anim_Start_String_Index__Length_Based_;                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                Anim_End_String_Index__default_length_;                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Init_New_Line_;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Color;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Bold_;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                AdditionalLines;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WriteOutTextToTheScreen.WriteOutTextToTheScreen_C.ReceiveBeginPlay
struct AWriteOutTextToTheScreen_C_ReceiveBeginPlay_Params
{
};

// Function WriteOutTextToTheScreen.WriteOutTextToTheScreen_C.ErasePage
struct AWriteOutTextToTheScreen_C_ErasePage_Params
{
};

// Function WriteOutTextToTheScreen.WriteOutTextToTheScreen_C.MoveText
struct AWriteOutTextToTheScreen_C_MoveText_Params
{
	float                                              NewHeight;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WriteOutTextToTheScreen.WriteOutTextToTheScreen_C.ExecuteUbergraph_WriteOutTextToTheScreen
struct AWriteOutTextToTheScreen_C_ExecuteUbergraph_WriteOutTextToTheScreen_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
