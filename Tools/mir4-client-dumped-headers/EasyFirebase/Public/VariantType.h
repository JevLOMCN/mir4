#pragma once
#include "CoreMinimal.h"
#include "VariantType.generated.h"

UENUM(BlueprintType)
enum class VariantType : uint8 {
    Null,
    Int64,
    Float,
    Bool,
    String,
    Vector,
    Map,
};

