#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CharacterData.generated.h"

UCLASS()
class TEST_API UCharacterData : public UObject
{
	GENERATED_BODY()

public:
	UCharacterData();

	UPROPERTY()
	FString CharacterName;

	UPROPERTY()
	int32 Level;

	UPROPERTY()
	int32 HP;

	UPROPERTY()
	int32 ATK;

};