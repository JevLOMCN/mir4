#include "AnimNode_AnimDynamics.h"

FAnimNode_AnimDynamics::FAnimNode_AnimDynamics() {
    this->LinearDampingOverride = 0.00f;
    this->AngularDampingOverride = 0.00f;
    this->GravityScale = 0.00f;
    this->LinearSpringConstant = 0.00f;
    this->AngularSpringConstant = 0.00f;
    this->WindScale = 0.00f;
    this->AngularBiasOverride = 0.00f;
    this->NumSolverIterationsPreUpdate = 0;
    this->NumSolverIterationsPostUpdate = 0;
    this->SphereCollisionRadius = 0.00f;
    this->CollisionType = AnimPhysCollisionType::CoM;
    this->SimulationSpace = AnimPhysSimSpaceType::Component;
    this->bUseSphericalLimits = false;
    this->bUsePlanarLimit = false;
    this->bDoUpdate = false;
    this->bDoEval = false;
    this->bOverrideLinearDamping = false;
    this->bOverrideAngularBias = false;
    this->bOverrideAngularDamping = false;
    this->bEnableWind = false;
    this->bUseGravityOverride = false;
    this->bLinearSpring = false;
    this->bAngularSpring = false;
    this->bChain = false;
}

