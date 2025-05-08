#pragma once
#include "CoreMinimal.h"
#include "EEnvQueryTrace.generated.h"

UENUM(BlueprintType)
namespace EEnvQueryTrace {
    enum Type {
        None,
        Navigation,
        Geometry,
        NavigationOverLedges,
    };
}

