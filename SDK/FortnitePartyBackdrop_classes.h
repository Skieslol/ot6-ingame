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

// BlueprintGeneratedClass FortnitePartyBackdrop.FortnitePartyBackdrop_C
// 0x0014 (FullSize[0x0260] - InheritedSize[0x024C])
class AFortnitePartyBackdrop_C : public AFortLevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x024C(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              Timeline_0_Lightning_0C9F728D43ED8DB5A25AE8A40FE8D04D;     // 0x0250(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_0__Direction_0C9F728D43ED8DB5A25AE8A40FE8D04D;    // 0x0254(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_WB24[0x3];                                     // 0x0255(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_1;                                                // 0x0258(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class APointLight*                                 PointLight6_11_ExecuteUbergraph_FortnitePartyBackdrop_RefProperty; // 0x025C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass FortnitePartyBackdrop.FortnitePartyBackdrop_C");
		return ptr;
	}



	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void ExecuteUbergraph_FortnitePartyBackdrop(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
