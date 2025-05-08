#pragma once
#include "CoreMinimal.h"
#include "MM_GameStateBase.h"
#include "MM_InGameState.generated.h"

UCLASS(Blueprintable)
class AMM_InGameState : public AMM_GameStateBase {
    GENERATED_BODY()
public:
    AMM_InGameState(const FObjectInitializer& ObjectInitializer);

};

