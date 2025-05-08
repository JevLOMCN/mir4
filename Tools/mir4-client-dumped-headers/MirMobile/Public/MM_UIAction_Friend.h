#pragma once
#include "CoreMinimal.h"
#include "MM_UIAction.h"
#include "MM_UIAction_Friend.generated.h"

UCLASS(Blueprintable)
class UMM_UIAction_Friend : public UMM_UIAction {
    GENERATED_BODY()
public:
    UMM_UIAction_Friend();

    UFUNCTION(BlueprintCallable)
    void OnRequestAllOK();
    
};

