#pragma once
#include "CoreMinimal.h"
#include "EStretchDirection.generated.h"

UENUM(BlueprintType)
namespace EStretchDirection {
    enum Type {
        Both,
        DownOnly,
        UpOnly,
    };
}

