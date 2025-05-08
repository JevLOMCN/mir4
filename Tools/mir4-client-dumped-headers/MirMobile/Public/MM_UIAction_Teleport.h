#pragma once
#include "CoreMinimal.h"
#include "MM_UIAction.h"
#include "MM_UIAction_Teleport.generated.h"

UCLASS(Blueprintable)
class UMM_UIAction_Teleport : public UMM_UIAction {
    GENERATED_BODY()
public:
    UMM_UIAction_Teleport();

    UFUNCTION(BlueprintCallable)
    void ShowTeleportPopupAndStopAutoMission();
    
    UFUNCTION(BlueprintCallable)
    void ShowDelayMessage();
    
};

