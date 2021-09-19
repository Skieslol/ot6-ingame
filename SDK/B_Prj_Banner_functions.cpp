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

// Function B_Prj_Banner.B_Prj_Banner_C.OnRep_TeamMemberInfo
// (BlueprintCallable, BlueprintEvent)
void AB_Prj_Banner_C::OnRep_TeamMemberInfo()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Prj_Banner.B_Prj_Banner_C.OnRep_TeamMemberInfo");

	AB_Prj_Banner_C_OnRep_TeamMemberInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Prj_Banner.B_Prj_Banner_C.OnRep_bHasShockwave
// (BlueprintCallable, BlueprintEvent)
void AB_Prj_Banner_C::OnRep_bHasShockwave()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Prj_Banner.B_Prj_Banner_C.OnRep_bHasShockwave");

	AB_Prj_Banner_C_OnRep_bHasShockwave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Prj_Banner.B_Prj_Banner_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AB_Prj_Banner_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Prj_Banner.B_Prj_Banner_C.UserConstructionScript");

	AB_Prj_Banner_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Prj_Banner.B_Prj_Banner_C.FlashShield
// (Public, BlueprintCallable, BlueprintEvent)
void AB_Prj_Banner_C::FlashShield()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Prj_Banner.B_Prj_Banner_C.FlashShield");

	AB_Prj_Banner_C_FlashShield_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Prj_Banner.B_Prj_Banner_C.OnStop
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
void AB_Prj_Banner_C::OnStop(const struct FHitResult& Hit)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Prj_Banner.B_Prj_Banner_C.OnStop");

	AB_Prj_Banner_C_OnStop_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Prj_Banner.B_Prj_Banner_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void AB_Prj_Banner_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Prj_Banner.B_Prj_Banner_C.ReceiveBeginPlay");

	AB_Prj_Banner_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Prj_Banner.B_Prj_Banner_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_Prj_Banner_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Prj_Banner.B_Prj_Banner_C.ReceiveEndPlay");

	AB_Prj_Banner_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Prj_Banner.B_Prj_Banner_C.ReceiveHit
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     MyComp                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                  Other                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           bSelfMoved                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 HitLocation                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 HitNormal                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 NormalImpulse                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
void AB_Prj_Banner_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Prj_Banner.B_Prj_Banner_C.ReceiveHit");

	AB_Prj_Banner_C_ReceiveHit_Params params;
	params.MyComp = MyComp;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.bSelfMoved = bSelfMoved;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Prj_Banner.B_Prj_Banner_C.Pass_Info
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Shockwave                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                PlayerRotation                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_Prj_Banner_C::Pass_Info(bool Shockwave, float Radius, const struct FRotator& PlayerRotation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Prj_Banner.B_Prj_Banner_C.Pass_Info");

	AB_Prj_Banner_C_Pass_Info_Params params;
	params.Shockwave = Shockwave;
	params.Radius = Radius;
	params.PlayerRotation = PlayerRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Prj_Banner.B_Prj_Banner_C.DestroyBanner
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
void AB_Prj_Banner_C::DestroyBanner()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Prj_Banner.B_Prj_Banner_C.DestroyBanner");

	AB_Prj_Banner_C_DestroyBanner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function B_Prj_Banner.B_Prj_Banner_C.ExecuteUbergraph_B_Prj_Banner
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AB_Prj_Banner_C::ExecuteUbergraph_B_Prj_Banner(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function B_Prj_Banner.B_Prj_Banner_C.ExecuteUbergraph_B_Prj_Banner");

	AB_Prj_Banner_C_ExecuteUbergraph_B_Prj_Banner_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
