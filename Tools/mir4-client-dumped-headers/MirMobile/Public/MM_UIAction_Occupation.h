#pragma once
#include "CoreMinimal.h"
#include "MM_UIAction.h"
#include "MM_UIAction_Occupation.generated.h"

UCLASS(Blueprintable)
class UMM_UIAction_Occupation : public UMM_UIAction {
    GENERATED_BODY()
public:
    UMM_UIAction_Occupation();

    UFUNCTION(BlueprintCallable)
    void OnCloseOccupationWinPopup();
    
};

