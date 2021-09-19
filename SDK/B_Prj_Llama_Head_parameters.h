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

// Function B_Prj_Llama_Head.B_Prj_Llama_Head_C.SpawnBounceFX
struct AB_Prj_Llama_Head_C_SpawnBounceFX_Params
{
	struct FHitResult                                  Hit;                                                       // (Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	struct FHitResult                                  HitResult;                                                 // (Parm, OutParm, ContainsInstancedReference)
	TEnumAsByte<Engine_EPhysicalSurface>               SurfaceType;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                                    HitResultRotation;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function B_Prj_Llama_Head.B_Prj_Llama_Head_C.UserConstructionScript
struct AB_Prj_Llama_Head_C_UserConstructionScript_Params
{
};

// Function B_Prj_Llama_Head.B_Prj_Llama_Head_C.OnBounce
struct AB_Prj_Llama_Head_C_OnBounce_Params
{
	struct FHitResult                                  Hit;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function B_Prj_Llama_Head.B_Prj_Llama_Head_C.ReceiveTick
struct AB_Prj_Llama_Head_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function B_Prj_Llama_Head.B_Prj_Llama_Head_C.OnProjectileStop_Event_1
struct AB_Prj_Llama_Head_C_OnProjectileStop_Event_1_Params
{
	struct FHitResult                                  ImpactResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function B_Prj_Llama_Head.B_Prj_Llama_Head_C.ReceiveBeginPlay
struct AB_Prj_Llama_Head_C_ReceiveBeginPlay_Params
{
};

// Function B_Prj_Llama_Head.B_Prj_Llama_Head_C.ExecuteUbergraph_B_Prj_Llama_Head
struct AB_Prj_Llama_Head_C_ExecuteUbergraph_B_Prj_Llama_Head_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
