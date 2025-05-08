#pragma once
#include "CoreMinimal.h"
#include "ElementID.h"
#include "PolygonGroupID.generated.h"

USTRUCT(BlueprintType)
struct FPolygonGroupID : public FElementID {
    GENERATED_BODY()
public:
    MESHDESCRIPTION_API FPolygonGroupID();
};

