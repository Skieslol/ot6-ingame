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

// BlueprintGeneratedClass B_Rift_Portals.B_Rift_Portals_C
// 0x004C (FullSize[0x04D4] - InheritedSize[0x0488])
class AB_Rift_Portals_C : public ABuildingRift
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0488(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class UBillboardComponent*                         Enemy_Spawn_point;                                         // 0x048C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UAudioComponent*                             Audio1;                                                    // 0x0490(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UBillboardComponent*                         Lightning_Strike_Point;                                    // 0x0494(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	float                                              Color_NewTrack_0_7DF105F847CA9F38EBFE67B5A16CE44A;         // 0x0498(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ETimelineDirection>             Color__Direction_7DF105F847CA9F38EBFE67B5A16CE44A;         // 0x049C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_8QLE[0x3];                                     // 0x049D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Color;                                                     // 0x04A0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UParticleSystemComponent*                    NewVar;                                                    // 0x04A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UParticleSystemComponent*                    Rift_Active;                                               // 0x04A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                                    NewVar0;                                                   // 0x04AC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                                    rotatorTowardTheNewChar;                                   // 0x04B8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UParticleSystemComponent*                    SpawnCloud;                                                // 0x04C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInstanceDynamic*                    Char_MId;                                                  // 0x04C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class AFortAIPawn*                                 Char;                                                      // 0x04CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInstanceDynamic*                    SwipeMaterial;                                             // 0x04D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass B_Rift_Portals.B_Rift_Portals_C");
		return ptr;
	}



	void UserConstructionScript();
	void Color__FinishedFunc();
	void Color__UpdateFunc();
	void OnPlaced();
	void OnRemoved();
	void OnSpawnAI();
	void Lightning_Impact_Event();
	void OnActivated();
	void ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_B_Rift_Portals(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
