#pragma once
#include "CoreMinimal.h"
#include "ElementID.h"
#include "VertexID.generated.h"

USTRUCT(BlueprintType)
struct FVertexID : public FElementID {
    GENERATED_BODY()
public:
    MESHDESCRIPTION_API FVertexID();
};

