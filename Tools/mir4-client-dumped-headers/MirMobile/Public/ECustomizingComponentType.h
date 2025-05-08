#pragma once
#include "CoreMinimal.h"
#include "ECustomizingComponentType.generated.h"

UENUM()
enum class ECustomizingComponentType : int32 {
    LIST,
    PALETTE,
    SLIDER,
    PICKER,
    LIST_MESH,
    LIST_COSTUME,
    LIST_ANI,
    COSTUME_DYE,
    NONE,
};

