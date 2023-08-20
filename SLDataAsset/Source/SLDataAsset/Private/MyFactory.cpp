// Fill out your copyright notice in the Description page of Project Settings.


#include "MyFactory.h"

#include "MyPrimaryDataAsset.h"

UMyFactory::UMyFactory()
{
	bCreateNew = true;
	bEditAfterNew = true;
	SupportedClass = UMyPrimaryDataAsset::StaticClass();
}

UObject* UMyFactory::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags,
                                      UObject* Context, FFeedbackContext* Warn)
{
	UMyPrimaryDataAsset* LocalDataAsset = NewObject<UMyPrimaryDataAsset>(InParent,InClass,InName,Flags | RF_Transactional);
	return LocalDataAsset;
}
