#pragma once
#include "CoreMinimal.h"
#include "EGateFactionType.generated.h"

UENUM()
enum class EGateFactionType : int32 {
    None,
    DefenseGate,
    OffenseGate,
};

