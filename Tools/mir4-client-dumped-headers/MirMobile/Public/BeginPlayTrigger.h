#pragma once
#include "CoreMinimal.h"
#include "ActivateTrigger.h"
#include "BeginPlayTrigger.generated.h"

UCLASS(Blueprintable)
class ABeginPlayTrigger : public AActivateTrigger {
    GENERATED_BODY()
public:
    ABeginPlayTrigger(const FObjectInitializer& ObjectInitializer);

};

