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

// BlueprintGeneratedClass TVPostProcessBP.TVPostProcessBP_C
// 0x0128 (FullSize[0x0368] - InheritedSize[0x0240])
class ATVPostProcessBP_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0240(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class UBillboardComponent*                         Billboard;                                                 // 0x0244(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UPostProcessComponent*                       just_distorted_location_switch_post;                       // 0x0248(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UPostProcessComponent*                       Full_screen_tv_post;                                       // 0x024C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	float                                              Jitter_Timeline_use_solid_color_3FCD803A4A5E86474EA128B9EDBED56E; // 0x0250(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Jitter_Timeline_LerpImageAndScreen_3FCD803A4A5E86474EA128B9EDBED56E; // 0x0254(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Jitter_Timeline_Noise_Distortion_Amount_3FCD803A4A5E86474EA128B9EDBED56E; // 0x0258(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Jitter_Timeline_Screen_Modulation_3FCD803A4A5E86474EA128B9EDBED56E; // 0x025C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ETimelineDirection>             Jitter_Timeline__Direction_3FCD803A4A5E86474EA128B9EDBED56E; // 0x0260(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_XS2T[0x3];                                     // 0x0261(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Jitter_Timeline;                                           // 0x0264(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Timeline_0_use_solid_color_8A3EF030490EDBCB14E0EE98F27A0CEB; // 0x0268(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Timeline_0_LerpImageAndScreen_8A3EF030490EDBCB14E0EE98F27A0CEB; // 0x026C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Timeline_0_Noise_Distortion_Amount_8A3EF030490EDBCB14E0EE98F27A0CEB; // 0x0270(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Timeline_0_Screen_Modulation_8A3EF030490EDBCB14E0EE98F27A0CEB; // 0x0274(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_0__Direction_8A3EF030490EDBCB14E0EE98F27A0CEB;    // 0x0278(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_PS0V[0x3];                                     // 0x0279(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_1;                                                // 0x027C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Camera_StartTheMonitor_Text_Timeline_SolidBackgroundModulation_8B52FB0849C47C5870E31DBE0A87A563; // 0x0280(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Camera_StartTheMonitor_Text_Timeline_Additive_screen_modulation_8B52FB0849C47C5870E31DBE0A87A563; // 0x0284(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Camera_StartTheMonitor_Text_Timeline_ReplacementAlpha_8B52FB0849C47C5870E31DBE0A87A563; // 0x0288(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Camera_StartTheMonitor_Text_Timeline_Vpos_8B52FB0849C47C5870E31DBE0A87A563; // 0x028C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Camera_StartTheMonitor_Text_Timeline_Hpos_8B52FB0849C47C5870E31DBE0A87A563; // 0x0290(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Camera_StartTheMonitor_Text_Timeline_Noise_Distortion_Amount_8B52FB0849C47C5870E31DBE0A87A563; // 0x0294(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Camera_StartTheMonitor_Text_Timeline_Screen_Bend_Amount_8B52FB0849C47C5870E31DBE0A87A563; // 0x0298(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Camera_StartTheMonitor_Text_Timeline_Screen_Modulation_8B52FB0849C47C5870E31DBE0A87A563; // 0x029C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ETimelineDirection>             Camera_StartTheMonitor_Text_Timeline__Direction_8B52FB0849C47C5870E31DBE0A87A563; // 0x02A0(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_MHT6[0x3];                                     // 0x02A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Camera_StartTheMonitor_Text_Timeline;                      // 0x02A4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              FadeOut_blendweight_D40D454F4B32910AAC407D9AB580EA07;      // 0x02A8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              FadeOut_Fading_D40D454F4B32910AAC407D9AB580EA07;           // 0x02AC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              FadeOut_Effect_translucency_D40D454F4B32910AAC407D9AB580EA07; // 0x02B0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              FadeOut_Kill_effect_amount_D40D454F4B32910AAC407D9AB580EA07; // 0x02B4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ETimelineDirection>             FadeOut__Direction_D40D454F4B32910AAC407D9AB580EA07;       // 0x02B8(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_M5AY[0x3];                                     // 0x02B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          FadeOut;                                                   // 0x02BC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Switch_between_cameras_use_solid_color_E4FB35CD487A51ED1632BFAD49D21E03; // 0x02C0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Switch_between_cameras_LerpImageAndScreen_E4FB35CD487A51ED1632BFAD49D21E03; // 0x02C4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Switch_between_cameras_Noise_Distortion_Amount_E4FB35CD487A51ED1632BFAD49D21E03; // 0x02C8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Switch_between_cameras_Screen_Modulation_E4FB35CD487A51ED1632BFAD49D21E03; // 0x02CC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ETimelineDirection>             Switch_between_cameras__Direction_E4FB35CD487A51ED1632BFAD49D21E03; // 0x02D0(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_PW9W[0x3];                                     // 0x02D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Switch_between_cameras;                                    // 0x02D4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Switch_to_static_use_solid_color_010BC5074AA9D38B1E815EB7DA97273B; // 0x02D8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Switch_to_static_ShowScreenStatic_010BC5074AA9D38B1E815EB7DA97273B; // 0x02DC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Switch_to_static_Noise_Distortion_Amount_010BC5074AA9D38B1E815EB7DA97273B; // 0x02E0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Switch_to_static_Screen_Modulation_010BC5074AA9D38B1E815EB7DA97273B; // 0x02E4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ETimelineDirection>             Switch_to_static__Direction_010BC5074AA9D38B1E815EB7DA97273B; // 0x02E8(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_BNKC[0x3];                                     // 0x02E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Switch_to_static;                                          // 0x02EC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Switch_to_live_use_solid_color_DFB267304061CE3644C3E1B38972E94E; // 0x02F0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Switch_to_live_LerpImageAndScreen_DFB267304061CE3644C3E1B38972E94E; // 0x02F4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Switch_to_live_Noise_Distortion_Amount_DFB267304061CE3644C3E1B38972E94E; // 0x02F8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Switch_to_live_Screen_Modulation_DFB267304061CE3644C3E1B38972E94E; // 0x02FC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ETimelineDirection>             Switch_to_live__Direction_DFB267304061CE3644C3E1B38972E94E; // 0x0300(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_J7X7[0x3];                                     // 0x0301(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Switch_to_live;                                            // 0x0304(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Show_the_troll_HideTroll_060EDD8E4EDBC900E7D2F29D7A26DBF0; // 0x0308(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Show_the_troll_use_solid_color_060EDD8E4EDBC900E7D2F29D7A26DBF0; // 0x030C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Show_the_troll_Noise_Distortion_Amount_060EDD8E4EDBC900E7D2F29D7A26DBF0; // 0x0310(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ETimelineDirection>             Show_the_troll__Direction_060EDD8E4EDBC900E7D2F29D7A26DBF0; // 0x0314(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_KW44[0x3];                                     // 0x0315(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Show_the_troll;                                            // 0x0318(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              StartScreen_Replacement_randomization_676222D64F5268BA3215E5B98CEFBE8A; // 0x031C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              StartScreen_ReplacementAlpha_676222D64F5268BA3215E5B98CEFBE8A; // 0x0320(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              StartScreen_Vpos_676222D64F5268BA3215E5B98CEFBE8A;         // 0x0324(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              StartScreen_Hpos_676222D64F5268BA3215E5B98CEFBE8A;         // 0x0328(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              StartScreen_Noise_Distortion_Amount_676222D64F5268BA3215E5B98CEFBE8A; // 0x032C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              StartScreen_Screen_Bend_Amount_676222D64F5268BA3215E5B98CEFBE8A; // 0x0330(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              StartScreen_Screen_Modulation_676222D64F5268BA3215E5B98CEFBE8A; // 0x0334(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ETimelineDirection>             StartScreen__Direction_676222D64F5268BA3215E5B98CEFBE8A;   // 0x0338(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_IJX9[0x3];                                     // 0x0339(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          StartScreen;                                               // 0x033C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               GrabNewColorBool;                                          // 0x0340(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               increase_distortion_;                                      // 0x0341(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_H5KL[0x2];                                     // 0x0342(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              AdditionalDistortionAmount;                                // 0x0344(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Show_troll;                                                // 0x0348(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_NJ71[0x3];                                     // 0x0349(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Troll_counter;                                             // 0x034C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               NewVar;                                                    // 0x0350(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Camera_hasnt_switched_to_live_yet;                         // 0x0351(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_PGKB[0x2];                                     // 0x0352(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FluctuatingDisplaySceneValue;                              // 0x0354(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              Ideal_Display_scene_min_value;                             // 0x0358(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              Ideal_display_scene_max_value;                             // 0x035C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               SkipDos;                                                   // 0x0360(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               DisableOnStartup;                                          // 0x0361(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               NewVar_1;                                                  // 0x0362(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	unsigned char                                      UnknownData_5MHK[0x1];                                     // 0x0363(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              PreviousSceneModulation;                                   // 0x0364(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TVPostProcessBP.TVPostProcessBP_C");
		return ptr;
	}



	void RandomizeTheColor(float Use_Bluescreen, float Probablility_modulator, float Use_Flat_Blue, float MaxColorPerChannelValue, bool Control_replacement_alpha);
	void UserConstructionScript();
	void StartScreen__FinishedFunc();
	void StartScreen__UpdateFunc();
	void Switch_to_static__FinishedFunc();
	void Switch_to_static__UpdateFunc();
	void Switch_between_cameras__FinishedFunc();
	void Switch_between_cameras__UpdateFunc();
	void Switch_between_cameras__Switch_Camera_Position__EventFunc();
	void Show_the_troll__FinishedFunc();
	void Show_the_troll__UpdateFunc();
	void Switch_to_live__FinishedFunc();
	void Switch_to_live__UpdateFunc();
	void FadeOut__FinishedFunc();
	void FadeOut__UpdateFunc();
	void Camera_StartTheMonitor_Text_Timeline__FinishedFunc();
	void Camera_StartTheMonitor_Text_Timeline__UpdateFunc();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Timeline_0__Switch_Camera_Position__EventFunc();
	void Jitter_Timeline__FinishedFunc();
	void Jitter_Timeline__UpdateFunc();
	void Jitter_Timeline__Switch_Camera_Position__EventFunc();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void Camera_TransitionToLiveVideo();
	void Camera_SwitchBetweenLocations();
	void Camera_InitializePost();
	void Camera_TriggerTheTroll();
	void Camera_TransitionToLiveStatic();
	void Camera_TurnOffThePostProcess();
	void Camera_DebugEvents();
	void Camera_StartTheMonitor_Text();
	void Camera_DosTextFinished();
	void Camera_ReturningPlayerInitializeWithLiveVideo();
	void Camera_SwitchBetweenLocations_AfterPostProcessDisappears();
	void Camera_LoadAndWait();
	void Camera_Sequence_Start_StaticWhoomp();
	void WriteOutLoading();
	void SequenceFinished(const struct FString& SequenceName);
	void Camera_DisableEffects();
	void FastForwardPostProcess();
	void JitterTheScreen();
	void ExecuteUbergraph_TVPostProcessBP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
