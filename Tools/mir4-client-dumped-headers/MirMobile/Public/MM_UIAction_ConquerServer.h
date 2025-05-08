#pragma once
#include "CoreMinimal.h"
#include "MM_UIAction.h"
#include "MM_UIAction_ConquerServer.generated.h"

UCLASS(Blueprintable)
class MIRMOBILE_API UMM_UIAction_ConquerServer : public UMM_UIAction {
    GENERATED_BODY()
public:
    UMM_UIAction_ConquerServer();

    UFUNCTION(BlueprintCallable)
    void SendConquerServerExit();
    
};

