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

// Function B_Prj_Banner.B_Prj_Banner_C.OnRep_TeamMemberInfo
struct AB_Prj_Banner_C_OnRep_TeamMemberInfo_Params
{
};

// Function B_Prj_Banner.B_Prj_Banner_C.OnRep_bHasShockwave
struct AB_Prj_Banner_C_OnRep_bHasShockwave_Params
{
};

// Function B_Prj_Banner.B_Prj_Banner_C.UserConstructionScript
struct AB_Prj_Banner_C_UserConstructionScript_Params
{
};

// Function B_Prj_Banner.B_Prj_Banner_C.FlashShield
struct AB_Prj_Banner_C_FlashShield_Params
{
};

// Function B_Prj_Banner.B_Prj_Banner_C.OnStop
struct AB_Prj_Banner_C_OnStop_Params
{
	struct FHitResult                                  Hit;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function B_Prj_Banner.B_Prj_Banner_C.ReceiveBeginPlay
struct AB_Prj_Banner_C_ReceiveBeginPlay_Params
{
};

// Function B_Prj_Banner.B_Prj_Banner_C.ReceiveEndPlay
struct AB_Prj_Banner_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function B_Prj_Banner.B_Prj_Banner_C.ReceiveHit
struct AB_Prj_Banner_C_ReceiveHit_Params
{
	class UPrimitiveComponent*                         MyComp;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AActor*                                      Other;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UPrimitiveComponent*                         OtherComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bSelfMoved;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     HitLocation;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     HitNormal;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     NormalImpulse;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  Hit;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function B_Prj_Banner.B_Prj_Banner_C.Pass_Info
struct AB_Prj_Banner_C_Pass_Info_Params
{
	bool                                               Shockwave;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Radius;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                                    PlayerRotation;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function B_Prj_Banner.B_Prj_Banner_C.DestroyBanner
struct AB_Prj_Banner_C_DestroyBanner_Params
{
};

// Function B_Prj_Banner.B_Prj_Banner_C.ExecuteUbergraph_B_Prj_Banner
struct AB_Prj_Banner_C_ExecuteUbergraph_B_Prj_Banner_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
