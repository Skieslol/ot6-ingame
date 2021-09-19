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

// Class Niagara.NiagaraActor
// 0x0004 (FullSize[0x0244] - InheritedSize[0x0240])
class ANiagaraActor : public AActor
{
public:
	class UNiagaraComponent*                           NiagaraComponent;                                          // 0x0240(0x0004) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraActor");
		return ptr;
	}



};

// Class Niagara.NiagaraComponent
// 0x0014 (FullSize[0x0440] - InheritedSize[0x042C])
class UNiagaraComponent : public UPrimitiveComponent
{
public:
	class UNiagaraEffect*                              Asset;                                                     // 0x042C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_BLKL[0x10];                                    // 0x0430(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraComponent");
		return ptr;
	}



};

// Class Niagara.NiagaraScript
// 0x0154 (FullSize[0x0170] - InheritedSize[0x001C])
class UNiagaraScript : public UObject
{
public:
	TArray<unsigned char>                              ByteCode;                                                  // 0x001C(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)
	struct FNiagaraScriptConstantData                  ConstantData;                                              // 0x0028(0x0120) (ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraVariableInfo>                Attributes;                                                // 0x0148(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraDataSetProperties>           EventReceivers;                                            // 0x0154(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraDataSetProperties>           EventGenerators;                                           // 0x0160(0x000C) (ZeroConstructor, NativeAccessSpecifierPublic)
	struct FNiagaraScriptUsageInfo                     Usage;                                                     // 0x016C(0x0001) (NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CC5C[0x3];                                     // 0x016D(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraScript");
		return ptr;
	}



};

// Class Niagara.NiagaraEmitterProperties
// 0x00C4 (FullSize[0x00E0] - InheritedSize[0x001C])
class UNiagaraEmitterProperties : public UObject
{
public:
	struct FString                                     EmitterName;                                               // 0x001C(0x000C) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsEnabled;                                                // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0ZPV[0x3];                                     // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SpawnRate;                                                 // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterial*                                   Material;                                                  // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Niagara_EEmitterRenderModuleType>      RenderModuleType;                                          // 0x0034(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZO5P[0x3];                                     // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              StartTime;                                                 // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EndTime;                                                   // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraEffectRendererProperties*            RendererProperties;                                        // 0x0040(0x0004) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumLoops;                                                  // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraEmitterScriptProperties             UpdateScriptProps;                                         // 0x0048(0x004C) (Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FNiagaraEmitterScriptProperties             SpawnScriptProps;                                          // 0x0094(0x004C) (Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraEmitterProperties");
		return ptr;
	}



};

// Class Niagara.NiagaraEffect
// 0x0018 (FullSize[0x0034] - InheritedSize[0x001C])
class UNiagaraEffect : public UObject
{
public:
	TArray<struct FDeprecatedNiagaraEmitterProperties> EmitterPropsSerialized;                                    // 0x001C(0x000C) (ZeroConstructor, Deprecated, NativeAccessSpecifierPrivate)
	TArray<class UNiagaraEmitterProperties*>           EmitterProps;                                              // 0x0028(0x000C) (ZeroConstructor, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraEffect");
		return ptr;
	}



};

// Class Niagara.NiagaraEventReceiverEmitterAction
// 0x0000 (FullSize[0x001C] - InheritedSize[0x001C])
class UNiagaraEventReceiverEmitterAction : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraEventReceiverEmitterAction");
		return ptr;
	}



};

// Class Niagara.NiagaraEventReceiverEmitterAction_SpawnParticles
// 0x0004 (FullSize[0x0020] - InheritedSize[0x001C])
class UNiagaraEventReceiverEmitterAction_SpawnParticles : public UNiagaraEventReceiverEmitterAction
{
public:
	uint32_t                                           NumParticles;                                              // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraEventReceiverEmitterAction_SpawnParticles");
		return ptr;
	}



};

// Class Niagara.NiagaraFunctionLibrary
// 0x0000 (FullSize[0x001C] - InheritedSize[0x001C])
class UNiagaraFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraFunctionLibrary");
		return ptr;
	}



	class UNiagaraComponent* STATIC_SpawnEffectAttached(class UNiagaraEffect* EffectTemplate, class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, TEnumAsByte<Engine_EAttachLocation> LocationType, bool bAutoDestroy);
	class UNiagaraComponent* STATIC_SpawnEffectAtLocation(class UObject* WorldContextObject, class UNiagaraEffect* EffectTemplate, const struct FVector& Location, const struct FRotator& Rotation, bool bAutoDestroy);
	void STATIC_SetUpdateScriptConstant(class UNiagaraComponent* Component, const struct FName& EmitterName, const struct FName& ConstantName, const struct FVector& Value);
};

// Class Niagara.NiagaraScriptSourceBase
// 0x0018 (FullSize[0x0034] - InheritedSize[0x001C])
class UNiagaraScriptSourceBase : public UObject
{
public:
	unsigned char                                      UnknownData_X49I[0x18];                                    // 0x001C(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraScriptSourceBase");
		return ptr;
	}



};

// Class Niagara.NiagaraSequence
// 0x0004 (FullSize[0x0020] - InheritedSize[0x001C])
class UNiagaraSequence : public UMovieSceneSequence
{
public:
	class UMovieScene*                                 MovieScene;                                                // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Niagara.NiagaraSequence");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
