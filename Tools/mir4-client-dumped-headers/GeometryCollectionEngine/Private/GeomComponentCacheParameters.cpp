#include "GeomComponentCacheParameters.h"

FGeomComponentCacheParameters::FGeomComponentCacheParameters() {
    this->CacheMode = EGeometryCollectionCacheType::None;
    this->TargetCache = NULL;
    this->ReverseCacheBeginTime = 0.00f;
    this->SaveCollisionData = false;
    this->DoGenerateCollisionData = false;
    this->CollisionDataSizeMax = 0;
    this->DoCollisionDataSpatialHash = false;
    this->CollisionDataSpatialHashRadius = 0.00f;
    this->MaxCollisionPerCell = 0;
    this->SaveBreakingData = false;
    this->DoGenerateBreakingData = false;
    this->BreakingDataSizeMax = 0;
    this->DoBreakingDataSpatialHash = false;
    this->BreakingDataSpatialHashRadius = 0.00f;
    this->MaxBreakingPerCell = 0;
    this->SaveTrailingData = false;
    this->DoGenerateTrailingData = false;
    this->TrailingDataSizeMax = 0;
    this->TrailingMinSpeedThreshold = 0.00f;
    this->TrailingMinVolumeThreshold = 0.00f;
}

