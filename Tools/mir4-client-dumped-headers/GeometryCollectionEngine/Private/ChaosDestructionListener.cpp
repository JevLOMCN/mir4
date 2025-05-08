#include "ChaosDestructionListener.h"

UChaosDestructionListener::UChaosDestructionListener(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->bUseAttachParentBound = true;
    this->bIsCollisionEventListeningEnabled = false;
    this->bIsBreakingEventListeningEnabled = false;
    this->bIsTrailingEventListeningEnabled = false;
}

void UChaosDestructionListener::SortTrailingEvents(TArray<FChaosTrailingEventData>& TrailingEvents, EChaosTrailingSortMethod SortMethod) {
}

void UChaosDestructionListener::SortCollisionEvents(TArray<FChaosCollisionEventData>& CollisionEvents, EChaosCollisionSortMethod SortMethod) {
}

void UChaosDestructionListener::SortBreakingEvents(TArray<FChaosBreakingEventData>& BreakingEvents, EChaosBreakingSortMethod SortMethod) {
}

void UChaosDestructionListener::SetTrailingEventRequestSettings(const FChaosTrailingEventRequestSettings& InSettings) {
}

void UChaosDestructionListener::SetTrailingEventEnabled(bool bIsEnabled) {
}

void UChaosDestructionListener::SetCollisionEventRequestSettings(const FChaosCollisionEventRequestSettings& InSettings) {
}

void UChaosDestructionListener::SetCollisionEventEnabled(bool bIsEnabled) {
}

void UChaosDestructionListener::SetBreakingEventRequestSettings(const FChaosBreakingEventRequestSettings& InSettings) {
}

void UChaosDestructionListener::SetBreakingEventEnabled(bool bIsEnabled) {
}

void UChaosDestructionListener::RemoveGeometryCollectionActor(AGeometryCollectionActor* GeometryCollectionActor) {
}

void UChaosDestructionListener::RemoveChaosSolverActor(AChaosSolverActor* ChaosSolverActor) {
}

bool UChaosDestructionListener::IsEventListening() const {
    return false;
}

void UChaosDestructionListener::AddGeometryCollectionActor(AGeometryCollectionActor* GeometryCollectionActor) {
}

void UChaosDestructionListener::AddChaosSolverActor(AChaosSolverActor* ChaosSolverActor) {
}


