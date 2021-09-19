// Name: Fortnite, Version: OT-6_5

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.VFX_RedistributePointsAlongSpline_TOTD
// (Public, BlueprintCallable, BlueprintEvent)
void APlayerPawn_Ninja_C::VFX_RedistributePointsAlongSpline_TOTD()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.VFX_RedistributePointsAlongSpline_TOTD");

	APlayerPawn_Ninja_C_VFX_RedistributePointsAlongSpline_TOTD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.VFX_CreateMIDs_TOTD
// (Public, BlueprintCallable, BlueprintEvent)
void APlayerPawn_Ninja_C::VFX_CreateMIDs_TOTD()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.VFX_CreateMIDs_TOTD");

	APlayerPawn_Ninja_C_VFX_CreateMIDs_TOTD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.VFX_DestroySplines_TOTD
// (Public, BlueprintCallable, BlueprintEvent)
void APlayerPawn_Ninja_C::VFX_DestroySplines_TOTD()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.VFX_DestroySplines_TOTD");

	APlayerPawn_Ninja_C_VFX_DestroySplines_TOTD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.VFX_AddSplinePointAndMesh_TOTD
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void APlayerPawn_Ninja_C::VFX_AddSplinePointAndMesh_TOTD()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.VFX_AddSplinePointAndMesh_TOTD");

	APlayerPawn_Ninja_C_VFX_AddSplinePointAndMesh_TOTD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.VFX_UpdateSplinePoints_TOTD
// (Public, BlueprintCallable, BlueprintEvent)
void APlayerPawn_Ninja_C::VFX_UpdateSplinePoints_TOTD()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.VFX_UpdateSplinePoints_TOTD");

	APlayerPawn_Ninja_C_VFX_UpdateSplinePoints_TOTD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.VFX_InitializeSpline_TOTD
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void APlayerPawn_Ninja_C::VFX_InitializeSpline_TOTD()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.VFX_InitializeSpline_TOTD");

	APlayerPawn_Ninja_C_VFX_InitializeSpline_TOTD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.CreateAndAttachDuplicateEffectSkeletalMeshes
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<FortniteGame_EFortCustomPartType> BodyType                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*  DuplicatedSkeletalMeshComponent (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// class UMaterialInterface*      Material_to_Apply              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UMaterialInstanceDynamic*> Empty_MID_Array                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            TranslucentSortPriority        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APlayerPawn_Ninja_C::CreateAndAttachDuplicateEffectSkeletalMeshes(TEnumAsByte<FortniteGame_EFortCustomPartType> BodyType, class USkeletalMeshComponent** DuplicatedSkeletalMeshComponent, class UMaterialInterface* Material_to_Apply, TArray<class UMaterialInstanceDynamic*>* Empty_MID_Array, int TranslucentSortPriority)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.CreateAndAttachDuplicateEffectSkeletalMeshes");

	APlayerPawn_Ninja_C_CreateAndAttachDuplicateEffectSkeletalMeshes_Params params;
	params.BodyType = BodyType;
	params.Material_to_Apply = Material_to_Apply;
	params.TranslucentSortPriority = TranslucentSortPriority;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DuplicatedSkeletalMeshComponent != nullptr)
		*DuplicatedSkeletalMeshComponent = params.DuplicatedSkeletalMeshComponent;
	if (Empty_MID_Array != nullptr)
		*Empty_MID_Array = params.Empty_MID_Array;

}


// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void APlayerPawn_Ninja_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.UserConstructionScript");

	APlayerPawn_Ninja_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.Animate Ninja ShadowStance Dissolve__FinishedFunc
// (BlueprintEvent)
void APlayerPawn_Ninja_C::Animate_Ninja_ShadowStance_Dissolve__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.Animate Ninja ShadowStance Dissolve__FinishedFunc");

	APlayerPawn_Ninja_C_Animate_Ninja_ShadowStance_Dissolve__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.Animate Ninja ShadowStance Dissolve__UpdateFunc
// (BlueprintEvent)
void APlayerPawn_Ninja_C::Animate_Ninja_ShadowStance_Dissolve__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.Animate Ninja ShadowStance Dissolve__UpdateFunc");

	APlayerPawn_Ninja_C_Animate_Ninja_ShadowStance_Dissolve__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.FadeRibbonTOTD__FinishedFunc
// (BlueprintEvent)
void APlayerPawn_Ninja_C::FadeRibbonTOTD__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.FadeRibbonTOTD__FinishedFunc");

	APlayerPawn_Ninja_C_FadeRibbonTOTD__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.FadeRibbonTOTD__UpdateFunc
// (BlueprintEvent)
void APlayerPawn_Ninja_C::FadeRibbonTOTD__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.FadeRibbonTOTD__UpdateFunc");

	APlayerPawn_Ninja_C_FadeRibbonTOTD__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.GameplayCue.Ninja.SmokeBomb.ImpactFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayCueParameters  Parameters                     (Parm)
