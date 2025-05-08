#pragma once
#include "CoreMinimal.h"
#include "ActivateTrigger.h"
#include "PcWarpTrigger.generated.h"

UCLASS(Blueprintable)
class APcWarpTrigger : public AActivateTrigger {
    GENERATED_BODY()
public:
    APcWarpTrigger(const FObjectInitializer& ObjectInitializer);

};

