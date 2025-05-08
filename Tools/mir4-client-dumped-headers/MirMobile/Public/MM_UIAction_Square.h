#pragma once
#include "CoreMinimal.h"
#include "MM_UIAction_CommonDungeon.h"
#include "MM_UIAction_Square.generated.h"

UCLASS(Blueprintable)
class UMM_UIAction_Square : public UMM_UIAction_CommonDungeon {
    GENERATED_BODY()
public:
    UMM_UIAction_Square();

    UFUNCTION(BlueprintCallable)
    void StopAutoMission();
    
    UFUNCTION(BlueprintCallable)
    void OnConfirmLeave();
    
    UFUNCTION(BlueprintCallable)
    void OnConfirmEnter();
    
};

