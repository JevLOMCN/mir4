#pragma once
#include "CoreMinimal.h"
#include "EARPlaneOrientation.generated.h"

UENUM(BlueprintType)
enum class EARPlaneOrientation : uint8 {
    Horizontal,
    Vertical,
    Diagonal,
};

