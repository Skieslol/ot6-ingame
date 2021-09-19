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

// Function BP_Hex_PARENT.BP_Hex_PARENT_C.GetBaseTextureForType
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          TypeId                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*              BaseTexture                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Hex_PARENT_C::GetBaseTextureForType(float TypeId, class UTexture2D** BaseTexture)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.GetBaseTextureForType");

	ABP_Hex_PARENT_C_GetBaseTextureForType_Params params;
	params.TypeId = TypeId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BaseTexture != nullptr)
		*BaseTexture = params.BaseTexture;

}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.GroundSliceSettings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic* SourceMaterial                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*              TileTypeA                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*              TileTypeB                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          TileIsSameRegionA              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          TileIsSameRegionB              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          TileIsHiddenA                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          TileIsHiddenB                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          TileExistsA                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          TileExistsB                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Hex_PARENT_C::GroundSliceSettings(class UMaterialInstanceDynamic* SourceMaterial, class UTexture2D* TileTypeA, class UTexture2D* TileTypeB, float TileIsSameRegionA, float TileIsSameRegionB, float TileIsHiddenA, float TileIsHiddenB, float TileExistsA, float TileExistsB)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.GroundSliceSettings");

	ABP_Hex_PARENT_C_GroundSliceSettings_Params params;
	params.SourceMaterial = SourceMaterial;
	params.TileTypeA = TileTypeA;
	params.TileTypeB = TileTypeB;
	params.TileIsSameRegionA = TileIsSameRegionA;
	params.TileIsSameRegionB = TileIsSameRegionB;
	params.TileIsHiddenA = TileIsHiddenA;
	params.TileIsHiddenB = TileIsHiddenB;
	params.TileExistsA = TileExistsA;
	params.TileExistsB = TileExistsB;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.SetDirectionalTextures
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic* SourceMaterial                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTextRenderComponent*    DebugTextDirection             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FName                   TileExistsParamName            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*              TileExistsTexture              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Hex_PARENT_C::SetDirectionalTextures(class UMaterialInstanceDynamic* SourceMaterial, class UTextRenderComponent* DebugTextDirection, const struct FName& TileExistsParamName, class UTexture2D** TileExistsTexture)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.SetDirectionalTextures");

	ABP_Hex_PARENT_C_SetDirectionalTextures_Params params;
	params.SourceMaterial = SourceMaterial;
	params.DebugTextDirection = DebugTextDirection;
	params.TileExistsParamName = TileExistsParamName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TileExistsTexture != nullptr)
		*TileExistsTexture = params.TileExistsTexture;

}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_Hex_PARENT_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.UserConstructionScript");

	ABP_Hex_PARENT_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
void ABP_Hex_PARENT_C::Timeline_0__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.Timeline_0__FinishedFunc");

	ABP_Hex_PARENT_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
void ABP_Hex_PARENT_C::Timeline_0__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.Timeline_0__UpdateFunc");

	ABP_Hex_PARENT_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.Timeline_1__FinishedFunc
// (BlueprintEvent)
void ABP_Hex_PARENT_C::Timeline_1__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.Timeline_1__FinishedFunc");

	ABP_Hex_PARENT_C_Timeline_1__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.Timeline_1__UpdateFunc
// (BlueprintEvent)
void ABP_Hex_PARENT_C::Timeline_1__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.Timeline_1__UpdateFunc");

	ABP_Hex_PARENT_C_Timeline_1__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.Timeline_2__FinishedFunc
// (BlueprintEvent)
void ABP_Hex_PARENT_C::Timeline_2__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.Timeline_2__FinishedFunc");

	ABP_Hex_PARENT_C_Timeline_2__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.Timeline_2__UpdateFunc
// (BlueprintEvent)
void ABP_Hex_PARENT_C::Timeline_2__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.Timeline_2__UpdateFunc");

	ABP_Hex_PARENT_C_Timeline_2__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.Timeline_3__FinishedFunc
// (BlueprintEvent)
void ABP_Hex_PARENT_C::Timeline_3__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.Timeline_3__FinishedFunc");

	ABP_Hex_PARENT_C_Timeline_3__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.Timeline_3__UpdateFunc
// (BlueprintEvent)
void ABP_Hex_PARENT_C::Timeline_3__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.Timeline_3__UpdateFunc");

	ABP_Hex_PARENT_C_Timeline_3__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.Timeline_4__FinishedFunc
// (BlueprintEvent)
void ABP_Hex_PARENT_C::Timeline_4__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.Timeline_4__FinishedFunc");

	ABP_Hex_PARENT_C_Timeline_4__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.Timeline_4__UpdateFunc
// (BlueprintEvent)
void ABP_Hex_PARENT_C::Timeline_4__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.Timeline_4__UpdateFunc");

	ABP_Hex_PARENT_C_Timeline_4__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.Timeline_5__FinishedFunc
// (BlueprintEvent)
void ABP_Hex_PARENT_C::Timeline_5__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.Timeline_5__FinishedFunc");

	ABP_Hex_PARENT_C_Timeline_5__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.Timeline_5__UpdateFunc
