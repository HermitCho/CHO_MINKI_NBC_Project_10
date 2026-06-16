// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/CharacterData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEST_CharacterData_generated_h
#error "CharacterData.generated.h already included, missing '#pragma once' in CharacterData.h"
#endif
#define TEST_CharacterData_generated_h

#define FID_ModuleAndPlugin_Source_Test_Data_CharacterData_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCharacterData(); \
	friend struct Z_Construct_UClass_UCharacterData_Statics; \
public: \
	DECLARE_CLASS(UCharacterData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Test"), NO_API) \
	DECLARE_SERIALIZER(UCharacterData)


#define FID_ModuleAndPlugin_Source_Test_Data_CharacterData_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCharacterData(UCharacterData&&); \
	UCharacterData(const UCharacterData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharacterData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharacterData); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCharacterData) \
	NO_API virtual ~UCharacterData();


#define FID_ModuleAndPlugin_Source_Test_Data_CharacterData_h_7_PROLOG
#define FID_ModuleAndPlugin_Source_Test_Data_CharacterData_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ModuleAndPlugin_Source_Test_Data_CharacterData_h_10_INCLASS_NO_PURE_DECLS \
	FID_ModuleAndPlugin_Source_Test_Data_CharacterData_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEST_API UClass* StaticClass<class UCharacterData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ModuleAndPlugin_Source_Test_Data_CharacterData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
