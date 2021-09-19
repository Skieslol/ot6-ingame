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

// BlueprintGeneratedClass TracerGeneric.TracerGeneric_C
// 0x0014 (FullSize[0x02B8] - InheritedSize[0x02A4])
class ATracerGeneric_C : public AFortTracerBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02A4(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              Speed_Mult;                                                // 0x02A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              Speed_Mult_StartDist;                                      // 0x02AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              Speed_Mult_EndDist;                                        // 0x02B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              MaxSpeed_Mult;                                             // 0x02B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TracerGeneric.TracerGeneric_C");
		return ptr;
	}



	void UserConstructionScript();
	void OnInitTracerDistance(float Distance);
	void ExecuteUbergraph_TracerGeneric(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
