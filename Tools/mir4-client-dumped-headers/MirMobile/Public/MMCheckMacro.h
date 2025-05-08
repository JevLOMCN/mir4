#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "MMCheckMacro.generated.h"

UCLASS(Blueprintable)
class AMMCheckMacro : public AActor {
    GENERATED_BODY()
public:
    AMMCheckMacro(const FObjectInitializer& ObjectInitializer);

};

