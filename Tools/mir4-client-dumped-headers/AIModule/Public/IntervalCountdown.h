#pragma once
#include "CoreMinimal.h"
#include "IntervalCountdown.generated.h"

USTRUCT(BlueprintType)
struct FIntervalCountdown {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Interval;
    
    AIMODULE_API FIntervalCountdown();
};

