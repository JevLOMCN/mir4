#pragma once
#include "CoreMinimal.h"
#include "BTDecorator.h"
#include "BTDecorator_Loop.generated.h"

UCLASS(Blueprintable)
class AIMODULE_API UBTDecorator_Loop : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumLoops;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInfiniteLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InfiniteLoopTimeoutTime;
    
    UBTDecorator_Loop();

};

