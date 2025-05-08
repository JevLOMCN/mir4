#pragma once
#include "CoreMinimal.h"
#include "MM_UIAction.h"
#include "MM_UIAction_HUD_Chat.generated.h"

UCLASS(Blueprintable)
class UMM_UIAction_HUD_Chat : public UMM_UIAction {
    GENERATED_BODY()
public:
    UMM_UIAction_HUD_Chat();

    UFUNCTION(BlueprintCallable)
    void OpenApplicationDetailSettings();
    
private:
    UFUNCTION(BlueprintCallable)
    void DequeueWorldBroadcastMessage();
    
};

