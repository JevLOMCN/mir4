#pragma once
#include "CoreMinimal.h"
#include "TARGET_TYPE.generated.h"

UENUM(BlueprintType)
enum class TARGET_TYPE : uint8 {
    ALL,
    Enemy,
    Myself,
    Friend,
    FriendAll,
};

