#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HUD -FallbackName=HUD
#include "MM_HUDBase.generated.h"

UCLASS(Blueprintable, NonTransient)
class AMM_HUDBase : public AHUD {
    GENERATED_BODY()
public:
    AMM_HUDBase(const FObjectInitializer& ObjectInitializer);

};

