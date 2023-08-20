#pragma once
#include "CoreMinimal.h"
#include "AssetTypeActions_Base.h"
#include "MyPrimaryDataAsset.h"

class FMyAssetTypeActions : public FAssetTypeActions_Base
{
public:
	FMyAssetTypeActions(EAssetTypeCategories::Type InAssetCategory);

	virtual FColor GetTypeColor() const override {return FColor(97,85,212);}

	virtual void OpenAssetEditor(const TArray<UObject*>& InObjects, TSharedPtr<IToolkitHost> EditWithinLevelEditor) override;

	//资产类型操作实现
	virtual FText GetName() const override{return FText::FromName(TEXT("MyDataAsset"));}
	virtual UClass* GetSupportedClass() const override{return UMyPrimaryDataAsset::StaticClass();}
	virtual uint32 GetCategories() override{return MyAssetCategory;}

private:
	EAssetTypeCategories::Type MyAssetCategory;
};
