#pragma once
#include "CoreMinimal.h"
#include "MeshElementAttributeList.h"
#include "VertexAttributesForPolygonHole.generated.h"

USTRUCT(BlueprintType)
struct FVertexAttributesForPolygonHole {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMeshElementAttributeList> VertexAttributeList;
    
    EDITABLEMESH_API FVertexAttributesForPolygonHole();
};

