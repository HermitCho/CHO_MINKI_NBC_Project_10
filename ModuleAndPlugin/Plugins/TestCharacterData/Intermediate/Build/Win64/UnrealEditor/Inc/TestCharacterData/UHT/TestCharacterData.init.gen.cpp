// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestCharacterData_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_TestCharacterData;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_TestCharacterData()
	{
		if (!Z_Registration_Info_UPackage__Script_TestCharacterData.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/TestCharacterData",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x63BED9FC,
				0x444915BD,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_TestCharacterData.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_TestCharacterData.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_TestCharacterData(Z_Construct_UPackage__Script_TestCharacterData, TEXT("/Script/TestCharacterData"), Z_Registration_Info_UPackage__Script_TestCharacterData, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x63BED9FC, 0x444915BD));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
