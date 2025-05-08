#include "RecastNavMeshGenerationProperties.h"

FRecastNavMeshGenerationProperties::FRecastNavMeshGenerationProperties() {
    this->TilePoolSize = 0;
    this->TileSizeUU = 0.00f;
    this->CellSize = 0.00f;
    this->CellHeight = 0.00f;
    this->AgentRadius = 0.00f;
    this->AgentHeight = 0.00f;
    this->AgentMaxSlope = 0.00f;
    this->AgentMaxStepHeight = 0.00f;
    this->MinRegionArea = 0.00f;
    this->MergeRegionSize = 0.00f;
    this->MaxSimplificationError = 0.00f;
    this->TileNumberHardLimit = 0;
    this->RegionPartitioning = ERecastPartitioning::Monotone;
    this->LayerPartitioning = ERecastPartitioning::Monotone;
    this->RegionChunkSplits = 0;
    this->LayerChunkSplits = 0;
    this->bSortNavigationAreasByCost = false;
    this->bPerformVoxelFiltering = false;
    this->bMarkLowHeightAreas = false;
    this->bFilterLowSpanSequences = false;
    this->bFilterLowSpanFromTileCache = false;
    this->bFixedTilePoolSize = false;
}

