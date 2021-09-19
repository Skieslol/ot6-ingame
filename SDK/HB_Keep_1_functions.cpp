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

// Function HB_Keep_1.HB_Keep_0_C.GetCustomDisplayActors
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<class ABuildingActor*>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
TArray<class ABuildingActor*> AHB_Keep_0_C::GetCustomDisplayActors()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HB_Keep_1.HB_Keep_0_C.GetCustomDisplayActors");

	AHB_Keep_0_C_GetCustomDisplayActors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HB_Keep_1.HB_Keep_0_C.Set Unbuilt Components Hidden
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Hidden                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHB_Keep_0_C::Set_Unbuilt_Components_Hidden(bool Hidden)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HB_Keep_1.HB_Keep_0_C.Set Unbuilt Components Hidden");

	AHB_Keep_0_C_Set_Unbuilt_Components_Hidden_Params params;
	params.Hidden = Hidden;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HB_Keep_1.HB_Keep_0_C.Set Custom Display Hidden 
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Hidden                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHB_Keep_0_C::Set_Custom_Display_Hidden_(bool Hidden)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HB_Keep_1.HB_Keep_0_C.Set Custom Display Hidden ");

	AHB_Keep_0_C_Set_Custom_Display_Hidden__Params params;
	params.Hidden = Hidden;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HB_Keep_1.HB_Keep_0_C.IsKeepMiniatureBuilding
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABuildingSMActor*        Building                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Is_Miniature                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHB_Keep_0_C::IsKeepMiniatureBuilding(class ABuildingSMActor* Building, bool* Is_Miniature)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HB_Keep_1.HB_Keep_0_C.IsKeepMiniatureBuilding");

	AHB_Keep_0_C_IsKeepMiniatureBuilding_Params params;
	params.Building = Building;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Is_Miniature != nullptr)
		*Is_Miniature = params.Is_Miniature;

}


// Function HB_Keep_1.HB_Keep_0_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AHB_Keep_0_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HB_Keep_1.HB_Keep_0_C.UserConstructionScript");

	AHB_Keep_0_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HB_Keep_1.HB_Keep_0_C.OnMyTownBuildingCustomDisplayChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<FortniteGame_EMyTownBuildingActorDisplayState> NewDisplayState                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHB_Keep_0_C::OnMyTownBuildingCustomDisplayChanged(TEnumAsByte<FortniteGame_EMyTownBuildingActorDisplayState> NewDisplayState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HB_Keep_1.HB_Keep_0_C.OnMyTownBuildingCustomDisplayChanged");

	AHB_Keep_0_C_OnMyTownBuildingCustomDisplayChanged_Params params;
	params.NewDisplayState = NewDisplayState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HB_Keep_1.HB_Keep_0_C.ExecuteUbergraph_HB_Keep_1
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHB_Keep_0_C::ExecuteUbergraph_HB_Keep_1(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HB_Keep_1.HB_Keep_0_C.ExecuteUbergraph_HB_Keep_1");

	AHB_Keep_0_C_ExecuteUbergraph_HB_Keep_1_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
