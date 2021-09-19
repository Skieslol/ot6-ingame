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

// Function InlineHeroCoreStat.InlineHeroCoreStat_C.Get Tooltip Widget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
class UWidget* UInlineHeroCoreStat_C::Get_Tooltip_Widget()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InlineHeroCoreStat.InlineHeroCoreStat_C.Get Tooltip Widget");

	UInlineHeroCoreStat_C_Get_Tooltip_Widget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function InlineHeroCoreStat.InlineHeroCoreStat_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHeroCoreStat           Data                           (Parm)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TEnumAsByte<FortniteGame_EFortBrushSize> Brush_Size                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UInlineHeroCoreStat_C::Update(const struct FHeroCoreStat& Data, float Value, TEnumAsByte<FortniteGame_EFortBrushSize> Brush_Size)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InlineHeroCoreStat.InlineHeroCoreStat_C.Update");

	UInlineHeroCoreStat_C_Update_Params params;
	params.Data = Data;
	params.Value = Value;
	params.Brush_Size = Brush_Size;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InlineHeroCoreStat.InlineHeroCoreStat_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UInlineHeroCoreStat_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InlineHeroCoreStat.InlineHeroCoreStat_C.Construct");

	UInlineHeroCoreStat_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InlineHeroCoreStat.InlineHeroCoreStat_C.ExecuteUbergraph_InlineHeroCoreStat
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UInlineHeroCoreStat_C::ExecuteUbergraph_InlineHeroCoreStat(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InlineHeroCoreStat.InlineHeroCoreStat_C.ExecuteUbergraph_InlineHeroCoreStat");

	UInlineHeroCoreStat_C_ExecuteUbergraph_InlineHeroCoreStat_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
