#pragma once
#include "CoreMinimal.h"
#include "EMeshElementAttributeType.generated.h"

UENUM(BlueprintType)
enum class EMeshElementAttributeType : uint8 {
    None,
    FVector4,
    FVector,
    FVector2D,
    Float,
    Int,
    Bool,
    FName,
};

