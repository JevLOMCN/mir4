#pragma once
#include "CoreMinimal.h"
#include "ElementID.h"
#include "PolygonID.generated.h"

USTRUCT(BlueprintType)
struct FPolygonID : public FElementID {
    GENERATED_BODY()
public:
    MESHDESCRIPTION_API FPolygonID();
};

