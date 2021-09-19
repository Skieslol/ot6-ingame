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

// Function B_GoinCommandoWeapon.B_GoinCommandoWeapon_C.UserConstructionScript
struct AB_GoinCommandoWeapon_C_UserConstructionScript_Params
{
};

// Function B_GoinCommandoWeapon.B_GoinCommandoWeapon_C.OnStartCharge
struct AB_GoinCommandoWeapon_C_OnStartCharge_Params
{
};

// Function B_GoinCommandoWeapon.B_GoinCommandoWeapon_C.OnEndCharge
struct AB_GoinCommandoWeapon_C_OnEndCharge_Params
{
};

// Function B_GoinCommandoWeapon.B_GoinCommandoWeapon_C.OnPlayWeaponFireFX
struct AB_GoinCommandoWeapon_C_OnPlayWeaponFireFX_Params
{
	bool                                               bPersistentFire;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function B_GoinCommandoWeapon.B_GoinCommandoWeapon_C.OnPlayImpactFX
struct AB_GoinCommandoWeapon_C_OnPlayImpactFX_Params
{
	struct FHitResult                                  HitResult;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TEnumAsByte<Engine_EPhysicalSurface>               ImpactPhysicalSurface;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UParticleSystemComponent*                    SpawnedPSC;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function B_GoinCommandoWeapon.B_GoinCommandoWeapon_C.SetUpgradeLevel
struct AB_GoinCommandoWeapon_C_SetUpgradeLevel_Params
{
};

// Function B_GoinCommandoWeapon.B_GoinCommandoWeapon_C.ReceiveBeginPlay
struct AB_GoinCommandoWeapon_C_ReceiveBeginPlay_Params
{
};

// Function B_GoinCommandoWeapon.B_GoinCommandoWeapon_C.ExecuteUbergraph_B_GoinCommandoWeapon
struct AB_GoinCommandoWeapon_C_ExecuteUbergraph_B_GoinCommandoWeapon_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
