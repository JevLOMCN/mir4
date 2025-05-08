#pragma once
#include "CoreMinimal.h"
#include "EObjectStateTypeEnum.generated.h"

UENUM(BlueprintType)
enum class EObjectStateTypeEnum : uint8 {
    Chaos_NONE,
    Chaos_Object_Sleeping,
    Chaos_Object_Kinematic,
    Chaos_Object_Static,
    Chaos_Object_Dynamic,
    Chaos_Object_UserDefined = 100,
};

