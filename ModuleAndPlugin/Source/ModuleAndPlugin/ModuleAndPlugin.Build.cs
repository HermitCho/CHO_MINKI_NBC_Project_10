// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ModuleAndPlugin : ModuleRules
{
	public ModuleAndPlugin(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		//Test 모듈을 빌드하기 위해 추가.
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput", "Test", "TestCharacterData" });
        //"Temporary"는 헤더 파일을 직접 #include 하진 않으므로 범위 안에 추가하진 않음.
    }
}
