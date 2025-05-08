#include "AssetRegistryHelpers.h"

UAssetRegistryHelpers::UAssetRegistryHelpers() {
}

FSoftObjectPath UAssetRegistryHelpers::ToSoftObjectPath(const FAssetData& InAssetData) {
    return FSoftObjectPath{};
}

FARFilter UAssetRegistryHelpers::SetFilterTagsAndValues(const FARFilter& InFilter, const TArray<FTagAndValue>& InTagsAndValues) {
    return FARFilter{};
}

bool UAssetRegistryHelpers::isValid(const FAssetData& InAssetData) {
    return false;
}

bool UAssetRegistryHelpers::IsUAsset(const FAssetData& InAssetData) {
    return false;
}

bool UAssetRegistryHelpers::IsRedirector(const FAssetData& InAssetData) {
    return false;
}

bool UAssetRegistryHelpers::IsAssetLoaded(const FAssetData& InAssetData) {
    return false;
}

bool UAssetRegistryHelpers::GetTagValue(const FAssetData& InAssetData, const FName& InTagName, FString& OutTagValue) {
    return false;
}

FString UAssetRegistryHelpers::GetFullName(const FAssetData& InAssetData) {
    return TEXT("");
}

FString UAssetRegistryHelpers::GetExportTextName(const FAssetData& InAssetData) {
    return TEXT("");
}

UClass* UAssetRegistryHelpers::GetClass(const FAssetData& InAssetData) {
    return NULL;
}

TScriptInterface<IAssetRegistry> UAssetRegistryHelpers::GetAssetRegistry() {
    return NULL;
}

UObject* UAssetRegistryHelpers::GetAsset(const FAssetData& InAssetData) {
    return NULL;
}

FAssetData UAssetRegistryHelpers::CreateAssetData(const UObject* InAsset, bool bAllowBlueprintClass) {
    return FAssetData{};
}


