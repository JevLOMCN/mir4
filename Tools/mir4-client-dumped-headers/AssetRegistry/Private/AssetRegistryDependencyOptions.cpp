#include "AssetRegistryDependencyOptions.h"

FAssetRegistryDependencyOptions::FAssetRegistryDependencyOptions() {
    this->bIncludeSoftPackageReferences = false;
    this->bIncludeHardPackageReferences = false;
    this->bIncludeSearchableNames = false;
    this->bIncludeSoftManagementReferences = false;
    this->bIncludeHardManagementReferences = false;
}

