#include "AnimNode_RigidBody.h"

FAnimNode_RigidBody::FAnimNode_RigidBody() {
    this->OverridePhysicsAsset = NULL;
    this->CachedBoundsScale = 0.00f;
    this->OverlapChannel = ECC_WorldStatic;
    this->SimulationSpace = ESimulationSpace::ComponentSpace;
    this->bForceDisableCollisionBetweenConstraintBodies = false;
    this->bEnableWorldGeometry = false;
    this->bOverrideWorldGravity = false;
    this->bTransferBoneVelocities = false;
    this->bFreezeIncomingPoseOnStart = false;
    this->bClampLinearTranslationLimitToRefPose = false;
}

