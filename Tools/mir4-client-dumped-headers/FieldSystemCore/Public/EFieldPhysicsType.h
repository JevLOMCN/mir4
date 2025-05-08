#pragma once
#include "CoreMinimal.h"
#include "EFieldPhysicsType.generated.h"

UENUM(BlueprintType)
enum EFieldPhysicsType {
    Field_None,
    Field_DynamicState,
    Field_LinearForce,
    Field_ExternalClusterStrain,
    Field_Kill,
    Field_LinearVelocity,
    Field_AngularVelociy,
    Field_AngularTorque,
    Field_InternalClusterStrain,
    Field_DisableThreshold,
    Field_SleepingThreshold,
    Field_PositionStatic,
    Field_PositionAnimated,
    Field_PositionTarget,
    Field_DynamicConstraint,
    Field_CollisionGroup,
    Field_ActivateDisabled,
    Field_PhysicsType_Max UMETA(Hidden),
};

