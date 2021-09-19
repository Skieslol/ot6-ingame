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

// BlueprintGeneratedClass FortnitePartyBackdrop_Camera.FortnitePartyBackdrop_Camera_C
// 0x0008 (FullSize[0x0610] - InheritedSize[0x0608])
class AFortnitePartyBackdrop_Camera_C : public AFortCameraBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0608(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class UCameraComponent*                            CameraActor_1;                                             // 0x060C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass FortnitePartyBackdrop_Camera.FortnitePartyBackdrop_Camera_C");
		return ptr;
	}



	void UserConstructionScript();
	void OnActivated();
	void ExecuteUbergraph_FortnitePartyBackdrop_Camera(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
