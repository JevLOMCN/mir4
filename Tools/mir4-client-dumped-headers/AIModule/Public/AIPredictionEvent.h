#pragma once
#include "CoreMinimal.h"
#include "AIPredictionEvent.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct AIMODULE_API FAIPredictionEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Requestor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* PredictedActor;
    
    FAIPredictionEvent();
};

