#pragma once
#include "CoreMinimal.h"
#include "Range_Float.h"
#include "ScalarParamFloat.generated.h"

USTRUCT(BlueprintType)
struct FScalarParamFloat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ScalarParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRange_Float Value;
    
    UIPARTICLE_API FScalarParamFloat();
};

