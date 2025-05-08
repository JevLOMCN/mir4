#pragma once
#include "CoreMinimal.h"
#include "MM_UIAction.h"
#include "MM_UIAction_Party.generated.h"

UCLASS(Blueprintable)
class UMM_UIAction_Party : public UMM_UIAction {
    GENERATED_BODY()
public:
    UMM_UIAction_Party();

    UFUNCTION(BlueprintCallable)
    void DoLeave(bool bOccupation);
    
};

