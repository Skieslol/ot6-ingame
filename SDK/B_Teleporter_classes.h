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

// BlueprintGeneratedClass B_Teleporter.B_Teleporter_C
// 0x02E4 (FullSize[0x076C] - InheritedSize[0x0488])
class AB_Teleporter_C : public ABuildingGameplayActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0488(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class UPostProcessComponent*                       TeleportPostProcess;                                       // 0x048C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UProjectileMovementComponent*                ProjectileMovement;                                        // 0x0490(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UParticleSystemComponent*                    P_Teleporter_Explo;                                        // 0x0494(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UParticleSystemComponent*                    P_Teleporter_ReloadRingRays_01;                            // 0x0498(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UParticleSystemComponent*                    P_Teleporter_ReloadRing_01;                                // 0x049C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UAudioComponent*                             teleporter_recharge_audiocomponent;                        // 0x04A0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        DirectionalArrow;                                          // 0x04A4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        Glow;                                                      // 0x04A8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        Sm_Teleporter_LightRay_01;                                 // 0x04AC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UParticleSystemComponent*                    P_Teleporter_Teleported_01;                                // 0x04B0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UParticleSystemComponent*                    P_Teleporter_Active_01;                                    // 0x04B4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        Vortex;                                                    // 0x04B8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        PortalCollisionCylinder;                                   // 0x04BC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        BaseCollisionCylinder;                                     // 0x04C0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USkeletalMeshComponent*                      SK_Teleporter;                                             // 0x04C4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UAudioComponent*                             Generic_Object_Place_AudioComponent;                       // 0x04C8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UAudioComponent*                             Teleport_AudioComponent;                                   // 0x04CC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UAudioComponent*                             Teleporter_Active_AudioComponent;                          // 0x04D0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USceneComponent*                             Root;                                                      // 0x04D4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	float                                              PostProcessTL_Weight_313874CC47D4DBB662B568BCDD322E9F;     // 0x04D8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ETimelineDirection>             PostProcessTL__Direction_313874CC47D4DBB662B568BCDD322E9F; // 0x04DC(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_TPFY[0x3];                                     // 0x04DD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          PostProcessTL;                                             // 0x04E0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              ScaleLoadingRings_Scale_345064B24064419D4DE5E8B77DB3B3D1;  // 0x04E4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ETimelineDirection>             ScaleLoadingRings__Direction_345064B24064419D4DE5E8B77DB3B3D1; // 0x04E8(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_QYXN[0x3];                                     // 0x04E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          ScaleLoadingRings;                                         // 0x04EC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              RotateArrowTimeline_LERP_99FA82E342C18773DC608F9F875A3EF9; // 0x04F0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ETimelineDirection>             RotateArrowTimeline__Direction_99FA82E342C18773DC608F9F875A3EF9; // 0x04F4(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_9MTN[0x3];                                     // 0x04F5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          RotateArrowTimeline;                                       // 0x04F8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              LightrayFade_Fade_67FB9E7D4463CA9FF6EF76A3ABCB0711;        // 0x04FC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ETimelineDirection>             LightrayFade__Direction_67FB9E7D4463CA9FF6EF76A3ABCB0711;  // 0x0500(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_EB23[0x3];                                     // 0x0501(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          LightrayFade;                                              // 0x0504(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     GlowMaterialTransitionOut_GlowScaleUp_D9E5F98943366B98E4291E87A0E1761D; // 0x0508(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              GlowMaterialTransitionOut_Transition_D9E5F98943366B98E4291E87A0E1761D; // 0x0514(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ETimelineDirection>             GlowMaterialTransitionOut__Direction_D9E5F98943366B98E4291E87A0E1761D; // 0x0518(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_UXBL[0x3];                                     // 0x0519(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          GlowMaterialTransitionOut;                                 // 0x051C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     GlowMaterialTransitionIn_GlowScaleUp_548E265F40FFA1630EB18389B54EB18C; // 0x0520(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              GlowMaterialTransitionIn_Transition_548E265F40FFA1630EB18389B54EB18C; // 0x052C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ETimelineDirection>             GlowMaterialTransitionIn__Direction_548E265F40FFA1630EB18389B54EB18C; // 0x0530(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_KDMM[0x3];                                     // 0x0531(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          GlowMaterialTransitionIn;                                  // 0x0534(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              RingSpeedUp_LERP2_53EA52B84A17D3E71A5C89BF02051BB3;        // 0x0538(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              RingSpeedUp_LERP_53EA52B84A17D3E71A5C89BF02051BB3;         // 0x053C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ETimelineDirection>             RingSpeedUp__Direction_53EA52B84A17D3E71A5C89BF02051BB3;   // 0x0540(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_KXJD[0x3];                                     // 0x0541(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          RingSpeedUp;                                               // 0x0544(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AB_Teleporter_C*                             TargetTeleporter;                                          // 0x0548(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bTeleporting;                                              // 0x054C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_9427[0x3];                                     // 0x054D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       InteractText;                                              // 0x0550(0x0018) ELEMENT_SIZE_MISMATCH (Edit, BlueprintVisible, DisableEditOnInstance)
	class UFortDecoItemDefinition*                     PickupDecoDefinition;                                      // 0x055C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bTeleporterActive;                                         // 0x0560(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                               bRecharging;                                               // 0x0561(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	unsigned char                                      UnknownData_D3ZE[0x2];                                     // 0x0562(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RechargeTime;                                              // 0x0564(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int                                                TeleportCount;                                             // 0x0568(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	TArray<class AActor*>                              ActorsToTeleport;                                          // 0x056C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              MaxTeleportRange;                                          // 0x0578(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FText                                       TooFarAwayMessage;                                         // 0x057C(0x0018) ELEMENT_SIZE_MISMATCH (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                                     TargetTeleporterLocation;                                  // 0x0588(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInstanceDynamic*                    Teleporter_MID__0;                                         // 0x0594(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              RingChargeStartSpeed;                                      // 0x0598(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              RingChargeEndSpeed;                                        // 0x059C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInstanceDynamic*                    Teleporter_MID__1;                                         // 0x05A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInstanceDynamic*                    Glow_MID;                                                  // 0x05A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInstanceDynamic*                    Vortex_MID;                                                // 0x05A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                     GlowSizeScale;                                             // 0x05AC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bBeingCarried;                                             // 0x05B8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                               bShowGlow;                                                 // 0x05B9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_8FGR[0x2];                                     // 0x05BA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     Teleporter_Size_Placed;                                    // 0x05BC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                     Teleporter_Size_Held;                                      // 0x05C8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              DirectionalRayActivate_Delay;                              // 0x05D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInstanceDynamic*                    Lightray_MID;                                              // 0x05D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              Lightray_Light_Intensity;                                  // 0x05DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                     Lightray_Size_Length;                                      // 0x05E0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Glow_Color_Inner__Friendly_;                               // 0x05EC(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Glow_Color_Inner__Enemy_;                                  // 0x05FC(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Glow_Color_Outer__Friendly_;                               // 0x060C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Glow_Color_Outer__Enemy_;                                  // 0x061C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Vortex_Color_Inner__Friendly_;                             // 0x062C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Vortex_Color_Inner__Enemy_;                                // 0x063C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Vortex_Color_Outer__Friendly_;                             // 0x064C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Vortex_Color_Outer__Enemy_;                                // 0x065C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Vortex_Reflection__Friendly_;                              // 0x066C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Vortex_Reflection__Enemy_;                                 // 0x067C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Ray_Color_Dark__Friendly_;                                 // 0x068C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Ray_Color_Dark__Enemy_;                                    // 0x069C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Ray_Color_Bright__Friendly_;                               // 0x06AC(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Ray_Color_Bright__Enemy_;                                  // 0x06BC(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Teleporter_Light_Color__Friendly_;                         // 0x06CC(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Teleporter_Light_Color__Enemy_;                            // 0x06DC(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Teleporter_Mesh_Emissive__Friendly_;                       // 0x06EC(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Teleporter_Mesh_Emissive__Enemy_;                          // 0x06FC(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Streak_Color__Friendly_;                                   // 0x070C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Streak_Color__Enemy_;                                      // 0x071C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                                    Arrow_Rotation_New;                                        // 0x072C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                                    Arrow_Rotation_Previous;                                   // 0x0738(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              RechargeDecay;                                             // 0x0744(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                                TeleporterArrowColor;                                      // 0x0748(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	class UMaterialInstanceDynamic*                    Directional_Arrow_MID;                                     // 0x0758(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              Ring_Radius_Start;                                         // 0x075C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              Ring_Radius_End;                                           // 0x0760(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInstanceDynamic*                    LoadingRingMID;                                            // 0x0764(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              Steps;                                                     // 0x0768(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass B_Teleporter.B_Teleporter_C");
		return ptr;
	}



	void InternalSetActive(bool bActive);
	void TriggerRechargeInternal();
	void OnRep_TeleporterArrowColor();
	void OnRep_bRecharging();
	void InitializeTeleporter(float NewMaxRange, float NewRechargeDecay, const struct FLinearColor& TeleporterArrowColor);
	void SetShowGlow(bool Show);
	void UpdateGlowVisuals();
	void OnRep_bBeingCarried();
	void UpdateTargetTeleporterLocation();
	bool IsAcceptablePositionForPlacement(const struct FVector& InLocation, const struct FRotator& InRotation, class AFortDecoTool* DecoTool, bool bIsCDO, struct FText* OutFailureReason);
	void OnRep_TeleportCount();
	void TriggerRecharge();
	void RechargeComplete();
	void OnRep_bTeleporterActive();
	void IsExclusivelyActive(bool* IsActive);
	void UpdateTeleportersActive();
	void IsValidActorToTeleport(class AActor* ActorToTeleport, bool* ValidActor);
	struct FText BlueprintGetInteractionString(class AFortPawn* InteractingPawn);
	bool BlueprintCanInteract(class AFortPawn* InteractingPawn);
	void TeleportToTarget(class AActor* ActorToTeleport);
	void SetTargetTeleporter(class AB_Teleporter_C* NewTarget);
	void UserConstructionScript();
	void RingSpeedUp__FinishedFunc();
	void RingSpeedUp__UpdateFunc();
	void GlowMaterialTransitionIn__FinishedFunc();
	void GlowMaterialTransitionIn__UpdateFunc();
	void GlowMaterialTransitionOut__FinishedFunc();
	void GlowMaterialTransitionOut__UpdateFunc();
	void LightrayFade__FinishedFunc();
	void LightrayFade__UpdateFunc();
	void RotateArrowTimeline__FinishedFunc();
	void RotateArrowTimeline__UpdateFunc();
	void ScaleLoadingRings__FinishedFunc();
	void ScaleLoadingRings__UpdateFunc();
	void PostProcessTL__FinishedFunc();
	void PostProcessTL__UpdateFunc();
	void BlueprintOnInteract(class AFortPawn* InteractingPawn);
	void OnComponentBeginOverlap_Event_1(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OnDeathServer(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void ReceiveDestroyed();
	void OnActiveChanged();
	void DirectionalRayActivate();
	void DirectionalRayDeactivate();
	void UpdateArrowDirection();
	void OnRechargingChanged();
	void OnWorldReady();
	void OnDeathPlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void ClientActorsTeleported(class AActor* TeleportedActor);
	void ExecuteUbergraph_B_Teleporter(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
