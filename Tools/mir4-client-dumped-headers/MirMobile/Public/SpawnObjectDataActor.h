#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "SpawnObjectDataActor.generated.h"

UCLASS(Blueprintable)
class ASpawnObjectDataActor : public AActor {
    GENERATED_BODY()
public:
    ASpawnObjectDataActor(const FObjectInitializer& ObjectInitializer);

};

