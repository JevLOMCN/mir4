#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SpectatorPawn -FallbackName=SpectatorPawn
#include "MM_SpectatorPawn.generated.h"

UCLASS(Blueprintable)
class AMM_SpectatorPawn : public ASpectatorPawn {
    GENERATED_BODY()
public:
    AMM_SpectatorPawn(const FObjectInitializer& ObjectInitializer);

};

