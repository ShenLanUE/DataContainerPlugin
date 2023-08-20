#include "FMyAssetTypeActions.h"

FMyAssetTypeActions::FMyAssetTypeActions(EAssetTypeCategories::Type InAssetCategory)
{
	MyAssetCategory = InAssetCategory;
}

void FMyAssetTypeActions::OpenAssetEditor(const TArray<UObject*>& InObjects,
	TSharedPtr<IToolkitHost> EditWithinLevelEditor)
{
	FSimpleAssetEditor::CreateEditor(EToolkitMode::Standalone,EditWithinLevelEditor,InObjects);
}
