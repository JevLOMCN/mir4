#pragma once
#include "CoreMinimal.h"
#include "EHMDTrackingOrigin.generated.h"

UENUM(BlueprintType)
namespace EHMDTrackingOrigin {
    enum Type {
        Floor,
        Eye,
        Stage,
    };
}

