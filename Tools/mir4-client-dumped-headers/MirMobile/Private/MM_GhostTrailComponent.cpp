#include "MM_GhostTrailComponent.h"

UMM_GhostTrailComponent::UMM_GhostTrailComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ActiveAtStart = false;
    this->GhostSpawnDelay = 0.00f;
    this->GhostLifetime = 0.50f;
    this->GhostAllMeshes = false;
    this->GhostMaterial = NULL;
    this->ScaleOverTime = false;
    this->ScaleCurve = NULL;
    this->GhostMaxCount = 0;
    this->LastIsInvisible = true;
    this->VelocityDepending = false;
    this->VelocityThreshold = 0.00f;
    this->Manager = NULL;
    this->ActiveTrail = false;
}

void UMM_GhostTrailComponent::UpdateInfo() {
}

void UMM_GhostTrailComponent::SetTrailActive(bool IsActive) {
}

void UMM_GhostTrailComponent::SetGhostData(float newDelayTime, float newLifeTime, UMaterialInstance* newMaterialInstance) {
}

bool UMM_GhostTrailComponent::GetTrailActive() {
    return false;
}

void UMM_GhostTrailComponent::DestroyGhostTrailManager() {
}


