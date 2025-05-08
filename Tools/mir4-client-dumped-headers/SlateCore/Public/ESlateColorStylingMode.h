#pragma once
#include "CoreMinimal.h"
#include "ESlateColorStylingMode.generated.h"

UENUM(BlueprintType)
namespace ESlateColorStylingMode {
    enum Type {
        UseColor_Specified,
        UseColor_Specified_Link,
        UseColor_Foreground,
        UseColor_Foreground_Subdued,
    };
}

