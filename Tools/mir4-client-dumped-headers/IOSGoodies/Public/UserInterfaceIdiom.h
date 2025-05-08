#pragma once
#include "CoreMinimal.h"
#include "UserInterfaceIdiom.generated.h"

UENUM(BlueprintType)
enum UserInterfaceIdiom {
    Unspecified = -1,
    Phone = 0,
    Pad,
    AppleTV,
    CarPlay,
};

