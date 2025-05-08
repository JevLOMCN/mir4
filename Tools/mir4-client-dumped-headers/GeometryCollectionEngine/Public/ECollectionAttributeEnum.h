#pragma once
#include "CoreMinimal.h"
#include "ECollectionAttributeEnum.generated.h"

UENUM(BlueprintType)
enum class ECollectionAttributeEnum : uint8 {
    Chaos_Active,
    Chaos_DynamicState,
    Chaos_CollisionGroup,
};

