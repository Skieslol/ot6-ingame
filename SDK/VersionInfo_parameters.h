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

// Function VersionInfo.VersionInfo_C.Update
struct UVersionInfo_C_Update_Params
{
	struct FFortBackendVersion                         In_Data;                                                   // (Parm)
};

// Function VersionInfo.VersionInfo_C.Construct
struct UVersionInfo_C_Construct_Params
{
};

// Function VersionInfo.VersionInfo_C.ExecuteUbergraph_VersionInfo
struct UVersionInfo_C_ExecuteUbergraph_VersionInfo_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
