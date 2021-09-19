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

// AnimBlueprintGeneratedClass HuskVimBlueprint.HuskVimBlueprint_C
// 0x219D (FullSize[0x25FD] - InheritedSize[0x0460])
class UHuskVimBlueprint_C : public UFortAIAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0460(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_4718C61E43D2BFBC70F4D882B468065E; // 0x0464(0x002C)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_A11BE23D4D8F875CBBB00A90CE6354E1; // 0x0490(0x002C)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_099D9EDE4D68BCD8BA69D5B4D2DF9C65; // 0x04BC(0x002C)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_C4DCDA1542E54F644CFF979B805A1BEF;       // 0x04E8(0x0044)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_9E92E3974407AEF8D9B01C826DB028E7; // 0x052C(0x002C)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_862B45EE48B727FCAE25CC845739C77D; // 0x0558(0x005C)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_04C8CC7D4A8084D0FA56F88B4CEEF33A; // 0x05B4(0x006C)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3E1AAF314A92EA9BAEBDFFA18BFDBE31; // 0x0620(0x002C)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7B61B162482500B2C44C1FA35932D1A1; // 0x064C(0x002C)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_36293C764E66652AB51D6EA325B93C28; // 0x0678(0x002C)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6881341D4EA79B64C4616A9783F931DB; // 0x06A4(0x002C)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_48E307964801AB51DD890898CBE35141; // 0x06D0(0x002C)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_80B4C97B4CAC1F2C5D6A56957A7E29B2; // 0x06FC(0x002C)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7A2A0F6849392A2F649C4FBB52941E96; // 0x0728(0x002C)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_73BB9CA046F3F05341252D9489D72103; // 0x0754(0x002C)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6B82DFDC446850421A48CBB9CDCF8688; // 0x0780(0x002C)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_37EC6B6E4386A12C6F664688A4D188F4; // 0x07AC(0x002C)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_313802304B999C3D178C48BF9DEDEFAE; // 0x07D8(0x002C)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E770683248402027708661BD000408BB; // 0x0804(0x002C)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DC4586314F1DF66E7392DAAB0E889C09; // 0x0830(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D77B37DA4C4BC815CA92D4A544868F04; // 0x0888(0x002C)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_636654C34757C8FC4DCAB9B9DD5AF751; // 0x08B4(0x002C)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F7BDDF3F4D9B915BE66E0294BCFA59EF; // 0x08E0(0x0058)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_C6C4A38E45DB009561EB02B1DB2B3CAB; // 0x0938(0x002C)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_FBFC1B03440D76EFE66D47A468451220; // 0x0964(0x002C)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_4F664FF94DF4F0620D3E1C97385AC0DF; // 0x0990(0x002C)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B6C830E1421D180228E233824E508635; // 0x09BC(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_E07E98034D1EE582D0593995B1BB5DC3; // 0x0A14(0x002C)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_E378701F40FC93B4F5AD3DBE6DF2EB87; // 0x0A40(0x0054)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_85F0E0424E2AA63D5E50F7AEF322CEA7; // 0x0A94(0x002C)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F62D277F44AA6A61F82B30959D6940A1; // 0x0AC0(0x0058)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_25E680474C058B6188C7E0A3CE5238B3; // 0x0B18(0x0058)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_85BED2AA4C4C7F193F49E8ADCEDB3146; // 0x0B70(0x008C)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_E462CE7E45616327EB736FBFDD2A7D3F; // 0x0BFC(0x002C)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B5BF69B44F026D3DCCC73C90A9F6E76C; // 0x0C28(0x0058)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_820FC4A94C3965D9B5851DA5CA188804; // 0x0C80(0x0058)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_B953C3584A17665212618691EF146C1D; // 0x0CD8(0x008C)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1F33BB4C4D5870D77A7CD889039BA830; // 0x0D64(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_7A43B2294C5B2E98A98FBF874EB79E0C; // 0x0DBC(0x002C)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_1E3DC10D4256690CFC47D384A14A7F16; // 0x0DE8(0x0094)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_F42A6F5B40851A977AA77685C06F163A;       // 0x0E7C(0x0044)
	struct FAnimNode_Root                              AnimGraphNode_Root_B245978C4924B41B3B5AE18887A86D13;       // 0x0EC0(0x002C)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_440B1F274BAB6915F4A535B80FCB01C7; // 0x0EEC(0x0080)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_88EDA46E4106E0FB2B6A9CAAE2C22DF3; // 0x0F6C(0x0080)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_CDBDFCB3423B7A666B668C810913101D; // 0x0FEC(0x0080)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_97D40CFD4EB5645835403BA4924C0B3E; // 0x106C(0x0080)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_61AAFD374F572C1FAC206E9A92B61F32; // 0x10EC(0x0080)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_9BEE9F054AD8E45DBB891E95496CC23A; // 0x116C(0x0080)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_43BBC9914EAAAC8C994CC4BA6D138971; // 0x11EC(0x0080)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_A55CC7A2408CDC13BE5E2E909CDB724C; // 0x126C(0x0080)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_D8B987814BC8214113BE1B9E22F44394; // 0x12EC(0x0080)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_89DB18E44181E92E530A8EB1C2835065; // 0x136C(0x0080)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_487F72FF4CB1C079BB7DB69F6BB3314A; // 0x13EC(0x0080)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_86A9B7BB4FFF7D7396B24CA900201CAE;       // 0x146C(0x0044)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_42A65BC649672705E90B0A98EB75057D; // 0x14B0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DA85C3FF4E995F6A40C554BEDB4270CF; // 0x14F8(0x002C)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_023982B8469139E97BA837983C0705F0; // 0x1524(0x002C)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C16FBE4248EB1001A5C570B2C077BB45; // 0x1550(0x0058)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_766AAC25411FB04E7E338899215C462B; // 0x15A8(0x002C)
	struct FAnimNode_RefPose                           AnimGraphNode_IdentityPose_303EA5B946841BADA2B764ACE8F3C98B; // 0x15D4(0x0024)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_0FF22A954D6D4FE0F4C144A9E59D1EC8; // 0x15F8(0x002C)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_DA3ADD92444C2E8DEDAAA5B4C721656D; // 0x1624(0x0094)
	struct FAnimNode_BlendListByInt                    AnimGraphNode_BlendListByInt_73DCE67A4812F862ED8C6780A4006486; // 0x16B8(0x008C)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_FBAF7A334A59F3F4A463078A6C231B94; // 0x1744(0x00DC)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DABD11E549968E2DE7E3A8929FCA9E78; // 0x1820(0x0058)
	struct FAnimNode_BlendListByInt                    AnimGraphNode_BlendListByInt_854D3CE54447CCD07DEB128A571E9AD0; // 0x1878(0x008C)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_58FB3B2844B8177323AAA1B559FBF7B9; // 0x1904(0x00DC)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_A1A89D404DA32070E1FB11A39CEB0AAF; // 0x19E0(0x00DC)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_0687E9754466969D5CD7A19B132D9EBD; // 0x1ABC(0x00DC)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_A452873D4478045A76CA80A62B7812E3; // 0x1B98(0x00DC)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_E9F1788C4C589EA6426522A16E800027; // 0x1C74(0x00DC)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_873076FE41B38E606F052AB3398CF918; // 0x1D50(0x00DC)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_FC9B517A49AB4725841437AE3395230A; // 0x1E2C(0x00DC)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_8977FEB541748D57B11E4DAF366F4543; // 0x1F08(0x00DC)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_C233CA69406022228BD6D69670041EFA; // 0x1FE4(0x00DC)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_425A03FD42BFA2DBBF91BFA9C0EE3353; // 0x20C0(0x00DC)
	struct FAnimNode_BlendListByInt                    AnimGraphNode_BlendListByInt_ECABA9234CB15C2E6412358EA2FCCB82; // 0x219C(0x008C)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_14487673408AC86D271C02B5A07DF6FE; // 0x2228(0x0058)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_A386B4DA4E1CCC316506FA9272467841; // 0x2280(0x005C)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_34E0118F461147648A1C0E8D793426EF; // 0x22DC(0x006C)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_A1108C9F46D3E798C85FB28F5B626F70; // 0x2348(0x002C)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_56D96D6C4E35D179E75FFA94660BC2AF; // 0x2374(0x002C)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_ADAE8E2E44F27C36895723B9198B44AC; // 0x23A0(0x005C)
	struct FAnimNode_RotateRootBone                    AnimGraphNode_RotateRootBone_11FEA35D4B03023FBDABBDADFA07EC05; // 0x23FC(0x0040)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_6735E8134ECB24DD734FB68A0094224B; // 0x243C(0x0080)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_83DD08774038F71D0B7B92ACC17BC4DD; // 0x24BC(0x005C)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_C23DF883497BBD30F34E69A67795D2C1; // 0x2518(0x002C)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_109F76DF4F31F5F29DEB3C9FAF5D09A5; // 0x2544(0x008C)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_E023B61E454D04E5EB9E049E267FC33F; // 0x25D0(0x002C)
	TEnumAsByte<HuskVimBlueprint_HuskType_EHuskVimBlueprint_HuskType> HuskType;                                                  // 0x25FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("AnimBlueprintGeneratedClass HuskVimBlueprint.HuskVimBlueprint_C");
		return ptr;
	}



	void InitializeHuskType(class AFortAIPawn* InputPin);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_HuskVimBlueprint_AnimGraphNode_TransitionResult_3E1AAF314A92EA9BAEBDFFA18BFDBE31();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_HuskVimBlueprint_AnimGraphNode_TransitionResult_36293C764E66652AB51D6EA325B93C28();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_HuskVimBlueprint_AnimGraphNode_TransitionResult_6881341D4EA79B64C4616A9783F931DB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_HuskVimBlueprint_AnimGraphNode_TransitionResult_48E307964801AB51DD890898CBE35141();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_HuskVimBlueprint_AnimGraphNode_TransitionResult_80B4C97B4CAC1F2C5D6A56957A7E29B2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_HuskVimBlueprint_AnimGraphNode_TransitionResult_7A2A0F6849392A2F649C4FBB52941E96();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_HuskVimBlueprint_AnimGraphNode_TransitionResult_73BB9CA046F3F05341252D9489D72103();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_HuskVimBlueprint_AnimGraphNode_TransitionResult_37EC6B6E4386A12C6F664688A4D188F4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_HuskVimBlueprint_AnimGraphNode_TransitionResult_313802304B999C3D178C48BF9DEDEFAE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_HuskVimBlueprint_AnimGraphNode_ModifyBone_440B1F274BAB6915F4A535B80FCB01C7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_HuskVimBlueprint_AnimGraphNode_ModifyBone_88EDA46E4106E0FB2B6A9CAAE2C22DF3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_HuskVimBlueprint_AnimGraphNode_ModifyBone_CDBDFCB3423B7A666B668C810913101D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_HuskVimBlueprint_AnimGraphNode_ModifyBone_97D40CFD4EB5645835403BA4924C0B3E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_HuskVimBlueprint_AnimGraphNode_ModifyBone_61AAFD374F572C1FAC206E9A92B61F32();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_HuskVimBlueprint_AnimGraphNode_ModifyBone_9BEE9F054AD8E45DBB891E95496CC23A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_HuskVimBlueprint_AnimGraphNode_ModifyBone_43BBC9914EAAAC8C994CC4BA6D138971();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_HuskVimBlueprint_AnimGraphNode_ModifyBone_A55CC7A2408CDC13BE5E2E909CDB724C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_HuskVimBlueprint_AnimGraphNode_ModifyBone_D8B987814BC8214113BE1B9E22F44394();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_HuskVimBlueprint_AnimGraphNode_ModifyBone_89DB18E44181E92E530A8EB1C2835065();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_HuskVimBlueprint_AnimGraphNode_ModifyBone_487F72FF4CB1C079BB7DB69F6BB3314A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_HuskVimBlueprint_AnimGraphNode_BlendListByInt_73DCE67A4812F862ED8C6780A4006486();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_HuskVimBlueprint_AnimGraphNode_ModifyBone_6735E8134ECB24DD734FB68A0094224B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_HuskVimBlueprint_AnimGraphNode_BlendListByBool_109F76DF4F31F5F29DEB3C9FAF5D09A5();
	void AnimNotify_StunnedLeftState();
	void AnimNotify_StunnedFullyBlendedState();
	void AnimNotify_SleepingFullyBlended();
	void AnimNotify_BeehiveDestroyed();
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_HuskVimBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
