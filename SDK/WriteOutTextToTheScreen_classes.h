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

// BlueprintGeneratedClass WriteOutTextToTheScreen.WriteOutTextToTheScreen_C
// 0x006C (FullSize[0x02AC] - InheritedSize[0x0240])
class AWriteOutTextToTheScreen_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0240(0x0004) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        StaticMesh2;                                               // 0x0244(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        StaticMesh1;                                               // 0x0248(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	struct FString                                     CurrentString;                                             // 0x024C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               NewVar;                                                    // 0x0258(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_78WT[0x3];                                     // 0x0259(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TotalAnimationTime;                                        // 0x025C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<struct FString>                             CurrentStringArray;                                        // 0x0260(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                LineCounter;                                               // 0x026C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int                                                CurrentChar;                                               // 0x0270(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int                                                CurrentLetter;                                             // 0x0274(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int                                                PreviousLetter;                                            // 0x0278(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FString                                     Curre;                                                     // 0x027C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UTextRenderComponent*>                TextLineArray;                                             // 0x0288(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UStaticMeshComponent*>                NewVar0;                                                   // 0x0294(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                String_Anim_Target_Index;                                  // 0x02A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int                                                Initial_String_Anim_Index;                                 // 0x02A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              Line_Height;                                               // 0x02A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass WriteOutTextToTheScreen.WriteOutTextToTheScreen_C");
		return ptr;
	}



	void Line();
	void UserConstructionScript();
	void ReceiveTick(float DeltaSeconds);
	void WriteOutText(const struct FString& String, float TimePerCharacter, int Anim_Start_String_Index__Length_Based_, int Anim_End_String_Index__default_length_, bool Init_New_Line_, const struct FLinearColor& Color, bool Bold_, int AdditionalLines);
	void ReceiveBeginPlay();
	void ErasePage();
	void MoveText(float NewHeight);
	void ExecuteUbergraph_WriteOutTextToTheScreen(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
