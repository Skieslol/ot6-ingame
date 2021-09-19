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

// Function BuildingTooltip.BuildingTooltip_C.SetupTooltip
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 InBuildingTemplateId           (Parm, ZeroConstructor)
void UBuildingTooltip_C::SetupTooltip(const struct FString& InBuildingTemplateId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BuildingTooltip.BuildingTooltip_C.SetupTooltip");

	UBuildingTooltip_C_SetupTooltip_Params params;
	params.InBuildingTemplateId = InBuildingTemplateId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BuildingTooltip.BuildingTooltip_C.GetGadget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UHomeBaseBuilding*       Building                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItemDefinition*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
class UFortItemDefinition* UBuildingTooltip_C::GetGadget(class UHomeBaseBuilding* Building)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BuildingTooltip.BuildingTooltip_C.GetGadget");

	UBuildingTooltip_C_GetGadget_Params params;
	params.Building = Building;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BuildingTooltip.BuildingTooltip_C.Set Visible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           In_Visible                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBuildingTooltip_C::Set_Visible(bool In_Visible)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BuildingTooltip.BuildingTooltip_C.Set Visible");

	UBuildingTooltip_C_Set_Visible_Params params;
	params.In_Visible = In_Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BuildingTooltip.BuildingTooltip_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UBuildingTooltip_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BuildingTooltip.BuildingTooltip_C.Construct");

	UBuildingTooltip_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BuildingTooltip.BuildingTooltip_C.ExecuteUbergraph_BuildingTooltip
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBuildingTooltip_C::ExecuteUbergraph_BuildingTooltip(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BuildingTooltip.BuildingTooltip_C.ExecuteUbergraph_BuildingTooltip");

	UBuildingTooltip_C_ExecuteUbergraph_BuildingTooltip_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
