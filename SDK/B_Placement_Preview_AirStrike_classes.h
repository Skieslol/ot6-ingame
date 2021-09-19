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
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C
// 0x0148 (FullSize[0x04A4] - InheritedSize[0x035C])
class AB_Placement_Preview_AirStrike_C : public AFortDecoPreview
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x035C(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        GridDecal_Mesh;                                            // 0x0360(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UAudioComponent*                             airstrike_incoming_place_audiocomponent;                   // 0x0364(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        dashedLine;                                                // 0x0368(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        Sm_SupplyDrop_TargetRay_01;                                // 0x036C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UDecalComponent*                             GridDecal;                                                 // 0x0370(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UBoxComponent*                               Box1;                                                      // 0x0374(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	float                                              Spawn_Arrow_NewTrack_0_D8CAB91943322A93E0FF2CA94190A798;   // 0x0378(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ETimelineDirection>             Spawn_Arrow__Direction_D8CAB91943322A93E0FF2CA94190A798;   // 0x037C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_L2UK[0x3];                                     // 0x037D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Spawn_Arrow;                                               // 0x0380(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              ReticuleRestartDelay;                                      // 0x0384(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              ReticuleIntermittentDelay;                                 // 0x0388(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              BombsDelay;                                                // 0x038C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Can_212_x1_Repeat_;                                        // 0x0390(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Can_212_x2_Repeat_;                                        // 0x0391(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_Y0PW[0x2];                                     // 0x0392(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DecalRotation;                                             // 0x0394(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int                                                Dotted_Lines_Amount;                                       // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              Dotted_Lines_Spacing_in_Z;                                 // 0x039C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<class UStaticMeshComponent*>                Dotted_Lines_Spacing;                                      // 0x03A0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UMaterialInstanceDynamic*                    _3dline_MID;                                               // 0x03AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                     ArrowheadStartLocation;                                    // 0x03B0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                     ArrowheadEndLocation;                                      // 0x03BC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_BIYA[0x8];                                     // 0x03C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  Bomb_Init_Transform;                                       // 0x03D0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                     Bomb_Start_Location;                                       // 0x0400(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int                                                ForLoopCounter;                                            // 0x040C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FAirStrikesPatterns                         StrikePatternType;                                         // 0x0410(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance)
	TEnumAsByte<StrikePatternEnum_EStrikePatternEnum>  Current_Air_Strike_Pattern;                                // 0x041C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_GYUQ[0x3];                                     // 0x041D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SpacingBetweenObjects;                                     // 0x0420(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<class UParticleSystemComponent*>            Current_Particle_Array;                                    // 0x0424(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector>                             Position_Array_Cleaned_of_duplicates;                      // 0x0430(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        Duplicate_Positions;                                       // 0x043C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        Double_Entries;                                            // 0x0448(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UParticleSystem*                             One_Hit_Particle_Indicator;                                // 0x0454(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UParticleSystem*                             Two_Hit_Particle_Indicator;                                // 0x0458(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<struct FVector>                             Position_Array_With_duplicates;                            // 0x045C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                MultiGateIndex;                                            // 0x0468(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<struct FVector>                             TargetEmitterLocations;                                    // 0x046C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      TargetEmitterNewMovementStartTimes;                        // 0x0478(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UParticleSystemComponent*>            DefaultPositonParticles;                                   // 0x0484(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UParticleSystem*                             Default_Location_Template;                                 // 0x0490(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInstanceDynamic*                    Line_MID;                                                  // 0x0494(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Placement_is_Valid;                                        // 0x0498(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Placement_is_Valid_Previously;                             // 0x0499(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Valid_state_changed;                                       // 0x049A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Valid_State_Changed_Override;                              // 0x049B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Reinit_Particles;                                          // 0x049C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               NewVar_1;                                                  // 0x049D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Recreate_particles_if_valid;                               // 0x049E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_TWQT[0x1];                                     // 0x049F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Delay_Between_Particle_Spawns;                             // 0x04A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C");
		return ptr;
	}



	void Kill_Emitters_and_Start_Times();
	void UserConstructionScript();
	void Spawn_Arrow__FinishedFunc();
	void Spawn_Arrow__UpdateFunc();
	void OnBounceMotionUpdate(float VectorScale);
	void OnInitializeDecoPreview(class ABuildingActor* NewBuildingActor, class UFortDecoItemDefinition* NewDecoItemDefinition);
	void OnUpdateScale(float Scale, const struct FVector& InWorldSpacePivot);
	void OnUpdateVisuals(float DeltaSeconds, bool bSafeToPlace);
	void SetScalarParameterValueOnAllPreviewMIDs(const struct FName& ParamName, float ParamValue);
	void SetVectorParameterValueOnAllPreviewMIDs(const struct FName& ParamName, const struct FLinearColor& ParamValue);
	void SwitchType(TArray<struct FVector> Positions_With_Duplicates, TArray<struct FVector> Cleaned_Positions, TArray<int> Duplicated_Entries);
	void ReceiveBeginPlay();
	void RestartLineReticule();
	void ExecuteUbergraph_B_Placement_Preview_AirStrike(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
