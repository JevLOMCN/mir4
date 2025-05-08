#pragma once
#include "CoreMinimal.h"
#include "MM_GameModeBase.h"
#include "MM_PreviewModeBase.generated.h"

UCLASS(Blueprintable, NonTransient)
class AMM_PreviewModeBase : public AMM_GameModeBase {
    GENERATED_BODY()
public:
    AMM_PreviewModeBase(const FObjectInitializer& ObjectInitializer);

};

