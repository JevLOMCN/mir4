#pragma once
#include "CoreMinimal.h"
#include "MM_UIAction_CommonDungeon.h"
#include "MM_UIAction_SecretDungeon.generated.h"

UCLASS(Blueprintable)
class UMM_UIAction_SecretDungeon : public UMM_UIAction_CommonDungeon {
    GENERATED_BODY()
public:
    UMM_UIAction_SecretDungeon();

    UFUNCTION(BlueprintCallable)
    void StopAutoMission();
    
    UFUNCTION(BlueprintCallable)
    void OnClickConfirmEnter();
    
};

