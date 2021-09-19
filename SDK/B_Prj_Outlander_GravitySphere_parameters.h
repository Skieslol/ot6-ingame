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

// Function B_Prj_Outlander_GravitySphere.B_Prj_Outlander_GravitySphere_C.OnRep_bHasHeavyStuff
struct AB_Prj_Outlander_GravitySphere_C_OnRep_bHasHeavyStuff_Params
{
};

// Function B_Prj_Outlander_GravitySphere.B_Prj_Outlander_GravitySphere_C.SpawnRippleFX
struct AB_Prj_Outlander_GravitySphere_C_SpawnRippleFX_Params
{
	class AActor*                                      As_Fort_Pawn;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function B_Prj_Outlander_GravitySphere.B_Prj_Outlander_GravitySphere_C.UserConstructionScript
struct AB_Prj_Outlander_GravitySphere_C_UserConstructionScript_Params
{
};

// Function B_Prj_Outlander_GravitySphere.B_Prj_Outlander_GravitySphere_C.ScaleSphere__FinishedFunc
struct AB_Prj_Outlander_GravitySphere_C_ScaleSphere__FinishedFunc_Params
{
};

// Function B_Prj_Outlander_GravitySphere.B_Prj_Outlander_GravitySphere_C.ScaleSphere__UpdateFunc
struct AB_Prj_Outlander_GravitySphere_C_ScaleSphere__UpdateFunc_Params
{
};

// Function B_Prj_Outlander_GravitySphere.B_Prj_Outlander_GravitySphere_C.EnterTheSphere__FinishedFunc
struct AB_Prj_Outlander_GravitySphere_C_EnterTheSphere__FinishedFunc_Params
{
};

// Function B_Prj_Outlander_GravitySphere.B_Prj_Outlander_GravitySphere_C.EnterTheSphere__UpdateFunc
struct AB_Prj_Outlander_GravitySphere_C_EnterTheSphere__UpdateFunc_Params
{
};

// Function B_Prj_Outlander_GravitySphere.B_Prj_Outlander_GravitySphere_C.SphereEnemyReact__FinishedFunc
struct AB_Prj_Outlander_GravitySphere_C_SphereEnemyReact__FinishedFunc_Params
{
};

// Function B_Prj_Outlander_GravitySphere.B_Prj_Outlander_GravitySphere_C.SphereEnemyReact__UpdateFunc
struct AB_Prj_Outlander_GravitySphere_C_SphereEnemyReact__UpdateFunc_Params
{
};

// Function B_Prj_Outlander_GravitySphere.B_Prj_Outlander_GravitySphere_C.OnBounce
struct AB_Prj_Outlander_GravitySphere_C_OnBounce_Params
{
	struct FHitResult                                  Hit;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function B_Prj_Outlander_GravitySphere.B_Prj_Outlander_GravitySphere_C.Planted
struct AB_Prj_Outlander_GravitySphere_C_Planted_Params
{
	struct FVector                                     ImpactPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     ImpactNormal;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function B_Prj_Outlander_GravitySphere.B_Prj_Outlander_GravitySphere_C.BndEvt__ActualCollide_K2Node_ComponentBoundEvent_493_ComponentBeginOverlapSignature__DelegateSignature
struct AB_Prj_Outlander_GravitySphere_C_BndEvt__ActualCollide_K2Node_ComponentBoundEvent_493_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UPrimitiveComponent*                         OtherComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                OtherBodyIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bFromSweep;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  SweepResult;                                               // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function B_Prj_Outlander_GravitySphere.B_Prj_Outlander_GravitySphere_C.BndEvt__ActualCollide_K2Node_ComponentBoundEvent_496_ComponentEndOverlapSignature__DelegateSignature
struct AB_Prj_Outlander_GravitySphere_C_BndEvt__ActualCollide_K2Node_ComponentBoundEvent_496_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UPrimitiveComponent*                         OtherComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                OtherBodyIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function B_Prj_Outlander_GravitySphere.B_Prj_Outlander_GravitySphere_C.RewindSphere
struct AB_Prj_Outlander_GravitySphere_C_RewindSphere_Params
{
};

// Function B_Prj_Outlander_GravitySphere.B_Prj_Outlander_GravitySphere_C.RewindPP
struct AB_Prj_Outlander_GravitySphere_C_RewindPP_Params
{
};

// Function B_Prj_Outlander_GravitySphere.B_Prj_Outlander_GravitySphere_C.Loop
struct AB_Prj_Outlander_GravitySphere_C_Loop_Params
{
};

// Function B_Prj_Outlander_GravitySphere.B_Prj_Outlander_GravitySphere_C.SetHasHeavyStuff
struct AB_Prj_Outlander_GravitySphere_C_SetHasHeavyStuff_Params
{
	bool                                               bInHasHeavyStuff;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function B_Prj_Outlander_GravitySphere.B_Prj_Outlander_GravitySphere_C.OnEnterGravitySphere
struct AB_Prj_Outlander_GravitySphere_C_OnEnterGravitySphere_Params
{
	class AActor*                                      EnteringActor;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function B_Prj_Outlander_GravitySphere.B_Prj_Outlander_GravitySphere_C.OnExitGravitySphere
struct AB_Prj_Outlander_GravitySphere_C_OnExitGravitySphere_Params
{
	class AActor*                                      ExitingActor;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function B_Prj_Outlander_GravitySphere.B_Prj_Outlander_GravitySphere_C.SetHasEnemyExtraGravity
struct AB_Prj_Outlander_GravitySphere_C_SetHasEnemyExtraGravity_Params
{
	bool                                               bHasEnemyExtraGravity;                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function B_Prj_Outlander_GravitySphere.B_Prj_Outlander_GravitySphere_C.ExecuteUbergraph_B_Prj_Outlander_GravitySphere
struct AB_Prj_Outlander_GravitySphere_C_ExecuteUbergraph_B_Prj_Outlander_GravitySphere_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
