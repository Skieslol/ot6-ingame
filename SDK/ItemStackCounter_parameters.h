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

// Function ItemStackCounter.ItemStackCounter_C.Refresh Visibility
struct UItemStackCounter_C_Refresh_Visibility_Params
{
};

// Function ItemStackCounter.ItemStackCounter_C.Set Stack Count
struct UItemStackCounter_C_Set_Stack_Count_Params
{
	int                                                Count;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ItemStackCounter.ItemStackCounter_C.Update
struct UItemStackCounter_C_Update_Params
{
	TEnumAsByte<FortniteGame_EFortBrushSize>           Brush_Size;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                Count;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ItemStackCounter.ItemStackCounter_C.PreConstruct
struct UItemStackCounter_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ItemStackCounter.ItemStackCounter_C.ExecuteUbergraph_ItemStackCounter
struct UItemStackCounter_C_ExecuteUbergraph_ItemStackCounter_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
