#pragma once
#include "CoreMinimal.h"
#include "EMeetingViewGrade.generated.h"

UENUM(BlueprintType)
enum class EMeetingViewGrade : uint8 {
    NONE,
    GRADE2,
    GRADE3,
    GRADE4,
    GRADE5,
    ALL,
};

