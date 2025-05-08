#pragma once
#include "CoreMinimal.h"
#include "MM_GameModeBase.h"
#include "MM_TestGameMode.generated.h"

UCLASS(Blueprintable, NonTransient)
class AMM_TestGameMode : public AMM_GameModeBase {
    GENERATED_BODY()
public:
    AMM_TestGameMode(const FObjectInitializer& ObjectInitializer);

};

