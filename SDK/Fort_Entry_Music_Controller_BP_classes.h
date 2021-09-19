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

// BlueprintGeneratedClass Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C
// 0x0034 (FullSize[0x0274] - InheritedSize[0x0240])
class AFort_Entry_Music_Controller_BP_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0240(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             MenuMusic_B;                                               // 0x0244(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UAudioComponent*                             MenuMusic_A;                                               // 0x0248(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UAudioComponent*                             Hexmap_Music;                                              // 0x024C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UAudioComponent*                             Homebase_Music;                                            // 0x0250(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UAudioComponent*                             OverView_Music;                                            // 0x0254(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UAudioComponent*                             LobbyMusic;                                                // 0x0258(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UAudioComponent*                             LlamaVO;                                                   // 0x025C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UAudioComponent*                             LoginMusic;                                                // 0x0260(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0264(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	float                                              FadeOutTime;                                               // 0x0268(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundBase*                                  Sound_Current_Music_A;                                     // 0x026C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundBase*                                  Sound_Current_Music_B;                                     // 0x0270(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C");
		return ptr;
	}



	void UserConstructionScript();
	void Music_Login_FadeIn();
	void Music_Store_FadeIn();
	void Music_Lobby_FadeIn();
	void Music_WorldOverview_FadeIn();
	void Music_HomeBase_FadeIn();
	void Music_Hexmap_FadeIn();
	void Music_Heroes_FadeIn();
	void Music_Vault_FadeIn();
	void Music_Store_CardIntro_Fadein();
	void Store_Transition_To_Purchase();
	void Store_Llama_HangingOut();
	void Store_CardpackSummaryOpenAndLoop();
	void Store_HitLlamaAndLoop();
	void Store_Intro_Loop();
	void VBucks_Menu_Enter();
	void ExecuteUbergraph_Fort_Entry_Music_Controller_BP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
