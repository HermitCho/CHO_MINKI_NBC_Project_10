// TestActor.cpp


#include "Test/Actor/TestActor.h"

ATestActor::ATestActor()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ATestActor::BeginPlay()
{
	Super::BeginPlay();
	
	//TestActor 생성 알림
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Red, TEXT("TestActor 생성 완료."));
	}
}

void ATestActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

