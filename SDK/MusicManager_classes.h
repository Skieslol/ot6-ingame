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

// BlueprintGeneratedClass MusicManager.MusicManager_C
// 0x0068 (FullSize[0x02CC] - InheritedSize[0x0264])
class AMusicManager_C : public AFortMusicManager
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0264(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class USoundBase*                                  Music_Frontend;                                            // 0x0268(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class USoundBase*                                  Music_Lobby;                                               // 0x026C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class USoundBase*                                  MusicDay;                                                  // 0x0270(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class USoundBase*                                  MusicEvening;                                              // 0x0274(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class USoundBase*                                  MusicNight;                                                // 0x0278(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class USoundBase*                                  MusicMorning;                                              // 0x027C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class USoundBase*                                  StingerMorning;                                            // 0x0280(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class USoundBase*                                  StingerEvening;                                            // 0x0284(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class USoundBase*                                  StingerNight;                                              // 0x0288(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<FortniteGame_EFortDayPhase>            CurrentDayPhase;                                           // 0x028C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_0EM6[0x3];                                     // 0x028D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundBase*                                  Smasher_Music;                                             // 0x0290(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class USoundBase*                                  Smasher_Stinger;                                           // 0x0294(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class USoundBase*                                  Husk_Music;                                                // 0x0298(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class USoundBase*                                  Husk_Stinger;                                              // 0x029C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class USoundBase*                                  Husk_Low_Music;                                            // 0x02A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class USoundBase*                                  Husk_Low_Stinger;                                          // 0x02A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bIsPlayingDefaultMusic;                                    // 0x02A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bIsPlayingHuskMusic;                                       // 0x02A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bIsPlayingSmasherMusic;                                    // 0x02AA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bIsPlayingTakerMusic;                                      // 0x02AB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FName                                       CurrentGameMode;                                           // 0x02AC(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FName                                       GameMode_Lobby;                                            // 0x02B4(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FName                                       GameMode_Frontend;                                         // 0x02BC(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FName                                       GameMode_InGame;                                           // 0x02C4(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass MusicManager.MusicManager_C");
		return ptr;
	}



	void ResetMusicBools();
	void UserConstructionScript();
	void OnDayPhaseChanged(TEnumAsByte<FortniteGame_EFortDayPhase> CurrentDayPhase, TEnumAsByte<FortniteGame_EFortDayPhase> PreviousDayPhase, bool bAtCreation);
	void OnUpdateMusic();
	void PlayDefaultMusic();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_MusicManager(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
