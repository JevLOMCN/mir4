#include "MM_GhostTrailManager.h"

AMM_GhostTrailManager::AMM_GhostTrailManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ScaleGhost = false;
    this->ScaleCurve = NULL;
    this->Active = false;
    this->GhostLifetime = 0.00f;
    this->GhostSpawnDelay = 0.00f;
    this->VelocityDepending = false;
    this->LastInvisible = false;
    this->VelocityThreshold = 0.00f;
    this->GhostMaxCount = 0;
    this->GhostMaterial = NULL;
    this->GhostSpawnTimer = 0.00f;
    this->GhostCount = 0;
}


