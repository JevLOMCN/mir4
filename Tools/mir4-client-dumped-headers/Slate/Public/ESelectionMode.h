#pragma once
#include "CoreMinimal.h"
#include "ESelectionMode.generated.h"

UENUM(BlueprintType)
namespace ESelectionMode {
    enum Type {
        None,
        Single,
        SingleToggle,
        Multi,
    };
}

