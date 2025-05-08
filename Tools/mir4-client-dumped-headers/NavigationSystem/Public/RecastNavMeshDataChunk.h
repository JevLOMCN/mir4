#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NavigationDataChunk -FallbackName=NavigationDataChunk
#include "RecastNavMeshDataChunk.generated.h"

UCLASS(Blueprintable)
class NAVIGATIONSYSTEM_API URecastNavMeshDataChunk : public UNavigationDataChunk {
    GENERATED_BODY()
public:
    URecastNavMeshDataChunk();

};

