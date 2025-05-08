#include "CrowdManager.h"

UCrowdManager::UCrowdManager() {
    this->MyNavData = NULL;
    this->AvoidanceConfig.AddDefaulted(4);
    this->MaxAgents = 50;
    this->MaxAgentRadius = 100.00f;
    this->MaxAvoidedAgents = 6;
    this->MaxAvoidedWalls = 8;
    this->NavmeshCheckInterval = 1.00f;
    this->PathOptimizationInterval = 0.50f;
    this->SeparationDirClamp = -1.00f;
    this->PathOffsetRadiusMultiplier = 1.00f;
    this->bResolveCollisions = false;
}


