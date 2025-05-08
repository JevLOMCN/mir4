#pragma once
#include "CoreMinimal.h"
#include "EImplicitTypeEnum.generated.h"

UENUM(BlueprintType)
enum class EImplicitTypeEnum : uint8 {
    Chaos_Implicit_Box,
    Chaos_Implicit_Sphere,
    Chaos_Implicit_Capsule,
    Chaos_Implicit_LevelSet,
    Chaos_Implicit_None,
};

