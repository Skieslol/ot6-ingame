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

// Function VersionInfo.VersionInfo_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortBackendVersion     In_Data                        (Parm)
void UVersionInfo_C::Update(const struct FFortBackendVersion& In_Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VersionInfo.VersionInfo_C.Update");

	UVersionInfo_C_Update_Params params;
	params.In_Data = In_Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VersionInfo.VersionInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UVersionInfo_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VersionInfo.VersionInfo_C.Construct");

	UVersionInfo_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function VersionInfo.VersionInfo_C.ExecuteUbergraph_VersionInfo
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UVersionInfo_C::ExecuteUbergraph_VersionInfo(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VersionInfo.VersionInfo_C.ExecuteUbergraph_VersionInfo");

	UVersionInfo_C_ExecuteUbergraph_VersionInfo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
