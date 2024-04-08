// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSecondProject_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SecondProject;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SecondProject()
	{
		if (!Z_Registration_Info_UPackage__Script_SecondProject.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/SecondProject",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x9C7D3A5F,
				0xA69F3525,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SecondProject.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_SecondProject.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SecondProject(Z_Construct_UPackage__Script_SecondProject, TEXT("/Script/SecondProject"), Z_Registration_Info_UPackage__Script_SecondProject, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x9C7D3A5F, 0xA69F3525));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
