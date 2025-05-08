#pragma once
#include "CoreMinimal.h"
#include "GhostTrailMaterialParameterData.generated.h"

USTRUCT(BlueprintType)
struct FGhostTrailMaterialParameterData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BeginValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EndValue;
    
    MIRMOBILE_API FGhostTrailMaterialParameterData();
};

