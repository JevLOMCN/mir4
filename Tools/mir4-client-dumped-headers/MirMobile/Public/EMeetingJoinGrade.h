#pragma once
#include "CoreMinimal.h"
#include "EMeetingJoinGrade.generated.h"

UENUM(BlueprintType)
enum class EMeetingJoinGrade : uint8 {
    NONE,
    GRADE2,
    GRADE3,
    GRADE4,
    GRADE5,
    ALL,
};

