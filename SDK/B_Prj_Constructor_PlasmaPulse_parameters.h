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

// Function B_Prj_Constructor_PlasmaPulse.B_Prj_Constructor_PlasmaPulse_C.OnRep_Explode
struct AB_Prj_Constructor_PlasmaPulse_C_OnRep_Explode_Params
{
};

// Function B_Prj_Constructor_PlasmaPulse.B_Prj_Constructor_PlasmaPulse_C.UserConstructionScript
struct AB_Prj_Constructor_PlasmaPulse_C_UserConstructionScript_Params
{
};

// Function B_Prj_Constructor_PlasmaPulse.B_Prj_Constructor_PlasmaPulse_C.FlashShield
struct AB_Prj_Constructor_PlasmaPulse_C_FlashShield_Params
{
};

// Function B_Prj_Constructor_PlasmaPulse.B_Prj_Constructor_PlasmaPulse_C.OnStop
struct AB_Prj_Constructor_PlasmaPulse_C_OnStop_Params
{
	struct FHitResult                                  Hit;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function B_Prj_Constructor_PlasmaPulse.B_Prj_Constructor_PlasmaPulse_C.ReceiveBeginPlay
struct AB_Prj_Constructor_PlasmaPulse_C_ReceiveBeginPlay_Params
{
};

// Function B_Prj_Constructor_PlasmaPulse.B_Prj_Constructor_PlasmaPulse_C.ReceiveEndPlay
struct AB_Prj_Constructor_PlasmaPulse_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function B_Prj_Constructor_PlasmaPulse.B_Prj_Constructor_PlasmaPulse_C.OnBounce
struct AB_Prj_Constructor_PlasmaPulse_C_OnBounce_Params
{
	struct FHitResult                                  Hit;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function B_Prj_Constructor_PlasmaPulse.B_Prj_Constructor_PlasmaPulse_C.AttachedObj_Died
struct AB_Prj_Constructor_PlasmaPulse_C_AttachedObj_Died_Params
{
	class AActor*                                      DamagedActor;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Damage;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AController*                                 InstigatedBy;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AActor*                                      DamageCauser;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     HitLocation;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UPrimitiveComponent*                         FHitComponent;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FName                                       BoneName;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Momentum;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function B_Prj_Constructor_PlasmaPulse.B_Prj_Constructor_PlasmaPulse_C.BaseDestroyed
struct AB_Prj_Constructor_PlasmaPulse_C_BaseDestroyed_Params
{
};

// Function B_Prj_Constructor_PlasmaPulse.B_Prj_Constructor_PlasmaPulse_C.ExecuteUbergraph_B_Prj_Constructor_PlasmaPulse
struct AB_Prj_Constructor_PlasmaPulse_C_ExecuteUbergraph_B_Prj_Constructor_PlasmaPulse_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
