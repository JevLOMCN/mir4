#pragma once
#include "CoreMinimal.h"
#include "MM_GameModeBase.h"
#include "MM_BattleTestGameMode.generated.h"

UCLASS(Blueprintable, NonTransient)
class AMM_BattleTestGameMode : public AMM_GameModeBase {
    GENERATED_BODY()
public:
    AMM_BattleTestGameMode(const FObjectInitializer& ObjectInitializer);

};

