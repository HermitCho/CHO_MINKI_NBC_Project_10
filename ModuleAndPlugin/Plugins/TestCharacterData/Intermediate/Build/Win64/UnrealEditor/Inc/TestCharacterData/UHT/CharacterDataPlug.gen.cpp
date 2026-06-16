// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestCharacterData/Public/CharacterDataPlug.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterDataPlug() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
TESTCHARACTERDATA_API UClass* Z_Construct_UClass_UCharacterDataPlug();
TESTCHARACTERDATA_API UClass* Z_Construct_UClass_UCharacterDataPlug_NoRegister();
UPackage* Z_Construct_UPackage__Script_TestCharacterData();
// End Cross Module References

// Begin Class UCharacterDataPlug
void UCharacterDataPlug::StaticRegisterNativesUCharacterDataPlug()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCharacterDataPlug);
UClass* Z_Construct_UClass_UCharacterDataPlug_NoRegister()
{
	return UCharacterDataPlug::StaticClass();
}
struct Z_Construct_UClass_UCharacterDataPlug_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "CharacterDataPlug.h" },
		{ "ModuleRelativePath", "Public/CharacterDataPlug.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterName_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterDataPlug.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterDataPlug.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HP_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterDataPlug.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ATK_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterDataPlug.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CharacterName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Level;
	static const UECodeGen_Private::FIntPropertyParams NewProp_HP;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ATK;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterDataPlug>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCharacterDataPlug_Statics::NewProp_CharacterName = { "CharacterName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterDataPlug, CharacterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterName_MetaData), NewProp_CharacterName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCharacterDataPlug_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterDataPlug, Level), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Level_MetaData), NewProp_Level_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCharacterDataPlug_Statics::NewProp_HP = { "HP", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterDataPlug, HP), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HP_MetaData), NewProp_HP_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCharacterDataPlug_Statics::NewProp_ATK = { "ATK", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterDataPlug, ATK), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ATK_MetaData), NewProp_ATK_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterDataPlug_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterDataPlug_Statics::NewProp_CharacterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterDataPlug_Statics::NewProp_Level,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterDataPlug_Statics::NewProp_HP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterDataPlug_Statics::NewProp_ATK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterDataPlug_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCharacterDataPlug_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_TestCharacterData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterDataPlug_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharacterDataPlug_Statics::ClassParams = {
	&UCharacterDataPlug::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCharacterDataPlug_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterDataPlug_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterDataPlug_Statics::Class_MetaDataParams), Z_Construct_UClass_UCharacterDataPlug_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCharacterDataPlug()
{
	if (!Z_Registration_Info_UClass_UCharacterDataPlug.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharacterDataPlug.OuterSingleton, Z_Construct_UClass_UCharacterDataPlug_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCharacterDataPlug.OuterSingleton;
}
template<> TESTCHARACTERDATA_API UClass* StaticClass<UCharacterDataPlug>()
{
	return UCharacterDataPlug::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterDataPlug);
UCharacterDataPlug::~UCharacterDataPlug() {}
// End Class UCharacterDataPlug

// Begin Registration
struct Z_CompiledInDeferFile_FID_ModuleAndPlugin_Plugins_TestCharacterData_Source_TestCharacterData_Public_CharacterDataPlug_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCharacterDataPlug, UCharacterDataPlug::StaticClass, TEXT("UCharacterDataPlug"), &Z_Registration_Info_UClass_UCharacterDataPlug, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacterDataPlug), 4266883233U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ModuleAndPlugin_Plugins_TestCharacterData_Source_TestCharacterData_Public_CharacterDataPlug_h_2594209786(TEXT("/Script/TestCharacterData"),
	Z_CompiledInDeferFile_FID_ModuleAndPlugin_Plugins_TestCharacterData_Source_TestCharacterData_Public_CharacterDataPlug_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ModuleAndPlugin_Plugins_TestCharacterData_Source_TestCharacterData_Public_CharacterDataPlug_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
