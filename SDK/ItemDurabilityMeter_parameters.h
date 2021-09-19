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

// Function ItemDurabilityMeter.ItemDurabilityMeter_C.Set Backfill Color
struct UItemDurabilityMeter_C_Set_Backfill_Color_Params
{
	struct FLinearColor                                Backfill_Color;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ItemDurabilityMeter.ItemDurabilityMeter_C.Set Durability
struct UItemDurabilityMeter_C_Set_Durability_Params
{
	float                                              Durability;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ItemDurabilityMeter.ItemDurabilityMeter_C.Update
struct UItemDurabilityMeter_C_Update_Params
{
	struct FVector2D                                   Draw_Size;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Durability;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ItemDurabilityMeter.ItemDurabilityMeter_C.Construct
struct UItemDurabilityMeter_C_Construct_Params
{
};

// Function ItemDurabilityMeter.ItemDurabilityMeter_C.ExecuteUbergraph_ItemDurabilityMeter
struct UItemDurabilityMeter_C_ExecuteUbergraph_ItemDurabilityMeter_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
