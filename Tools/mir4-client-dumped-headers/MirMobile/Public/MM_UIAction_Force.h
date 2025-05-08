#pragma once
#include "CoreMinimal.h"
#include "MM_UIAction.h"
#include "MM_UIAction_Force.generated.h"

UCLASS(Blueprintable)
class UMM_UIAction_Force : public UMM_UIAction {
    GENERATED_BODY()
public:
    UMM_UIAction_Force();

    UFUNCTION(BlueprintCallable)
    void OnClick_SendSkip();
    
};

