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

// Function McpProfileSys.McpProfile.QueryProfile
// (Final, Net, NetReliable, NetRequest, Native, Event, Private, HasOutParms)
// Parameters:
// struct FBaseUrlContext         Context                        (Parm, OutParm, RepSkip, NativeAccessSpecifierPublic)
void UMcpProfile::QueryProfile(struct FBaseUrlContext* Context)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function McpProfileSys.McpProfile.QueryProfile");

	UMcpProfile_QueryProfile_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;

}


// Function McpProfileSys.McpProfile.DeleteProfile
// (Final, Net, NetReliable, NetRequest, Native, Event, Private, HasOutParms)
// Parameters:
// struct FClientUrlContext       Context                        (Parm, OutParm, RepSkip, NativeAccessSpecifierPublic)
void UMcpProfile::DeleteProfile(struct FClientUrlContext* Context)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function McpProfileSys.McpProfile.DeleteProfile");

	UMcpProfile_DeleteProfile_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;

}


// Function McpProfileSys.McpProfile.DeleteAllProfiles
// (Final, Net, NetReliable, NetRequest, Native, Event, Private, HasOutParms)
// Parameters:
// struct FClientUrlContext       Context                        (Parm, OutParm, RepSkip, NativeAccessSpecifierPublic)
void UMcpProfile::DeleteAllProfiles(struct FClientUrlContext* Context)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function McpProfileSys.McpProfile.DeleteAllProfiles");

	UMcpProfile_DeleteAllProfiles_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
