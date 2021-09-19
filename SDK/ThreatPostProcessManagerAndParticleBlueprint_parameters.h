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

// Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.CalculatePlayerPositionNearBox
struct AThreatPostProcessManagerAndParticleBlueprint_C_CalculatePlayerPositionNearBox_Params
{
	struct FVector                                     BoxMin;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     BoxMax;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              VolumePlayerCoveragePercentage;                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.UserConstructionScript
struct AThreatPostProcessManagerAndParticleBlueprint_C_UserConstructionScript_Params
{
};

// Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.ReceiveTick
struct AThreatPostProcessManagerAndParticleBlueprint_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.ReceiveBeginPlay
struct AThreatPostProcessManagerAndParticleBlueprint_C_ReceiveBeginPlay_Params
{
};

// Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.OnThreatCloudsChanged
struct AThreatPostProcessManagerAndParticleBlueprint_C_OnThreatCloudsChanged_Params
{
	TArray<struct FThreatLocationInfo>                 ThreatLocationInfo;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.ExecuteUbergraph_ThreatPostProcessManagerAndParticleBlueprint
struct AThreatPostProcessManagerAndParticleBlueprint_C_ExecuteUbergraph_ThreatPostProcessManagerAndParticleBlueprint_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.NewEventDispatcher0__DelegateSignature
struct AThreatPostProcessManagerAndParticleBlueprint_C_NewEventDispatcher0__DelegateSignature_Params
{
};

// Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.NewEventDispatcher__DelegateSignature
struct AThreatPostProcessManagerAndParticleBlueprint_C_NewEventDispatcher__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
