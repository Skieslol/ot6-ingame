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

// BlueprintGeneratedClass BP_PlayerControllerOutpost.BP_PlayerControllerOutpost_C
// 0x0008 (FullSize[0x0D9C] - InheritedSize[0x0D94])
class ABP_PlayerControllerOutpost_C : public AFortPlayerControllerOutpost
{
public:
	class AOutpostStructureBase*                       NewVar_1;                                                  // 0x0D94(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class AOutpostStructureBase*                       NewVar_2;                                                  // 0x0D98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlayerControllerOutpost.BP_PlayerControllerOutpost_C");
		return ptr;
	}



	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
