// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DataContainer.generated.h"

/**
 * 
 */
UCLASS(Blueprintable,DefaultToInstanced,EditInlineNew,Abstract,meta=(DisplayName = "我的数据驱动模板"))
class SLDATAASSET_API UDataContainer : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadOnly,Category="MyData",EditDefaultsOnly,Instanced,meta=(DisplayName = "特性数据"))
	TArray<UDataContainer*> DataContainers;
};
