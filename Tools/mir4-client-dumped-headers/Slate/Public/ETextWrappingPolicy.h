#pragma once
#include "CoreMinimal.h"
#include "ETextWrappingPolicy.generated.h"

UENUM(BlueprintType)
enum class ETextWrappingPolicy : uint8 {
    DefaultWrapping,
    AllowPerCharacterWrapping,
};

