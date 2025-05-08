#pragma once
#include "CoreMinimal.h"
#include "ELandscapeLODFalloff.generated.h"

UENUM(BlueprintType)
namespace ELandscapeLODFalloff {
    enum Type {
        Linear,
        SquareRoot,
    };
}

