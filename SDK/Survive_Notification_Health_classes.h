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

// BlueprintGeneratedClass Survive_Notification_Health.Survive_Notification_Health_C
// 0x0008 (FullSize[0x0424] - InheritedSize[0x041C])
class ASurvive_Notification_Health_C : public AFortClientNotification
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x041C(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0420(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Survive_Notification_Health.Survive_Notification_Health_C");
		return ptr;
	}



	void UserConstructionScript();
	void OnNotificationStart();
	void ExecuteUbergraph_Survive_Notification_Health(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
