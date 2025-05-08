#include "GeometryCollectionSizeSpecificData.h"

FGeometryCollectionSizeSpecificData::FGeometryCollectionSizeSpecificData() {
    this->MaxSize = 0.00f;
    this->CollisionType = ECollisionTypeEnum::Chaos_Volumetric;
    this->ImplicitType = EImplicitTypeEnum::Chaos_Implicit_Box;
    this->MinLevelSetResolution = 0;
    this->MaxLevelSetResolution = 0;
    this->MinClusterLevelSetResolution = 0;
    this->MaxClusterLevelSetResolution = 0;
    this->CollisionObjectReductionPercentage = 0;
    this->CollisionParticlesFraction = 0.00f;
    this->MaximumCollisionParticles = 0;
}

