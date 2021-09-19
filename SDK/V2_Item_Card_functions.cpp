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

// Function V2_Item_Card.V2_Item_Card_C.Draw_Card
// (Public, BlueprintCallable, BlueprintEvent)
void UV2_Item_Card_C::Draw_Card()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function V2_Item_Card.V2_Item_Card_C.Draw_Card");

	UV2_Item_Card_C_Draw_Card_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function V2_Item_Card.V2_Item_Card_C.Get_CardOverlay_ToolTipWidget_2
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
class UWidget* UV2_Item_Card_C::Get_CardOverlay_ToolTipWidget_2()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function V2_Item_Card.V2_Item_Card_C.Get_CardOverlay_ToolTipWidget_2");

	UV2_Item_Card_C_Get_CardOverlay_ToolTipWidget_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function V2_Item_Card.V2_Item_Card_C.ShowCardBack
// (Public, BlueprintCallable, BlueprintEvent)
void UV2_Item_Card_C::ShowCardBack()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function V2_Item_Card.V2_Item_Card_C.ShowCardBack");

	UV2_Item_Card_C_ShowCardBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function V2_Item_Card.V2_Item_Card_C.ShowCardFront
// (Public, BlueprintCallable, BlueprintEvent)
void UV2_Item_Card_C::ShowCardFront()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function V2_Item_Card.V2_Item_Card_C.ShowCardFront");

	UV2_Item_Card_C_ShowCardFront_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function V2_Item_Card.V2_Item_Card_C.Initialize_Card
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCard                   inCard                         (Parm)
// bool                           isOn3DCard                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           isFront                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UV2_Item_Card_C::Initialize_Card(const struct FCard& inCard, bool isOn3DCard, bool isFront)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function V2_Item_Card.V2_Item_Card_C.Initialize_Card");

	UV2_Item_Card_C_Initialize_Card_Params params;
	params.inCard = inCard;
	params.isOn3DCard = isOn3DCard;
	params.isFront = isFront;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function V2_Item_Card.V2_Item_Card_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UV2_Item_Card_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function V2_Item_Card.V2_Item_Card_C.Construct");

	UV2_Item_Card_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function V2_Item_Card.V2_Item_Card_C.OnFortStoreStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<FortniteUI_EFortStoreState> NewStoreState                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UV2_Item_Card_C::OnFortStoreStateChanged(TEnumAsByte<FortniteUI_EFortStoreState> NewStoreState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function V2_Item_Card.V2_Item_Card_C.OnFortStoreStateChanged");

	UV2_Item_Card_C_OnFortStoreStateChanged_Params params;
	params.NewStoreState = NewStoreState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function V2_Item_Card.V2_Item_Card_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)
void UV2_Item_Card_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function V2_Item_Card.V2_Item_Card_C.OnMouseEnter");

	UV2_Item_Card_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function V2_Item_Card.V2_Item_Card_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent           MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)
void UV2_Item_Card_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function V2_Item_Card.V2_Item_Card_C.OnMouseLeave");

	UV2_Item_Card_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function V2_Item_Card.V2_Item_Card_C.ExecuteUbergraph_V2_Item_Card
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UV2_Item_Card_C::ExecuteUbergraph_V2_Item_Card(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function V2_Item_Card.V2_Item_Card_C.ExecuteUbergraph_V2_Item_Card");

	UV2_Item_Card_C_ExecuteUbergraph_V2_Item_Card_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
