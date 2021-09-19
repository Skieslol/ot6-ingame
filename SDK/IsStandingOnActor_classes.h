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

// BlueprintGeneratedClass IsStandingOnActor.IsStandingOnActor_C
// 0x0020 (FullSize[0x008C] - InheritedSize[0x006C])
class UIsStandingOnActor_C : public UBTDecorator_BlueprintBase
{
public:
	struct FBlackboardKeySelector                      ActorToCheck;                                              // 0x006C(0x0020) (Edit, BlueprintVisible)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass IsStandingOnActor.IsStandingOnActor_C");
		return ptr;
	}



	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
