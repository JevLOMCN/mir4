#pragma once
#include "CoreMinimal.h"
#include "ENavigationGenesis.generated.h"

UENUM(BlueprintType)
enum class ENavigationGenesis : uint8 {
    Keyboard,
    Controller,
    User,
};

