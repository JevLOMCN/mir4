#pragma once
#include "CoreMinimal.h"
#include "Range_Float.generated.h"

USTRUCT(BlueprintType)
struct FRange_Float {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Max;
    
    UIPARTICLE_API FRange_Float();
};

