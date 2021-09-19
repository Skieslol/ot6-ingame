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

// Function AnimNotifyState_AttachAsset.AnimNotifyState_AttachAsset_C.Received_NotifyEnd
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*  MeshComp                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimSequenceBase*       Animation                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UAnimNotifyState_AttachAsset_C::Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AnimNotifyState_AttachAsset.AnimNotifyState_AttachAsset_C.Received_NotifyEnd");

	UAnimNotifyState_AttachAsset_C_Received_NotifyEnd_Params params;
	params.MeshComp = MeshComp;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AnimNotifyState_AttachAsset.AnimNotifyState_AttachAsset_C.Received_NotifyBegin
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*  MeshComp                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimSequenceBase*       Animation                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          TotalDuration                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UAnimNotifyState_AttachAsset_C::Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AnimNotifyState_AttachAsset.AnimNotifyState_AttachAsset_C.Received_NotifyBegin");

	UAnimNotifyState_AttachAsset_C_Received_NotifyBegin_Params params;
	params.MeshComp = MeshComp;
	params.Animation = Animation;
	params.TotalDuration = TotalDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
