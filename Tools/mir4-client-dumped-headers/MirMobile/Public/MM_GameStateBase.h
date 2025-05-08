#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameStateBase -FallbackName=GameStateBase
#include "MM_GameStateBase.generated.h"

UCLASS(Blueprintable)
class AMM_GameStateBase : public AGameStateBase {
    GENERATED_BODY()
public:
    AMM_GameStateBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnFinishedSequence();
    
};

