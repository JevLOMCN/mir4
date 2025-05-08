#pragma once
#include "CoreMinimal.h"
#include "ESlateParentWindowSearchMethod.generated.h"

UENUM(BlueprintType)
enum class ESlateParentWindowSearchMethod : uint8 {
    ActiveWindow,
    MainWindow,
};

