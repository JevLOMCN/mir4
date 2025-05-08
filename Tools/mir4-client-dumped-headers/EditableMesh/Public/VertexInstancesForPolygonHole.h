#pragma once
#include "CoreMinimal.h"
#include "VertexIndexAndInstanceID.h"
#include "VertexInstancesForPolygonHole.generated.h"

USTRUCT(BlueprintType)
struct FVertexInstancesForPolygonHole {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVertexIndexAndInstanceID> VertexIndicesAndInstanceIDs;
    
    EDITABLEMESH_API FVertexInstancesForPolygonHole();
};