// (BlueprintEvent)
void ABP_Hex_PARENT_C::Timeline_5__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.Timeline_5__UpdateFunc");

	ABP_Hex_PARENT_C_Timeline_5__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.Timeline_6__FinishedFunc
// (BlueprintEvent)
void ABP_Hex_PARENT_C::Timeline_6__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.Timeline_6__FinishedFunc");

	ABP_Hex_PARENT_C_Timeline_6__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.Timeline_6__UpdateFunc
// (BlueprintEvent)
void ABP_Hex_PARENT_C::Timeline_6__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.Timeline_6__UpdateFunc");

	ABP_Hex_PARENT_C_Timeline_6__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.Timeline_7__FinishedFunc
// (BlueprintEvent)
void ABP_Hex_PARENT_C::Timeline_7__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.Timeline_7__FinishedFunc");

	ABP_Hex_PARENT_C_Timeline_7__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.Timeline_7__UpdateFunc
// (BlueprintEvent)
void ABP_Hex_PARENT_C::Timeline_7__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.Timeline_7__UpdateFunc");

	ABP_Hex_PARENT_C_Timeline_7__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.Timeline_8__FinishedFunc
// (BlueprintEvent)
void ABP_Hex_PARENT_C::Timeline_8__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.Timeline_8__FinishedFunc");

	ABP_Hex_PARENT_C_Timeline_8__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.Timeline_8__UpdateFunc
// (BlueprintEvent)
void ABP_Hex_PARENT_C::Timeline_8__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.Timeline_8__UpdateFunc");

	ABP_Hex_PARENT_C_Timeline_8__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.Timeline_9__FinishedFunc
// (BlueprintEvent)
void ABP_Hex_PARENT_C::Timeline_9__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.Timeline_9__FinishedFunc");

	ABP_Hex_PARENT_C_Timeline_9__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.Timeline_9__UpdateFunc
// (BlueprintEvent)
void ABP_Hex_PARENT_C::Timeline_9__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.Timeline_9__UpdateFunc");

	ABP_Hex_PARENT_C_Timeline_9__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.Timeline_10__FinishedFunc
// (BlueprintEvent)
void ABP_Hex_PARENT_C::Timeline_10__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.Timeline_10__FinishedFunc");

	ABP_Hex_PARENT_C_Timeline_10__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.Timeline_10__UpdateFunc
// (BlueprintEvent)
void ABP_Hex_PARENT_C::Timeline_10__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.Timeline_10__UpdateFunc");

	ABP_Hex_PARENT_C_Timeline_10__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.Timeline_11__FinishedFunc
// (BlueprintEvent)
void ABP_Hex_PARENT_C::Timeline_11__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.Timeline_11__FinishedFunc");

	ABP_Hex_PARENT_C_Timeline_11__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.Timeline_11__UpdateFunc
// (BlueprintEvent)
void ABP_Hex_PARENT_C::Timeline_11__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.Timeline_11__UpdateFunc");

	ABP_Hex_PARENT_C_Timeline_11__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.Timeline_12__FinishedFunc
// (BlueprintEvent)
void ABP_Hex_PARENT_C::Timeline_12__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.Timeline_12__FinishedFunc");

	ABP_Hex_PARENT_C_Timeline_12__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.Timeline_12__UpdateFunc
// (BlueprintEvent)
void ABP_Hex_PARENT_C::Timeline_12__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.Timeline_12__UpdateFunc");

	ABP_Hex_PARENT_C_Timeline_12__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnClientSelect
// (Event, Public, BlueprintEvent)
void ABP_Hex_PARENT_C::OnClientSelect()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnClientSelect");

	ABP_Hex_PARENT_C_OnClientSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnClientDeselect
// (Event, Public, BlueprintEvent)
void ABP_Hex_PARENT_C::OnClientDeselect()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnClientDeselect");

	ABP_Hex_PARENT_C_OnClientDeselect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnHostSelect
// (Event, Public, BlueprintEvent)
void ABP_Hex_PARENT_C::OnHostSelect()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnHostSelect");

	ABP_Hex_PARENT_C_OnHostSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnHostDeselect
