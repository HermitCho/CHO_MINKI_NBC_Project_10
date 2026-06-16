// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class ModuleAndPluginTarget : TargetRules
{
	public ModuleAndPluginTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V5;
		IncludeOrderVersion = EngineIncludeOrderVersion.Unreal5_5;
		//Test 모듈도 빌드 대상으로 추가.
        ExtraModuleNames.AddRange(new string[] { "ModuleAndPlugin", "Test" });
    }
}