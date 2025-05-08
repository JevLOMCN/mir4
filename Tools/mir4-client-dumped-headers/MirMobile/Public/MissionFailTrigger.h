#pragma once
#include "CoreMinimal.h"
#include "ActivateTrigger.h"
#include "MissionFailTrigger.generated.h"

UCLASS(Blueprintable)
class AMissionFailTrigger : public AActivateTrigger {
    GENERATED_BODY()
public:
    AMissionFailTrigger(const FObjectInitializer& ObjectInitializer);

};

