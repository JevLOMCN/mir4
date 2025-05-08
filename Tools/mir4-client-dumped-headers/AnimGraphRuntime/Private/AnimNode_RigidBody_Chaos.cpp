#include "AnimNode_RigidBody_Chaos.h"

FAnimNode_RigidBody_Chaos::FAnimNode_RigidBody_Chaos() {
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

