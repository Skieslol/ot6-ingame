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

// Function BuildingLevelWidget.BuildingLevelWidget_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UBuildingLevelWidget_C::Update()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BuildingLevelWidget.BuildingLevelWidget_C.Update");

	UBuildingLevelWidget_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BuildingLevelWidget.BuildingLevelWidget_C.Set Brush Size
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<FortniteGame_EFortBrushSize> New_Size                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBuildingLevelWidget_C::Set_Brush_Size(TEnumAsByte<FortniteGame_EFortBrushSize> New_Size)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BuildingLevelWidget.BuildingLevelWidget_C.Set Brush Size");

	UBuildingLevelWidget_C_Set_Brush_Size_Params params;
	params.New_Size = New_Size;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BuildingLevelWidget.BuildingLevelWidget_C.Set Level
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            New_Level                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBuildingLevelWidget_C::Set_Level(int New_Level)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BuildingLevelWidget.BuildingLevelWidget_C.Set Level");

	UBuildingLevelWidget_C_Set_Level_Params params;
	params.New_Level = New_Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BuildingLevelWidget.BuildingLevelWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UBuildingLevelWidget_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BuildingLevelWidget.BuildingLevelWidget_C.Construct");

	UBuildingLevelWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BuildingLevelWidget.BuildingLevelWidget_C.ExecuteUbergraph_BuildingLevelWidget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBuildingLevelWidget_C::ExecuteUbergraph_BuildingLevelWidget(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BuildingLevelWidget.BuildingLevelWidget_C.ExecuteUbergraph_BuildingLevelWidget");

	UBuildingLevelWidget_C_ExecuteUbergraph_BuildingLevelWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
