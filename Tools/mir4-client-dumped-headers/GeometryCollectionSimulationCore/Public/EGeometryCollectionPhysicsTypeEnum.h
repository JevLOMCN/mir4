#pragma once
#include "CoreMinimal.h"
#include "EGeometryCollectionPhysicsTypeEnum.generated.h"

UENUM(BlueprintType)
enum class EGeometryCollectionPhysicsTypeEnum : uint8 {
    Chaos_AngularVelocity,
    Chaos_DynamicState,
    Chaos_LinearVelocity,
    Chaos_InitialAngularVelocity,
    Chaos_InitialLinearVelocity,
    Chaos_CollisionGroup,
    Chaos_LinearForce,
    Chaos_AngularTorque,
};

