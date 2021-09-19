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

// Function V2_Item_Card.V2_Item_Card_C.Draw_Card
struct UV2_Item_Card_C_Draw_Card_Params
{
};

// Function V2_Item_Card.V2_Item_Card_C.Get_CardOverlay_ToolTipWidget_2
struct UV2_Item_Card_C_Get_CardOverlay_ToolTipWidget_2_Params
{
	class UWidget*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function V2_Item_Card.V2_Item_Card_C.ShowCardBack
struct UV2_Item_Card_C_ShowCardBack_Params
{
};

// Function V2_Item_Card.V2_Item_Card_C.ShowCardFront
struct UV2_Item_Card_C_ShowCardFront_Params
{
};

// Function V2_Item_Card.V2_Item_Card_C.Initialize_Card
struct UV2_Item_Card_C_Initialize_Card_Params
{
	struct FCard                                       inCard;                                                    // (Parm)
	bool                                               isOn3DCard;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               isFront;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function V2_Item_Card.V2_Item_Card_C.Construct
struct UV2_Item_Card_C_Construct_Params
{
};

// Function V2_Item_Card.V2_Item_Card_C.OnFortStoreStateChanged
struct UV2_Item_Card_C_OnFortStoreStateChanged_Params
{
	TEnumAsByte<FortniteUI_EFortStoreState>            NewStoreState;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function V2_Item_Card.V2_Item_Card_C.OnMouseEnter
struct UV2_Item_Card_C_OnMouseEnter_Params
{
	struct FGeometry                                   MyGeometry;                                                // (Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function V2_Item_Card.V2_Item_Card_C.OnMouseLeave
struct UV2_Item_Card_C_OnMouseLeave_Params
{
	struct FPointerEvent                               MouseEvent;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function V2_Item_Card.V2_Item_Card_C.ExecuteUbergraph_V2_Item_Card
struct UV2_Item_Card_C_ExecuteUbergraph_V2_Item_Card_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
