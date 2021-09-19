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

// Function B_Prj_Constructor_MiniPulse.B_Prj_Constructor_MiniPulse_C.UserConstructionScript
struct AB_Prj_Constructor_MiniPulse_C_UserConstructionScript_Params
{
};

// Function B_Prj_Constructor_MiniPulse.B_Prj_Constructor_MiniPulse_C.ReceiveBeginPlay
struct AB_Prj_Constructor_MiniPulse_C_ReceiveBeginPlay_Params
{
};

// Function B_Prj_Constructor_MiniPulse.B_Prj_Constructor_MiniPulse_C.OnBounce
struct AB_Prj_Constructor_MiniPulse_C_OnBounce_Params
{
	struct FHitResult                                  Hit;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function B_Prj_Constructor_MiniPulse.B_Prj_Constructor_MiniPulse_C.OnExploded
struct AB_Prj_Constructor_MiniPulse_C_OnExploded_Params
{
	TArray<class AActor*>                              HitActors;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FHitResult>                          HitResults;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
};

// Function B_Prj_Constructor_MiniPulse.B_Prj_Constructor_MiniPulse_C.ExecuteUbergraph_B_Prj_Constructor_MiniPulse
struct AB_Prj_Constructor_MiniPulse_C_ExecuteUbergraph_B_Prj_Constructor_MiniPulse_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
