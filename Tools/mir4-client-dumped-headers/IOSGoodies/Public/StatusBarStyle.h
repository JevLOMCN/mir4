#pragma once
#include "CoreMinimal.h"
#include "StatusBarStyle.generated.h"

UENUM(BlueprintType)
enum StatusBarStyle {
    BarStyleDefault,
    BarStyleLightContent,
    BarStyleDarkContent = 3,
};

