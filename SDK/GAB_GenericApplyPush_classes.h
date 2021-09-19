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

// BlueprintGeneratedClass GAB_GenericApplyPush.GAB_GenericApplyPush_C
// 0x0010 (FullSize[0x06EC] - InheritedSize[0x06DC])
class UGAB_GenericApplyPush_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x06DC(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class UAnimMontage*                                PushedMontage;                                             // 0x06E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTag                                PushAsideTag;                                              // 0x06E4(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass GAB_GenericApplyPush.GAB_GenericApplyPush_C");
		return ptr;
	}



	void OnCancelled_569FFD0446FBE214B15C2B8019481F5F();
	void OnInterrupted_569FFD0446FBE214B15C2B8019481F5F();
	void OnComplete_569FFD0446FBE214B15C2B8019481F5F();
	void EventReceived_7764EAC14FD514E952F78BA2A0CF9ABE(const struct FGameplayEventData& Payload);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GAB_GenericApplyPush(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
