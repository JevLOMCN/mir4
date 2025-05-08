#pragma once
#include "CoreMinimal.h"
#include "ValueSource.generated.h"

UENUM(BlueprintType)
enum class ValueSource : uint8 {
    kValueSourceStaticValue,
    kValueSourceRemoteValue,
    kValueSourceDefaultValue,
};

