#pragma once
#include "CoreMinimal.h"
#include "EUserInterfaceActionType.generated.h"

UENUM(BlueprintType)
enum class EUserInterfaceActionType : uint8 {
    None,
    Button,
    ToggleButton,
    RadioButton,
    Check,
    CollapsedButton,
};

