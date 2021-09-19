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

// BlueprintGeneratedClass AnimNotify_PlayFeedbackLine.AnimNotify_PlayFeedbackLine_C
// 0x0011 (FullSize[0x0031] - InheritedSize[0x0020])
class UAnimNotify_PlayFeedbackLine_C : public UAnimNotify
{
public:
	struct FFortFeedbackHandle                         Event;                                                     // 0x0020(0x0010) (Edit, BlueprintVisible)
	bool                                               bAllowReplication;                                         // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass AnimNotify_PlayFeedbackLine.AnimNotify_PlayFeedbackLine_C");
		return ptr;
	}



	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
