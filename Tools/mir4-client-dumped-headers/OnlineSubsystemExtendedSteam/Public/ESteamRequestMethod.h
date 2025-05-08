#pragma once
#include "CoreMinimal.h"
#include "ESteamRequestMethod.generated.h"

UENUM(BlueprintType)
enum class ESteamRequestMethod : uint8 {
    GET,
    POST,
};

