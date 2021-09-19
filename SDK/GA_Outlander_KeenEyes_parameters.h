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

// Function GA_Outlander_KeenEyes.GA_Outlander_KeenEyes_C.Setup Post Fades
struct UGA_Outlander_KeenEyes_C_Setup_Post_Fades_Params
{
	bool                                               Activating__T__Or_Deactivating__F_;                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GA_Outlander_KeenEyes.GA_Outlander_KeenEyes_C.Activate Deactivate Outline Post Process
struct UGA_Outlander_KeenEyes_C_Activate_Deactivate_Outline_Post_Process_Params
{
	float                                              Outline_Weight;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GA_Outlander_KeenEyes.GA_Outlander_KeenEyes_C.Deactivate Keen Eye Particles as Objects Leave the Overlap Region
struct UGA_Outlander_KeenEyes_C_Deactivate_Keen_Eye_Particles_as_Objects_Leave_the_Overlap_Region_Params
{
	class ABuildingContainer*                          Building_Container;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AFortPawn*                                   Fort_Pawn;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Fort_Pawn_True_Building_container_False;                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GA_Outlander_KeenEyes.GA_Outlander_KeenEyes_C.Set Or Remove Keen Eyes Custom Depth
struct UGA_Outlander_KeenEyes_C_Set_Or_Remove_Keen_Eyes_Custom_Depth_Params
{
	class AFortPawn*                                   Character_Mesh;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Render_CustomDepth;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GA_Outlander_KeenEyes.GA_Outlander_KeenEyes_C.GetNearbyLoot
struct UGA_Outlander_KeenEyes_C_GetNearbyLoot_Params
{
	class AActor*                                      NewIncomingActor;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GA_Outlander_KeenEyes.GA_Outlander_KeenEyes_C.PulseKeenEyes
struct UGA_Outlander_KeenEyes_C_PulseKeenEyes_Params
{
};

// Function GA_Outlander_KeenEyes.GA_Outlander_KeenEyes_C.K2_ActivateAbilityFromEvent
struct UGA_Outlander_KeenEyes_C_K2_ActivateAbilityFromEvent_Params
{
	struct FGameplayEventData                          EventData;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GA_Outlander_KeenEyes.GA_Outlander_KeenEyes_C.OverlapTreasure
struct UGA_Outlander_KeenEyes_C_OverlapTreasure_Params
{
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UPrimitiveComponent*                         OtherComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                OtherBodyIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bFromSweep;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  SweepResult;                                               // (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function GA_Outlander_KeenEyes.GA_Outlander_KeenEyes_C.EndOverlap
struct UGA_Outlander_KeenEyes_C_EndOverlap_Params
{
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UPrimitiveComponent*                         OtherComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                OtherBodyIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GA_Outlander_KeenEyes.GA_Outlander_KeenEyes_C.K2_OnEndAbility
struct UGA_Outlander_KeenEyes_C_K2_OnEndAbility_Params
{
};

// Function GA_Outlander_KeenEyes.GA_Outlander_KeenEyes_C.TestTurnOffKeenEyes
struct UGA_Outlander_KeenEyes_C_TestTurnOffKeenEyes_Params
{
};

// Function GA_Outlander_KeenEyes.GA_Outlander_KeenEyes_C.ExecuteUbergraph_GA_Outlander_KeenEyes
struct UGA_Outlander_KeenEyes_C_ExecuteUbergraph_GA_Outlander_KeenEyes_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
