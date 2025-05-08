#include "RecastNavMesh.h"
#include "Templates/SubclassOf.h"

ARecastNavMesh::ARecastNavMesh(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bForceRebuildOnLoad = true;
    this->bDrawTriangleEdges = false;
    this->bDrawPolyEdges = false;
    this->bDrawFilledPolys = true;
    this->bDrawNavMeshEdges = true;
    this->bDrawTileBounds = false;
    this->bDrawPathCollidingGeometry = false;
    this->bDrawTileLabels = false;
    this->bDrawPolygonLabels = false;
    this->bDrawDefaultPolygonCost = false;
    this->bDrawLabelsOnPathNodes = false;
    this->bDrawNavLinks = true;
    this->bDrawFailedNavLinks = false;
    this->bDrawClusters = false;
    this->bDrawOctree = false;
    this->bDrawOctreeDetails = true;
    this->bDrawMarkedForbiddenPolys = false;
    this->bDistinctlyDrawTilesBeingBuilt = true;
    this->bDrawNavMesh = true;
    this->DrawOffset = 10.00f;
    this->bFixedTilePoolSize = false;
    this->TilePoolSize = 1024;
    this->TileSizeUU = 1000.00f;
    this->CellSize = 19.00f;
    this->CellHeight = 10.00f;
    this->AgentRadius = 34.00f;
    this->AgentHeight = 144.00f;
    this->AgentMaxHeight = 160.00f;
    this->AgentMaxSlope = 44.00f;
    this->AgentMaxStepHeight = 35.00f;
    this->MinRegionArea = 0.00f;
    this->MergeRegionSize = 400.00f;
    this->MaxSimplificationError = 1.30f;
    this->MaxSimultaneousTileGenerationJobsCount = 1024;
    this->TileNumberHardLimit = 1048576;
    this->PolyRefTileBits = 20;
    this->PolyRefNavPolyBits = 32;
    this->PolyRefSaltBits = 12;
    this->DefaultDrawDistance = 5000.00f;
    this->DefaultMaxSearchNodes = 2048.00f;
    this->DefaultMaxHierarchicalSearchNodes = 2048.00f;
    this->RegionPartitioning = ERecastPartitioning::ChunkyMonotone;
    this->LayerPartitioning = ERecastPartitioning::ChunkyMonotone;
    this->RegionChunkSplits = 2;
    this->LayerChunkSplits = 2;
    this->bSortNavigationAreasByCost = false;
    this->bPerformVoxelFiltering = true;
    this->bMarkLowHeightAreas = false;
    this->bFilterLowSpanSequences = false;
    this->bFilterLowSpanFromTileCache = false;
    this->bDoFullyAsyncNavDataGathering = false;
    this->bUseBetterOffsetsFromCorners = true;
    this->bStoreEmptyTileLayers = false;
    this->bUseVirtualFilters = true;
    this->bAllowNavLinkAsPathEnd = false;
    this->bUseVoxelCache = false;
    this->TileSetUpdateInterval = 1.00f;
    this->HeuristicScale = 1.00f;
    this->VerticalDeviationFromGroundCompensation = 0.00f;
}

bool ARecastNavMesh::K2_ReplaceAreaInTileBounds(FBox Bounds, TSubclassOf<UNavArea> OldArea, TSubclassOf<UNavArea> NewArea, bool ReplaceLinks) {
    return false;
}


