#pragma once
#include "CoreMinimal.h"
#include "MM_GameModeBase.h"
#include "MM_ClientTestGameMode.generated.h"

UCLASS(Blueprintable, NonTransient)
class AMM_ClientTestGameMode : public AMM_GameModeBase {
    GENERATED_BODY()
public:
    AMM_ClientTestGameMode(const FObjectInitializer& ObjectInitializer);

};

