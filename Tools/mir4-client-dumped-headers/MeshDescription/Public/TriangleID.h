#pragma once
#include "CoreMinimal.h"
#include "ElementID.h"
#include "TriangleID.generated.h"

USTRUCT(BlueprintType)
struct FTriangleID : public FElementID {
    GENERATED_BODY()
public:
    MESHDESCRIPTION_API FTriangleID();
};

