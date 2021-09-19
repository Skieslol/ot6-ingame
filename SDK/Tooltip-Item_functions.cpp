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

// Function Tooltip-Item.Tooltip-Item_C.Build Durability
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UTooltip_Item_C::Build_Durability()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Tooltip-Item.Tooltip-Item_C.Build Durability");

	UTooltip_Item_C_Build_Durability_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Tooltip-Item.Tooltip-Item_C.Build Consumable Stats
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UTooltip_Item_C::Build_Consumable_Stats()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Tooltip-Item.Tooltip-Item_C.Build Consumable Stats");

	UTooltip_Item_C_Build_Consumable_Stats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Tooltip-Item.Tooltip-Item_C.Build Trap Stats
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UTooltip_Item_C::Build_Trap_Stats()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Tooltip-Item.Tooltip-Item_C.Build Trap Stats");

	UTooltip_Item_C_Build_Trap_Stats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Tooltip-Item.Tooltip-Item_C.Build Alteration Info
// (Public, BlueprintCallable, BlueprintEvent)
void UTooltip_Item_C::Build_Alteration_Info()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Tooltip-Item.Tooltip-Item_C.Build Alteration Info");

	UTooltip_Item_C_Build_Alteration_Info_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Tooltip-Item.Tooltip-Item_C.Build Worker Stats
// (Public, BlueprintCallable, BlueprintEvent)
void UTooltip_Item_C::Build_Worker_Stats()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Tooltip-Item.Tooltip-Item_C.Build Worker Stats");

	UTooltip_Item_C_Build_Worker_Stats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Tooltip-Item.Tooltip-Item_C.Build Weapon DPS Stat
// (Public, BlueprintCallable, BlueprintEvent)
void UTooltip_Item_C::Build_Weapon_DPS_Stat()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Tooltip-Item.Tooltip-Item_C.Build Weapon DPS Stat");

	UTooltip_Item_C_Build_Weapon_DPS_Stat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Tooltip-Item.Tooltip-Item_C.Get Scaled Stat (float)
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Base_Stat                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          Scaling                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            Level                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          Scaled_Stat                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTooltip_Item_C::Get_Scaled_Stat__float_(float Base_Stat, float Scaling, int Level, float* Scaled_Stat)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Tooltip-Item.Tooltip-Item_C.Get Scaled Stat (float)");

	UTooltip_Item_C_Get_Scaled_Stat__float__Params params;
	params.Base_Stat = Base_Stat;
	params.Scaling = Scaling;
	params.Level = Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Scaled_Stat != nullptr)
		*Scaled_Stat = params.Scaled_Stat;

}


// Function Tooltip-Item.Tooltip-Item_C.Build Base Weapon Stats
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortBaseWeaponStats    Data                           (Parm)
void UTooltip_Item_C::Build_Base_Weapon_Stats(const struct FFortBaseWeaponStats& Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Tooltip-Item.Tooltip-Item_C.Build Base Weapon Stats");

	UTooltip_Item_C_Build_Base_Weapon_Stats_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Tooltip-Item.Tooltip-Item_C.Build Melee Weapon Stats
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortMeleeWeaponStats   Data                           (Parm)
void UTooltip_Item_C::Build_Melee_Weapon_Stats(const struct FFortMeleeWeaponStats& Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Tooltip-Item.Tooltip-Item_C.Build Melee Weapon Stats");

	UTooltip_Item_C_Build_Melee_Weapon_Stats_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Tooltip-Item.Tooltip-Item_C.Build Ranged Weapon Stats
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortRangedWeaponStats  Data                           (Parm)
void UTooltip_Item_C::Build_Ranged_Weapon_Stats(const struct FFortRangedWeaponStats& Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Tooltip-Item.Tooltip-Item_C.Build Ranged Weapon Stats");

	UTooltip_Item_C_Build_Ranged_Weapon_Stats_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Tooltip-Item.Tooltip-Item_C.Build Basic Info
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UTooltip_Item_C::Build_Basic_Info()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Tooltip-Item.Tooltip-Item_C.Build Basic Info");

	UTooltip_Item_C_Build_Basic_Info_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Tooltip-Item.Tooltip-Item_C.Build Weapon Stats
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UTooltip_Item_C::Build_Weapon_Stats()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Tooltip-Item.Tooltip-Item_C.Build Weapon Stats");

	UTooltip_Item_C_Build_Weapon_Stats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Tooltip-Item.Tooltip-Item_C.Set Item Data
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*               Item                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTooltip_Item_C::Set_Item_Data(class UFortItem* Item)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Tooltip-Item.Tooltip-Item_C.Set Item Data");

	UTooltip_Item_C_Set_Item_Data_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Tooltip-Item.Tooltip-Item_C.Get Tooltip Header Text Visibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<UMG_ESlateVisibility> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
TEnumAsByte<UMG_ESlateVisibility> UTooltip_Item_C::Get_Tooltip_Header_Text_Visibility()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Tooltip-Item.Tooltip-Item_C.Get Tooltip Header Text Visibility");

	UTooltip_Item_C_Get_Tooltip_Header_Text_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Tooltip-Item.Tooltip-Item_C.Get Tooltip Header Icon Visibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<UMG_ESlateVisibility> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
TEnumAsByte<UMG_ESlateVisibility> UTooltip_Item_C::Get_Tooltip_Header_Icon_Visibility()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Tooltip-Item.Tooltip-Item_C.Get Tooltip Header Icon Visibility");

	UTooltip_Item_C_Get_Tooltip_Header_Icon_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Tooltip-Item.Tooltip-Item_C.Get Tooltip Header Visibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<UMG_ESlateVisibility> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
TEnumAsByte<UMG_ESlateVisibility> UTooltip_Item_C::Get_Tooltip_Header_Visibility()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Tooltip-Item.Tooltip-Item_C.Get Tooltip Header Visibility");

	UTooltip_Item_C_Get_Tooltip_Header_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Tooltip-Item.Tooltip-Item_C.Update
// (Protected, BlueprintCallable, BlueprintEvent)
void UTooltip_Item_C::Update()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Tooltip-Item.Tooltip-Item_C.Update");

	UTooltip_Item_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Tooltip-Item.Tooltip-Item_C.Get Theme Color [Normal]
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
struct FLinearColor UTooltip_Item_C::Get_Theme_Color__Normal_()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Tooltip-Item.Tooltip-Item_C.Get Theme Color [Normal]");

	UTooltip_Item_C_Get_Theme_Color__Normal__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Tooltip-Item.Tooltip-Item_C.Get Icon Brush
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FSlateBrush UTooltip_Item_C::Get_Icon_Brush()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Tooltip-Item.Tooltip-Item_C.Get Icon Brush");

	UTooltip_Item_C_Get_Icon_Brush_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Tooltip-Item.Tooltip-Item_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTooltip_Item_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Tooltip-Item.Tooltip-Item_C.Construct");

	UTooltip_Item_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Tooltip-Item.Tooltip-Item_C.ExecuteUbergraph_Tooltip-Item
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTooltip_Item_C::ExecuteUbergraph_Tooltip_Item(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Tooltip-Item.Tooltip-Item_C.ExecuteUbergraph_Tooltip-Item");

	UTooltip_Item_C_ExecuteUbergraph_Tooltip_Item_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
