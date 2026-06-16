using UnrealBuildTool;

public class Temporary : ModuleRules
{
    public Temporary(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        // 플러그인에서 공용 및 프라이빗으로 사용할 헤더 경로를 설정합니다. 현재는 비워두어도 무방합니다.
        PublicIncludePaths.AddRange(new string[] { });
        PrivateIncludePaths.AddRange(new string[] { });

        // 플러그인이 작동하는 데 필요한 언리얼 엔진의 기초 모듈들을 등록합니다.
        PublicDependencyModuleNames.AddRange(
            new string[]
            {
                "Core",
                "CoreUObject",
                "Engine"
            }
        );

        PrivateDependencyModuleNames.AddRange(new string[] { });
    }
}