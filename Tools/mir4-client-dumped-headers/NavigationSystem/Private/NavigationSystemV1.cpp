#include "NavigationSystemV1.h"
#include "Templates/SubclassOf.h"

UNavigationSystemV1::UNavigationSystemV1() {
    this->MainNavData = NULL;
    this->AbstractNavData = NULL;
    this->bAutoCreateNavigationData = true;
    this->bSpawnNavDataInNavBoundsLevel = false;
    this->bAllowClientSideNavigation = false;
    this->bShouldDiscardSubLevelNavData = true;
    this->bTickWhilePaused = false;
    this->bSupportRebuilding = false;
    this->bInitialBuildingLocked = false;
    this->bSkipAgentHeightCheckWhenPickingNavData = false;
    this->DataGatheringMode = ENavDataGatheringModeConfig::Instant;
    this->bGenerateNavigationOnlyAroundNavigationInvokers = false;
    this->ActiveTilesUpdateInterval = 1.00f;
    this->bUpdateNavModifierVolumeOnLoad = false;
    this->OperationMode = FNavigationSystemRunMode::InvalidMode;
    this->DirtyAreasUpdateFreq = 60.00f;
}

void UNavigationSystemV1::UnregisterNavigationInvoker(AActor* Invoker) {
}

void UNavigationSystemV1::SimpleMoveToLocation(AController* Controller, const FVector& Goal) {
}

void UNavigationSystemV1::SimpleMoveToActor(AController* Controller, const AActor* Goal) {
}

void UNavigationSystemV1::SetMaxSimultaneousTileGenerationJobsCount(int32 MaxNumberOfJobs) {
}

void UNavigationSystemV1::SetGeometryGatheringMode(ENavDataGatheringModeConfig NewMode) {
}

void UNavigationSystemV1::ResetMaxSimultaneousTileGenerationJobsCount() {
}

void UNavigationSystemV1::RegisterNavigationInvoker(AActor* Invoker, float TileGenerationRadius, float TileRemovalRadius) {
}

FVector UNavigationSystemV1::ProjectPointToNavigation(UObject* WorldContextObject, const FVector& Point, ANavigationData* NavData, TSubclassOf<UNavigationQueryFilter> FilterClass, const FVector QueryExtent) {
    return FVector{};
}

void UNavigationSystemV1::OnNavigationBoundsUpdated(ANavMeshBoundsVolume* NavVolume) {
}

bool UNavigationSystemV1::NavigationRaycast(UObject* WorldContextObject, const FVector& RayStart, const FVector& RayEnd, FVector& HitLocation, TSubclassOf<UNavigationQueryFilter> FilterClass, AController* Querier) {
    return false;
}

bool UNavigationSystemV1::K2_ReplaceAreaInOctreeData(const UObject* Object, TSubclassOf<UNavArea> OldArea, TSubclassOf<UNavArea> NewArea) {
    return false;
}

bool UNavigationSystemV1::K2_ProjectPointToNavigation(UObject* WorldContextObject, const FVector& Point, FVector& ProjectedLocation, ANavigationData* NavData, TSubclassOf<UNavigationQueryFilter> FilterClass, const FVector QueryExtent) {
    return false;
}

bool UNavigationSystemV1::K2_GetRandomReachablePointInRadius(UObject* WorldContextObject, const FVector& Origin, FVector& RandomLocation, float Radius, ANavigationData* NavData, TSubclassOf<UNavigationQueryFilter> FilterClass) {
    return false;
}

bool UNavigationSystemV1::K2_GetRandomPointInNavigableRadius(UObject* WorldContextObject, const FVector& Origin, FVector& RandomLocation, float Radius, ANavigationData* NavData, TSubclassOf<UNavigationQueryFilter> FilterClass) {
    return false;
}

bool UNavigationSystemV1::K2_GetRandomLocationInNavigableRadius(UObject* WorldContextObject, const FVector& Origin, FVector& RandomLocation, float Radius, ANavigationData* NavData, TSubclassOf<UNavigationQueryFilter> FilterClass) {
    return false;
}

bool UNavigationSystemV1::IsNavigationBeingBuiltOrLocked(UObject* WorldContextObject) {
    return false;
}

bool UNavigationSystemV1::IsNavigationBeingBuilt(UObject* WorldContextObject) {
    return false;
}

FVector UNavigationSystemV1::GetRandomReachablePointInRadius(UObject* WorldContextObject, const FVector& Origin, float Radius, ANavigationData* NavData, TSubclassOf<UNavigationQueryFilter> FilterClass) {
    return FVector{};
}

FVector UNavigationSystemV1::GetRandomPointInNavigableRadius(UObject* WorldContextObject, const FVector& Origin, float Radius, ANavigationData* NavData, TSubclassOf<UNavigationQueryFilter> FilterClass) {
    return FVector{};
}

TEnumAsByte<ENavigationQueryResult::Type> UNavigationSystemV1::GetPathLength(UObject* WorldContextObject, const FVector& PathStart, const FVector& PathEnd, float& PathLength, ANavigationData* NavData, TSubclassOf<UNavigationQueryFilter> FilterClass) {
    return ENavigationQueryResult::Invalid;
}

TEnumAsByte<ENavigationQueryResult::Type> UNavigationSystemV1::GetPathCost(UObject* WorldContextObject, const FVector& PathStart, const FVector& PathEnd, float& PathCost, ANavigationData* NavData, TSubclassOf<UNavigationQueryFilter> FilterClass) {
    return ENavigationQueryResult::Invalid;
}

UNavigationSystemV1* UNavigationSystemV1::GetNavigationSystem(UObject* WorldContextObject) {
    return NULL;
}

UNavigationPath* UNavigationSystemV1::FindPathToLocationSynchronously(UObject* WorldContextObject, const FVector& PathStart, const FVector& PathEnd, AActor* PathfindingContext, TSubclassOf<UNavigationQueryFilter> FilterClass) {
    return NULL;
}

UNavigationPath* UNavigationSystemV1::FindPathToActorSynchronously(UObject* WorldContextObject, const FVector& PathStart, AActor* GoalActor, float TetherDistance, AActor* PathfindingContext, TSubclassOf<UNavigationQueryFilter> FilterClass) {
    return NULL;
}


