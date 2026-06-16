#include "Temporary.h"

void FTemporaryModule::StartupModule()
{
	// 플러그인 로드 시 초기화할 로직이 있다면 여기에 작성합니다.
}

void FTemporaryModule::ShutdownModule()
{
	// 플러그인 언로드 시 자원을 정리할 로직이 있다면 여기에 작성합니다.
}

// 첫 번째 인자는 구현한 모듈 클래스 이름이며, 두 번째 인자는 .uplugin 및 .Build.cs와 일치하는 모듈의 이름입니다.
IMPLEMENT_MODULE(FTemporaryModule, Temporary)