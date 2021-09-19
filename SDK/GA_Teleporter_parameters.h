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

// Function GA_Teleporter.GA_Teleporter_C.GetSecondTeleporterSpawnLoc
struct UGA_Teleporter_C_GetSecondTeleporterSpawnLoc_Params
{
	class AActor*                                      FirstTeleporter;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FTransform                                  SpawnTransform;                                            // (Parm, OutParm, IsPlainOldData, NoDestructor)
};

// Function GA_Teleporter.GA_Teleporter_C.InitPortalAndSpawnTargetTeleporter
struct UGA_Teleporter_C_InitPortalAndSpawnTargetTeleporter_Params
{
	class AB_Teleporter_C*                             NewTeleporter;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GA_Teleporter.GA_Teleporter_C.DestroyExistingPortalsForPlayer
struct UGA_Teleporter_C_DestroyExistingPortalsForPlayer_Params
{
	class AController*                                 Controller;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GA_Teleporter.GA_Teleporter_C.K2_ActivateAbility
struct UGA_Teleporter_C_K2_ActivateAbility_Params
{
};

// Function GA_Teleporter.GA_Teleporter_C.ExecuteUbergraph_GA_Teleporter
struct UGA_Teleporter_C_ExecuteUbergraph_GA_Teleporter_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
