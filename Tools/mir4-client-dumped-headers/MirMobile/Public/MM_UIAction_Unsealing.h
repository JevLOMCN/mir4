#pragma once
#include "CoreMinimal.h"
#include "MM_UIAction.h"
#include "MM_UIAction_Unsealing.generated.h"

UCLASS(Blueprintable)
class UMM_UIAction_Unsealing : public UMM_UIAction {
    GENERATED_BODY()
public:
    UMM_UIAction_Unsealing();

    UFUNCTION(BlueprintCallable)
    void Send_UnsealingAccelerate();
    
};