// (Event, Public, BlueprintEvent)
void ABP_Hex_PARENT_C::OnHostDeselect()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnHostDeselect");

	ABP_Hex_PARENT_C_OnHostDeselect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnFocus
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void ABP_Hex_PARENT_C::OnFocus()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnFocus");

	ABP_Hex_PARENT_C_OnFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnDefocus
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void ABP_Hex_PARENT_C::OnDefocus()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnDefocus");

	ABP_Hex_PARENT_C_OnDefocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnParticleSpawnLight
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   EventName                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          EmitterTime                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 Velocity                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Hex_PARENT_C::OnParticleSpawnLight(const struct FName& EventName, float EmitterTime, const struct FVector& Location, const struct FVector& Velocity)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnParticleSpawnLight");

	ABP_Hex_PARENT_C_OnParticleSpawnLight_Params params;
	params.EventName = EventName;
	params.EmitterTime = EmitterTime;
	params.Location = Location;
	params.Velocity = Velocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnParticleDieBolt
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   EventName                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          EmitterTime                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            ParticleTime                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 Velocity                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 Direction                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Hex_PARENT_C::OnParticleDieBolt(const struct FName& EventName, float EmitterTime, int ParticleTime, const struct FVector& Location, const struct FVector& Velocity, const struct FVector& Direction)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnParticleDieBolt");

	ABP_Hex_PARENT_C_OnParticleDieBolt_Params params;
	params.EventName = EventName;
	params.EmitterTime = EmitterTime;
	params.ParticleTime = ParticleTime;
	params.Location = Location;
	params.Velocity = Velocity;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnParticleDieBolt2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   EventName                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          EmitterTime                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            ParticleTime                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 Velocity                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 Direction                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Hex_PARENT_C::OnParticleDieBolt2(const struct FName& EventName, float EmitterTime, int ParticleTime, const struct FVector& Location, const struct FVector& Velocity, const struct FVector& Direction)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnParticleDieBolt2");

	ABP_Hex_PARENT_C_OnParticleDieBolt2_Params params;
	params.EventName = EventName;
	params.EmitterTime = EmitterTime;
	params.ParticleTime = ParticleTime;
	params.Location = Location;
	params.Velocity = Velocity;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnParticleSpawnLight_01
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   EventName                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          EmitterTime                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 Velocity                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Hex_PARENT_C::OnParticleSpawnLight_01(const struct FName& EventName, float EmitterTime, const struct FVector& Location, const struct FVector& Velocity)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnParticleSpawnLight_01");

	ABP_Hex_PARENT_C_OnParticleSpawnLight_01_Params params;
	params.EventName = EventName;
	params.EmitterTime = EmitterTime;
	params.Location = Location;
	params.Velocity = Velocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnParticleDieBolt_01
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   EventName                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          EmitterTime                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            ParticleTime                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 Velocity                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 Direction                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Hex_PARENT_C::OnParticleDieBolt_01(const struct FName& EventName, float EmitterTime, int ParticleTime, const struct FVector& Location, const struct FVector& Velocity, const struct FVector& Direction)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnParticleDieBolt_01");

	ABP_Hex_PARENT_C_OnParticleDieBolt_01_Params params;
	params.EventName = EventName;
	params.EmitterTime = EmitterTime;
	params.ParticleTime = ParticleTime;
	params.Location = Location;
	params.Velocity = Velocity;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnMissionDataUpdated
// (Event, Public, BlueprintEvent)
void ABP_Hex_PARENT_C::OnMissionDataUpdated()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnMissionDataUpdated");

	ABP_Hex_PARENT_C_OnMissionDataUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.PlayPing
// (BlueprintCallable, BlueprintEvent)
void ABP_Hex_PARENT_C::PlayPing()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.PlayPing");

	ABP_Hex_PARENT_C_PlayPing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.ForceDefocus
// (BlueprintCallable, BlueprintEvent)
void ABP_Hex_PARENT_C::ForceDefocus()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.ForceDefocus");

	ABP_Hex_PARENT_C_ForceDefocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.CheckFocus
// (BlueprintCallable, BlueprintEvent)
void ABP_Hex_PARENT_C::CheckFocus()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.CheckFocus");

	ABP_Hex_PARENT_C_CheckFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.InitializeTheater
// (BlueprintCallable, BlueprintEvent)
void ABP_Hex_PARENT_C::InitializeTheater()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.InitializeTheater");

	ABP_Hex_PARENT_C_InitializeTheater_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.FireLightningA
// (BlueprintCallable, BlueprintEvent)
void ABP_Hex_PARENT_C::FireLightningA()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.FireLightningA");

	ABP_Hex_PARENT_C_FireLightningA_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.DeactivateTheater
// (BlueprintCallable, BlueprintEvent)
void ABP_Hex_PARENT_C::DeactivateTheater()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.DeactivateTheater");

	ABP_Hex_PARENT_C_DeactivateTheater_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.HandleTeamPowerChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            TeamPower                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            PersonalPower                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Hex_PARENT_C::HandleTeamPowerChanged(int TeamPower, int PersonalPower)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.HandleTeamPowerChanged");

	ABP_Hex_PARENT_C_HandleTeamPowerChanged_Params params;
	params.TeamPower = TeamPower;
	params.PersonalPower = PersonalPower;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnInitializeTile
// (Event, Public, BlueprintEvent)
void ABP_Hex_PARENT_C::OnInitializeTile()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.OnInitializeTile");

	ABP_Hex_PARENT_C_OnInitializeTile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Hex_PARENT.BP_Hex_PARENT_C.ExecuteUbergraph_BP_Hex_PARENT
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Hex_PARENT_C::ExecuteUbergraph_BP_Hex_PARENT(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Hex_PARENT.BP_Hex_PARENT_C.ExecuteUbergraph_BP_Hex_PARENT");

	ABP_Hex_PARENT_C_ExecuteUbergraph_BP_Hex_PARENT_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
