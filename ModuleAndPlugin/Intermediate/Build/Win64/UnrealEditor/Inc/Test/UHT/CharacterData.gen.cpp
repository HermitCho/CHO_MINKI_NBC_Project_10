// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Test/Data/CharacterData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterData() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
TEST_API UClass* Z_Construct_UClass_UCharacterData();
TEST_API UClass* Z_Construct_UClass_UCharacterData_NoRegister();
UPackage* Z_Construct_UPackage__Script_Test();
// End Cross Module References

// Begin Class UCharacterData
void UCharacterData::StaticRegisterNativesUCharacterData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCharacterData);
UClass* Z_Construct_UClass_UCharacterData_NoRegister()
{
	return UCharacterData::StaticClass();
}
struct Z_Construct_UClass_UCharacterData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Data/CharacterData.h" },
		{ "ModuleRelativePath", "Data/CharacterData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterName_MetaData[] = {
		{ "ModuleRelativePath", "Data/CharacterData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[] = {
		{ "ModuleRelativePath", "Data/CharacterData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HP_MetaData[] = {
		{ "ModuleRelativePath", "Data/CharacterData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ATK_MetaData[] = {
		{ "ModuleRelativePath", "Data/CharacterData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CharacterName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Level;
	static const UECodeGen_Private::FIntPropertyParams NewProp_HP;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ATK;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCharacterData_Statics::NewProp_CharacterName = { "CharacterName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterData, CharacterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterName_MetaData), NewProp_CharacterName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCharacterData_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterData, Level), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Level_MetaData), NewProp_Level_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCharacterData_Statics::NewProp_HP = { "HP", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterData, HP), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HP_MetaData), NewProp_HP_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCharacterData_Statics::NewProp_ATK = { "ATK", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterData, ATK), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ATK_MetaData), NewProp_ATK_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterData_Statics::NewProp_CharacterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterData_Statics::NewProp_Level,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterData_Statics::NewProp_HP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterData_Statics::NewProp_ATK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCharacterData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Test,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharacterData_Statics::ClassParams = {
	&UCharacterData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCharacterData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterData_Statics::Class_MetaDataParams), Z_Construct_UClass_UCharacterData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCharacterData()
{
	if (!Z_Registration_Info_UClass_UCharacterData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharacterData.OuterSingleton, Z_Construct_UClass_UCharacterData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCharacterData.OuterSingleton;
}
template<> TEST_API UClass* StaticClass<UCharacterData>()
{
	return UCharacterData::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterData);
UCharacterData::~UCharacterData() {}
// End Class UCharacterData

// Begin Registration
struct Z_CompiledInDeferFile_FID_ModuleAndPlugin_Source_Test_Data_CharacterData_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCharacterData, UCharacterData::StaticClass, TEXT("UCharacterData"), &Z_Registration_Info_UClass_UCharacterData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacterData), 1415314159U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ModuleAndPlugin_Source_Test_Data_CharacterData_h_1874037079(TEXT("/Script/Test"),
	Z_CompiledInDeferFile_FID_ModuleAndPlugin_Source_Test_Data_CharacterData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ModuleAndPlugin_Source_Test_Data_CharacterData_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
