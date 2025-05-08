#pragma once
#include "CoreMinimal.h"
#include "EPawnActionFailHandling.generated.h"

UENUM(BlueprintType)
namespace EPawnActionFailHandling {
    enum Type {
        RequireSuccess,
        IgnoreFailure,
    };
}

