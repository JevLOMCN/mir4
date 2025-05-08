#pragma once
#include "CoreMinimal.h"
#include "EVirtualKeyboardType.generated.h"

UENUM(BlueprintType)
namespace EVirtualKeyboardType {
    enum Type {
        Default,
        Number,
        Web,
        Email,
        Password,
        AlphaNumeric,
    };
}

