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

// BlueprintGeneratedClass WM_PinManager.WM_PinManager_C
// 0x0008 (FullSize[0x025C] - InheritedSize[0x0254])
class AWM_PinManager_C : public AWorldMapPinManager
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0254(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0258(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass WM_PinManager.WM_PinManager_C");
		return ptr;
	}



	class AWorldMapPin* CreateWorldMapPin(int TheaterIndex);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_WM_PinManager(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
