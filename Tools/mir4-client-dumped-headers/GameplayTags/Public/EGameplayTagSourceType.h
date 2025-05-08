#pragma once
#include "CoreMinimal.h"
#include "EGameplayTagSourceType.generated.h"

UENUM(BlueprintType)
enum class EGameplayTagSourceType : uint8 {
    Native,
    DefaultTagList,
    TagList,
    RestrictedTagList,
    DataTable,
    Invalid,
};

