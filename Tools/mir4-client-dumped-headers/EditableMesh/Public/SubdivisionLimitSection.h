#pragma once
#include "CoreMinimal.h"
#include "SubdividedQuad.h"
#include "SubdivisionLimitSection.generated.h"

USTRUCT(BlueprintType)
struct FSubdivisionLimitSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSubdividedQuad> SubdividedQuads;
    
    EDITABLEMESH_API FSubdivisionLimitSection();
};

