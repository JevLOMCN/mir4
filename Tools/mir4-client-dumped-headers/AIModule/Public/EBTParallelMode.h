#pragma once
#include "CoreMinimal.h"
#include "EBTParallelMode.generated.h"

UENUM(BlueprintType)
namespace EBTParallelMode {
    enum Type {
        AbortBackground,
        WaitForBackground,
    };
}

