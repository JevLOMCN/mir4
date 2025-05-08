#pragma once
#include "CoreMinimal.h"
#include "ElementID.h"
#include "VertexInstanceID.generated.h"

USTRUCT(BlueprintType)
struct FVertexInstanceID : public FElementID {
    GENERATED_BODY()
public:
    MESHDESCRIPTION_API FVertexInstanceID();
};

