#include "GeometryCollection.h"

UGeometryCollection::UGeometryCollection() {
    this->CollisionType = ECollisionTypeEnum::Chaos_Surface_Volumetric;
    this->ImplicitType = EImplicitTypeEnum::Chaos_Implicit_Box;
    this->MinLevelSetResolution = 10;
    this->MaxLevelSetResolution = 10;
    this->MinClusterLevelSetResolution = 50;
    this->MaxClusterLevelSetResolution = 50;
    this->CollisionObjectReductionPercentage = 0.00f;
    this->bMassAsDensity = false;
    this->Mass = 1.00f;
    this->MinimumMassClamp = 0.10f;
    this->CollisionParticlesFraction = 1.00f;
    this->MaximumCollisionParticles = 60;
    this->EnableRemovePiecesOnFracture = false;
    this->BoneSelectedMaterialIndex = 0;
}


