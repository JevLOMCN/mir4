#pragma once
#include "CoreMinimal.h"
#include "SubdividedWireEdge.generated.h"

USTRUCT(BlueprintType)
struct FSubdividedWireEdge {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EdgeVertex0PositionIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EdgeVertex1PositionIndex;
    
    EDITABLEMESH_API FSubdividedWireEdge();
};

