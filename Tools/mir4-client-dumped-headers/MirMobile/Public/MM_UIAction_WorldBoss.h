#pragma once
#include "CoreMinimal.h"
#include "MM_UIAction_CommonDungeon.h"
#include "MM_UIAction_WorldBoss.generated.h"

UCLASS(Blueprintable)
class UMM_UIAction_WorldBoss : public UMM_UIAction_CommonDungeon {
    GENERATED_BODY()
public:
    UMM_UIAction_WorldBoss();

private:
    UFUNCTION(BlueprintCallable)
    void OnConfirmMove();
    
};

