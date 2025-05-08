#pragma once
#include "CoreMinimal.h"
#include "EnvQueryInstanceCache.generated.h"

class UEnvQuery;

USTRUCT(BlueprintType)
struct FEnvQueryInstanceCache {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* Template;
    
    AIMODULE_API FEnvQueryInstanceCache();
};

