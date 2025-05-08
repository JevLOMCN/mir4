#include "MM_PawnMovementComponent.h"

UMM_PawnMovementComponent::UMM_PawnMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OwnerPawn = NULL;
    this->MaxWalkSpeed = 750.00f;
    this->MaxAcceleration = 2048.00f;
    this->bScalePushForceToVelocity = true;
    this->InitialPushForceFactor = 500.00f;
    this->PushForceFactor = 750000.00f;
    this->Deceleration = 2048.00f;
    this->TurningBoost = 15.00f;
    this->PerchRadiusThreshold = 0.00f;
    this->WalkableFloorAngle = 44.77f;
    this->WalkableFloorZ = 0.71f;
    this->GravityScale = 1.00f;
    this->MaxStepHeight = 45.00f;
    this->bUseFlatBaseForFloorChecks = false;
    this->m_bNeedCheckMonsterUp = true;
    this->m_bMonsterUp = false;
    this->m_bNeedBaseUpdate = false;
    this->bHasRequestedVelocity = true;
    this->bMaintainHorizontalGroundVelocity = true;
    this->GroundMovementMode = MOVE_Walking;
    this->m_MovementMode = MOVE_None;
    this->DefaultLandMovementMode = MOVE_Walking;
    this->PhysSurfaceState = SurfaceType_Default;
}

void UMM_PawnMovementComponent::SetMovementMode(TEnumAsByte<EMovementMode> NewMovementMode, uint8 NewCustomMode) {
}

TEnumAsByte<EMovementMode> UMM_PawnMovementComponent::GetMovementMode() {
    return MOVE_None;
}


