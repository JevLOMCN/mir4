#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "GhostStaticMesh.generated.h"

UCLASS(Blueprintable)
class AGhostStaticMesh : public AActor {
    GENERATED_BODY()
public:
    AGhostStaticMesh(const FObjectInitializer& ObjectInitializer);

};

