﻿// Name: Fortnite, Version: OT-6_5

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

// Function PlayerPawn_Generic.PlayerPawn_Generic_C.Melee_Effect_Color
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Melee_Color_Set                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APlayerPawn_Generic_C::Melee_Effect_Color(struct FVector* Melee_Color_Set)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.Melee_Effect_Color");

	APlayerPawn_Generic_C_Melee_Effect_Color_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Melee_Color_Set != nullptr)
		*Melee_Color_Set = params.Melee_Color_Set;

}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.Setup FX Mesh Duplicates
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInterface*      Material_to_Apply              (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// TArray<class UMaterialInstanceDynamic*> Charm_MID_Array                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// class USkeletalMeshComponent*  Charm_Mesh                     (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// TArray<class UMaterialInstanceDynamic*> Head_MID_Array                 (Parm, OutParm, ZeroConstructor, ReferenceParm)
// class USkeletalMeshComponent*  Head_Mesh                      (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// TArray<class UMaterialInstanceDynamic*> Body_MID_Array                 (Parm, OutParm, ZeroConstructor, ReferenceParm)
// class USkeletalMeshComponent*  Body_Mesh                      (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// int                            Translucent_Sort_Order         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APlayerPawn_Generic_C::Setup_FX_Mesh_Duplicates(class UMaterialInterface** Material_to_Apply, TArray<class UMaterialInstanceDynamic*>* Charm_MID_Array, class USkeletalMeshComponent** Charm_Mesh, TArray<class UMaterialInstanceDynamic*>* Head_MID_Array, class USkeletalMeshComponent** Head_Mesh, TArray<class UMaterialInstanceDynamic*>* Body_MID_Array, class USkeletalMeshComponent** Body_Mesh, int Translucent_Sort_Order)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.Setup FX Mesh Duplicates");

	APlayerPawn_Generic_C_Setup_FX_Mesh_Duplicates_Params params;
	params.Translucent_Sort_Order = Translucent_Sort_Order;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Material_to_Apply != nullptr)
		*Material_to_Apply = params.Material_to_Apply;
	if (Charm_MID_Array != nullptr)
		*Charm_MID_Array = params.Charm_MID_Array;
	if (Charm_Mesh != nullptr)
		*Charm_Mesh = params.Charm_Mesh;
	if (Head_MID_Array != nullptr)
		*Head_MID_Array = params.Head_MID_Array;
	if (Head_Mesh != nullptr)
		*Head_Mesh = params.Head_Mesh;
	if (Body_MID_Array != nullptr)
		*Body_MID_Array = params.Body_MID_Array;
	if (Body_Mesh != nullptr)
		*Body_Mesh = params.Body_Mesh;

}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.Create and Duplicate Effect Poseable Skeletal Mesh
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<FortniteGame_EFortCustomPartType> BodyType                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInterface*      Material_to_Apply              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UMaterialInstanceDynamic*> Empty_MID_Array                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            TranslucentSortPriority        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPoseableMeshComponent*  PoseableMesh                   (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
void APlayerPawn_Generic_C::Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh(TEnumAsByte<FortniteGame_EFortCustomPartType> BodyType, class UMaterialInterface* Material_to_Apply, TArray<class UMaterialInstanceDynamic*>* Empty_MID_Array, int TranslucentSortPriority, class UPoseableMeshComponent** PoseableMesh)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.Create and Duplicate Effect Poseable Skeletal Mesh");

	APlayerPawn_Generic_C_Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh_Params params;
	params.BodyType = BodyType;
	params.Material_to_Apply = Material_to_Apply;
	params.TranslucentSortPriority = TranslucentSortPriority;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Empty_MID_Array != nullptr)
		*Empty_MID_Array = params.Empty_MID_Array;
	if (PoseableMesh != nullptr)
		*PoseableMesh = params.PoseableMesh;

}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.ToggleShieldVisibility
// (Public, BlueprintCallable, BlueprintEvent)
void APlayerPawn_Generic_C::ToggleShieldVisibility()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.ToggleShieldVisibility");

	APlayerPawn_Generic_C_ToggleShieldVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.SlaveAMeshToTheBody
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  Mesh                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*  Master                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APlayerPawn_Generic_C::SlaveAMeshToTheBody(class USkeletalMeshComponent* Mesh, class USkeletalMeshComponent* Master)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.SlaveAMeshToTheBody");

	APlayerPawn_Generic_C_SlaveAMeshToTheBody_Params params;
	params.Mesh = Mesh;
	params.Master = Master;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.SetShieldMids_InternalLoop
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Highlight_Cracks               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Set_Highlight_Cracks           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          Push                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Set_Push                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UMaterialInstanceDynamic*> NewParam1                      (Parm, OutParm, ZeroConstructor, ReferenceParm)
void APlayerPawn_Generic_C::SetShieldMids_InternalLoop(float Highlight_Cracks, bool Set_Highlight_Cracks, float Push, bool Set_Push, TArray<class UMaterialInstanceDynamic*>* NewParam1)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.SetShieldMids_InternalLoop");

	APlayerPawn_Generic_C_SetShieldMids_InternalLoop_Params params;
	params.Highlight_Cracks = Highlight_Cracks;
	params.Set_Highlight_Cracks = Set_Highlight_Cracks;
	params.Push = Push;
	params.Set_Push = Set_Push;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NewParam1 != nullptr)
		*NewParam1 = params.NewParam1;

}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.SetShieldMids
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Highlight_Cracks               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Set_Highlight_Cracks           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          Push                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Set_Push                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APlayerPawn_Generic_C::SetShieldMids(float Highlight_Cracks, bool Set_Highlight_Cracks, float Push, bool Set_Push)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.SetShieldMids");

	APlayerPawn_Generic_C_SetShieldMids_Params params;
	params.Highlight_Cracks = Highlight_Cracks;
	params.Set_Highlight_Cracks = Set_Highlight_Cracks;
	params.Push = Push;
	params.Set_Push = Set_Push;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.FindShieldOpacity
