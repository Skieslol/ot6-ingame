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

// Function V2_ItemCardFront.V2_ItemCardFront_C.Get_CardOverlay_ToolTipWidget_2
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
class UWidget* UV2_ItemCardFront_C::Get_CardOverlay_ToolTipWidget_2()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function V2_ItemCardFront.V2_ItemCardFront_C.Get_CardOverlay_ToolTipWidget_2");

	UV2_ItemCardFront_C_Get_CardOverlay_ToolTipWidget_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function V2_ItemCardFront.V2_ItemCardFront_C.Draw_Card
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UV2_ItemCardFront_C::Draw_Card()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function V2_ItemCardFront.V2_ItemCardFront_C.Draw_Card");

	UV2_ItemCardFront_C_Draw_Card_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function V2_ItemCardFront.V2_ItemCardFront_C.Initialize_Card
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCard                   inCard                         (Parm)
void UV2_ItemCardFront_C::Initialize_Card(const struct FCard& inCard)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function V2_ItemCardFront.V2_ItemCardFront_C.Initialize_Card");

	UV2_ItemCardFront_C_Initialize_Card_Params params;
	params.inCard = inCard;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function V2_ItemCardFront.V2_ItemCardFront_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UV2_ItemCardFront_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function V2_ItemCardFront.V2_ItemCardFront_C.Construct");

	UV2_ItemCardFront_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function V2_ItemCardFront.V2_ItemCardFront_C.OnFortStoreStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<FortniteUI_EFortStoreState> NewStoreState                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UV2_ItemCardFront_C::OnFortStoreStateChanged(TEnumAsByte<FortniteUI_EFortStoreState> NewStoreState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function V2_ItemCardFront.V2_ItemCardFront_C.OnFortStoreStateChanged");

	UV2_ItemCardFront_C_OnFortStoreStateChanged_Params params;
	params.NewStoreState = NewStoreState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function V2_ItemCardFront.V2_ItemCardFront_C.ExecuteUbergraph_V2_ItemCardFront
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UV2_ItemCardFront_C::ExecuteUbergraph_V2_ItemCardFront(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function V2_ItemCardFront.V2_ItemCardFront_C.ExecuteUbergraph_V2_ItemCardFront");

	UV2_ItemCardFront_C_ExecuteUbergraph_V2_ItemCardFront_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
