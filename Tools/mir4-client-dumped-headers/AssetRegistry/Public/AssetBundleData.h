#pragma once
#include "CoreMinimal.h"
#include "AssetBundleEntry.h"
#include "AssetBundleData.generated.h"

USTRUCT(BlueprintType)
struct ASSETREGISTRY_API FAssetBundleData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAssetBundleEntry> Bundles;
    
    FAssetBundleData();
};

