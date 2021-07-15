// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UserProfile.generated.h"

/**
 * UPROPERTY , UFUNCTION , UCLASS�� ���� UE4 MACRO���� UserProfile.generated.h�� ���Ե�
 * generated.h.�� ������ include ����� �������� ���ؾ߸���(�ȱ׷��� ERROR �߻�)
 */
UCLASS(Blueprintable) // Blueprintable : �� Ű���带 ����ϸ� Blueprint���� ������ ��� ����
class NEWUNREALPRACTICE_API UUserProfile : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Stats) float Armor; // EditAnywhere(archi type & Instance)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Stats) float HPMax; // BluePrintReadWrite( Read / Write in Blueprint)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Stats) FString Name;
};
