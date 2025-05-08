#include "ClothConfigNv.h"

UClothConfigNv::UClothConfigNv() {
    this->WindMethod = EClothingWindMethod::Legacy;
    this->SelfCollisionRadius = 0.00f;
    this->SelfCollisionStiffness = 0.00f;
    this->SelfCollisionCullScale = 1.00f;
    this->Friction = 0.10f;
    this->WindDragCoefficient = 0.00f;
    this->WindLiftCoefficient = 0.00f;
    this->SolverFrequency = 120.00f;
    this->StiffnessFrequency = 100.00f;
    this->GravityScale = 1.00f;
    this->bUseGravityOverride = false;
    this->TetherStiffness = 1.00f;
    this->TetherLimit = 1.00f;
    this->CollisionThickness = 1.00f;
    this->AnimDriveSpringStiffness = 1.00f;
    this->AnimDriveDamperStiffness = 1.00f;
}


