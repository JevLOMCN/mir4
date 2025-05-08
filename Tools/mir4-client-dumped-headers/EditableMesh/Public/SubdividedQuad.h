#pragma once
#include "CoreMinimal.h"
#include "SubdividedQuadVertex.h"
#include "SubdividedQuad.generated.h"

USTRUCT(BlueprintType)
struct FSubdividedQuad {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSubdividedQuadVertex QuadVertex0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSubdividedQuadVertex QuadVertex1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSubdividedQuadVertex QuadVertex2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSubdividedQuadVertex QuadVertex3;
    
    EDITABLEMESH_API FSubdividedQuad();
};

