#pragma once
#include "CoreMinimal.h"
#include "AdaptorPolygon2Group.generated.h"

USTRUCT(BlueprintType)
struct FAdaptorPolygon2Group {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 RenderingSectionIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaterialIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxTriangles;
    
    EDITABLEMESH_API FAdaptorPolygon2Group();
};

