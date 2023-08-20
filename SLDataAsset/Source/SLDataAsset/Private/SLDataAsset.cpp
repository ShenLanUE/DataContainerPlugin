// Copyright Epic Games, Inc. All Rights Reserved.

#include "SLDataAsset.h"

#include "AssetToolsModule.h"
#include "FMyAssetTypeActions.h"
#include "IAssetTools.h"

#define LOCTEXT_NAMESPACE "FSLDataAssetModule"

void FSLDataAssetModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	//加载资产工具接口
	IAssetTools& AssetTools = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools").Get();
	//定义资产的分类名
	EAssetTypeCategories::Type AssetCategory = AssetTools.RegisterAdvancedAssetCategory(FName(TEXT("MyAsset")),FText::FromName(TEXT("MyAsset")));
	TSharedPtr<FMyAssetTypeActions> actionType = MakeShareable(new FMyAssetTypeActions(AssetCategory));
	AssetTools.RegisterAssetTypeActions(actionType.ToSharedRef());

}

void FSLDataAssetModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FSLDataAssetModule, SLDataAsset)