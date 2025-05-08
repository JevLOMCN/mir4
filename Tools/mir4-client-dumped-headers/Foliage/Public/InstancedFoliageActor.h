#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "InstancedFoliageActor.generated.h"

UCLASS(Blueprintable, MinimalAPI, NotPlaceable)
class AInstancedFoliageActor : public AActor {
    GENERATED_BODY()
public:
    AInstancedFoliageActor(const FObjectInitializer& ObjectInitializer);

};

