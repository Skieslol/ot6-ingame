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

// BlueprintGeneratedClass HuntingGeneratorLocationContext.HuntingGeneratorLocationContext_C
// 0x0001 (FullSize[0x0021] - InheritedSize[0x0020])
class UHuntingGeneratorLocationContext_C : public UEnvQueryContext_BlueprintBase
{
public:
	bool                                               Debug;                                                     // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass HuntingGeneratorLocationContext.HuntingGeneratorLocationContext_C");
		return ptr;
	}



	void ProvideSingleLocation(class UObject* QuerierObject, class AActor* QuerierActor, struct FVector* ResultingLocation);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
