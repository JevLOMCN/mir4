#pragma once
#include "CoreMinimal.h"
#include "MM_UIAction.h"
#include "MM_UIAction_Mail.generated.h"

UCLASS(Blueprintable)
class UMM_UIAction_Mail : public UMM_UIAction {
    GENERATED_BODY()
public:
    UMM_UIAction_Mail();

    UFUNCTION(BlueprintCallable)
    void DoDeleteMail();
    
};

