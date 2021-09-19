#pragma once

// Name: Fortnite, Version: OT-6_5


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function McpProfileSys.McpProfile.QueryProfile
struct UMcpProfile_QueryProfile_Params
{
	struct FBaseUrlContext                             Context;                                                   // (Parm, OutParm, RepSkip, NativeAccessSpecifierPublic)
};

// Function McpProfileSys.McpProfile.DeleteProfile
struct UMcpProfile_DeleteProfile_Params
{
	struct FClientUrlContext                           Context;                                                   // (Parm, OutParm, RepSkip, NativeAccessSpecifierPublic)
};

// Function McpProfileSys.McpProfile.DeleteAllProfiles
struct UMcpProfile_DeleteAllProfiles_Params
{
	struct FClientUrlContext                           Context;                                                   // (Parm, OutParm, RepSkip, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
