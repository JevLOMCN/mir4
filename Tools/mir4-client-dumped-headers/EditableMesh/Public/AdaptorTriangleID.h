#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MeshDescription -ObjectName=ElementID -FallbackName=ElementID
#include "AdaptorTriangleID.generated.h"

USTRUCT(BlueprintType)
struct FAdaptorTriangleID : public FElementID {
    GENERATED_BODY()
public:
    EDITABLEMESH_API FAdaptorTriangleID();
};

