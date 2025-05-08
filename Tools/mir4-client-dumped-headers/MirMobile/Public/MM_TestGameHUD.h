#pragma once
#include "CoreMinimal.h"
#include "MM_HUDBase.h"
#include "MM_TestGameHUD.generated.h"

UCLASS(Blueprintable, NonTransient)
class AMM_TestGameHUD : public AMM_HUDBase {
    GENERATED_BODY()
public:
    AMM_TestGameHUD(const FObjectInitializer& ObjectInitializer);

};

