#pragma once
#include "CoreMinimal.h"
#include "MM_GameModeBase.h"
#include "MM_UnifiedGameMode.generated.h"

UCLASS(Blueprintable, NonTransient)
class AMM_UnifiedGameMode : public AMM_GameModeBase {
    GENERATED_BODY()
public:
    AMM_UnifiedGameMode(const FObjectInitializer& ObjectInitializer);

};

