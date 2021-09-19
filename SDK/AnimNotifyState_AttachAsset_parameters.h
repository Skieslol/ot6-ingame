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

// Function AnimNotifyState_AttachAsset.AnimNotifyState_AttachAsset_C.Received_NotifyEnd
struct UAnimNotifyState_AttachAsset_C_Received_NotifyEnd_Params
{
	class USkeletalMeshComponent*                      MeshComp;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UAnimSequenceBase*                           Animation;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function AnimNotifyState_AttachAsset.AnimNotifyState_AttachAsset_C.Received_NotifyBegin
struct UAnimNotifyState_AttachAsset_C_Received_NotifyBegin_Params
{
	class USkeletalMeshComponent*                      MeshComp;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UAnimSequenceBase*                           Animation;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              TotalDuration;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
