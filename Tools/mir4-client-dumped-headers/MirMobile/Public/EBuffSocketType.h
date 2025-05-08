#pragma once
#include "CoreMinimal.h"
#include "EBuffSocketType.generated.h"

UENUM()
enum class EBuffSocketType : int32 {
    NONE,
    Root,
    Buff_Mid,
    Buff_Top,
};