void APlayerPawn_Ninja_C::GameplayCue_Ninja_SmokeBomb_ImpactFX(TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.GameplayCue.Ninja.SmokeBomb.ImpactFX");

	APlayerPawn_Ninja_C_GameplayCue_Ninja_SmokeBomb_ImpactFX_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.OnLanded
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
void APlayerPawn_Ninja_C::OnLanded(const struct FHitResult& Hit)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.OnLanded");

	APlayerPawn_Ninja_C_OnLanded_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.GameplayCue.Abilities.Activation.Ninja.ShadowStance
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayCueParameters  Parameters                     (Parm)
void APlayerPawn_Ninja_C::GameplayCue_Abilities_Activation_Ninja_ShadowStance(TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.GameplayCue.Abilities.Activation.Ninja.ShadowStance");

	APlayerPawn_Ninja_C_GameplayCue_Abilities_Activation_Ninja_ShadowStance_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.GameplayCue.Ninja.Assassination.ActiveFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayCueParameters  Parameters                     (Parm)
void APlayerPawn_Ninja_C::GameplayCue_Ninja_Assassination_ActiveFX(TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.GameplayCue.Ninja.Assassination.ActiveFX");

	APlayerPawn_Ninja_C_GameplayCue_Ninja_Assassination_ActiveFX_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.GameplayCue.Ninja.DimMak.ActiveFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayCueParameters  Parameters                     (Parm)
void APlayerPawn_Ninja_C::GameplayCue_Ninja_DimMak_ActiveFX(TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.GameplayCue.Ninja.DimMak.ActiveFX");

	APlayerPawn_Ninja_C_GameplayCue_Ninja_DimMak_ActiveFX_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.GameplayCue.Ninja.MantisLeap.ActivationFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayCueParameters  Parameters                     (Parm)
void APlayerPawn_Ninja_C::GameplayCue_Ninja_MantisLeap_ActivationFX(TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.GameplayCue.Ninja.MantisLeap.ActivationFX");

	APlayerPawn_Ninja_C_GameplayCue_Ninja_MantisLeap_ActivationFX_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.OnWeaponEquipped
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortWeapon*             NewWeapon                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortWeapon*             PrevWeapon                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APlayerPawn_Ninja_C::OnWeaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.OnWeaponEquipped");

	APlayerPawn_Ninja_C_OnWeaponEquipped_Params params;
	params.NewWeapon = NewWeapon;
	params.PrevWeapon = PrevWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.UpdateWeaponShadowStance
// (BlueprintCallable, BlueprintEvent)
void APlayerPawn_Ninja_C::UpdateWeaponShadowStance()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.UpdateWeaponShadowStance");

	APlayerPawn_Ninja_C_UpdateWeaponShadowStance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.DragonSlashActivatedOrDeactivated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active_                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APlayerPawn_Ninja_C::DragonSlashActivatedOrDeactivated(bool Active_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.DragonSlashActivatedOrDeactivated");

	APlayerPawn_Ninja_C_DragonSlashActivatedOrDeactivated_Params params;
	params.Active_ = Active_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void APlayerPawn_Ninja_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.ReceiveBeginPlay");

	APlayerPawn_Ninja_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.Toggle Shadow Stance
// (BlueprintCallable, BlueprintEvent)
void APlayerPawn_Ninja_C::Toggle_Shadow_Stance()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.Toggle Shadow Stance");

	APlayerPawn_Ninja_C_Toggle_Shadow_Stance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.OnCharacterPartsReinitialized
// (Event, Protected, BlueprintEvent)
void APlayerPawn_Ninja_C::OnCharacterPartsReinitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.OnCharacterPartsReinitialized");

	APlayerPawn_Ninja_C_OnCharacterPartsReinitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayCueParameters  Parameters                     (Parm)
void APlayerPawn_Ninja_C::GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1(TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier1");

	APlayerPawn_Ninja_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayCueParameters  Parameters                     (Parm)
void APlayerPawn_Ninja_C::GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2(TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier2");

	APlayerPawn_Ninja_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.TailOfDragonStart
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AoeCloudTimeToLive             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APlayerPawn_Ninja_C::TailOfDragonStart(float AoeCloudTimeToLive)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.TailOfDragonStart");

	APlayerPawn_Ninja_C_TailOfDragonStart_Params params;
	params.AoeCloudTimeToLive = AoeCloudTimeToLive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.TailOfDragonEnd
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void APlayerPawn_Ninja_C::TailOfDragonEnd()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.TailOfDragonEnd");

	APlayerPawn_Ninja_C_TailOfDragonEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APlayerPawn_Ninja_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.ReceiveTick");

	APlayerPawn_Ninja_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.TOTDTimerExpired
// (BlueprintCallable, BlueprintEvent)
void APlayerPawn_Ninja_C::TOTDTimerExpired()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.TOTDTimerExpired");

	APlayerPawn_Ninja_C_TOTDTimerExpired_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.GameplayCue.Ninja.MantisLeap.MantisStrikeFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayCueParameters  Parameters                     (Parm)
void APlayerPawn_Ninja_C::GameplayCue_Ninja_MantisLeap_MantisStrikeFX(TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.GameplayCue.Ninja.MantisLeap.MantisStrikeFX");

	APlayerPawn_Ninja_C_GameplayCue_Ninja_MantisLeap_MantisStrikeFX_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.ExecuteUbergraph_PlayerPawn_Ninja
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APlayerPawn_Ninja_C::ExecuteUbergraph_PlayerPawn_Ninja(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Ninja.PlayerPawn_Ninja_C.ExecuteUbergraph_PlayerPawn_Ninja");

	APlayerPawn_Ninja_C_ExecuteUbergraph_PlayerPawn_Ninja_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
