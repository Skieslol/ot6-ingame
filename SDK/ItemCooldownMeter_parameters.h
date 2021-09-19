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

// Function ItemCooldownMeter.ItemCooldownMeter_C.GetSecondsCorrectedMinutes
struct UItemCooldownMeter_C_GetSecondsCorrectedMinutes_Params
{
	int                                                Minutes;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                Seconds;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function ItemCooldownMeter.ItemCooldownMeter_C.Set Cooldown
struct UItemCooldownMeter_C_Set_Cooldown_Params
{
	struct FTimespan                                   Time_Left;                                                 // (Parm, ZeroConstructor)
	float                                              Percentage;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ItemCooldownMeter.ItemCooldownMeter_C.Update
struct UItemCooldownMeter_C_Update_Params
{
	TEnumAsByte<FortniteGame_EFortBrushSize>           Brush_Size;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FTimespan                                   Time_Left;                                                 // (Parm, ZeroConstructor)
	float                                              Percentage;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
