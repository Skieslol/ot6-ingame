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

// BlueprintGeneratedClass AnimNotify_PlayReloadFX.AnimNotify_PlayReloadFX_C
// 0x0001 (FullSize[0x0021] - InheritedSize[0x0020])
class UAnimNotify_PlayReloadFX_C : public UAnimNotify
{
public:
	TEnumAsByte<FortniteGame_EFortReloadFXState>       ReloadStage;                                               // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass AnimNotify_PlayReloadFX.AnimNotify_PlayReloadFX_C");
		return ptr;
	}



	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
