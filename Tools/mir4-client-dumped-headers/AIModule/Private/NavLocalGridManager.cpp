#include "NavLocalGridManager.h"

UNavLocalGridManager::UNavLocalGridManager() {
}

bool UNavLocalGridManager::SetLocalNavigationGridDensity(UObject* WorldContextObject, float CellSize) {
    return false;
}

void UNavLocalGridManager::RemoveLocalNavigationGrid(UObject* WorldContextObject, int32 GridId, bool bRebuildGrids) {
}

bool UNavLocalGridManager::FindLocalNavigationGridPath(UObject* WorldContextObject, const FVector& Start, const FVector& End, TArray<FVector>& PathPoints) {
    return false;
}

int32 UNavLocalGridManager::AddLocalNavigationGridForPoints(UObject* WorldContextObject, const TArray<FVector>& Locations, const int32 Radius2D, const float Height, bool bRebuildGrids) {
    return 0;
}

int32 UNavLocalGridManager::AddLocalNavigationGridForPoint(UObject* WorldContextObject, const FVector& Location, const int32 Radius2D, const float Height, bool bRebuildGrids) {
    return 0;
}

int32 UNavLocalGridManager::AddLocalNavigationGridForCapsule(UObject* WorldContextObject, const FVector& Location, float CapsuleRadius, float CapsuleHalfHeight, const int32 Radius2D, const float Height, bool bRebuildGrids) {
    return 0;
}

int32 UNavLocalGridManager::AddLocalNavigationGridForBox(UObject* WorldContextObject, const FVector& Location, FVector Extent, FRotator Rotation, const int32 Radius2D, const float Height, bool bRebuildGrids) {
    return 0;
}


