#pragma once
#include "CoreMinimal.h"
#include "EButtonPressMethod.generated.h"

UENUM(BlueprintType)
namespace EButtonPressMethod {
    enum Type {
        DownAndUp,
        ButtonPress,
        ButtonRelease,
    };
}