// (Public, BlueprintCallable, BlueprintEvent)
void APlayerPawn_Generic_C::FindShieldOpacity()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.FindShieldOpacity");

	APlayerPawn_Generic_C_FindShieldOpacity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.Create and Duplicate Effect Skeletal Meshes Parent
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<FortniteGame_EFortCustomPartType> BodyType                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*  DuplicatedSkeletalMeshComponent (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// class UMaterialInterface*      Material_to_Apply              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UMaterialInstanceDynamic*> Empty_MID_Array                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            TranslucentSortPriority        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APlayerPawn_Generic_C::Create_and_Duplicate_Effect_Skeletal_Meshes_Parent(TEnumAsByte<FortniteGame_EFortCustomPartType> BodyType, class USkeletalMeshComponent** DuplicatedSkeletalMeshComponent, class UMaterialInterface* Material_to_Apply, TArray<class UMaterialInstanceDynamic*>* Empty_MID_Array, int TranslucentSortPriority)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.Create and Duplicate Effect Skeletal Meshes Parent");

	APlayerPawn_Generic_C_Create_and_Duplicate_Effect_Skeletal_Meshes_Parent_Params params;
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


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void APlayerPawn_Generic_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.UserConstructionScript");

	APlayerPawn_Generic_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.HealthSweep__FinishedFunc
// (BlueprintEvent)
void APlayerPawn_Generic_C::HealthSweep__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.HealthSweep__FinishedFunc");

	APlayerPawn_Generic_C_HealthSweep__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.HealthSweep__UpdateFunc
// (BlueprintEvent)
void APlayerPawn_Generic_C::HealthSweep__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.HealthSweep__UpdateFunc");

	APlayerPawn_Generic_C_HealthSweep__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.Shield Regen Timeline__FinishedFunc
// (BlueprintEvent)
void APlayerPawn_Generic_C::Shield_Regen_Timeline__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.Shield Regen Timeline__FinishedFunc");

	APlayerPawn_Generic_C_Shield_Regen_Timeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.Shield Regen Timeline__UpdateFunc
// (BlueprintEvent)
void APlayerPawn_Generic_C::Shield_Regen_Timeline__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.Shield Regen Timeline__UpdateFunc");

	APlayerPawn_Generic_C_Shield_Regen_Timeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.Shield_ShatterTimeline__FinishedFunc
// (BlueprintEvent)
void APlayerPawn_Generic_C::Shield_ShatterTimeline__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.Shield_ShatterTimeline__FinishedFunc");

	APlayerPawn_Generic_C_Shield_ShatterTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.Shield_ShatterTimeline__UpdateFunc
// (BlueprintEvent)
void APlayerPawn_Generic_C::Shield_ShatterTimeline__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.Shield_ShatterTimeline__UpdateFunc");

	APlayerPawn_Generic_C_Shield_ShatterTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.Shield_DamageTimeline__FinishedFunc
// (BlueprintEvent)
void APlayerPawn_Generic_C::Shield_DamageTimeline__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.Shield_DamageTimeline__FinishedFunc");

	APlayerPawn_Generic_C_Shield_DamageTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.Shield_DamageTimeline__UpdateFunc
// (BlueprintEvent)
void APlayerPawn_Generic_C::Shield_DamageTimeline__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.Shield_DamageTimeline__UpdateFunc");

	APlayerPawn_Generic_C_Shield_DamageTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.Full Shield Health__FinishedFunc
// (BlueprintEvent)
void APlayerPawn_Generic_C::Full_Shield_Health__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.Full Shield Health__FinishedFunc");

	APlayerPawn_Generic_C_Full_Shield_Health__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.Full Shield Health__UpdateFunc
// (BlueprintEvent)
void APlayerPawn_Generic_C::Full_Shield_Health__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.Full Shield Health__UpdateFunc");

	APlayerPawn_Generic_C_Full_Shield_Health__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.MeleeSwingRight
// (BlueprintCallable, BlueprintEvent)
void APlayerPawn_Generic_C::MeleeSwingRight()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.MeleeSwingRight");

	APlayerPawn_Generic_C_MeleeSwingRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.MeleeSwingLeft
// (BlueprintCallable, BlueprintEvent)
void APlayerPawn_Generic_C::MeleeSwingLeft()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.MeleeSwingLeft");

	APlayerPawn_Generic_C_MeleeSwingLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnDamagePlayEffects
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTagContainer   DamageTags                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                 Momentum                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult              HitInfo                        (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class AFortPawn*               InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayEffectContextHandle EffectContext                  (Parm)
void APlayerPawn_Generic_C::OnDamagePlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnDamagePlayEffects");

	APlayerPawn_Generic_C_OnDamagePlayEffects_Params params;
	params.Damage = Damage;
	params.DamageTags = DamageTags;
	params.Momentum = Momentum;
	params.HitInfo = HitInfo;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.EffectContext = EffectContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnLanded
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
void APlayerPawn_Generic_C::OnLanded(const struct FHitResult& Hit)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnLanded");

	APlayerPawn_Generic_C_OnLanded_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.Distance
// (BlueprintCallable, BlueprintEvent)
void APlayerPawn_Generic_C::Distance()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.Distance");

	APlayerPawn_Generic_C_Distance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnDeathPlayEffects
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTagContainer   DamageTags                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                 Momentum                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult              HitInfo                        (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class AFortPawn*               InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayEffectContextHandle EffectContext                  (Parm)
void APlayerPawn_Generic_C::OnDeathPlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnDeathPlayEffects");

	APlayerPawn_Generic_C_OnDeathPlayEffects_Params params;
	params.Damage = Damage;
	params.DamageTags = DamageTags;
	params.Momentum = Momentum;
	params.HitInfo = HitInfo;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.EffectContext = EffectContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnWeaponEquipped
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortWeapon*             NewWeapon                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortWeapon*             PrevWeapon                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APlayerPawn_Generic_C::OnWeaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnWeaponEquipped");

	APlayerPawn_Generic_C_OnWeaponEquipped_Params params;
	params.NewWeapon = NewWeapon;
	params.PrevWeapon = PrevWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APlayerPawn_Generic_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.ReceiveTick");

	APlayerPawn_Generic_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.FootStepLeft
// (Public, BlueprintCallable, BlueprintEvent)
void APlayerPawn_Generic_C::FootStepLeft()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.FootStepLeft");

	APlayerPawn_Generic_C_FootStepLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.FootStepRight
// (Public, BlueprintCallable, BlueprintEvent)
void APlayerPawn_Generic_C::FootStepRight()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.FootStepRight");

	APlayerPawn_Generic_C_FootStepRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnCharacterPartsReinitialized
// (Event, Protected, BlueprintEvent)
void APlayerPawn_Generic_C::OnCharacterPartsReinitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnCharacterPartsReinitialized");

	APlayerPawn_Generic_C_OnCharacterPartsReinitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayCueParameters  Parameters                     (Parm)
void APlayerPawn_Generic_C::GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1(TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier1");

	APlayerPawn_Generic_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayCueParameters  Parameters                     (Parm)
void APlayerPawn_Generic_C::GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2(TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier2");

	APlayerPawn_Generic_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.SetFirstPersonCamera
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bNewUseFirstPersonCamera       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APlayerPawn_Generic_C::SetFirstPersonCamera(bool bNewUseFirstPersonCamera)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.SetFirstPersonCamera");

	APlayerPawn_Generic_C_SetFirstPersonCamera_Params params;
	params.bNewUseFirstPersonCamera = bNewUseFirstPersonCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.GameplayCue.GravitySphere
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayCueParameters  Parameters                     (Parm)
void APlayerPawn_Generic_C::GameplayCue_GravitySphere(TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.GameplayCue.GravitySphere");

	APlayerPawn_Generic_C_GameplayCue_GravitySphere_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.Ninja Dust FX
// (BlueprintCallable, BlueprintEvent)
void APlayerPawn_Generic_C::Ninja_Dust_FX()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.Ninja Dust FX");

	APlayerPawn_Generic_C_Ninja_Dust_FX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.InternalSetFirstPersonCamera
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewUseFirstPersonCamera        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APlayerPawn_Generic_C::InternalSetFirstPersonCamera(bool NewUseFirstPersonCamera)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.InternalSetFirstPersonCamera");

	APlayerPawn_Generic_C_InternalSetFirstPersonCamera_Params params;
	params.NewUseFirstPersonCamera = NewUseFirstPersonCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnLand_CE
// (BlueprintCallable, BlueprintEvent)
void APlayerPawn_Generic_C::OnLand_CE()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnLand_CE");

	APlayerPawn_Generic_C_OnLand_CE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.Test Adrenaline Rush
// (BlueprintCallable, BlueprintEvent)
void APlayerPawn_Generic_C::Test_Adrenaline_Rush()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.Test Adrenaline Rush");

	APlayerPawn_Generic_C_Test_Adrenaline_Rush_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.GameplayCue.Generic.AdrenalineRush.PeriodicHeal
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayCueParameters  Parameters                     (Parm)
void APlayerPawn_Generic_C::GameplayCue_Generic_AdrenalineRush_PeriodicHeal(TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.GameplayCue.Generic.AdrenalineRush.PeriodicHeal");

	APlayerPawn_Generic_C_GameplayCue_Generic_AdrenalineRush_PeriodicHeal_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.GameplayCue.Generic.AdrenalineRush.DirectHeal
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayCueParameters  Parameters                     (Parm)
void APlayerPawn_Generic_C::GameplayCue_Generic_AdrenalineRush_DirectHeal(TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.GameplayCue.Generic.AdrenalineRush.DirectHeal");

	APlayerPawn_Generic_C_GameplayCue_Generic_AdrenalineRush_DirectHeal_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.GameplayCue.Damage.Shielded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayCueParameters  Parameters                     (Parm)
void APlayerPawn_Generic_C::GameplayCue_Damage_Shielded(TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.GameplayCue.Damage.Shielded");

	APlayerPawn_Generic_C_GameplayCue_Damage_Shielded_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.GameplayCue.Shield.Destroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayCueParameters  Parameters                     (Parm)
void APlayerPawn_Generic_C::GameplayCue_Shield_Destroyed(TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.GameplayCue.Shield.Destroyed");

	APlayerPawn_Generic_C_GameplayCue_Shield_Destroyed_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.GameplayCue.Shield.FullyCharged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayCueParameters  Parameters                     (Parm)
void APlayerPawn_Generic_C::GameplayCue_Shield_FullyCharged(TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.GameplayCue.Shield.FullyCharged");

	APlayerPawn_Generic_C_GameplayCue_Shield_FullyCharged_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.GameplayCue.Shield.Reapplied
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayCueParameters  Parameters                     (Parm)
void APlayerPawn_Generic_C::GameplayCue_Shield_Reapplied(TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.GameplayCue.Shield.Reapplied");

	APlayerPawn_Generic_C_GameplayCue_Shield_Reapplied_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerPawn_Generic.PlayerPawn_Generic_C.ExecuteUbergraph_PlayerPawn_Generic
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APlayerPawn_Generic_C::ExecuteUbergraph_PlayerPawn_Generic(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerPawn_Generic.PlayerPawn_Generic_C.ExecuteUbergraph_PlayerPawn_Generic");

	APlayerPawn_Generic_C_ExecuteUbergraph_PlayerPawn_Generic_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
