#pragma once
#include "CoreMinimal.h"
#include "MM_GameStateBase.h"
#include "MM_TestGameState.generated.h"

UCLASS(Blueprintable)
class AMM_TestGameState : public AMM_GameStateBase {
    GENERATED_BODY()
public:
    AMM_TestGameState(const FObjectInitializer& ObjectInitializer);

};

