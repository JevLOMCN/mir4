#pragma once
#include "CoreMinimal.h"
#include "ElementID.h"
#include "EdgeID.generated.h"

USTRUCT(BlueprintType)
struct FEdgeID : public FElementID {
    GENERATED_BODY()
public:
    MESHDESCRIPTION_API FEdgeID();
};

