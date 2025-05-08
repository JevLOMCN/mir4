#pragma once
#include "CoreMinimal.h"
#include "EItemMakeAgencyType.generated.h"

UENUM(BlueprintType)
enum class EItemMakeAgencyType : uint8 {
    NO_LIMIT,
    SERVER_LIMIT,
    CHARACTER_LIMIT,
};

