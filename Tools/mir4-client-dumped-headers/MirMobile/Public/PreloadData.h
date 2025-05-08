#pragma once
#include "CoreMinimal.h"
#include "PreloadData.generated.h"

USTRUCT(BlueprintType)
struct FPreloadData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMaintenance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMaintenanceInLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ResourcePath;
    
    MIRMOBILE_API FPreloadData();
};

