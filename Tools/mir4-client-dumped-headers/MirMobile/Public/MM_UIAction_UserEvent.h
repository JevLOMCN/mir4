#pragma once
#include "CoreMinimal.h"
#include "MM_UIAction.h"
#include "MM_UIAction_UserEvent.generated.h"

UCLASS(Blueprintable)
class UMM_UIAction_UserEvent : public UMM_UIAction {
    GENERATED_BODY()
public:
    UMM_UIAction_UserEvent();

    UFUNCTION(BlueprintCallable)
    void OnBenedictionConfrimOK();
    
};

