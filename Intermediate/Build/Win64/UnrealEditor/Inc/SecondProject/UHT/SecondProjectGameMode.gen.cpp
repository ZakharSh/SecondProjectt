// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SecondProject/SecondProjectGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSecondProjectGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	SECONDPROJECT_API UClass* Z_Construct_UClass_ASecondProjectGameMode();
	SECONDPROJECT_API UClass* Z_Construct_UClass_ASecondProjectGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SecondProject();
// End Cross Module References
	void ASecondProjectGameMode::StaticRegisterNativesASecondProjectGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASecondProjectGameMode);
	UClass* Z_Construct_UClass_ASecondProjectGameMode_NoRegister()
	{
		return ASecondProjectGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ASecondProjectGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASecondProjectGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SecondProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASecondProjectGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASecondProjectGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "SecondProjectGameMode.h" },
		{ "ModuleRelativePath", "SecondProjectGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASecondProjectGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASecondProjectGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASecondProjectGameMode_Statics::ClassParams = {
		&ASecondProjectGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASecondProjectGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ASecondProjectGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ASecondProjectGameMode()
	{
		if (!Z_Registration_Info_UClass_ASecondProjectGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASecondProjectGameMode.OuterSingleton, Z_Construct_UClass_ASecondProjectGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASecondProjectGameMode.OuterSingleton;
	}
	template<> SECONDPROJECT_API UClass* StaticClass<ASecondProjectGameMode>()
	{
		return ASecondProjectGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASecondProjectGameMode);
	ASecondProjectGameMode::~ASecondProjectGameMode() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_SecondProject_Source_SecondProject_SecondProjectGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_SecondProject_Source_SecondProject_SecondProjectGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASecondProjectGameMode, ASecondProjectGameMode::StaticClass, TEXT("ASecondProjectGameMode"), &Z_Registration_Info_UClass_ASecondProjectGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASecondProjectGameMode), 3241304092U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_SecondProject_Source_SecondProject_SecondProjectGameMode_h_330811188(TEXT("/Script/SecondProject"),
		Z_CompiledInDeferFile_FID_UnrealProjects_SecondProject_Source_SecondProject_SecondProjectGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_SecondProject_Source_SecondProject_SecondProjectGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
