#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "AROriginActor.generated.h"

UCLASS(Blueprintable)
class AUGMENTEDREALITY_API AAROriginActor : public AActor {
    GENERATED_BODY()
public:
    AAROriginActor(const FObjectInitializer& ObjectInitializer);

};

