#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FTemporaryModule : public IModuleInterface
{
public:
	// 플러그인이 메모리에 로드될 때 호출되는 함수입니다.
	virtual void StartupModule() override;

	// 플러그인이 메모리에서 해제될 때 호출되는 함수입니다.
	virtual void ShutdownModule() override;
};