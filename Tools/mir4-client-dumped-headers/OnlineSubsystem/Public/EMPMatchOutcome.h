#pragma once
#include "CoreMinimal.h"
#include "EMPMatchOutcome.generated.h"

UENUM(BlueprintType)
namespace EMPMatchOutcome {
    enum Type {
        None,
        Quit,
        Won,
        Lost,
        Tied,
        TimeExpired,
        First,
        Second,
        Third,
        Fourth,
    };
}

