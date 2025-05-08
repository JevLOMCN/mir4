#pragma once
#include "CoreMinimal.h"
#include "EPermissionsPrivacy.generated.h"

UENUM(BlueprintType)
enum class EPermissionsPrivacy : uint8 {
    OnlyMe,
    OnlyFriends,
    Everyone,
};

