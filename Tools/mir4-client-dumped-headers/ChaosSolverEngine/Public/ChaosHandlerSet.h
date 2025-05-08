#pragma once
#include "CoreMinimal.h"
#include "ChaosHandlerSet.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FChaosHandlerSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<UObject*> ChaosHandlers;
    
    CHAOSSOLVERENGINE_API FChaosHandlerSet();
};

