#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "GhostTrailData.h"
#include "GhostSkeletalMesh.generated.h"

UCLASS(Blueprintable)
class AGhostSkeletalMesh : public AActor {
    GENERATED_BODY()
public:
    AGhostSkeletalMesh(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetGhostTrailEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetGhostTrailData(FGhostTrailData GhostChar, FGhostTrailData GhostWpn);
    
};

