#include "MiniMapNaviDataExporter.h"

AMiniMapNaviDataExporter::AMiniMapNaviDataExporter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

FString AMiniMapNaviDataExporter::GetLevelName() {
    return TEXT("");
}

void AMiniMapNaviDataExporter::ExportJsonData(FVector StartPoint, int32 TileSize, int32 TileLineCount, TArray<bool> NaviTileArray) {
}


