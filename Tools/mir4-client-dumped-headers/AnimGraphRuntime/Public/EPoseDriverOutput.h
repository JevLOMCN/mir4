#pragma once
#include "CoreMinimal.h"
#include "EPoseDriverOutput.generated.h"

UENUM(BlueprintType)
enum class EPoseDriverOutput : uint8 {
    DrivePoses,
    DriveCurves,
};

