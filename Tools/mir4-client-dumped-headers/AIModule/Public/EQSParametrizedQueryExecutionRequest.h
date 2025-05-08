#pragma once
#include "CoreMinimal.h"
#include "AIDynamicParam.h"
#include "BlackboardKeySelector.h"
#include "EEnvQueryRunMode.h"
#include "EQSParametrizedQueryExecutionRequest.generated.h"

class UEnvQuery;

USTRUCT(BlueprintType)
struct AIMODULE_API FEQSParametrizedQueryExecutionRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* QueryTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAIDynamicParam> QueryConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector EQSQueryBlackboardKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EEnvQueryRunMode::Type> RunMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseBBKeyForQueryTemplate: 1;
    
    FEQSParametrizedQueryExecutionRequest();
};

