#pragma once
#include "CoreMinimal.h"
#include "LandscapeSplineSegmentConnection.generated.h"

class ULandscapeSplineControlPoint;

USTRUCT(BlueprintType)
struct FLandscapeSplineSegmentConnection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULandscapeSplineControlPoint* ControlPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TangentLen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SocketName;
    
    LANDSCAPE_API FLandscapeSplineSegmentConnection();
};

