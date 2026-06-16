#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CharacterDataPlug.generated.h"

UCLASS()
class TESTCHARACTERDATA_API UCharacterDataPlug : public UObject
{
	GENERATED_BODY()

public:
	UCharacterDataPlug();

	UPROPERTY()
	FString CharacterName;

	UPROPERTY()
	int32 Level;

	UPROPERTY()
	int32 HP;

	UPROPERTY()
	int32 ATK;
};