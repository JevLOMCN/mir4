#pragma once
#include "CoreMinimal.h"
#include "ActivateTrigger.h"
#include "DoOnceTrigger.generated.h"

UCLASS(Blueprintable)
class ADoOnceTrigger : public AActivateTrigger {
    GENERATED_BODY()
public:
    ADoOnceTrigger(const FObjectInitializer& ObjectInitializer);

};

