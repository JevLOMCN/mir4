#pragma once
#include "CoreMinimal.h"
#include "LandscapeSplineConnection.generated.h"

class ULandscapeSplineSegment;

USTRUCT(BlueprintType)
struct FLandscapeSplineConnection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULandscapeSplineSegment* Segment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 End: 1;
    
    LANDSCAPE_API FLandscapeSplineConnection();
};

