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

// Function TheaterTooltip.TheaterTooltip_C.Get Theater Info
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UTheaterTooltip_C::Get_Theater_Info()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheaterTooltip.TheaterTooltip_C.Get Theater Info");

	UTheaterTooltip_C_Get_Theater_Info_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheaterTooltip.TheaterTooltip_C.SetPassengetInfoVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           INDEX                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTheaterTooltip_C::SetPassengetInfoVisible(bool INDEX)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheaterTooltip.TheaterTooltip_C.SetPassengetInfoVisible");

	UTheaterTooltip_C_SetPassengetInfoVisible_Params params;
	params.INDEX = INDEX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheaterTooltip.TheaterTooltip_C.Get Region Count
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UTheaterTooltip_C::Get_Region_Count()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheaterTooltip.TheaterTooltip_C.Get Region Count");

	UTheaterTooltip_C_Get_Region_Count_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheaterTooltip.TheaterTooltip_C.Get Theater Difficulty
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UTheaterTooltip_C::Get_Theater_Difficulty()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheaterTooltip.TheaterTooltip_C.Get Theater Difficulty");

	UTheaterTooltip_C_Get_Theater_Difficulty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheaterTooltip.TheaterTooltip_C.Get Theater Name
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UTheaterTooltip_C::Get_Theater_Name()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheaterTooltip.TheaterTooltip_C.Get Theater Name");

	UTheaterTooltip_C_Get_Theater_Name_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TheaterTooltip.TheaterTooltip_C.Set Visibile
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visibile                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FText                   InfoText                       (Parm)
void UTheaterTooltip_C::Set_Visibile(bool Visibile, const struct FText& InfoText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheaterTooltip.TheaterTooltip_C.Set Visibile");

	UTheaterTooltip_C_Set_Visibile_Params params;
	params.Visibile = Visibile;
	params.InfoText = InfoText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheaterTooltip.TheaterTooltip_C.Set Theater Index
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            INDEX                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTheaterTooltip_C::Set_Theater_Index(int INDEX)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheaterTooltip.TheaterTooltip_C.Set Theater Index");

	UTheaterTooltip_C_Set_Theater_Index_Params params;
	params.INDEX = INDEX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheaterTooltip.TheaterTooltip_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTheaterTooltip_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheaterTooltip.TheaterTooltip_C.Construct");

	UTheaterTooltip_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheaterTooltip.TheaterTooltip_C.HandleLocalPlayerStateChange
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo     PlayerInfo                     (ConstParm, Parm, OutParm, ReferenceParm)
void UTheaterTooltip_C::HandleLocalPlayerStateChange(const struct FFortTeamMemberInfo& PlayerInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheaterTooltip.TheaterTooltip_C.HandleLocalPlayerStateChange");

	UTheaterTooltip_C_HandleLocalPlayerStateChange_Params params;
	params.PlayerInfo = PlayerInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TheaterTooltip.TheaterTooltip_C.ExecuteUbergraph_TheaterTooltip
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTheaterTooltip_C::ExecuteUbergraph_TheaterTooltip(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheaterTooltip.TheaterTooltip_C.ExecuteUbergraph_TheaterTooltip");

	UTheaterTooltip_C_ExecuteUbergraph_TheaterTooltip_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
