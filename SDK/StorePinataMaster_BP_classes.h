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

// BlueprintGeneratedClass StorePinataMaster_BP.StorePinataMaster_BP_C
// 0x05D0 (FullSize[0x0810] - InheritedSize[0x0240])
class AStorePinataMaster_BP_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0240(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class UArrowComponent*                             NewWeaponRoot;                                             // 0x0244(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        S_Pinata_MATERIAL_TEMP1;                                   // 0x0248(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USpotLightComponent*                         SpotLightRim_Ground;                                       // 0x024C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UDirectionalLightComponent*                  DirectionalLight_Ground;                                   // 0x0250(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        CardTemp;                                                  // 0x0254(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USpotLightComponent*                         SpotLightMain_Ground;                                      // 0x0258(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USkeletalMeshComponent*                      SK_Pinata_ExplodedMeshes;                                  // 0x025C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        SK_Pinata_Head_Damage;                                     // 0x0260(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        SK_Pinata_Head_UpgradeA;                                   // 0x0264(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        SK_Pinata_Head_UpgradeB;                                   // 0x0268(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        SK_Pinata_Jaw_UpgradeB;                                    // 0x026C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        SK_Pinata_Jaw_UpgradeA;                                    // 0x0270(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        SK_Pinata_Upgrade_Necklace;                                // 0x0274(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        SK_Pinata_UpgradeHatB;                                     // 0x0278(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        SK_Pinata_Pendant_UpgradeB;                                // 0x027C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        SK_Pinata_Pendant_UpgradeA;                                // 0x0280(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        SK_Pinata_Saddlebag_BaseL;                                 // 0x0284(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        SK_Pinata_Saddlebag_Lock;                                  // 0x0288(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        SK_Pinata_Saddlebag_Guard;                                 // 0x028C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        SK_Pinata_Saddlebag_Latch;                                 // 0x0290(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        SK_Pinata_Saddlebag_Door;                                  // 0x0294(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        SK_Pinata_Saddlebag_Base;                                  // 0x0298(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        SK_Pinata_Rear_Damage;                                     // 0x029C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        SK_Pinata_Jaw;                                             // 0x02A0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        SK_Pinata_Rear;                                            // 0x02A4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        S_Pinata_EyeL;                                             // 0x02A8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        S_Pinata_EyeR;                                             // 0x02AC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        SK_Pinata_Head;                                            // 0x02B0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UParticleSystemComponent*                    P_LlamaExplode_Lvl1_01;                                    // 0x02B4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UParticleSystemComponent*                    P_LlamaHit_Lvl0_01;                                        // 0x02B8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UParticleSystemComponent*                    P_LlamaBreak_Head_Lvl0_01;                                 // 0x02BC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        SK_Pinata_Body;                                            // 0x02C0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USkeletalMeshComponent*                      SK_Pinata_Rig;                                             // 0x02C4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UAudioComponent*                             Llama_Voice;                                               // 0x02C8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UDirectionalLightComponent*                  LightShafts;                                               // 0x02CC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UParticleSystemComponent*                    P_LlamaBreak_FallingDebris_01;                             // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USpotLightComponent*                         SpotLightMain;                                             // 0x02D4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UParticleSystemComponent*                    P_LlamaUpgrade_Lvl1;                                       // 0x02D8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        CardDummyLocExit;                                          // 0x02DC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        CardDummyLocHide;                                          // 0x02E0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        CardDummyLocShow;                                          // 0x02E4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UWidgetComponent*                            CardFrontWidget;                                           // 0x02E8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        S_VindertechCardGlowMesh;                                  // 0x02EC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UParticleSystemComponent*                    P_CardReveal_Rays_01;                                      // 0x02F0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        St_VindertechCard_Rays_01;                                 // 0x02F4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        S_VindertechCard01;                                        // 0x02F8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UArrowComponent*                             CardRoot;                                                  // 0x02FC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        S_CandyCorn02;                                             // 0x0300(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        S_CandyCorn01;                                             // 0x0304(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        S_Candy_Mint13;                                            // 0x0308(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        S_Candy_Mint12;                                            // 0x030C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        S_Candy_Mint11;                                            // 0x0310(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        S_Candy_Mint10;                                            // 0x0314(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        S_Candy_Jellybean08;                                       // 0x0318(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        S_Candy_Mint09;                                            // 0x031C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        S_Candy_Jellybean07;                                       // 0x0320(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        S_Candy_Jellybean06;                                       // 0x0324(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        S_Candy_Mint08;                                            // 0x0328(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        S_Candy_Jellybean05;                                       // 0x032C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        S_Candy_Jellybean04;                                       // 0x0330(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        S_Candy_Mint07;                                            // 0x0334(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        S_Candy_Jellybean01;                                       // 0x0338(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        S_Candy_Mint05;                                            // 0x033C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        S_Candy_Mint06;                                            // 0x0340(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        S_Candy_Jellybean03;                                       // 0x0344(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        S_Candy_Jellybean02;                                       // 0x0348(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        S_Candy_Mint03;                                            // 0x034C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        S_Candy_Mint01;                                            // 0x0350(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        S_Candy_Mint04;                                            // 0x0354(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        IconPanelMeshA;                                            // 0x0358(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UParticleSystemComponent*                    P_Broomdust_01;                                            // 0x035C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USkeletalMeshComponent*                      SK_PushBroom;                                              // 0x0360(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        IconPanelMeshGroundPlaceholder;                            // 0x0364(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        GroundPlaceholderMesh;                                     // 0x0368(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USceneComponent*                             GroundRoot;                                                // 0x036C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USkyLightComponent*                          SkyLight00;                                                // 0x0370(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USpotLightComponent*                         SpotLightRim;                                              // 0x0374(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        MeleeWeaponDummyCharge;                                    // 0x0378(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        MeleeWeaponDummy2;                                         // 0x037C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USkeletalMeshComponent*                      SKMeleeWeapon;                                             // 0x0380(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        MeleeWeaponDummy;                                          // 0x0384(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        WeaponRoot;                                                // 0x0388(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USceneComponent*                             PinataSceneRoot;                                           // 0x038C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	float                                              Timeline_0_DirGround_7BEC5298479CA735A53B1CB25EC926EF;     // 0x0390(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Timeline_0_rimGround_7BEC5298479CA735A53B1CB25EC926EF;     // 0x0394(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Timeline_0_MainGround_7BEC5298479CA735A53B1CB25EC926EF;    // 0x0398(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Timeline_0_MainLight_7BEC5298479CA735A53B1CB25EC926EF;     // 0x039C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_0__Direction_7BEC5298479CA735A53B1CB25EC926EF;    // 0x03A0(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_I0JR[0x3];                                     // 0x03A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_1;                                                // 0x03A4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              TL_CardCough_NewTrack_0_DAEEB3A641472A9A78E0BB93BA6CE0E0;  // 0x03A8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ETimelineDirection>             TL_CardCough__Direction_DAEEB3A641472A9A78E0BB93BA6CE0E0;  // 0x03AC(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_52K0[0x3];                                     // 0x03AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          TL_CardCough;                                              // 0x03B0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              TL_InitialEyesDelay_LerpToOverTime_730F5A1744987A22B842BC8543CCDBC5; // 0x03B4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ETimelineDirection>             TL_InitialEyesDelay__Direction_730F5A1744987A22B842BC8543CCDBC5; // 0x03B8(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_MYKH[0x3];                                     // 0x03B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          TL_InitialEyesDelay;                                       // 0x03BC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              TL_EyesFollowMouseAgain_NewTrack_3_1BE27C46490CB7E2A3B07CA8042DE768; // 0x03C0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ETimelineDirection>             TL_EyesFollowMouseAgain__Direction_1BE27C46490CB7E2A3B07CA8042DE768; // 0x03C4(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_D8YA[0x3];                                     // 0x03C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          TL_EyesFollowMouseAgain;                                   // 0x03C8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              TL_Upgrade2_NewTrack_6_3313188D45B89EDEAD5CC8BD30ABBAC3;   // 0x03CC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              TL_Upgrade2_NewTrack_4_3313188D45B89EDEAD5CC8BD30ABBAC3;   // 0x03D0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              TL_Upgrade2_UpgradeWipe_3313188D45B89EDEAD5CC8BD30ABBAC3;  // 0x03D4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ETimelineDirection>             TL_Upgrade2__Direction_3313188D45B89EDEAD5CC8BD30ABBAC3;   // 0x03D8(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_A5SE[0x3];                                     // 0x03D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          TL_Upgrade2;                                               // 0x03DC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              TL_PushbroomAnim_LERP_5F6C90144EDBBEAF398302AB845E844F;    // 0x03E0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              TL_PushbroomAnim_ParticleScaleOut_5F6C90144EDBBEAF398302AB845E844F; // 0x03E4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              TL_PushbroomAnim_NewTrack_2_5F6C90144EDBBEAF398302AB845E844F; // 0x03E8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ETimelineDirection>             TL_PushbroomAnim__Direction_5F6C90144EDBBEAF398302AB845E844F; // 0x03EC(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_L39J[0x3];                                     // 0x03ED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          TL_PushbroomAnim;                                          // 0x03F0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              TL_UndarkenBG_NewTrack_0_C60EED984B4A5117E9941E920611D748; // 0x03F4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ETimelineDirection>             TL_UndarkenBG__Direction_C60EED984B4A5117E9941E920611D748; // 0x03F8(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_8S6S[0x3];                                     // 0x03F9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          TL_UndarkenBG;                                             // 0x03FC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              TL_RegularEyes_NewTrack_3_2259ACD0444C6333BC4BD3BF1C9EE1E5; // 0x0400(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ETimelineDirection>             TL_RegularEyes__Direction_2259ACD0444C6333BC4BD3BF1C9EE1E5; // 0x0404(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_AFEO[0x3];                                     // 0x0405(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          TL_RegularEyes;                                            // 0x0408(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              TL_ChangeLighting_DirGround_A488F4E44EB8E7A0F9886E8F7CA1BDC4; // 0x040C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              TL_ChangeLighting_rimGround_A488F4E44EB8E7A0F9886E8F7CA1BDC4; // 0x0410(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              TL_ChangeLighting_MainGround_A488F4E44EB8E7A0F9886E8F7CA1BDC4; // 0x0414(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              TL_ChangeLighting_MainLight_A488F4E44EB8E7A0F9886E8F7CA1BDC4; // 0x0418(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ETimelineDirection>             TL_ChangeLighting__Direction_A488F4E44EB8E7A0F9886E8F7CA1BDC4; // 0x041C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_VT8Y[0x3];                                     // 0x041D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          TL_ChangeLighting;                                         // 0x0420(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              TL_DarkenBG_NewTrack_0_C89B3A6D43D94BAC2627F18DC7E2A1D1;   // 0x0424(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ETimelineDirection>             TL_DarkenBG__Direction_C89B3A6D43D94BAC2627F18DC7E2A1D1;   // 0x0428(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_80ZT[0x3];                                     // 0x0429(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          TL_DarkenBG;                                               // 0x042C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              TL_WeaponCharge_TimeHeld_8CB70918473F7BE5EF5A2F827BB25ABF; // 0x0430(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              TL_WeaponCharge_NewTrack_2_8CB70918473F7BE5EF5A2F827BB25ABF; // 0x0434(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              TL_WeaponCharge_NewTrack_1_8CB70918473F7BE5EF5A2F827BB25ABF; // 0x0438(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              TL_WeaponCharge_NewTrack_0_8CB70918473F7BE5EF5A2F827BB25ABF; // 0x043C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ETimelineDirection>             TL_WeaponCharge__Direction_8CB70918473F7BE5EF5A2F827BB25ABF; // 0x0440(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_6BHJ[0x3];                                     // 0x0441(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          TL_WeaponCharge;                                           // 0x0444(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              TL_Upgrade1_NewTrack_5_DE6D0868440970D949F11B98CC0FC434;   // 0x0448(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              TL_Upgrade1_NewTrack_3_DE6D0868440970D949F11B98CC0FC434;   // 0x044C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              TL_Upgrade1_UpgradeWipe_DE6D0868440970D949F11B98CC0FC434;  // 0x0450(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ETimelineDirection>             TL_Upgrade1__Direction_DE6D0868440970D949F11B98CC0FC434;   // 0x0454(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_BIR9[0x3];                                     // 0x0455(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          TL_Upgrade1;                                               // 0x0458(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              TL_Attack_NewTrack_2_9355DE8041B051639599A9A8EA98EA0D;     // 0x045C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ETimelineDirection>             TL_Attack__Direction_9355DE8041B051639599A9A8EA98EA0D;     // 0x0460(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_97F2[0x3];                                     // 0x0461(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          TL_Attack;                                                 // 0x0464(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              TL_EquipWeapon_NewTrack_2_443114684EA745E35026E98F24AA5387; // 0x0468(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ETimelineDirection>             TL_EquipWeapon__Direction_443114684EA745E35026E98F24AA5387; // 0x046C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_5AUT[0x3];                                     // 0x046D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          TL_EquipWeapon;                                            // 0x0470(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<TAssetPtr<class USkeletalMesh>>             WeaponAsset_ID;                                            // 0x0474(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<TAssetPtr<class USoundBase>>                Weapon_Ready_Sound_Array;                                  // 0x0480(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<TAssetPtr<class USoundBase>>                Weapon_Swing_Sound_Array;                                  // 0x048C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<TAssetPtr<class USoundBase>>                Weapon_Impact_Sound_Array;                                 // 0x0498(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class USoundBase*>                          Greet_ARRAY;                                               // 0x04A4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector                                     MeleeWeaponEquipLoc;                                       // 0x04B0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              EquipWeaponDelay;                                          // 0x04BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UMaterialInstanceDynamic*                    MID_PinataTassels;                                         // 0x04C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              Current_Delta;                                             // 0x04C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                     WorldLocationForMaterial;                                  // 0x04C8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                     SKMeleeLocation;                                           // 0x04D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                                    SKMeleeRotation;                                           // 0x04E0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Stop;                                                      // 0x04EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_9ABK[0x3];                                     // 0x04ED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     MeleeWeaponDownLoc;                                        // 0x04F0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                                    MeleeWeaponEquipRot;                                       // 0x04FC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInstanceDynamic*                    MID_PinataBase;                                            // 0x0508(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UV2_Item_Card_C*                             CurrentCard;                                               // 0x050C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                     LiveCardLocBeforeExit;                                     // 0x0510(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               PackIsUpgrade1;                                            // 0x051C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               PackIsUpgrade2;                                            // 0x051D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               PackIsUpgrade0;                                            // 0x051E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               HasAttacked1X;                                             // 0x051F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               HasAttacked2X;                                             // 0x0520(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               HasAttacked3X;                                             // 0x0521(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_G9NG[0x2];                                     // 0x0522(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Random0_2;                                                 // 0x0524(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                     IconPanelMeshALoc;                                         // 0x0528(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                                    LiveCardRotBeforeExit;                                     // 0x0534(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              ChargeMeleeTime;                                           // 0x0540(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               AbleToAttack;                                              // 0x0544(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               CanFastForward;                                            // 0x0545(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               LeftMousePressed;                                          // 0x0546(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               LeftMouseReleased;                                         // 0x0547(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                                    PinataSwingStaticRot;                                      // 0x0548(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInstanceDynamic*                    MID_PinataPackType;                                        // 0x0554(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Debug_;                                                    // 0x0558(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                               DebugLevel0_;                                              // 0x0559(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                               DebugLevel1_;                                              // 0x055A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                               DebugLevel2_;                                              // 0x055B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	class UMaterialInstance*                           CardPackUpgrades;                                          // 0x055C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInstance*                           CardPackUpgradesT;                                         // 0x0560(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInstance*                           CardPackCrew;                                              // 0x0564(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInstance*                           CardPackCrewT;                                             // 0x0568(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInstance*                           CardPackJackpot;                                           // 0x056C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInstance*                           CardPackJackpotT;                                          // 0x0570(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInstance*                           CardPackMeleeWep;                                          // 0x0574(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInstance*                           CardPackMeleeWepT;                                         // 0x0578(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInstance*                           CardPackRangedWep;                                         // 0x057C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInstance*                           CardPackRangedWepT;                                        // 0x0580(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInstance*                           CardPackTraps;                                             // 0x0584(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInstance*                           CardPackTrapsT;                                            // 0x0588(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInstance*                           CardPackWeapons;                                           // 0x058C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInstance*                           CardPackWeaponsT;                                          // 0x0590(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInstance*                           CardPackMaterial;                                          // 0x0594(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInstance*                           CardPackMaterialT;                                         // 0x0598(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UTexture*                                    CardPackIconTexture;                                       // 0x059C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                                CardPackIconColor;                                         // 0x05A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInstanceDynamic*                    MID_PinataFoil;                                            // 0x05B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UParticleSystem*                             FallingDebris_Lvl_0;                                       // 0x05B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UParticleSystem*                             FallingDebris_Lvl_1;                                       // 0x05B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UParticleSystem*                             Falling_Debris_Lvl_2;                                      // 0x05BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UParticleSystem*                             Explode_Lvl_0;                                             // 0x05C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UParticleSystem*                             Explode_Lvl_1;                                             // 0x05C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UParticleSystem*                             Explode_Lvl_2;                                             // 0x05C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UParticleSystem*                             Llama_Hit_Lvl_0;                                           // 0x05CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UParticleSystem*                             Llama_Hit_Lvl_1;                                           // 0x05D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UParticleSystem*                             Llama_Upgrade_Lvl_1;                                       // 0x05D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UParticleSystem*                             Llama_Upgrade_Lvl_2;                                       // 0x05D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TEnumAsByte<FortniteGame_EFortRarity>              CurrentRarity;                                             // 0x05DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TEnumAsByte<FortniteGame_EFortRarity>              TargetRarity;                                              // 0x05DD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_7GOU[0x2];                                     // 0x05DE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInstanceDynamic*                    MID_CardRarity;                                            // 0x05E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInstanceDynamic*                    MID_CardFoil;                                              // 0x05E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                     PinataSwingStaticLoc;                                      // 0x05E8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Lvl1_Lightray_Color;                                       // 0x05F4(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Lvl2_Lightray_Color;                                       // 0x0604(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInstanceDynamic*                    CardRaysMID;                                               // 0x0614(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Card_Rays_Color;                                           // 0x0618(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInstance*                           ConfettiMID;                                               // 0x0628(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                     PinataHeadGroundLocStart;                                  // 0x062C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                     PinataHeadGroundLocEnd;                                    // 0x0638(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                     PinataHeadGroundLocEndOffset;                              // 0x0644(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	class UMaterialInstanceDynamic*                    MID_UpgradeNecklace;                                       // 0x0650(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                     PinataHeadStartLoc;                                        // 0x0654(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                                    PinataHeadStartRot;                                        // 0x0660(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                                    PinataHeadGroundRotStart;                                  // 0x066C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                                    PinataHeadPreFallRot;                                      // 0x0678(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                     PinataHeadPreFallLoc;                                      // 0x0684(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              PinataDropHeight;                                          // 0x0690(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                                    PinataSwingStaticRotRelative;                              // 0x0694(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInstanceDynamic*                    MID_PinataEyeLeft;                                         // 0x06A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInstanceDynamic*                    MID_PinataEyeRight;                                        // 0x06A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USkeletalMesh*                               TestWeapon;                                                // 0x06A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int                                                RandomWeaponNumber;                                        // 0x06AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundBase*                                  Sound_Llama_Appear;                                        // 0x06B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundBase*                                  Sound_CardFlip;                                            // 0x06B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundBase*                                  Sound_CurrentWeaponReady;                                  // 0x06B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundBase*                                  Sound_CurrentWeaponSwing;                                  // 0x06BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundBase*                                  Sound_CurrentWeaponImpact;                                 // 0x06C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundBase*                                  Sound_ChargeAttackLoop;                                    // 0x06C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundBase*                                  Sound_Upgrade_Silver;                                      // 0x06C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundBase*                                  Sound_Upgrade_Gold;                                        // 0x06CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundBase*                                  Sound_Open_Normal;                                         // 0x06D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundBase*                                  Sound_Open_Silver;                                         // 0x06D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundBase*                                  Sound_Open_Gold;                                           // 0x06D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundBase*                                  Dialog_Llama_Greet_Current;                                // 0x06DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundBase*                                  Dialog_Llama_OpenNormal_Current;                           // 0x06E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundBase*                                  Dialog_Llama_UpgradeSilver_Current;                        // 0x06E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundBase*                                  Dialog_Llama_UpgradeGold_Current;                          // 0x06E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundBase*                                  Dialog_Llama_OpenSilver_Current;                           // 0x06EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundBase*                                  Dialog_Llama_OpenGold_Current;                             // 0x06F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundBase*                                  Dialog_Llama_Hover_Current;                                // 0x06F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundBase*                                  Dialog_Llama_Tickle_Current;                               // 0x06F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<class USoundBase*>                          Dialog_Llama_Depressed_Greet_Array;                        // 0x06FC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class USoundBase*                                  Sound_CardFlyAtPlayer;                                     // 0x0708(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundBase*                                  Sound_CardPutAway;                                         // 0x070C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundBase*                                  Sound_Store_Card_Summary;                                  // 0x0710(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundBase*                                  Sound_Store_CardUpgrade_Blue;                              // 0x0714(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundBase*                                  Sound_Store_CardUpgrade_Green;                             // 0x0718(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundBase*                                  Sound_Store_CardUpgrade_Purple;                            // 0x071C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundBase*                                  Sound_Store_CardUpgrade_Gold;                              // 0x0720(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundBase*                                  Sound_Store_CardUpgrade_Platinum;                          // 0x0724(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundBase*                                  Sound_SweepUp;                                             // 0x0728(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<class USoundBase*>                          Dialog_Llama_Mob_Greet_Array;                              // 0x072C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class USoundBase*>                          Dialog_Llama_Greet_Array_Current;                          // 0x0738(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class USoundBase*                                  Sound_PinataSwing;                                         // 0x0744(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              VO_Delay;                                                  // 0x0748(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class AFort_Entry_Music_Controller_BP_C*           Fort_Entry_Music_Controller;                               // 0x074C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               KillHover;                                                 // 0x0750(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_EL3R[0x3];                                     // 0x0751(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundBase*                                  Dialog_Llama_PreHit_Current;                               // 0x0754(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundBase*                                  Sound_Music_Drop;                                          // 0x0758(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundBase*                                  Sound_Music_Open;                                          // 0x075C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundBase*                                  GreetGenericSound;                                         // 0x0760(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundBase*                                  GreetSledgehammerSound;                                    // 0x0764(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundBase*                                  GreetBaseballBat_Sound;                                    // 0x0768(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundBase*                                  GreetAxeSound;                                             // 0x076C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundBase*                                  HockeyStickGreet_Sound;                                    // 0x0770(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundBase*                                  Garden_Rake_Greet_Sound;                                   // 0x0774(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundBase*                                  Greet_Garden_Hoe_Sound;                                    // 0x0778(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundBase*                                  Greet_Scythe_Sound;                                        // 0x077C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundBase*                                  GreetPickaxe_Sound;                                        // 0x0780(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundBase*                                  Greet_Pitchfork_Sound;                                     // 0x0784(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundBase*                                  Greet_Sword_Sound;                                         // 0x0788(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInstanceDynamic*                    MID_CardGlow;                                              // 0x078C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              TimeHeldDown;                                              // 0x0790(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                     WorldLocationForEye;                                       // 0x0794(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USkeletalMeshComponent*                      WeaponObject;                                              // 0x07A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USkeletalMesh*                               CurrentWeaponAsset;                                        // 0x07A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<struct FVector>                             WeaponListOffsetLoc;                                       // 0x07A8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FRotator>                            WeaponListOffsetRot;                                       // 0x07B4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector>                             WeaponListOffsetScale;                                     // 0x07C0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<TAssetPtr<class UClass>>                    UseableWeapons;                                            // 0x07CC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class AStoreWeaponMaster_BP_C*                     SpawnedWeaponBlueprint;                                    // 0x07D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class AStoreCamera_Blueprint_C*                    StoreCameraActor;                                          // 0x07DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class AStoreCamera_Blueprint_C*                    StoreCameraInLevel;                                        // 0x07E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TAssetPtr<class UClass>                            TEST44444;                                                 // 0x07E4(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      WeaponClass;                                               // 0x07FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UClass*                                      LoadAssetWeaponClass;                                      // 0x0800(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               AttackLeftMousePressed;                                    // 0x0804(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_13Z3[0x3];                                     // 0x0805(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AStoreCardReveal_BP_C*                       StoreCardRevealInLevel;                                    // 0x0808(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int                                                AmountOfWeapons;                                           // 0x080C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass StorePinataMaster_BP.StorePinataMaster_BP_C");
		return ptr;
	}



	void UserConstructionScript();
	void TL_EquipWeapon__FinishedFunc();
	void TL_EquipWeapon__UpdateFunc();
	void TL_Attack__FinishedFunc();
	void TL_Attack__UpdateFunc();
	void TL_PushbroomAnim__FinishedFunc();
	void TL_PushbroomAnim__UpdateFunc();
	void TL_PushbroomAnim__Trigger_Particles__EventFunc();
	void TL_Upgrade1__FinishedFunc();
	void TL_Upgrade1__UpdateFunc();
	void TL_Upgrade2__FinishedFunc();
	void TL_Upgrade2__UpdateFunc();
	void TL_WeaponCharge__FinishedFunc();
	void TL_WeaponCharge__UpdateFunc();
	void TL_DarkenBG__FinishedFunc();
	void TL_DarkenBG__UpdateFunc();
	void TL_UndarkenBG__FinishedFunc();
	void TL_UndarkenBG__UpdateFunc();
	void TL_RegularEyes__FinishedFunc();
	void TL_RegularEyes__UpdateFunc();
	void TL_EyesFollowMouseAgain__FinishedFunc();
	void TL_EyesFollowMouseAgain__UpdateFunc();
	void TL_ChangeLighting__FinishedFunc();
	void TL_ChangeLighting__UpdateFunc();
	void TL_InitialEyesDelay__FinishedFunc();
	void TL_InitialEyesDelay__UpdateFunc();
	void TL_CardCough__FinishedFunc();
	void TL_CardCough__UpdateFunc();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_8(const struct FKey& Key);
	void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_7(const struct FKey& Key);
	void OnLoaded_E529D9FA4E70DEFD59CF9A8777EBA6D5(class UClass* Loaded);
	void ReceiveTick(float DeltaSeconds);
	void DisableLights(bool Enable);
	void InitiatePinata();
	void OnStoreStateChanged(TEnumAsByte<FortniteUI_EFortStoreState> NewStoreState);
	void CameraResetComplete();
	void CameraTransitionComplete();
	void StartPackOpen();
	void CardEnterStart();
	void PackDestroyStart();
	void PlayUpgradePackTo1();
	void OpenPinata();
	void PlayUpgradePackTo2();
	void ReadyToAttack();
	void FinishedUpgradePackTo1();
	void FinishedUpgradePackTo2();
	void CardPackStoreStart();
	void PlayHoverVO();
	void PlayTickleVO(class USoundBase* InputTickleVO);
	void ReceiveBeginPlay();
	void SetTickleVO();
	void ExecuteUbergraph_StorePinataMaster_BP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
