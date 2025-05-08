#pragma once
#include "CoreMinimal.h"
#include "MM_UIAction.h"
#include "MM_UIAction_Request.generated.h"

UCLASS(Blueprintable)
class UMM_UIAction_Request : public UMM_UIAction {
    GENERATED_BODY()
public:
    UMM_UIAction_Request();

    UFUNCTION(BlueprintCallable)
    void DelayShowMoveMessage();
    
};

