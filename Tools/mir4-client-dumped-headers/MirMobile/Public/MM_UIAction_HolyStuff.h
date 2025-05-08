#pragma once
#include "CoreMinimal.h"
#include "MM_UIAction.h"
#include "MM_UIAction_HolyStuff.generated.h"

UCLASS(Blueprintable)
class UMM_UIAction_HolyStuff : public UMM_UIAction {
    GENERATED_BODY()
public:
    UMM_UIAction_HolyStuff();

    UFUNCTION(BlueprintCallable)
    void OnClosedLevelUpResult(bool bIsSuccess);
    
};

