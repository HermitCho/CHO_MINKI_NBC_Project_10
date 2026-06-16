// Fill out your copyright notice in the Description page of Project Settings.


#include "Test/Data/CharacterData.h"

//생성 시, 데이터 초기화
UCharacterData::UCharacterData()
{
	CharacterName = TEXT("Default Character for Module");
	Level = 1;
	HP = 100;
	ATK = 10;
}