#pragma once
#include "CoreMinimal.h"
#include "AIStimulus.h"
#include "ActorPerceptionBlueprintInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FActorPerceptionBlueprintInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAIStimulus> LastSensedStimuli;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsHostile: 1;
    
    AIMODULE_API FActorPerceptionBlueprintInfo();
};

