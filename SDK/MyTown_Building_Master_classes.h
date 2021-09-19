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

// BlueprintGeneratedClass MyTown_Building_Master.MyTown_Building_Master_C
// 0x0238 (FullSize[0x0510] - InheritedSize[0x02D8])
class AMyTown_Building_Master_C : public AMyTownBuildingActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02D8(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Flag;                                                      // 0x02DC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        GroundMesh;                                                // 0x02E0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        BuildBox;                                                  // 0x02E4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        BuildBox_WallX;                                            // 0x02E8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        BuildBox_Pop;                                              // 0x02EC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        BuildBox_WallZ;                                            // 0x02F0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        BuildBox_Morph;                                            // 0x02F4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        BuildBox_WallBY;                                           // 0x02F8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        BuildBox_WallBX;                                           // 0x02FC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        BuildBox_WallY;                                            // 0x0300(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        HoloBuilding;                                              // 0x0304(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        HoverBox;                                                  // 0x0308(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        UpgradeMesh;                                               // 0x030C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        UpgradeGlow;                                               // 0x0310(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        Platform;                                                  // 0x0314(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        Lock;                                                      // 0x0318(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	float                                              AddWorkerAnimation_TL_WorkerFlash_BC2A05C3422A64750F9305A3348D77AB; // 0x031C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ETimelineDirection>             AddWorkerAnimation_TL__Direction_BC2A05C3422A64750F9305A3348D77AB; // 0x0320(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_UGWZ[0x3];                                     // 0x0321(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          AddWorkerAnimation_TL;                                     // 0x0324(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              BuildingUpgrade_TL_Flash_022B1B3F407E08B018D67C85D55D6353; // 0x0328(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              BuildingUpgrade_TL_Squash_and_Stretch_022B1B3F407E08B018D67C85D55D6353; // 0x032C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ETimelineDirection>             BuildingUpgrade_TL__Direction_022B1B3F407E08B018D67C85D55D6353; // 0x0330(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_YX7O[0x3];                                     // 0x0331(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          BuildingUpgrade_TL;                                        // 0x0334(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              BubblePop_BubblePop_024074C647081B54E9FAC5B8E9DEF552;      // 0x0338(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ETimelineDirection>             BubblePop__Direction_024074C647081B54E9FAC5B8E9DEF552;     // 0x033C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_OC68[0x3];                                     // 0x033D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          BubblePop;                                                 // 0x0340(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              BuildingFlashOut_BuildSquash_CADEA3F846AC0FDB2452EAB45F6A550B; // 0x0344(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              BuildingFlashOut_NewBuildFlash_CADEA3F846AC0FDB2452EAB45F6A550B; // 0x0348(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ETimelineDirection>             BuildingFlashOut__Direction_CADEA3F846AC0FDB2452EAB45F6A550B; // 0x034C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_6KXQ[0x3];                                     // 0x034D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          BuildingFlashOut;                                          // 0x0350(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              MorphPop_Jiggle_C9DB9DF84601DDB0B713EC9510BDD141;          // 0x0354(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              MorphPop_Distortion_C9DB9DF84601DDB0B713EC9510BDD141;      // 0x0358(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              MorphPop_Fade_C9DB9DF84601DDB0B713EC9510BDD141;            // 0x035C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              MorphPop_MorphPop_C9DB9DF84601DDB0B713EC9510BDD141;        // 0x0360(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ETimelineDirection>             MorphPop__Direction_C9DB9DF84601DDB0B713EC9510BDD141;      // 0x0364(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_GAUE[0x3];                                     // 0x0365(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          MorphPop;                                                  // 0x0368(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              BuildAnim_Walls_TL_Wall_B_Y_A8958F34498B607B5D0BAA9C6B3A1E6F; // 0x036C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              BuildAnim_Walls_TL_Wall_B_X_A8958F34498B607B5D0BAA9C6B3A1E6F; // 0x0370(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              BuildAnim_Walls_TL_Wall_Z_A8958F34498B607B5D0BAA9C6B3A1E6F; // 0x0374(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              BuildAnim_Walls_TL_Wall_Y_A8958F34498B607B5D0BAA9C6B3A1E6F; // 0x0378(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              BuildAnim_Walls_TL_Wall_X_A8958F34498B607B5D0BAA9C6B3A1E6F; // 0x037C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ETimelineDirection>             BuildAnim_Walls_TL__Direction_A8958F34498B607B5D0BAA9C6B3A1E6F; // 0x0380(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_SQV6[0x3];                                     // 0x0381(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          BuildAnim_Walls_TL;                                        // 0x0384(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              SquashAndStretchIn_TL_fFadeIn_F65A50F9485109D050DA48A27CA90AF5; // 0x0388(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              SquashAndStretchIn_TL_fSquashIn_F65A50F9485109D050DA48A27CA90AF5; // 0x038C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ETimelineDirection>             SquashAndStretchIn_TL__Direction_F65A50F9485109D050DA48A27CA90AF5; // 0x0390(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_FHVZ[0x3];                                     // 0x0391(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          SquashAndStretchIn_TL;                                     // 0x0394(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              GlobalFadeIn_TL_fGlobalFadeIn_A116FB5A4414B6F876C0289C97BD4B19; // 0x0398(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ETimelineDirection>             GlobalFadeIn_TL__Direction_A116FB5A4414B6F876C0289C97BD4B19; // 0x039C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_C72F[0x3];                                     // 0x039D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          GlobalFadeIn_TL;                                           // 0x03A0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              GlobalFadeOut_TL_fGlobalFadeOut_C7CBEBC64EA8A4A48498E792B9E9A1FF; // 0x03A4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Engine_ETimelineDirection>             GlobalFadeOut_TL__Direction_C7CBEBC64EA8A4A48498E792B9E9A1FF; // 0x03A8(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_HTZZ[0x3];                                     // 0x03A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          GlobalFadeOut_TL;                                          // 0x03AC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AMyFort_Manager_C*                           MyFortManager;                                             // 0x03B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInterface*                          BuildingMeshMaterial;                                      // 0x03B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class AHB_RoadManager_C*                           RoadManager;                                               // 0x03B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsSubBuilding;                                             // 0x03BC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_B5B2[0x3];                                     // 0x03BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UStaticMesh*                                 LockedState;                                               // 0x03C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              LockZRot;                                                  // 0x03C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UStaticMesh*                                 UnBuiltMesh;                                               // 0x03C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                BuildingId;                                                // 0x03CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UMaterialInstanceDynamic*                    PlatformMID;                                               // 0x03D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               DebugStates;                                               // 0x03D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_XL1X[0x3];                                     // 0x03D5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInstanceDynamic*                    BuildingMID;                                               // 0x03D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInstanceDynamic*                    HoverBoxMID;                                               // 0x03DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInstanceDynamic*                    LockMID;                                                   // 0x03E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Black;                                                     // 0x03E4(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInstanceDynamic*                    UnbuiltMaterialMID;                                        // 0x03F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                                LockedSelectionHover1;                                     // 0x03F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                                LockedSelectionHover2;                                     // 0x0408(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                                IdleHover1;                                                // 0x0418(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                                IdleHover2;                                                // 0x0428(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                                UpgradeHover1;                                             // 0x0438(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                                UpgradeHover2;                                             // 0x0448(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                     HoloBuildingOffset;                                        // 0x0458(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               MenuOpened;                                                // 0x0464(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               HoverAnimComplete;                                         // 0x0465(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_P2I3[0x2];                                     // 0x0466(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInstanceDynamic*                    WallXMID;                                                  // 0x0468(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInstanceDynamic*                    WallYMID;                                                  // 0x046C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInstanceDynamic*                    WallBXMID;                                                 // 0x0470(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInstanceDynamic*                    WallBYMID;                                                 // 0x0474(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInstanceDynamic*                    WallMorphMID;                                              // 0x0478(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInstanceDynamic*                    BuildBoxMID;                                               // 0x047C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInstanceDynamic*                    WallZMID;                                                  // 0x0480(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInstanceDynamic*                    WallMorphBackMID;                                          // 0x0484(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UMaterialInstanceDynamic*                    PopMID;                                                    // 0x0488(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               BuildingisBuilt;                                           // 0x048C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_9ZQ3[0x3];                                     // 0x048D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLinearColor                                LockedIdleColor1;                                          // 0x0490(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                                LockedIdleColor2;                                          // 0x04A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int                                                InitialLevel;                                              // 0x04B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bAnimating;                                                // 0x04B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               TutorialBuilding;                                          // 0x04B5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_08H0[0x2];                                     // 0x04B6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector2D                                   TutorialCommandoScreenPos;                                 // 0x04B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                                IdleUnbuiltHover1;                                         // 0x04C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FLinearColor                                IdleUnbuiltHover2;                                         // 0x04D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector2D                                   TutorialConstructorScreenPos;                              // 0x04E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              TutorialCommandoDist;                                      // 0x04E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              TutorialConstructorDist;                                   // 0x04EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               inTutorial;                                                // 0x04F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ZZTR[0x3];                                     // 0x04F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector2D                                   SavedZoom;                                                 // 0x04F4(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              SavedDist;                                                 // 0x04FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               UpgradePath;                                               // 0x0500(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_92OK[0x3];                                     // 0x0501(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UParticleSystemComponent*                    BuildBuilding_LightEmitter;                                // 0x0504(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               HasBanner;                                                 // 0x0508(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_KUY2[0x3];                                     // 0x0509(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInstanceDynamic*                    NewVar;                                                    // 0x050C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass MyTown_Building_Master.MyTown_Building_Master_C");
		return ptr;
	}



	void StencilBufferSetup();
	void UpdateBangVisibility();
	void Set_Tooltip_Visibility(bool Visibile);
	void Setup_Tooltip();
	void UpgradeIconFriendCheck();
	void MIDCreation();
	void StateDebug_Build();
	void StateDebug_Upgrade();
	void StateDebug_Idle();
	void State_Debug_Locked();
	void HasBeenBuilt(bool* Building_is_Built, int* Building_Level);
	void UserConstructionScript();
	void GlobalFadeOut_TL__FinishedFunc();
	void GlobalFadeOut_TL__UpdateFunc();
	void GlobalFadeIn_TL__FinishedFunc();
	void GlobalFadeIn_TL__UpdateFunc();
	void SquashAndStretchIn_TL__FinishedFunc();
	void SquashAndStretchIn_TL__UpdateFunc();
	void BuildAnim_Walls_TL__FinishedFunc();
	void BuildAnim_Walls_TL__UpdateFunc();
	void MorphPop__FinishedFunc();
	void MorphPop__UpdateFunc();
	void MorphPop__SpawnLightEmitter__EventFunc();
	void BuildingFlashOut__FinishedFunc();
	void BuildingFlashOut__UpdateFunc();
	void BubblePop__FinishedFunc();
	void BubblePop__UpdateFunc();
	void BuildingUpgrade_TL__FinishedFunc();
	void BuildingUpgrade_TL__UpdateFunc();
	void AddWorkerAnimation_TL__FinishedFunc();
	void AddWorkerAnimation_TL__UpdateFunc();
	void GlobalFadeOut(class UMaterialInstanceDynamic* Mid, const struct FName& Parameter, bool Parameter_Collection);
	void GlobalFadeIn(class UMaterialInstanceDynamic* Mid, const struct FName& Parameter, bool Parameter_Collection);
	void HoloHoverAnim(class UMaterialInstanceDynamic* MID_Array, float SquashIntensity);
	void BuildingAnimation();
	void BuildSubbuildingAnimation();
	void BuildingUpgradeAnimation();
	void AddWorkerAnimation();
	void idle();
	void CanUpgrade();
	void Locked();
	void CanBuild();
	void Idle_Cursor_Over();
	void Idle_CursorOut();
	void CanBuildOver();
	void CanBuildOut();
	void LockedOver();
	void LockedOut();
	void HoloBuildingMeshAssign();
	void HoloBuildingRotation();
	void HoloBuildingAnim(float Time);
	void CanUpgradeOver();
	void CanUpgradeOut();
	void IdleOpen();
	void IdleClosed();
	void CanBuildOpen();
	void CanBuildClosed();
	void LockedOpen();
	void LockedClosed();
	void CanUpgradeOpen();
	void CanUpgradeClosed();
	void BuildBuilding();
	void UpgradeBuilding();
	void ReceiveBeginPlay();
	void SetUnbuiltPlatformIcon();
	void MyTown_BuildingStates(const struct FString& Building_Template_ID);
	void OnMyTownBuildingStateChanged_Event_1(TEnumAsByte<FortniteGame_EMyTownBuildingState> NewState, TEnumAsByte<FortniteGame_EMyTownBuildingState> OldState);
	void OnBeginCursorOver_Event_2();
	void OnEndCursorOver_Event_2();
	void CheckCollision();
	void UpdateRoads();
	void OnMyTownBuildingPanelOpened_Event_1(const struct FString& BuildingTemplateId);
	void OnMyTownBuildingPanelClosed_Event_1();
	void OnMyTownBuildingWorkersChanged_Event_1(const struct FString& BuildingTemplateId);
	void OnMyTownBuildingUpgradeFinished_Event_1(const struct FString& BuildingTemplateId, bool bSuccess);
	void SetFlagIcon();
	void OnBuildingInfoUpdated();
	void HandleClientEvent_OnboardingBuildingsStage1(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent);
	void HandleClientEvent_OnboardingBuildingsStage2(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent);
	void HandleClientEvent_OnboardingBuildingsStage3(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent);
	void ExecuteUbergraph_MyTown_Building_Master(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
