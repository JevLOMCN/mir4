#pragma once
#include "CoreMinimal.h"
#include "EUINavigationAction.generated.h"

UENUM(BlueprintType)
enum class EUINavigationAction : uint8 {
    Accept,
    Back,
    Num,
    Invalid,
};

