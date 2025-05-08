#pragma once
#include "CoreMinimal.h"
#include "RenderingPolygonGroup.generated.h"

USTRUCT(BlueprintType)
struct FRenderingPolygonGroup {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 RenderingSectionIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaterialIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxTriangles;
    
    EDITABLEMESH_API FRenderingPolygonGroup();
};

