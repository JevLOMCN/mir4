#pragma once
#include "CoreMinimal.h"
#include "ChaosDebugSubstepControl.generated.h"

USTRUCT(BlueprintType)
struct FChaosDebugSubstepControl {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPause;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSubstep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStep;
    
    CHAOSSOLVERENGINE_API FChaosDebugSubstepControl();
};

