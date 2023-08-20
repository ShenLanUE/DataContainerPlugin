// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DataContainer.h"
#include "MyPrimaryDataAsset.generated.h"

/**
 * 
 */
UCLASS()
class SLDATAASSET_API UMyPrimaryDataAsset : public UPrimaryDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadOnly,Category="MyData",EditDefaultsOnly,Instanced,meta=(DisplayName = "特性数据"))
	TArray<UDataContainer*> DataContainers;
	
};
