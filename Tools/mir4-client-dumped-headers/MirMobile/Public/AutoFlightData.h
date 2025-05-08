#pragma once
#include "CoreMinimal.h"
#include "AutoPathData.h"
#include "AutoFlightData.generated.h"

class AAutoFlightTrigger;

USTRUCT(BlueprintType)
struct FAutoFlightData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAutoPathData PathData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AAutoFlightTrigger*> LinkTriggers;
    
    MIRMOBILE_API FAutoFlightData();
};

