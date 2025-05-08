#pragma once
#include "CoreMinimal.h"
#include "EPoseDriverSource.generated.h"

UENUM(BlueprintType)
enum class EPoseDriverSource : uint8 {
    Rotation,
    Translation,
};

