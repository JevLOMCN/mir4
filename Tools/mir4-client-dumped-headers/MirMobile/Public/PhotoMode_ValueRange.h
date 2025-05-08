#pragma once
#include "CoreMinimal.h"
#include "PhotoMode_ValueRange.generated.h"

USTRUCT(BlueprintType)
struct FPhotoMode_ValueRange {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxValue;
    
    MIRMOBILE_API FPhotoMode_ValueRange();
};

