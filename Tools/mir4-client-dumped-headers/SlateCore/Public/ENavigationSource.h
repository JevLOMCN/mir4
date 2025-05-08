#pragma once
#include "CoreMinimal.h"
#include "ENavigationSource.generated.h"

UENUM(BlueprintType)
enum class ENavigationSource : uint8 {
    FocusedWidget,
    WidgetUnderCursor,
};

