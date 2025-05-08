#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PlayerState -FallbackName=PlayerState
#include "MM_PlayerState.generated.h"

UCLASS(Blueprintable)
class AMM_PlayerState : public APlayerState {
    GENERATED_BODY()
public:
    AMM_PlayerState(const FObjectInitializer& ObjectInitializer);

};

