// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UserProfile.generated.h"

/**
 * UPROPERTY , UFUNCTION , UCLASS와 같은 UE4 MACRO들은 UserProfile.generated.h에 들어가게됨
 * generated.h.는 무조건 include 목록의 마지막에 속해야만함(안그러면 ERROR 발생)
 */
UCLASS(Blueprintable, BlueprintType) // Blueprintable : 이 키워드를 사용하면 Blueprint에서 변수로 사용 가능
class NEWUNREALPRACTICE_API UUserProfile : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Stats) float Armor; // EditAnywhere(archi type & Instance)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Stats) float HPMax; // BluePrintReadWrite( Read / Write in Blueprint)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Stats) FString Name;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Stats) TSubclassOf<UObject> UClassOfPlayer; // Displays any UClasses
	// Blueprint dropdown menu에서 Uobject 파생
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Stats) FStringClassReference UClassGameMode; // GameMode C++ Base Class

};
