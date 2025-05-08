#pragma once
#include "CoreMinimal.h"
#include "EARWorldAlignment.generated.h"

UENUM(BlueprintType)
enum class EARWorldAlignment : uint8 {
    Gravity,
    GravityAndHeading,
    Camera,
};

