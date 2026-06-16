#include "TestCharacterData.h"

// 플러그인 로드 시 초기화.
void FTestCharacterDataModule::StartupModule()
{
}

// 플러그인 언로드 시 자원 정리.
void FTestCharacterDataModule::ShutdownModule()
{
}

// C++ 모듈 클래스를 언리얼 엔진의 빌드 시스템과 리플렉션 시스템에 등록하는 매크로
// 첫 번째 인자는 구현한 모듈 클래스 이름이며, 두 번째 인자는 .uplugin 및 .Build.cs와 일치하는 모듈의 이름
IMPLEMENT_MODULE(FTestCharacterDataModule, TestCharacterData)