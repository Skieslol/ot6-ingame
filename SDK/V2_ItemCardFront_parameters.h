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

// Function V2_ItemCardFront.V2_ItemCardFront_C.Get_CardOverlay_ToolTipWidget_2
struct UV2_ItemCardFront_C_Get_CardOverlay_ToolTipWidget_2_Params
{
	class UWidget*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function V2_ItemCardFront.V2_ItemCardFront_C.Draw_Card
struct UV2_ItemCardFront_C_Draw_Card_Params
{
};

// Function V2_ItemCardFront.V2_ItemCardFront_C.Initialize_Card
struct UV2_ItemCardFront_C_Initialize_Card_Params
{
	struct FCard                                       inCard;                                                    // (Parm)
};

// Function V2_ItemCardFront.V2_ItemCardFront_C.Construct
struct UV2_ItemCardFront_C_Construct_Params
{
};

// Function V2_ItemCardFront.V2_ItemCardFront_C.OnFortStoreStateChanged
struct UV2_ItemCardFront_C_OnFortStoreStateChanged_Params
{
	TEnumAsByte<FortniteUI_EFortStoreState>            NewStoreState;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function V2_ItemCardFront.V2_ItemCardFront_C.ExecuteUbergraph_V2_ItemCardFront
struct UV2_ItemCardFront_C_ExecuteUbergraph_V2_ItemCardFront_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
